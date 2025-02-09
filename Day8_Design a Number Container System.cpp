class NumberContainers {
    public:
    unordered_map<int , int>mp1; // store index with the number
    unordered_map<int , set<int>>mp2; // store number with all its index
        NumberContainers() {
            
        }
        
        void change(int index, int number) {
            // if index is already present -->  element is already present at that idx --> change --> check in map 1
            if(mp1.count(index)){ // O(1) in map
                // step 1 : find the number at this idx
                int prevEle = mp1[index];
                // step 2 : go to this number in mp2 and erase the given index
                mp2[prevEle].erase(index); // O(logN)
                if(mp2[prevEle].empty()){ // if the index of the prevEle == 0 , then erase the ele also , since its of no use
                    mp2.erase(prevEle); // O(logN)
                } 
            }
    
            // if index is present or not 
            // step 1 -> push the index with the num in the mp1
            mp1[index] = number;
            // step 2  -> insert the number with its index in the mp2 
            mp2[number].insert(index); // O(logN)
        }
        
        int find(int number) {
            // if the number exists in the map2
            if(mp2.count(number)){ // O(1) --> since checking the number in the map not in the set
                return *mp2[number].begin(); // O(1)
            }
            // if not find then return -1
            return -1;
        }
    };
    
    /**
     * Your NumberContainers object will be instantiated and called as such:
     * NumberContainers* obj = new NumberContainers();
     * obj->change(index,number);
     * int param_2 = obj->find(number);
     */
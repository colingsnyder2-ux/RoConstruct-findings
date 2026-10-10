// from server: 60% by tester
struct RakPeer {
    int count;
    void* data;
    int lookup(unsigned short key, bool* found);
};

int RakPeer::lookup(unsigned short key, bool* found) {
    if (count == 0) {
        *found = false;
        return 0;
    }
    int last = count - 1;
    int first = 0;
    int mid;
    while (first <= last) {
        mid = (first + last) / 2;
        void* entry = ((void**)data)[mid];
        unsigned short entryKey = *(unsigned short*)(*(char**)((char*)entry + 8) + 0x1c);
        if (key < entryKey) {
            last = mid - 1;
        } else if (key == entryKey) {
            *found = true;
            return mid;
        } else {
            first = mid + 1;
        }
    }
    *found = false;
    return first;
}

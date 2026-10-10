// from server: 60% by colin
struct RakPeer {
    int field0;
    int field4;
    int lookup(int key, bool* found);
};

int RakPeer::lookup(int key, bool* found)
{
    if (field4 == 0) {
        *found = false;
        return 0;
    }

    int* base = (int*)field0;
    int count = field4;
    int lo = 0;
    int hi = count - 1;
    int mid = count / 2;

    while (lo <= hi) {
        int* entry = (int*)(base[mid]);
        int entryKey = *(int*)((char*)entry + 0x20);
        if (key < entryKey) {
            hi = mid - 1;
        } else if (key == entryKey) {
            *found = true;
            return mid;
        } else {
            lo = mid + 1;
        }
        mid = lo + (hi - lo) / 2;
    }

    *found = false;
    return lo;
}

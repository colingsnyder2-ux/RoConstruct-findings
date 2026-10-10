// from server: 66% by colin
struct RakPeer {
    char pad0[4];
    int field_4;
    char pad1[0x22c - 0x8];
    char* field_22c;
    int countActivePeers();
    int lookupPeer(void* key, bool* found);
};

int RakPeer::lookupPeer(void* key, bool* found)
{
    if (field_4 == 0) {
        *found = false;
        return 0;
    }

    int n = field_4;
    char* base = field_22c;
    unsigned int k = *(unsigned int*)key;
    int lo = 0;
    int hi = n - 1;
    int mid = (n - 1) / 2;

    while (lo <= hi) {
        unsigned int v = *(unsigned int*)(base + mid * 8);
        if (k < v) {
            hi = mid - 1;
        } else if (k == v) {
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

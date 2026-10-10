// from server: 57% by colin
struct Exposer {
    int find(int key, bool* found);
};

int Exposer::find(int key, bool* found) {
    if (*(int*)((char*)this + 4) == 0) {
        *found = false;
        return 0;
    }
    int count = *(int*)((char*)this + 4);
    int* base = *(int**)this;
    int keyv = key;
    int lo = 0;
    int hi = count - 1;
    int mid = hi / 2;
    while (lo <= hi) {
        int val = *(int*)((char*)base + mid * 8);
        if (keyv < val) {
            hi = mid - 1;
        } else if (keyv == val) {
            *found = true;
            return mid;
        } else {
            lo = mid + 1;
        }
        mid = (lo + hi) / 2;
    }
    *found = false;
    return lo;
}

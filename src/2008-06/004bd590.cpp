// from server: 50% by atomic.potato
struct ProfiledRakPeer {
    char pad0[0x2a8];
    unsigned int count;
    void** items;
    void remove(void* p);
};

void ProfiledRakPeer::remove(void* p) {
    if (p == 0) return;
    unsigned int n = count;
    if (n == 0) return;
    void** arr = items;
    unsigned int i = 0;
    while (i < n) {
        if (arr[i] == p) break;
        ++i;
    }
    if (i == n) return;
    void* obj = arr[i];
    void** vt = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt[2];
    fn(obj, this);
    void** a = items;
    unsigned int c = count;
    a[i] = a[c - 1];
    --count;
}

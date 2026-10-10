// from server: 60% by colin
struct RakPeer {
    char pad[0x2a8];
    void** items;
    unsigned int count;
    void removePeer(void* peer);
};

void RakPeer::removePeer(void* peer) {
    if (peer != 0) return;
    unsigned int i = 0;
    if (count == 0) return;
    void** p = items;
    while (*p != peer) {
        i++;
        p++;
        if (i >= count) return;
    }
    if (i == 0xffffffff) return;
    void* obj = items[i];
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[2];
    fn(obj, this);
    items[i] = items[count - 1];
    count--;
}

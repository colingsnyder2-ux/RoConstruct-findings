// from server: 7% by 41k
struct RakPeer {
    void* ptr;
    unsigned int pad;
    unsigned int count;
    void clear();
};

extern "C" void __cdecl free_mem(void*);

void RakPeer::clear() {
    if (count > 0) {
        free_mem(ptr);
    }
}

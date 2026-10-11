// from server: 87% by atomic.potato
extern "C" void __cdecl free(void*);

struct AtomicInt32 {
    void increment();
};

struct ProfiledRakPeer {
    char pad0[0x284];
    AtomicInt32 refcount;
    char pad1[0x14];
    int* array;
    unsigned int count;
    unsigned int capacity;
    void destructor();
};

void ProfiledRakPeer::destructor() {
    refcount.increment();
    for (unsigned int i = 0; i < count; ++i) {
        free((void*)array[i]);
        free((void*)array[i]);
    }
    if (capacity) {
        if (capacity > 0x200) {
            free(array);
            capacity = 0;
            array = 0;
        }
        count = 0;
    }
    refcount.increment();
}

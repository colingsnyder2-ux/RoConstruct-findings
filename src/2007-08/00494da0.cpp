// from server: 25% by colin
struct SignalDesc {
    void construct(int, void*);
};

struct VPlayers {
    void* createSignalDesc(int, void*);
};

void* __cdecl operator_new(unsigned int);

void* VPlayers::createSignalDesc(int a, void* b) {
    SignalDesc* p = (SignalDesc*)operator_new(0x28);
    if (p) {
        p->construct(a, b);
    }
    return p;
}

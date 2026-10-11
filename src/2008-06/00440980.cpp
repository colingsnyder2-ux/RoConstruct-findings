// from server: 25% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct ContentItem {
    void construct(void* p, int a, int b);
};

struct VSoundId {
    void* field0;
    void __cdecl init(int a, int b);
};

void VSoundId::init(int a, int b) {
    void* mem = malloc(0x1c8);
    if (mem) {
        ContentItem* ci = (ContentItem*)mem;
        ci->construct(mem, a, b);
    }
    field0 = mem;
}

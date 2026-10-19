// from server: 94% by TrollStein
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct TextureProxy {
    void* field0;
    void* field4;
};

void* __cdecl createTextureProxy(int a, int b)
{
    if (b == 2) {
        type_info* ti = (type_info*)0x8971b0;
        if (*ti == *(type_info*)a) {
            return (void*)a;
        }
        return 0;
    }
    if (b == 0) {
        void* p = operator_new(8);
        if (p) {
            *(void**)p = *(void**)a;
            *(void**)((char*)p + 4) = *(void**)(a + 4);
        }
        return p;
    }
    operator_delete((void*)a);
    return 0;
}

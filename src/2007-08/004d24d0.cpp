// from server: 91% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_62FC62(void* p);

struct RBX_TextureProxy {
    void* field0;
    void* field4;
    void* field8;
};

void* __cdecl TextureProxy_dispatch(int unused, int mode, const RBX_TextureProxy* src)
{
    if (mode == 2) {
        type_info* ti = (type_info*)0x8972f8;
        bool result = ti->operator==(*(const type_info*)src);
        return result ? (void*)src : 0;
    }
    if (mode == 0) {
        void* mem = sub_62FEF6(0xc);
        if (mem) {
            *(void**)mem = src->field0;
            *(void**)((char*)mem + 4) = src->field4;
            *(void**)((char*)mem + 8) = src->field8;
        }
        return mem;
    }
    sub_62FC62((void*)src);
    return 0;
}

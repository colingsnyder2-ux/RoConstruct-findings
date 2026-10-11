// from server: 61% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VNode {
    void* field0;
    void* field4;
};

void __cdecl assign(int mode, void* dst, void* src)
{
    if (mode == 3) {
        *(void**)dst = (void*)0x94c510;
        return;
    }
    if (mode == 0) {
        if (dst == 0)
            return;
        *(void**)dst = *(void**)src;
        *(void**)((char*)dst + 4) = *(void**)((char*)src + 4);
        return;
    }
    if (mode == 1)
        return;
    {
        void* p = *(void**)src;
        type_info* ti = (type_info*)__RTtypeid(p);
        type_info* other = (type_info*)0x94c510;
        bool eq = ti->operator==(*other);
        *(void**)src = eq ? dst : 0;
    }
}

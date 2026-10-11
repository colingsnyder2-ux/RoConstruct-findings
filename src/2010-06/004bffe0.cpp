// from server: 71% by atomic.potato
struct type_info {
    virtual bool compare(const type_info&) const;
};

struct EventDesc {
    void* vtable;
};

extern type_info g_type_placeholder;
extern type_info g_type_chatoption;

type_info* __cdecl sub_004bffe0(EventDesc* desc)
{
    if (desc == 0)
        return 0;

    type_info* ti;
    if (desc->vtable != 0) {
        void** vt = (void**)desc->vtable;
        typedef type_info* (__thiscall *GetTypeFn)(void*);
        GetTypeFn fn = (GetTypeFn)vt[1];
        ti = fn(desc->vtable);
    } else {
        ti = &g_type_placeholder;
    }

    if (!ti->compare(g_type_chatoption))
        return 0;

    return (type_info*)((char*)desc->vtable + 4);
}

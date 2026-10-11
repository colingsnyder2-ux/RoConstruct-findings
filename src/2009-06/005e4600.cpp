// from server: 72% by atomic.potato
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct sp_counted_impl_p {
    void* px;
};

extern "C" void* __stdcall get_type_info_placeholder();
extern "C" bool __stdcall type_info_compare(const type_info*, const type_info*);

void* __fastcall sub_5e4600(sp_counted_impl_p* p)
{
    if (p == 0)
        return 0;

    void* obj = p->px;
    type_info* ti;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        typedef type_info* (__thiscall *get_ti_t)(void*);
        get_ti_t fn = (get_ti_t)vtbl[1];
        ti = fn(obj);
    } else {
        ti = (type_info*)0x9dc2d4;
    }

    type_info* other = (type_info*)0x9df300;
    if (!(ti->operator==(*other)))
        return 0;

    return (char*)p->px + 4;
}

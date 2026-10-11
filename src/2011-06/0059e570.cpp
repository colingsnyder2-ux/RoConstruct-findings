// from server: 88% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_00c07a44();
extern "C" bool __cdecl sub_00a40a50(void*, const type_info*);

struct EventDesc {
    void* field0;
};

void* func_0059e570(EventDesc* p)
{
    if (p == 0)
        return 0;

    void* obj = p->field0;
    void* v;
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        v = fn(obj);
    } else {
        v = sub_00c07a44();
    }

    if (sub_00a40a50(v, (const type_info*)0x00c37be0))
        return (char*)p->field0 + 4;

    return 0;
}

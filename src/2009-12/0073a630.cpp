// from server: 61% by atomic.potato
struct type_info;

extern "C" bool __stdcall Function_0098B768(type_info*, type_info*);

struct S {
    void* field0;
};

int Function_0073A630(S* p)
{
    if (p == 0)
        return 0;

    void* obj = p->field0;
    type_info* ti;
    if (obj != 0) {
        type_info** vtbl = *(type_info***)obj;
        ti = (type_info*)vtbl[1];
    } else {
        ti = (type_info*)0x00B0030C;
    }

    if (!Function_0098B768(ti, (type_info*)0x00B41FD0))
        return 0;

    return (int)((char*)p->field0 + 4);
}

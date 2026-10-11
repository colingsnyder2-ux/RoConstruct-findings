// from server: 59% by atomic.potato
extern "C" void* __stdcall f_00a40a50(void*, void*);

struct type_info;

struct Vtbl {
    void* pad0;
    void (__stdcall *fn4)(void*);
};

struct Inner {
    Vtbl* vt;
};

struct Outer {
    Inner* m_p;
};

struct S_00666e40 {
};

void* __cdecl f_00666e40(Outer* p)
{
    if (!p)
        return 0;
    Inner* inner = p->m_p;
    void* obj;
    if (inner) {
        Vtbl* vt = inner->vt;
        vt->fn4(inner);
        obj = inner;
    } else {
        obj = (void*)0x00c07a44;
    }
    if (f_00a40a50(obj, (void*)0x00c3d104))
        return (char*)p->m_p + 4;
    return 0;
}

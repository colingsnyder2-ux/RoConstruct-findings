// roc 2012-06 00426840  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00426840
//
// 00426840  8b442404             mov eax, dword ptr [esp + 4]
// 00426844  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 0042684a  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0042684d  8b11                 mov edx, dword ptr [ecx]
// 0042684f  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00426855  ffd0                 call eax
// 00426857  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAGXXZ)

namespace ns_ROCX000002 {
// from server: 100% by atomic.potato
struct S {
    void __stdcall f();
};

void __stdcall S::f()
{
    struct T {
        void *vtable;
    };

    T *p = *(T **)((char *)this - 0xcc);
    T *q = *(T **)((char *)p + 0x20);
    typedef void (__thiscall *Fn)(T *);
    Fn fn = (Fn)(*(void **)((char *)*(void **)q + 0x1ac));
    fn(q);
}
}
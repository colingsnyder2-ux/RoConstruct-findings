// roc 2009-06 00418d90  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418d90
//
// 00418d90  8b442404             mov eax, dword ptr [esp + 4]
// 00418d94  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 00418d9a  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00418d9d  8b11                 mov edx, dword ptr [ecx]
// 00418d9f  8b442408             mov eax, dword ptr [esp + 8]
// 00418da3  8b92b4010000         mov edx, dword ptr [edx + 0x1b4]
// 00418da9  50                   push eax
// 00418daa  ffd2                 call edx
// 00418dac  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEHPAX0@Z)

namespace ns_ROCX000003 {
// from server: 100% by atomic.potato
struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    struct V
    {
        void **vtable;
    };

    V *p = *(V **)((char *)a - 204);
    V *q = *(V **)((char *)p + 32);
    return ((int (__thiscall *)(V *, void *))q->vtable[109])(q, b);
}
}

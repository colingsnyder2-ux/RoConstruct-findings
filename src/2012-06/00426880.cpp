// roc 2012-06 00426880  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00426880
//
// 00426880  8b442404             mov eax, dword ptr [esp + 4]
// 00426884  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 0042688a  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0042688d  8b11                 mov edx, dword ptr [ecx]
// 0042688f  8b442408             mov eax, dword ptr [esp + 8]
// 00426893  8b92b4010000         mov edx, dword ptr [edx + 0x1b4]
// 00426899  50                   push eax
// 0042689a  ffd2                 call edx
// 0042689c  c20800               ret 8
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
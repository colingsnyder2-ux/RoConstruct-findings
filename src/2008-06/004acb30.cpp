// from server: 100% by tester
// roc 2008-06 004acb30  unit: RBX::Network::Replicator::ChangePropertyItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acb30
//
// 004acb30  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 004acb33  8b542408             mov edx, dword ptr [esp + 8]
// 004acb37  8b01                 mov eax, dword ptr [ecx]
// 004acb39  8b4008               mov eax, dword ptr [eax + 8]
// 004acb3c  56                   push esi
// 004acb3d  8b742408             mov esi, dword ptr [esp + 8]
// 004acb41  52                   push edx
// 004acb42  56                   push esi
// 004acb43  ffd0                 call eax
// 004acb45  8bc6                 mov eax, esi
// 004acb47  5e                   pop esi
// 004acb48  c20800               ret 8

struct S
{
    int f(int a, int b);
};

int S::f(int a, int b)
{
    struct V
    {
        int **vtable;
    };

    V *p = *(V **)((char *)this + 0x18);
    typedef int (__thiscall *Fn)(V *, int, int);
    Fn fn = (Fn)p->vtable[2];
    fn(p, a, b);
    return a;
}
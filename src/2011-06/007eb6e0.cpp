// from server: 100% by atomic.potato
// roc 2011-06 007eb6e0  unit: RBX::HUMAN::Climbing  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eb6e0
//
// 007eb6e0  8b442408             mov eax, dword ptr [esp + 8]
// 007eb6e4  56                   push esi
// 007eb6e5  8bf1                 mov esi, ecx
// 007eb6e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007eb6eb  50                   push eax
// 007eb6ec  51                   push ecx
// 007eb6ed  8bce                 mov ecx, esi
// 007eb6ef  e88c090000           call 0x7ec080
// 007eb6f4  c706e8ecab00         mov dword ptr [esi], 0xabece8
// 007eb6fa  c74604dcecab00       mov dword ptr [esi + 4], 0xabecdc
// 007eb701  8bc6                 mov eax, esi
// 007eb703  5e                   pop esi
// 007eb704  c20800               ret 8

struct S
{
    int f(int, int);
    void g(int, int);
};

int S::f(int a, int b)
{
    g(a, b);
    *(int *)this = 0xabece8;
    *((int *)this + 1) = 0xabecdc;
    return (int)this;
}

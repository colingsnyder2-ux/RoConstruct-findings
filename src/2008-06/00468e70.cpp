// from server: 100% by colin
// roc 2008-06 00468e70  unit: DxUserInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00468e70
//
// 00468e70  56                   push esi
// 00468e71  8d71d8               lea esi, [ecx - 0x28]
// 00468e74  8bce                 mov ecx, esi
// 00468e76  e875e9ffff           call 0x4677f0
// 00468e7b  8bce                 mov ecx, esi
// 00468e7d  e89efcffff           call 0x468b20
// 00468e82  5e                   pop esi
// 00468e83  c20c00               ret 0xc

struct DxUserInput
{
    char pad0[0x28];
    void sub1();
    void sub2();
    void f(int a, int b, int c);
};

void DxUserInput::f(int a, int b, int c)
{
    DxUserInput* p = this - 1;
    p->sub1();
    p->sub2();
}

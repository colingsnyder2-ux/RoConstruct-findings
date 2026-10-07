// roc 2008-06 0045ac20  unit: CRobloxView  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ac20
//
// 0045ac20  56                   push esi
// 0045ac21  8bf1                 mov esi, ecx
// 0045ac23  e8c8f6ffff           call 0x45a2f0
// 0045ac28  8bce                 mov ecx, esi
// 0045ac2a  5e                   pop esi
// 0045ac2b  e9a6672400           jmp 0x6a13d6
// auto-matched from its assembly shape

struct S_func_0045ac20 { void f(); void a(); void b(); };
void S_func_0045ac20::f()
{
    a();
    b();
}

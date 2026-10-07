// roc 2011-06 0089be20  unit: CXTPControlEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089be20
//
// 0089be20  56                   push esi
// 0089be21  8bf1                 mov esi, ecx
// 0089be23  e888ffffff           call 0x89bdb0
// 0089be28  8bce                 mov ecx, esi
// 0089be2a  5e                   pop esi
// 0089be2b  e98006f7ff           jmp 0x80c4b0
// auto-matched from its assembly shape

struct S_func_0089be20 { void f(); void a(); void b(); };
void S_func_0089be20::f()
{
    a();
    b();
}

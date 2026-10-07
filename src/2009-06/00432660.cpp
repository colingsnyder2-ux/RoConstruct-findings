// roc 2009-06 00432660  unit: IIHAAH::?$CMap  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00432660
//
// 00432660  56                   push esi
// 00432661  8bf1                 mov esi, ecx
// 00432663  e868ffffff           call 0x4325d0
// 00432668  8bce                 mov ecx, esi
// 0043266a  5e                   pop esi
// 0043266b  e97e6e2e00           jmp 0x7194ee
// auto-matched from its assembly shape

struct S_func_00432660 { void f(); void a(); void b(); };
void S_func_00432660::f()
{
    a();
    b();
}

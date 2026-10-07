// roc 2010-06 00435180  unit: CPropGrid::UpdateItemsJob  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00435180
//
// 00435180  56                   push esi
// 00435181  8bf1                 mov esi, ecx
// 00435183  e868ffffff           call 0x4350f0
// 00435188  8bce                 mov ecx, esi
// 0043518a  5e                   pop esi
// 0043518b  e9cc323700           jmp 0x7a845c
// auto-matched from its assembly shape

struct S_func_00435180 { void f(); void a(); void b(); };
void S_func_00435180::f()
{
    a();
    b();
}

// roc 2011-06 00445160  unit: CPropGrid::UpdateItemsJob  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00445160
//
// 00445160  56                   push esi
// 00445161  8bf1                 mov esi, ecx
// 00445163  e868ffffff           call 0x4450d0
// 00445168  8bce                 mov ecx, esi
// 0044516a  5e                   pop esi
// 0044516b  e9b0593c00           jmp 0x80ab20
// auto-matched from its assembly shape

struct S_func_00445160 { void f(); void a(); void b(); };
void S_func_00445160::f()
{
    a();
    b();
}

// roc 2012-06 004568f0  unit: CPropGrid::UpdateItemsJob  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004568f0
//
// 004568f0  56                   push esi
// 004568f1  8bf1                 mov esi, ecx
// 004568f3  e868ffffff           call 0x456860
// 004568f8  8bce                 mov ecx, esi
// 004568fa  5e                   pop esi
// 004568fb  e9a6c25200           jmp 0x982ba6
// auto-matched from its assembly shape

struct S_func_004568f0 { void f(); void a(); void b(); };
void S_func_004568f0::f()
{
    a();
    b();
}

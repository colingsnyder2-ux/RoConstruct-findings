// roc 2007-08 006c70f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c70f0
//
// 006c70f0  56                   push esi
// 006c70f1  8bf1                 mov esi, ecx
// 006c70f3  e878ffffff           call 0x6c7070
// 006c70f8  8bce                 mov ecx, esi
// 006c70fa  5e                   pop esi
// 006c70fb  e9702cf7ff           jmp 0x639d70
// auto-matched from its assembly shape

struct S_func_006c70f0 { void f(); void a(); void b(); };
void S_func_006c70f0::f()
{
    a();
    b();
}

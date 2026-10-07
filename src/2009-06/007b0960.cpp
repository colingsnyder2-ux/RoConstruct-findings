// roc 2009-06 007b0960  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0960
//
// 007b0960  56                   push esi
// 007b0961  8bf1                 mov esi, ecx
// 007b0963  e888ffffff           call 0x7b08f0
// 007b0968  8bce                 mov ecx, esi
// 007b096a  5e                   pop esi
// 007b096b  e9f0ecf6ff           jmp 0x71f660
// auto-matched from its assembly shape

struct S_func_007b0960 { void f(); void a(); void b(); };
void S_func_007b0960::f()
{
    a();
    b();
}

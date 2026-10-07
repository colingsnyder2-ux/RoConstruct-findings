// roc 2008-06 00742300  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742300
//
// 00742300  56                   push esi
// 00742301  8bf1                 mov esi, ecx
// 00742303  e888ffffff           call 0x742290
// 00742308  8bce                 mov ecx, esi
// 0074230a  5e                   pop esi
// 0074230b  e9708cf6ff           jmp 0x6aaf80
// auto-matched from its assembly shape

struct S_func_00742300 { void f(); void a(); void b(); };
void S_func_00742300::f()
{
    a();
    b();
}

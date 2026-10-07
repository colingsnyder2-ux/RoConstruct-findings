// roc 2010-06 0083ee50  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ee50
//
// 0083ee50  56                   push esi
// 0083ee51  8bf1                 mov esi, ecx
// 0083ee53  e888ffffff           call 0x83ede0
// 0083ee58  8bce                 mov ecx, esi
// 0083ee5a  5e                   pop esi
// 0083ee5b  e960aff6ff           jmp 0x7a9dc0
// auto-matched from its assembly shape

struct S_func_0083ee50 { void f(); void a(); void b(); };
void S_func_0083ee50::f()
{
    a();
    b();
}

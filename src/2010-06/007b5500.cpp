// roc 2010-06 007b5500  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b5500
//
// 007b5500  56                   push esi
// 007b5501  8bf1                 mov esi, ecx
// 007b5503  e888ffffff           call 0x7b5490
// 007b5508  8bce                 mov ecx, esi
// 007b550a  5e                   pop esi
// 007b550b  e9b048ffff           jmp 0x7a9dc0
// auto-matched from its assembly shape

struct S_func_007b5500 { void f(); void a(); void b(); };
void S_func_007b5500::f()
{
    a();
    b();
}

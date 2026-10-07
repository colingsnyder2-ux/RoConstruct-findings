// roc 2009-06 0071c670  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071c670
//
// 0071c670  56                   push esi
// 0071c671  8bf1                 mov esi, ecx
// 0071c673  e888ffffff           call 0x71c600
// 0071c678  8bce                 mov ecx, esi
// 0071c67a  5e                   pop esi
// 0071c67b  e9e02f0000           jmp 0x71f660
// auto-matched from its assembly shape

struct S_func_0071c670 { void f(); void a(); void b(); };
void S_func_0071c670::f()
{
    a();
    b();
}

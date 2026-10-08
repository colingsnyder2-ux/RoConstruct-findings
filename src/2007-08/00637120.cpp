// roc 2007-08 00637120  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637120
//
// 00637120  56                   push esi
// 00637121  8bf1                 mov esi, ecx
// 00637123  e878ffffff           call 0x6370a0
// 00637128  8bce                 mov ecx, esi
// 0063712a  5e                   pop esi
// 0063712b  e9402c0000           jmp 0x639d70
// auto-matched from its assembly shape

struct S_func_00637120 { void f(); void a(); void b(); };
void S_func_00637120::f()
{
    a();
    b();
}

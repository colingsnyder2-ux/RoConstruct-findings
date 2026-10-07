// roc 2011-06 00817990  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00817990
//
// 00817990  56                   push esi
// 00817991  8bf1                 mov esi, ecx
// 00817993  e888ffffff           call 0x817920
// 00817998  8bce                 mov ecx, esi
// 0081799a  5e                   pop esi
// 0081799b  e9104bffff           jmp 0x80c4b0
// auto-matched from its assembly shape

struct S_func_00817990 { void f(); void a(); void b(); };
void S_func_00817990::f()
{
    a();
    b();
}

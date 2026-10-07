// roc 2008-06 006a8000  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8000
//
// 006a8000  56                   push esi
// 006a8001  8bf1                 mov esi, ecx
// 006a8003  e888ffffff           call 0x6a7f90
// 006a8008  8bce                 mov ecx, esi
// 006a800a  5e                   pop esi
// 006a800b  e9702f0000           jmp 0x6aaf80
// auto-matched from its assembly shape

struct S_func_006a8000 { void f(); void a(); void b(); };
void S_func_006a8000::f()
{
    a();
    b();
}

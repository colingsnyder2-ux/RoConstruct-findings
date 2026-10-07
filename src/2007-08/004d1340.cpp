// roc 2007-08 004d1340  unit: RBX::View::Part  size: 16 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1340
//
// 004d1340  56                   push esi
// 004d1341  8bf1                 mov esi, ecx
// 004d1343  e818feffff           call 0x4d1160
// 004d1348  8bce                 mov ecx, esi
// 004d134a  5e                   pop esi
// 004d134b  e900ffffff           jmp 0x4d1250
// auto-matched from its assembly shape

struct S_func_004d1340 { void f(); void a(); void b(); };
void S_func_004d1340::f()
{
    a();
    b();
}

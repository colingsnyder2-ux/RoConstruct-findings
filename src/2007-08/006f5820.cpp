// roc 2007-08 006f5820  unit: CXTPControlCustom  size: 16 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5820
//
// 006f5820  56                   push esi
// 006f5821  8bf1                 mov esi, ecx
// 006f5823  e878ffffff           call 0x6f57a0
// 006f5828  8bce                 mov ecx, esi
// 006f582a  5e                   pop esi
// 006f582b  e94045f4ff           jmp 0x639d70
// auto-matched from its assembly shape

struct S_func_006f5820 { void f(); void a(); void b(); };
void S_func_006f5820::f()
{
    a();
    b();
}

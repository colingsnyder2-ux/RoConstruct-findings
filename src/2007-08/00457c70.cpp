// roc 2007-08 00457c70  unit: CRobloxView  size: 16 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00457c70
//
// 00457c70  56                   push esi
// 00457c71  8bf1                 mov esi, ecx
// 00457c73  e878f6ffff           call 0x4572f0
// 00457c78  8bce                 mov ecx, esi
// 00457c7a  5e                   pop esi
// 00457c7b  e9ae8c1d00           jmp 0x63092e
// auto-matched from its assembly shape

struct S_func_00457c70 { void f(); void a(); void b(); };
void S_func_00457c70::f()
{
    a();
    b();
}

// roc 2008-06 004e6a20  unit: RBX::ViewNew::Part  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6a20
//
// 004e6a20  56                   push esi
// 004e6a21  8bf1                 mov esi, ecx
// 004e6a23  e818fdffff           call 0x4e6740
// 004e6a28  8bce                 mov ecx, esi
// 004e6a2a  5e                   pop esi
// 004e6a2b  e980feffff           jmp 0x4e68b0
// auto-matched from its assembly shape

struct S_func_004e6a20 { void f(); void a(); void b(); };
void S_func_004e6a20::f()
{
    a();
    b();
}

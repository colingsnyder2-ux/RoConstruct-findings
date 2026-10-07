// roc 2009-06 00518430  unit: RBX::PartChunk  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518430
//
// 00518430  56                   push esi
// 00518431  8bf1                 mov esi, ecx
// 00518433  e828fdffff           call 0x518160
// 00518438  8bce                 mov ecx, esi
// 0051843a  5e                   pop esi
// 0051843b  e980feffff           jmp 0x5182c0
// auto-matched from its assembly shape

struct S_func_00518430 { void f(); void a(); void b(); };
void S_func_00518430::f()
{
    a();
    b();
}

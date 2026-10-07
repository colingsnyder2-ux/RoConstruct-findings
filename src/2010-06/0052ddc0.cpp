// roc 2010-06 0052ddc0  unit: RBX::PartChunk  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052ddc0
//
// 0052ddc0  56                   push esi
// 0052ddc1  8bf1                 mov esi, ecx
// 0052ddc3  e828fdffff           call 0x52daf0
// 0052ddc8  8bce                 mov ecx, esi
// 0052ddca  5e                   pop esi
// 0052ddcb  e980feffff           jmp 0x52dc50
// auto-matched from its assembly shape

struct S_func_0052ddc0 { void f(); void a(); void b(); };
void S_func_0052ddc0::f()
{
    a();
    b();
}

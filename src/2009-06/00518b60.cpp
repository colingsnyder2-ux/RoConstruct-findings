// roc 2009-06 00518b60  unit: RBX::PartChunk  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518b60
//
// 00518b60  56                   push esi
// 00518b61  8bf1                 mov esi, ecx
// 00518b63  e858f7ffff           call 0x5182c0
// 00518b68  8bce                 mov ecx, esi
// 00518b6a  5e                   pop esi
// 00518b6b  e9f0f5ffff           jmp 0x518160
// auto-matched from its assembly shape

struct S_func_00518b60 { void f(); void a(); void b(); };
void S_func_00518b60::f()
{
    a();
    b();
}

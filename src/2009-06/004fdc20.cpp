// roc 2009-06 004fdc20  unit: RBX::Network::NetworkOwnerJob  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fdc20
//
// 004fdc20  56                   push esi
// 004fdc21  8bf1                 mov esi, ecx
// 004fdc23  e8c8fdffff           call 0x4fd9f0
// 004fdc28  8bce                 mov ecx, esi
// 004fdc2a  5e                   pop esi
// 004fdc2b  e9c0fdffff           jmp 0x4fd9f0
// auto-matched from its assembly shape

struct S_func_004fdc20 { void f(); void a(); void b(); };
void S_func_004fdc20::f()
{
    a();
    b();
}

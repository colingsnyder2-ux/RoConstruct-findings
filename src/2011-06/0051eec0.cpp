// roc 2011-06 0051eec0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051eec0
//
// 0051eec0  56                   push esi
// 0051eec1  8bf1                 mov esi, ecx
// 0051eec3  e8c8fdffff           call 0x51ec90
// 0051eec8  8bce                 mov ecx, esi
// 0051eeca  5e                   pop esi
// 0051eecb  e9c0fdffff           jmp 0x51ec90
// auto-matched from its assembly shape

struct S_func_0051eec0 { void f(); void a(); void b(); };
void S_func_0051eec0::f()
{
    a();
    b();
}

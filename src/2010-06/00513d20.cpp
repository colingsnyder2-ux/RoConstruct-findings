// roc 2010-06 00513d20  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00513d20
//
// 00513d20  56                   push esi
// 00513d21  8bf1                 mov esi, ecx
// 00513d23  e8c8fdffff           call 0x513af0
// 00513d28  8bce                 mov ecx, esi
// 00513d2a  5e                   pop esi
// 00513d2b  e9c0fdffff           jmp 0x513af0
// auto-matched from its assembly shape

struct S_func_00513d20 { void f(); void a(); void b(); };
void S_func_00513d20::f()
{
    a();
    b();
}

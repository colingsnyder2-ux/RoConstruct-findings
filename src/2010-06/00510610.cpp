// from server: 100% by tester
// roc 2010-06 00510610  unit: RBX::Network::DirectPhysicsReceiver  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00510610
//
// 00510610  83790800             cmp dword ptr [ecx + 8], 0
// 00510614  740a                 je 0x510620
// 00510616  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00510619  50                   push eax
// 0051061a  e87b732900           call 0x7a799a
// 0051061f  59                   pop ecx
// 00510620  c3                   ret 

struct S
{
    char padding[8];
    int value;
    void *object;
    void f();
};

extern "C" void __cdecl release(void *);

void S::f()
{
    if (value != 0)
        release(object);
}

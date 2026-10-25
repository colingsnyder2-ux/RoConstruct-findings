// from server: 100% by colin
// roc 2009-12 0062c8f0  unit: RBX::Network::P8Players::?$GetImpl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062c8f0
//
// 0062c8f0  c70164af9c00         mov dword ptr [ecx], 0x9caf64
// 0062c8f6  c7410458af9c00       mov dword ptr [ecx + 4], 0x9caf58
// 0062c8fd  c741184caf9c00       mov dword ptr [ecx + 0x18], 0x9caf4c
// 0062c904  c7411c44af9c00       mov dword ptr [ecx + 0x1c], 0x9caf44
// 0062c90b  e9f0b10000           jmp 0x637b00

// from server: 95% by atomic.potato
extern "C" int __cdecl g();

struct S {
    int f();
};

int S::f()
{
    *(int*)this = 0x9caf64;
    *((int*)this + 1) = 0x9caf58;
    *((int*)this + 6) = 0x9caf4c;
    *((int*)this + 7) = 0x9caf44;
    return g();
}
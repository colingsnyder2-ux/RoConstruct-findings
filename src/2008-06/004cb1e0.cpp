// from server: 100% by king_originala
// roc 2008-06 004cb1e0  unit: RBX::Network::RoundRobinPhysicsSender  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb1e0
//
// 004cb1e0  83791000             cmp dword ptr [ecx + 0x10], 0
// 004cb1e4  740a                 je 0x4cb1f0
// 004cb1e6  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004cb1e9  50                   push eax
// 004cb1ea  e88b541d00           call 0x6a067a
// 004cb1ef  59                   pop ecx
// 004cb1f0  c3                   ret 

extern "C" void __cdecl release(void *);

struct S {
    unsigned char padding[16];
    int active;
    void *allocation;
    void f();
};

void S::f()
{
    if (active)
        release(allocation);
}

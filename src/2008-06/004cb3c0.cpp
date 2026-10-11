// from server: 55% by colin
// roc 2008-06 004cb3c0  unit: RBX::Network::RoundRobinPhysicsSender  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb3c0
//
// 004cb3c0  51                   push ecx
// 004cb3c1  56                   push esi
// 004cb3c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cb3c6  51                   push ecx
// 004cb3c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cb3cb  56                   push esi
// 004cb3cc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004cb3d4  e8d7fdffff           call 0x4cb1b0
// 004cb3d9  8bc6                 mov eax, esi
// 004cb3db  5e                   pop esi
// 004cb3dc  59                   pop ecx
// 004cb3dd  c20800               ret 8

struct PhysicsSender {
    void construct(int a, int b);
};

struct RoundRobinPhysicsSender : PhysicsSender {
    int construct(int a, int b);
};

int RoundRobinPhysicsSender::construct(int a, int b) {
    PhysicsSender::construct(a, b);
    return a;
}

// from server: 75% by colin
// roc 2007-08 004b88d0  unit: RakPeer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b88d0
//
// 004b88d0  8a4104               mov al, byte ptr [ecx + 4]
// 004b88d3  84c0                 test al, al
// 004b88d5  7407                 je 0x4b88de
// 004b88d7  c6819508000000       mov byte ptr [ecx + 0x895], 0
// 004b88de  c3                   ret 

struct RakPeer {
    char pad0[4];
    unsigned char field4;
    char pad5[0x890];
    unsigned char field895;
    void f();
};

void RakPeer::f()
{
    if (field4 != 0)
        field895 = 0;
}

// roc 2009-06 006ec2a0  unit: RBX::PartDropTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ec2a0
//
// 006ec2a0  8b542404             mov edx, dword ptr [esp + 4]
// 006ec2a4  8a4a08               mov cl, byte ptr [edx + 8]
// 006ec2a7  b801000000           mov eax, 1
// 006ec2ac  d3e0                 shl eax, cl
// 006ec2ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ec2b2  48                   dec eax
// 006ec2b3  234108               and eax, dword ptr [ecx + 8]
// 006ec2b6  c1e005               shl eax, 5
// 006ec2b9  034214               add eax, dword ptr [edx + 0x14]
// 006ec2bc  ba04000000           mov edx, 4
// 006ec2c1  395018               cmp dword ptr [eax + 0x18], edx
// 006ec2c4  7505                 jne 0x6ec2cb
// 006ec2c6  394810               cmp dword ptr [eax + 0x10], ecx
// 006ec2c9  740c                 je 0x6ec2d7
// 006ec2cb  8b401c               mov eax, dword ptr [eax + 0x1c]
// 006ec2ce  85c0                 test eax, eax
// 006ec2d0  75ef                 jne 0x6ec2c1
// 006ec2d2  b878c38e00           mov eax, 0x8ec378
// 006ec2d7  c3                   ret 
// copied from an identical function in another client (function ?find@ns_ROCX00001a@@YAPAUNode@1@PAUArg1@1@PAUArg2@1@@Z)

namespace ns_ROCX00001a {
// from server: 100% by atomic.potato
struct Node {
    char pad0[8];
    int field8;
    char padC[4];
    int field10;
    int field14;
    int field18;
    int field1C;
};

struct Arg1 {
    char pad0[8];
    unsigned char field8;
    char pad9[3];
    int fieldC;
    int field10;
    int field14;
};

struct Arg2 {
    char pad0[8];
    int field8;
};

extern Node g_default;

Node* find(Arg1* a, Arg2* b) {
    unsigned int mask = (1u << a->field8) - 1;
    unsigned int idx = mask & (unsigned int)b->field8;
    Node* n = (Node*)(a->field14 + (idx << 5));
    while (n->field18 != 4 || n->field10 != (int)b) {
        n = (Node*)n->field1C;
        if (n == 0) {
            return &g_default;
        }
    }
    return n;
}
}

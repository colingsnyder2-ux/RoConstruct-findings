// roc 2010-06 0077d540  unit: RBX::PartDropTool  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077d540
//
// 0077d540  8b542404             mov edx, dword ptr [esp + 4]
// 0077d544  8a4a08               mov cl, byte ptr [edx + 8]
// 0077d547  b801000000           mov eax, 1
// 0077d54c  d3e0                 shl eax, cl
// 0077d54e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077d552  48                   dec eax
// 0077d553  234108               and eax, dword ptr [ecx + 8]
// 0077d556  c1e005               shl eax, 5
// 0077d559  034214               add eax, dword ptr [edx + 0x14]
// 0077d55c  ba04000000           mov edx, 4
// 0077d561  395018               cmp dword ptr [eax + 0x18], edx
// 0077d564  7505                 jne 0x77d56b
// 0077d566  394810               cmp dword ptr [eax + 0x10], ecx
// 0077d569  740c                 je 0x77d577
// 0077d56b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0077d56e  85c0                 test eax, eax
// 0077d570  75ef                 jne 0x77d561
// 0077d572  b878dca400           mov eax, 0xa4dc78
// 0077d577  c3                   ret 
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
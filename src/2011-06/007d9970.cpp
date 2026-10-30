// roc 2011-06 007d9970  unit: seg_007d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d9970
//
// 007d9970  8b542404             mov edx, dword ptr [esp + 4]
// 007d9974  8a4a08               mov cl, byte ptr [edx + 8]
// 007d9977  b801000000           mov eax, 1
// 007d997c  d3e0                 shl eax, cl
// 007d997e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d9982  48                   dec eax
// 007d9983  234108               and eax, dword ptr [ecx + 8]
// 007d9986  c1e005               shl eax, 5
// 007d9989  034214               add eax, dword ptr [edx + 0x14]
// 007d998c  ba04000000           mov edx, 4
// 007d9991  395018               cmp dword ptr [eax + 0x18], edx
// 007d9994  7505                 jne 0x7d999b
// 007d9996  394810               cmp dword ptr [eax + 0x10], ecx
// 007d9999  740c                 je 0x7d99a7
// 007d999b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 007d999e  85c0                 test eax, eax
// 007d99a0  75ef                 jne 0x7d9991
// 007d99a2  b8b875ab00           mov eax, 0xab75b8
// 007d99a7  c3                   ret 
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
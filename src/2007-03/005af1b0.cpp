// roc 2007-03 005af1b0  unit: seg_005a0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af1b0
//
// 005af1b0  8b542404             mov edx, dword ptr [esp + 4]
// 005af1b4  8b420c               mov eax, dword ptr [edx + 0xc]
// 005af1b7  56                   push esi
// 005af1b8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005af1bc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005af1bf  57                   push edi
// 005af1c0  8bfa                 mov edi, edx
// 005af1c2  7c02                 jl 0x5af1c6
// 005af1c4  8bfe                 mov edi, esi
// 005af1c6  8b4708               mov eax, dword ptr [edi + 8]
// 005af1c9  85c0                 test eax, eax
// 005af1cb  7428                 je 0x5af1f5
// 005af1cd  8d4900               lea ecx, [ecx]
// 005af1d0  8b4808               mov ecx, dword ptr [eax + 8]
// 005af1d3  3bd1                 cmp edx, ecx
// 005af1d5  7505                 jne 0x5af1dc
// 005af1d7  3b700c               cmp esi, dword ptr [eax + 0xc]
// 005af1da  741b                 je 0x5af1f7
// 005af1dc  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005af1df  7504                 jne 0x5af1e5
// 005af1e1  3bf1                 cmp esi, ecx
// 005af1e3  7412                 je 0x5af1f7
// 005af1e5  3bf9                 cmp edi, ecx
// 005af1e7  7505                 jne 0x5af1ee
// 005af1e9  8b4010               mov eax, dword ptr [eax + 0x10]
// 005af1ec  eb03                 jmp 0x5af1f1
// 005af1ee  8b4014               mov eax, dword ptr [eax + 0x14]
// 005af1f1  85c0                 test eax, eax
// 005af1f3  75db                 jne 0x5af1d0
// 005af1f5  33c0                 xor eax, eax
// 005af1f7  5f                   pop edi
// 005af1f8  5e                   pop esi
// 005af1f9  c3                   ret 
// copied from an identical function in another client (function ?find@ns_ROCX000002@@YAPAUNode@1@PAUGeometry@1@0@Z)

namespace ns_ROCX000002 {
struct Node {
    char pad0[8];
    void* key1;
    void* key2;
    Node* left;
    Node* right;
};

struct Geometry {
    char pad0[8];
    Node* root;
    int key;
};

Node* find(Geometry* a, Geometry* b) {
    Geometry* smaller;
    if (a->key < b->key)
        smaller = a;
    else
        smaller = b;
    Node* n = smaller->root;
    while (n) {
        if (a == n->key1 && b == n->key2)
            return n;
        if (a == n->key2 && b == n->key1)
            return n;
        if (smaller == n->key1)
            n = n->left;
        else
            n = n->right;
    }
    return 0;
}
}

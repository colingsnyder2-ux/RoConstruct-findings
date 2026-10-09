// roc 2007-03 005af160  unit: seg_005a0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af160
//
// 005af160  8b542404             mov edx, dword ptr [esp + 4]
// 005af164  8b4214               mov eax, dword ptr [edx + 0x14]
// 005af167  56                   push esi
// 005af168  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005af16c  3b4614               cmp eax, dword ptr [esi + 0x14]
// 005af16f  57                   push edi
// 005af170  8bfa                 mov edi, edx
// 005af172  7c02                 jl 0x5af176
// 005af174  8bfe                 mov edi, esi
// 005af176  8b4710               mov eax, dword ptr [edi + 0x10]
// 005af179  85c0                 test eax, eax
// 005af17b  7428                 je 0x5af1a5
// 005af17d  8d4900               lea ecx, [ecx]
// 005af180  8b4808               mov ecx, dword ptr [eax + 8]
// 005af183  3bd1                 cmp edx, ecx
// 005af185  7505                 jne 0x5af18c
// 005af187  3b700c               cmp esi, dword ptr [eax + 0xc]
// 005af18a  741b                 je 0x5af1a7
// 005af18c  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005af18f  7504                 jne 0x5af195
// 005af191  3bf1                 cmp esi, ecx
// 005af193  7412                 je 0x5af1a7
// 005af195  3bf9                 cmp edi, ecx
// 005af197  7505                 jne 0x5af19e
// 005af199  8b4010               mov eax, dword ptr [eax + 0x10]
// 005af19c  eb03                 jmp 0x5af1a1
// 005af19e  8b4014               mov eax, dword ptr [eax + 0x14]
// 005af1a1  85c0                 test eax, eax
// 005af1a3  75db                 jne 0x5af180
// 005af1a5  33c0                 xor eax, eax
// 005af1a7  5f                   pop edi
// 005af1a8  5e                   pop esi
// 005af1a9  c3                   ret 
// copied from an identical function in another client (function ?find@ns_ROCX000001@@YAPAUNode@1@PAUGeometry@1@0@Z)

namespace ns_ROCX000001 {
struct Node {
    char pad0[8];
    void* key1;
    void* key2;
    Node* left;
    Node* right;
};

struct Geometry {
    char pad0[0x10];
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

// roc 2009-12 005ce310  unit: RBX::PartChunk  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce310
//
// 005ce310  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005ce313  8b5004               mov edx, dword ptr [eax + 4]
// 005ce316  807a2900             cmp byte ptr [edx + 0x29], 0
// 005ce31a  753f                 jne 0x5ce35b
// 005ce31c  53                   push ebx
// 005ce31d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005ce321  55                   push ebp
// 005ce322  56                   push esi
// 005ce323  57                   push edi
// 005ce324  8d6b10               lea ebp, [ebx + 0x10]
// 005ce327  8d4a0c               lea ecx, [edx + 0xc]
// 005ce32a  8d7110               lea esi, [ecx + 0x10]
// 005ce32d  3bf5                 cmp esi, ebp
// 005ce32f  7217                 jb 0x5ce348
// 005ce331  771a                 ja 0x5ce34d
// 005ce333  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005ce336  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 005ce339  3bf7                 cmp esi, edi
// 005ce33b  7c0b                 jl 0x5ce348
// 005ce33d  7f0e                 jg 0x5ce34d
// 005ce33f  3bcb                 cmp ecx, ebx
// 005ce341  0f92c1               setb cl
// 005ce344  84c9                 test cl, cl
// 005ce346  7405                 je 0x5ce34d
// 005ce348  8b5208               mov edx, dword ptr [edx + 8]
// 005ce34b  eb04                 jmp 0x5ce351
// 005ce34d  8bc2                 mov eax, edx
// 005ce34f  8b12                 mov edx, dword ptr [edx]
// 005ce351  807a2900             cmp byte ptr [edx + 0x29], 0
// 005ce355  74d0                 je 0x5ce327
// 005ce357  5f                   pop edi
// 005ce358  5e                   pop esi
// 005ce359  5d                   pop ebp
// 005ce35a  5b                   pop ebx
// 005ce35b  c20400               ret 4
// copied from an identical function in another client (function ?find@PartChunk@@QAEPAUNode@@PBUKey@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Key {
    int padding[3];
    int value;
    bool operator<(const Key& other) const;
};

inline bool Key::operator<(const Key& other) const
{
    if (this + 1 < &other + 1)
        return true;
    if (this + 1 > &other + 1)
        return false;
    if (value < other.value)
        return true;
    if (value > other.value)
        return false;
    return this < &other;
}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    unsigned char padding[12];
    unsigned char color;
    unsigned char nil;
};

struct PartChunk {
    unsigned char padding[24];
    Node* head;
    Node* find(const Key* key);
};

Node* PartChunk::find(const Key* key)
{
    Node* result = head;
    Node* node = result->parent;

    while (!node->nil) {
        if (node->key < *key) {
            node = node->right;
        } else {
            result = node;
            node = node->left;
        }
    }

    return result;
}
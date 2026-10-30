// roc 2009-06 00518880  unit: RBX::PartChunk  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518880
//
// 00518880  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00518883  8b5004               mov edx, dword ptr [eax + 4]
// 00518886  807a2900             cmp byte ptr [edx + 0x29], 0
// 0051888a  753f                 jne 0x5188cb
// 0051888c  53                   push ebx
// 0051888d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00518891  55                   push ebp
// 00518892  56                   push esi
// 00518893  57                   push edi
// 00518894  8d6b10               lea ebp, [ebx + 0x10]
// 00518897  8d4a0c               lea ecx, [edx + 0xc]
// 0051889a  8d7110               lea esi, [ecx + 0x10]
// 0051889d  3bf5                 cmp esi, ebp
// 0051889f  7217                 jb 0x5188b8
// 005188a1  771a                 ja 0x5188bd
// 005188a3  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005188a6  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 005188a9  3bf7                 cmp esi, edi
// 005188ab  7c0b                 jl 0x5188b8
// 005188ad  7f0e                 jg 0x5188bd
// 005188af  3bcb                 cmp ecx, ebx
// 005188b1  0f92c1               setb cl
// 005188b4  84c9                 test cl, cl
// 005188b6  7405                 je 0x5188bd
// 005188b8  8b5208               mov edx, dword ptr [edx + 8]
// 005188bb  eb04                 jmp 0x5188c1
// 005188bd  8bc2                 mov eax, edx
// 005188bf  8b12                 mov edx, dword ptr [edx]
// 005188c1  807a2900             cmp byte ptr [edx + 0x29], 0
// 005188c5  74d0                 je 0x518897
// 005188c7  5f                   pop edi
// 005188c8  5e                   pop esi
// 005188c9  5d                   pop ebp
// 005188ca  5b                   pop ebx
// 005188cb  c20400               ret 4
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
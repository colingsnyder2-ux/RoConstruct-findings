// roc 2010-06 0052cfd0  unit: RBX::VTextureProxyBase::?$sp_counted_impl_p  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052cfd0
//
// 0052cfd0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0052cfd3  8b5004               mov edx, dword ptr [eax + 4]
// 0052cfd6  807a2900             cmp byte ptr [edx + 0x29], 0
// 0052cfda  753f                 jne 0x52d01b
// 0052cfdc  53                   push ebx
// 0052cfdd  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052cfe1  55                   push ebp
// 0052cfe2  56                   push esi
// 0052cfe3  57                   push edi
// 0052cfe4  8d6b10               lea ebp, [ebx + 0x10]
// 0052cfe7  8d4a0c               lea ecx, [edx + 0xc]
// 0052cfea  8d7110               lea esi, [ecx + 0x10]
// 0052cfed  3bf5                 cmp esi, ebp
// 0052cfef  7217                 jb 0x52d008
// 0052cff1  771a                 ja 0x52d00d
// 0052cff3  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0052cff6  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 0052cff9  3bf7                 cmp esi, edi
// 0052cffb  7c0b                 jl 0x52d008
// 0052cffd  7f0e                 jg 0x52d00d
// 0052cfff  3bcb                 cmp ecx, ebx
// 0052d001  0f92c1               setb cl
// 0052d004  84c9                 test cl, cl
// 0052d006  7405                 je 0x52d00d
// 0052d008  8b5208               mov edx, dword ptr [edx + 8]
// 0052d00b  eb04                 jmp 0x52d011
// 0052d00d  8bc2                 mov eax, edx
// 0052d00f  8b12                 mov edx, dword ptr [edx]
// 0052d011  807a2900             cmp byte ptr [edx + 0x29], 0
// 0052d015  74d0                 je 0x52cfe7
// 0052d017  5f                   pop edi
// 0052d018  5e                   pop esi
// 0052d019  5d                   pop ebp
// 0052d01a  5b                   pop ebx
// 0052d01b  c20400               ret 4
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
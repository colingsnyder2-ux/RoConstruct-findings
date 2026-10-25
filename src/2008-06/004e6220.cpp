// from server: 100% by king_originala
// roc 2008-06 004e6220  unit: RBX::ViewNew::PartChunk  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6220
//
// 004e6220  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004e6223  8b5004               mov edx, dword ptr [eax + 4]
// 004e6226  807a2900             cmp byte ptr [edx + 0x29], 0
// 004e622a  753f                 jne 0x4e626b
// 004e622c  53                   push ebx
// 004e622d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004e6231  55                   push ebp
// 004e6232  56                   push esi
// 004e6233  57                   push edi
// 004e6234  8d6b10               lea ebp, [ebx + 0x10]
// 004e6237  8d4a0c               lea ecx, [edx + 0xc]
// 004e623a  8d7110               lea esi, [ecx + 0x10]
// 004e623d  3bf5                 cmp esi, ebp
// 004e623f  7217                 jb 0x4e6258
// 004e6241  771a                 ja 0x4e625d
// 004e6243  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004e6246  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004e6249  3bf7                 cmp esi, edi
// 004e624b  7c0b                 jl 0x4e6258
// 004e624d  7f0e                 jg 0x4e625d
// 004e624f  3bcb                 cmp ecx, ebx
// 004e6251  0f92c1               setb cl
// 004e6254  84c9                 test cl, cl
// 004e6256  7405                 je 0x4e625d
// 004e6258  8b5208               mov edx, dword ptr [edx + 8]
// 004e625b  eb04                 jmp 0x4e6261
// 004e625d  8bc2                 mov eax, edx
// 004e625f  8b12                 mov edx, dword ptr [edx]
// 004e6261  807a2900             cmp byte ptr [edx + 0x29], 0
// 004e6265  74d0                 je 0x4e6237
// 004e6267  5f                   pop edi
// 004e6268  5e                   pop esi
// 004e6269  5d                   pop ebp
// 004e626a  5b                   pop ebx
// 004e626b  c20400               ret 4

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

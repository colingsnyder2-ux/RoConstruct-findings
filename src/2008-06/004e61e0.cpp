// from server: 100% by king_originala
// roc 2008-06 004e61e0  unit: RBX::ViewNew::PartChunk  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e61e0
//
// 004e61e0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004e61e3  8b4804               mov ecx, dword ptr [eax + 4]
// 004e61e6  80792100             cmp byte ptr [ecx + 0x21], 0
// 004e61ea  7531                 jne 0x4e621d
// 004e61ec  53                   push ebx
// 004e61ed  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004e61f1  56                   push esi
// 004e61f2  57                   push edi
// 004e61f3  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 004e61f6  8b7118               mov esi, dword ptr [ecx + 0x18]
// 004e61f9  3bf7                 cmp esi, edi
// 004e61fb  8d510c               lea edx, [ecx + 0xc]
// 004e61fe  7c0b                 jl 0x4e620b
// 004e6200  7f0e                 jg 0x4e6210
// 004e6202  3bd3                 cmp edx, ebx
// 004e6204  0f92c2               setb dl
// 004e6207  84d2                 test dl, dl
// 004e6209  7405                 je 0x4e6210
// 004e620b  8b4908               mov ecx, dword ptr [ecx + 8]
// 004e620e  eb04                 jmp 0x4e6214
// 004e6210  8bc1                 mov eax, ecx
// 004e6212  8b09                 mov ecx, dword ptr [ecx]
// 004e6214  80792100             cmp byte ptr [ecx + 0x21], 0
// 004e6218  74dc                 je 0x4e61f6
// 004e621a  5f                   pop edi
// 004e621b  5e                   pop esi
// 004e621c  5b                   pop ebx
// 004e621d  c20400               ret 4

struct Key {
    char padding[12];
    int value;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    char padding[4];
    unsigned char color;
    unsigned char nil;
};

struct S {
    char padding[24];
    Node* head;
    Node* find(const Key* key);
};

Node* S::find(const Key* key)
{
    Node* result = head;
    Node* current = result->parent;
    while (!current->nil) {
        const Key* candidate = &current->key;
        bool less;
        if (candidate->value < key->value)
            less = true;
        else if (candidate->value > key->value)
            less = false;
        else
            less = candidate < key;
        if (less) {
            current = current->right;
        } else {
            result = current;
            current = current->left;
        }
    }
    return result;
}

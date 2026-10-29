// roc 2010-06 0052cf90  unit: RBX::VTextureProxyBase::?$sp_counted_impl_p  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052cf90
//
// 0052cf90  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0052cf93  8b4804               mov ecx, dword ptr [eax + 4]
// 0052cf96  80792100             cmp byte ptr [ecx + 0x21], 0
// 0052cf9a  7531                 jne 0x52cfcd
// 0052cf9c  53                   push ebx
// 0052cf9d  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052cfa1  56                   push esi
// 0052cfa2  57                   push edi
// 0052cfa3  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 0052cfa6  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0052cfa9  3bf7                 cmp esi, edi
// 0052cfab  8d510c               lea edx, [ecx + 0xc]
// 0052cfae  7c0b                 jl 0x52cfbb
// 0052cfb0  7f0e                 jg 0x52cfc0
// 0052cfb2  3bd3                 cmp edx, ebx
// 0052cfb4  0f92c2               setb dl
// 0052cfb7  84d2                 test dl, dl
// 0052cfb9  7405                 je 0x52cfc0
// 0052cfbb  8b4908               mov ecx, dword ptr [ecx + 8]
// 0052cfbe  eb04                 jmp 0x52cfc4
// 0052cfc0  8bc1                 mov eax, ecx
// 0052cfc2  8b09                 mov ecx, dword ptr [ecx]
// 0052cfc4  80792100             cmp byte ptr [ecx + 0x21], 0
// 0052cfc8  74dc                 je 0x52cfa6
// 0052cfca  5f                   pop edi
// 0052cfcb  5e                   pop esi
// 0052cfcc  5b                   pop ebx
// 0052cfcd  c20400               ret 4
// copied from an identical function in another client (function ?find@S@@QAEPAUNode@@PBUKey@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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
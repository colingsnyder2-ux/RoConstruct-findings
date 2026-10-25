// from server: 100% by king_originala
// roc 2008-06 005b7210  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7210
//
// 005b7210  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005b7213  56                   push esi
// 005b7214  8b7004               mov esi, dword ptr [eax + 4]
// 005b7217  807e3500             cmp byte ptr [esi + 0x35], 0
// 005b721b  57                   push edi
// 005b721c  8bf8                 mov edi, eax
// 005b721e  7528                 jne 0x5b7248
// 005b7220  53                   push ebx
// 005b7221  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b7225  8d460c               lea eax, [esi + 0xc]
// 005b7228  53                   push ebx
// 005b7229  50                   push eax
// 005b722a  e8214bfaff           call 0x55bd50
// 005b722f  83c408               add esp, 8
// 005b7232  84c0                 test al, al
// 005b7234  7405                 je 0x5b723b
// 005b7236  8b7608               mov esi, dword ptr [esi + 8]
// 005b7239  eb04                 jmp 0x5b723f
// 005b723b  8bfe                 mov edi, esi
// 005b723d  8b36                 mov esi, dword ptr [esi]
// 005b723f  807e3500             cmp byte ptr [esi + 0x35], 0
// 005b7243  74e0                 je 0x5b7225
// 005b7245  8bc7                 mov eax, edi
// 005b7247  5b                   pop ebx
// 005b7248  5f                   pop edi
// 005b7249  5e                   pop esi
// 005b724a  c20400               ret 4

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned char key[41];
    unsigned char nil;
};

extern "C" bool __cdecl compare(const void*, const void*);

struct S {
    unsigned char padding[24];
    Node* head;

    Node* find(const void* key);
};

Node* S::find(const void* key)
{
    Node* current = head->parent;
    Node* result = head;

    if (!current->nil) {
        do {
            if (compare(current->key, key)) {
                current = current->right;
            } else {
                result = current;
                current = current->left;
            }
        } while (!current->nil);
    }

    return result;
}

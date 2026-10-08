// from server: 84% by colin
// roc 2007-08 00587fb0  unit: RBX::SoundChannel  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587fb0
//
// 00587fb0  8b4104               mov eax, dword ptr [ecx + 4]
// 00587fb3  56                   push esi
// 00587fb4  8b7004               mov esi, dword ptr [eax + 4]
// 00587fb7  807e3500             cmp byte ptr [esi + 0x35], 0
// 00587fbb  57                   push edi
// 00587fbc  8bf8                 mov edi, eax
// 00587fbe  7528                 jne 0x587fe8
// 00587fc0  53                   push ebx
// 00587fc1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00587fc5  8d460c               lea eax, [esi + 0xc]
// 00587fc8  53                   push ebx
// 00587fc9  50                   push eax
// 00587fca  e8e1cffbff           call 0x544fb0
// 00587fcf  83c408               add esp, 8
// 00587fd2  84c0                 test al, al
// 00587fd4  7405                 je 0x587fdb
// 00587fd6  8b7608               mov esi, dword ptr [esi + 8]
// 00587fd9  eb04                 jmp 0x587fdf
// 00587fdb  8bfe                 mov edi, esi
// 00587fdd  8b36                 mov esi, dword ptr [esi]
// 00587fdf  807e3500             cmp byte ptr [esi + 0x35], 0
// 00587fe3  74e0                 je 0x587fc5
// 00587fe5  8bc7                 mov eax, edi
// 00587fe7  5b                   pop ebx
// 00587fe8  5f                   pop edi
// 00587fe9  5e                   pop esi
// 00587fea  c20400               ret 4

struct Node {
    Node* left;
    Node* right;
    char pad[0x35 - 8];
    char flag;
};

struct Container {
    char pad[4];
    Node* root;
};

struct SoundChannel {
    char pad[4];
    Container* container;
    Node* find(Node* key);
};

extern bool __cdecl compare(Node* a, Node* b);

Node* SoundChannel::find(Node* key)
{
    Node* cur = container->root;
    Node* result = cur;
    if (cur->flag == 0) {
        while (true) {
            if (compare(cur, key)) {
                cur = cur->right;
            } else {
                result = cur;
                cur = cur->left;
            }
            if (cur->flag != 0)
                break;
        }
    }
    return result;
}

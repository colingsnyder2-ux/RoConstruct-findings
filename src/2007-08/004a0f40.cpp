// from server: 78% by colin
// roc 2007-08 004a0f40  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0f40
//
// 004a0f40  8b4104               mov eax, dword ptr [ecx + 4]
// 004a0f43  56                   push esi
// 004a0f44  8b7004               mov esi, dword ptr [eax + 4]
// 004a0f47  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004a0f4b  57                   push edi
// 004a0f4c  8bf8                 mov edi, eax
// 004a0f4e  7531                 jne 0x4a0f81
// 004a0f50  53                   push ebx
// 004a0f51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a0f55  55                   push ebp
// 004a0f56  8b2d20e67700         mov ebp, dword ptr [0x77e620]
// 004a0f5c  8d642400             lea esp, [esp]
// 004a0f60  8d460c               lea eax, [esi + 0xc]
// 004a0f63  50                   push eax
// 004a0f64  53                   push ebx
// 004a0f65  ffd5                 call ebp
// 004a0f67  83c408               add esp, 8
// 004a0f6a  84c0                 test al, al
// 004a0f6c  7406                 je 0x4a0f74
// 004a0f6e  8bfe                 mov edi, esi
// 004a0f70  8b36                 mov esi, dword ptr [esi]
// 004a0f72  eb03                 jmp 0x4a0f77
// 004a0f74  8b7608               mov esi, dword ptr [esi + 8]
// 004a0f77  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004a0f7b  74e3                 je 0x4a0f60
// 004a0f7d  5d                   pop ebp
// 004a0f7e  8bc7                 mov eax, edi
// 004a0f80  5b                   pop ebx
// 004a0f81  5f                   pop edi
// 004a0f82  5e                   pop esi
// 004a0f83  c20400               ret 4

struct Node {
    Node* left;
    Node* right;
    char pad[0x25];
    char flag;
};

struct Container {
    char pad[4];
    Node* head;
};

struct S {
    char pad[4];
    Container* c;
    Node* find(Node* arg);
};

extern "C" int __stdcall compare_strings(const void* a, const void* b);

Node* S::find(Node* arg)
{
    Container* c = this->c;
    Node* n = c->head;
    Node* result = n;
    if (n->flag == 0) {
        while (n->flag == 0) {
            if (compare_strings(&n->pad[0], arg)) {
                result = n;
                n = n->left;
            } else {
                n = n->right;
            }
        }
    }
    return result;
}

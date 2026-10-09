// from server: 56% by colin
// roc 2007-08 004a9330  unit: RBX::Network::VClient  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9330
//
// 004a9330  83ec08               sub esp, 8
// 004a9333  53                   push ebx
// 004a9334  8b99a01d0000         mov ebx, dword ptr [ecx + 0x1da0]
// 004a933a  56                   push esi
// 004a933b  57                   push edi
// 004a933c  8db19c1d0000         lea esi, [ecx + 0x1d9c]
// 004a9342  8d442418             lea eax, [esp + 0x18]
// 004a9346  50                   push eax
// 004a9347  8d4c2410             lea ecx, [esp + 0x10]
// 004a934b  51                   push ecx
// 004a934c  8bce                 mov ecx, esi
// 004a934e  e8fdc11500           call 0x605550
// 004a9353  8bf8                 mov edi, eax
// 004a9355  8b07                 mov eax, dword ptr [edi]
// 004a9357  85c0                 test eax, eax
// 004a9359  7404                 je 0x4a935f
// 004a935b  3bc6                 cmp eax, esi
// 004a935d  7406                 je 0x4a9365
// 004a935f  ff15d8e67700         call dword ptr [0x77e6d8]
// 004a9365  33c0                 xor eax, eax
// 004a9367  395f04               cmp dword ptr [edi + 4], ebx
// 004a936a  5f                   pop edi
// 004a936b  5e                   pop esi
// 004a936c  0f95c0               setne al
// 004a936f  5b                   pop ebx
// 004a9370  83c408               add esp, 8
// 004a9373  c20400               ret 4

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* parent;
    int   value;
};

struct Tree {
    Node* head;
    Node* find(Node** hint, Node* key);
};

struct VClient {
    char pad[0x1d9c];
    Tree tree;
    int  field_1da0;
    bool check(int arg);
};

bool VClient::check(int arg) {
    Node* hint = 0;
    Node* n = tree.find(&hint, (Node*)&arg);
    if (n->parent != 0 && n->parent != (Node*)&tree) {
        _invalid_parameter_noinfo();
    }
    return n->value != field_1da0;
}

// from server: 57% by atomic.potato
// roc 2008-06 004cb480  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb480
//
// 004cb480  8b442404             mov eax, dword ptr [esp + 4]
// 004cb484  53                   push ebx
// 004cb485  8b5820               mov ebx, dword ptr [eax + 0x20]
// 004cb488  56                   push esi
// 004cb489  8b701c               mov esi, dword ptr [eax + 0x1c]
// 004cb48c  57                   push edi
// 004cb48d  8bf9                 mov edi, ecx
// 004cb48f  85f6                 test esi, esi
// 004cb491  7555                 jne 0x4cb4e8
// 004cb493  ff1590288000         call dword ptr [0x802890]
// 004cb499  33c0                 xor eax, eax
// 004cb49b  3b5814               cmp ebx, dword ptr [eax + 0x14]
// 004cb49e  7506                 jne 0x4cb4a6
// 004cb4a0  ff1590288000         call dword ptr [0x802890]
// 004cb4a6  8b1b                 mov ebx, dword ptr [ebx]
// 004cb4a8  8b4710               mov eax, dword ptr [edi + 0x10]
// 004cb4ab  55                   push ebp
// 004cb4ac  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 004cb4af  85f6                 test esi, esi
// 004cb4b1  7404                 je 0x4cb4b7
// 004cb4b3  3bf0                 cmp esi, eax
// 004cb4b5  7406                 je 0x4cb4bd
// 004cb4b7  ff1590288000         call dword ptr [0x802890]
// 004cb4bd  3bdd                 cmp ebx, ebp
// 004cb4bf  5d                   pop ebp
// 004cb4c0  752e                 jne 0x4cb4f0
// 004cb4c2  8b4724               mov eax, dword ptr [edi + 0x24]
// 004cb4c5  8b7f10               mov edi, dword ptr [edi + 0x10]
// 004cb4c8  8b30                 mov esi, dword ptr [eax]
// 004cb4ca  85ff                 test edi, edi
// 004cb4cc  751e                 jne 0x4cb4ec
// 004cb4ce  ff1590288000         call dword ptr [0x802890]
// 004cb4d4  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004cb4d7  7506                 jne 0x4cb4df
// 004cb4d9  ff1590288000         call dword ptr [0x802890]
// 004cb4df  8b4608               mov eax, dword ptr [esi + 8]
// 004cb4e2  5f                   pop edi
// 004cb4e3  5e                   pop esi
// 004cb4e4  5b                   pop ebx
// 004cb4e5  c20400               ret 4
// 004cb4e8  8b06                 mov eax, dword ptr [esi]
// 004cb4ea  ebaf                 jmp 0x4cb49b
// 004cb4ec  8b3f                 mov edi, dword ptr [edi]
// 004cb4ee  ebe4                 jmp 0x4cb4d4
// 004cb4f0  85f6                 test esi, esi
// 004cb4f2  751a                 jne 0x4cb50e
// 004cb4f4  ff1590288000         call dword ptr [0x802890]
// 004cb4fa  3b5e14               cmp ebx, dword ptr [esi + 0x14]
// 004cb4fd  7506                 jne 0x4cb505
// 004cb4ff  ff1590288000         call dword ptr [0x802890]
// 004cb505  8b4308               mov eax, dword ptr [ebx + 8]
// 004cb508  5f                   pop edi
// 004cb509  5e                   pop esi
// 004cb50a  5b                   pop ebx
// 004cb50b  c20400               ret 4
// 004cb50e  8b36                 mov esi, dword ptr [esi]
// 004cb510  ebe8                 jmp 0x4cb4fa

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
};

struct Tree {
    char pad0[0x10];
    Node* header;
    char pad1[4];
    Node* root;
};

struct S {
    char pad0[0x10];
    Node* field10;
    char pad1[8];
    Node* field1c;
    Node* field20;
    Node* field24;
    Node* f(void* arg);
};

Node* S::f(void* arg) {
    Node* a = *(Node**)((char*)arg + 0x20);
    Node* b = *(Node**)((char*)arg + 0x1c);
    Node* c;
    if (b == 0) {
        _invalid_parameter_noinfo();
        c = 0;
        if (a == *(Node**)((char*)c + 0x14)) {
            _invalid_parameter_noinfo();
        }
        a = a->left;
    } else {
        c = b->left;
    }
    Node* d = field10;
    Node* e = field24;
    if (b != 0 && b != d) {
        _invalid_parameter_noinfo();
    }
    if (a != e) {
        if (b == 0) {
            _invalid_parameter_noinfo();
            if (a == *(Node**)((char*)b + 0x14)) {
                _invalid_parameter_noinfo();
            }
            return a->right;
        }
        b = b->left;
        if (a == *(Node**)((char*)b + 0x14)) {
            _invalid_parameter_noinfo();
        }
        return a->right;
    }
    Node* f = field24;
    Node* g = field10;
    Node* h = f->left;
    if (g != 0) {
        g = g->left;
    } else {
        _invalid_parameter_noinfo();
    }
    if (h == *(Node**)((char*)g + 0x14)) {
        _invalid_parameter_noinfo();
    }
    return h->right;
}

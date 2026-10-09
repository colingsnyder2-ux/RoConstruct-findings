// from server: 91% by colin
// roc 2007-08 00433350  unit: RBX::CMarshalWindow  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433350
//
// 00433350  8b5104               mov edx, dword ptr [ecx + 4]
// 00433353  8b4204               mov eax, dword ptr [edx + 4]
// 00433356  80781500             cmp byte ptr [eax + 0x15], 0
// 0043335a  56                   push esi
// 0043335b  57                   push edi
// 0043335c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00433360  7516                 jne 0x433378
// 00433362  8b37                 mov esi, dword ptr [edi]
// 00433364  3b700c               cmp esi, dword ptr [eax + 0xc]
// 00433367  7306                 jae 0x43336f
// 00433369  8bd0                 mov edx, eax
// 0043336b  8b00                 mov eax, dword ptr [eax]
// 0043336d  eb03                 jmp 0x433372
// 0043336f  8b4008               mov eax, dword ptr [eax + 8]
// 00433372  80781500             cmp byte ptr [eax + 0x15], 0
// 00433376  74ec                 je 0x433364
// 00433378  8b7104               mov esi, dword ptr [ecx + 4]
// 0043337b  8b4604               mov eax, dword ptr [esi + 4]
// 0043337e  80781500             cmp byte ptr [eax + 0x15], 0
// 00433382  7516                 jne 0x43339a
// 00433384  8b3f                 mov edi, dword ptr [edi]
// 00433386  39780c               cmp dword ptr [eax + 0xc], edi
// 00433389  7305                 jae 0x433390
// 0043338b  8b4008               mov eax, dword ptr [eax + 8]
// 0043338e  eb04                 jmp 0x433394
// 00433390  8bf0                 mov esi, eax
// 00433392  8b00                 mov eax, dword ptr [eax]
// 00433394  80781500             cmp byte ptr [eax + 0x15], 0
// 00433398  74ec                 je 0x433386
// 0043339a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043339e  5f                   pop edi
// 0043339f  897004               mov dword ptr [eax + 4], esi
// 004333a2  8908                 mov dword ptr [eax], ecx
// 004333a4  894808               mov dword ptr [eax + 8], ecx
// 004333a7  89500c               mov dword ptr [eax + 0xc], edx
// 004333aa  5e                   pop esi
// 004333ab  c20800               ret 8

struct RBX_CMarshalWindow_Node {
    RBX_CMarshalWindow_Node* left;
    RBX_CMarshalWindow_Node* parent;
    RBX_CMarshalWindow_Node* right;
    unsigned int key;
    char pad[5];
    char color;
};

struct RBX_CMarshalWindow_Tree {
    char pad0[4];
    RBX_CMarshalWindow_Node* header;
};

struct RBX_CMarshalWindow {
    char pad0[4];
    RBX_CMarshalWindow_Tree* tree;
    void lower_bound(RBX_CMarshalWindow_Node** out, int* key);
};

void RBX_CMarshalWindow::lower_bound(RBX_CMarshalWindow_Node** out, int* key)
{
    RBX_CMarshalWindow_Node* x = tree->header->parent;
    RBX_CMarshalWindow_Node* y = tree->header;
    while (x->color == 0)
    {
        if (*key < x->key)
        {
            y = x;
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }
    RBX_CMarshalWindow_Node* z = tree->header->parent;
    RBX_CMarshalWindow_Node* w = tree->header;
    while (z->color == 0)
    {
        if (z->key < *key)
        {
            z = z->right;
        }
        else
        {
            w = z;
            z = z->left;
        }
    }
    out[1] = w;
    out[0] = (RBX_CMarshalWindow_Node*)this;
    out[2] = (RBX_CMarshalWindow_Node*)this;
    out[3] = y;
}

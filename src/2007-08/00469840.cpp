// from server: 58% by colin
// roc 2007-08 00469840  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00469840
//
// 00469840  8b442404             mov eax, dword ptr [esp + 4]
// 00469844  83ec08               sub esp, 8
// 00469847  53                   push ebx
// 00469848  55                   push ebp
// 00469849  56                   push esi
// 0046984a  57                   push edi
// 0046984b  8d7148               lea esi, [ecx + 0x48]
// 0046984e  50                   push eax
// 0046984f  8d4c2414             lea ecx, [esp + 0x14]
// 00469853  51                   push ecx
// 00469854  8bce                 mov ecx, esi
// 00469856  e815251500           call 0x5bbd70
// 0046985b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046985f  85ff                 test edi, edi
// 00469861  8b5e04               mov ebx, dword ptr [esi + 4]
// 00469864  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0046986a  7404                 je 0x469870
// 0046986c  3bfe                 cmp edi, esi
// 0046986e  7402                 je 0x469872
// 00469870  ffd5                 call ebp
// 00469872  8b742414             mov esi, dword ptr [esp + 0x14]
// 00469876  3bf3                 cmp esi, ebx
// 00469878  741a                 je 0x469894
// 0046987a  85ff                 test edi, edi
// 0046987c  7502                 jne 0x469880
// 0046987e  ffd5                 call ebp
// 00469880  3b7704               cmp esi, dword ptr [edi + 4]
// 00469883  7502                 jne 0x469887
// 00469885  ffd5                 call ebp
// 00469887  8b4628               mov eax, dword ptr [esi + 0x28]
// 0046988a  5f                   pop edi
// 0046988b  5e                   pop esi
// 0046988c  5d                   pop ebp
// 0046988d  5b                   pop ebx
// 0046988e  83c408               add esp, 8
// 00469891  c20400               ret 4
// 00469894  5f                   pop edi
// 00469895  5e                   pop esi
// 00469896  5d                   pop ebp
// 00469897  33c0                 xor eax, eax
// 00469899  5b                   pop ebx
// 0046989a  83c408               add esp, 8
// 0046989d  c20400               ret 4

struct LDraw2RobloxColorMap {
    char pad[0x48];
    struct Node {
        char pad0[4];
        Node* parent;
        char pad1[0x20];
        int value;
    };
    Node* head;
    int lookup(int key);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int LDraw2RobloxColorMap::lookup(int key)
{
    Node* sentinel = (Node*)((char*)this + 0x48);
    Node* result;
    Node* tmp;
    Node* node;
    Node* parent;

    // call 0x5bbd70 - some tree lookup helper
    // signature: (Node** out, int* key, Node* sentinel)
    // We approximate with a local declaration
    extern void __stdcall tree_lookup(Node** out, int* key, Node* sentinel);
    tree_lookup(&result, &key, sentinel);

    node = result;
    parent = sentinel->parent;

    if (node != 0 && node != sentinel) {
        _invalid_parameter_noinfo();
    }

    tmp = result;
    if (tmp != parent) {
        if (node == 0) {
            _invalid_parameter_noinfo();
        }
        if (tmp == node->parent) {
            _invalid_parameter_noinfo();
        }
        return tmp->value;
    }
    return 0;
}

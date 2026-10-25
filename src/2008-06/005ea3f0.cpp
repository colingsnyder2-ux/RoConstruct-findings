// from server: 93% by king_originala
// roc 2008-06 005ea3f0  unit: RBX::PhysicsService  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ea3f0
//
// 005ea3f0  83ec18               sub esp, 0x18
// 005ea3f3  53                   push ebx
// 005ea3f4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005ea3f8  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 005ea3fb  57                   push edi
// 005ea3fc  8bf9                 mov edi, ecx
// 005ea3fe  83e801               sub eax, 1
// 005ea401  897c2408             mov dword ptr [esp + 8], edi
// 005ea405  8944240c             mov dword ptr [esp + 0xc], eax
// 005ea409  0f889f000000         js 0x5ea4ae
// 005ea40f  55                   push ebp
// 005ea410  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005ea414  56                   push esi
// 005ea415  eb04                 jmp 0x5ea41b
// 005ea417  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005ea41b  50                   push eax
// 005ea41c  8bcb                 mov ecx, ebx
// 005ea41e  e8bdd6ffff           call 0x5e7ae0
// 005ea423  8bf0                 mov esi, eax
// 005ea425  8b06                 mov eax, dword ptr [esi]
// 005ea427  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ea42a  8bce                 mov ecx, esi
// 005ea42c  ffd2                 call edx
// 005ea42e  83f809               cmp eax, 9
// 005ea431  7468                 je 0x5ea49b
// 005ea433  83f805               cmp eax, 5
// 005ea436  7463                 je 0x5ea49b
// 005ea438  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ea43b  3bd8                 cmp ebx, eax
// 005ea43d  7503                 jne 0x5ea442
// 005ea43f  8b4610               mov eax, dword ptr [esi + 0x10]
// 005ea442  89442430             mov dword ptr [esp + 0x30], eax
// 005ea446  85ed                 test ebp, ebp
// 005ea448  743a                 je 0x5ea484
// 005ea44a  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005ea44d  8b5d00               mov ebx, dword ptr [ebp]
// 005ea450  8d4c2430             lea ecx, [esp + 0x30]
// 005ea454  51                   push ecx
// 005ea455  8d542424             lea edx, [esp + 0x24]
// 005ea459  52                   push edx
// 005ea45a  8bcd                 mov ecx, ebp
// 005ea45c  89442424             mov dword ptr [esp + 0x24], eax
// 005ea460  e8fb3becff           call 0x4ae060
// 005ea465  8bf8                 mov edi, eax
// 005ea467  8b07                 mov eax, dword ptr [edi]
// 005ea469  85c0                 test eax, eax
// 005ea46b  7404                 je 0x5ea471
// 005ea46d  3bc3                 cmp eax, ebx
// 005ea46f  7406                 je 0x5ea477
// 005ea471  ff1590288000         call dword ptr [0x802890]
// 005ea477  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ea47b  394704               cmp dword ptr [edi + 4], eax
// 005ea47e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ea482  7517                 jne 0x5ea49b
// 005ea484  56                   push esi
// 005ea485  8d4f20               lea ecx, [edi + 0x20]
// 005ea488  c687a500000001       mov byte ptr [edi + 0xa5], 1
// 005ea48f  e83cf5ffff           call 0x5e99d0
// 005ea494  c687a500000000       mov byte ptr [edi + 0xa5], 0
// 005ea49b  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ea49f  83e801               sub eax, 1
// 005ea4a2  89442414             mov dword ptr [esp + 0x14], eax
// 005ea4a6  0f896bffffff         jns 0x5ea417
// 005ea4ac  5e                   pop esi
// 005ea4ad  5d                   pop ebp
// 005ea4ae  5f                   pop edi
// 005ea4af  5b                   pop ebx
// 005ea4b0  83c418               add esp, 0x18
// 005ea4b3  c20800               ret 8

struct Geometry {
    char data[0x3c];
    int count;
    int getFaceIndex(int index);
};

struct Node {
    int (__thiscall **vtable)(Node *);
    char data[8];
    Geometry *first;
    Geometry *second;
};

struct Iterator {
    void *owner;
    void *position;
};

struct Filter {
    void *owner;
    char data[0x14];
    void *endPosition;
    Iterator *find(Iterator *result, Geometry *const *key);
};

struct Collection {
    void remove(Node *node);
};

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct S {
    char data[0x20];
    Collection collection;
    char padding[0x84];
    unsigned char changing;
    void f(Geometry *geometry, Filter *filter);
};

void S::f(Geometry *geometry, Filter *filter)
{
    for (int index = geometry->count - 1; index >= 0; --index) {
        Node *node = reinterpret_cast<Node *>(geometry->getFaceIndex(index));
        int type = node->vtable[5](node);
        if (type == 9 || type == 5)
            continue;

        Geometry *other = geometry == node->first ? node->second : node->first;

        if (filter) {
            Iterator end;
            end.owner = filter->owner;
            end.position = filter->endPosition;

            Iterator storage;
            Iterator *found = filter->find(&storage, &other);
            if (!found->owner || found->owner != end.owner)
                _invalid_parameter_noinfo();
            if (found->position != end.position)
                continue;
        }

        changing = 1;
        collection.remove(node);
        changing = 0;
    }
}

// from server: 70% by colin
// roc 2008-06 005d37d0  unit: RBX::SpawnLocation  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d37d0
//
// 005d37d0  6aff                 push -1
// 005d37d2  64a100000000         mov eax, dword ptr fs:[0]
// 005d37d8  68a07f7d00           push 0x7d7fa0
// 005d37dd  50                   push eax
// 005d37de  64892500000000       mov dword ptr fs:[0], esp
// 005d37e5  83ec54               sub esp, 0x54
// 005d37e8  53                   push ebx
// 005d37e9  55                   push ebp
// 005d37ea  56                   push esi
// 005d37eb  57                   push edi
// 005d37ec  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 005d37f0  8bf1                 mov esi, ecx
// 005d37f2  85ff                 test edi, edi
// 005d37f4  0f85ce000000         jne 0x5d38c8
// 005d37fa  33c9                 xor ecx, ecx
// 005d37fc  894c2428             mov dword ptr [esp + 0x28], ecx
// 005d3800  b8c01e5d00           mov eax, 0x5d1ec0
// 005d3805  8d4c2424             lea ecx, [esp + 0x24]
// 005d3809  89442424             mov dword ptr [esp + 0x24], eax
// 005d380d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005d3811  33d2                 xor edx, edx
// 005d3813  51                   push ecx
// 005d3814  8d4c2440             lea ecx, [esp + 0x40]
// 005d3818  89542430             mov dword ptr [esp + 0x30], edx
// 005d381c  89442434             mov dword ptr [esp + 0x34], eax
// 005d3820  89742438             mov dword ptr [esp + 0x38], esi
// 005d3824  e837f2ffff           call 0x5d2a60
// 005d3829  897c246c             mov dword ptr [esp + 0x6c], edi
// 005d382d  85f6                 test esi, esi
// 005d382f  7405                 je 0x5d3836
// 005d3831  8d4614               lea eax, [esi + 0x14]
// 005d3834  eb02                 jmp 0x5d3838
// 005d3836  33c0                 xor eax, eax
// 005d3838  6a0a                 push 0xa
// 005d383a  8d542440             lea edx, [esp + 0x40]
// 005d383e  52                   push edx
// 005d383f  50                   push eax
// 005d3840  8d442420             lea eax, [esp + 0x20]
// 005d3844  50                   push eax
// 005d3845  b964619700           mov ecx, 0x976164
// 005d384a  e8f1faecff           call 0x4a3340
// 005d384f  50                   push eax
// 005d3850  8d8eec030000         lea ecx, [esi + 0x3ec]
// 005d3856  c644247001           mov byte ptr [esp + 0x70], 1
// 005d385b  e8e01cfcff           call 0x595540
// 005d3860  8d4c2414             lea ecx, [esp + 0x14]
// 005d3864  c644246c00           mov byte ptr [esp + 0x6c], 0
// 005d3869  e8021bfcff           call 0x595370
// 005d386e  8d4c243c             lea ecx, [esp + 0x3c]
// 005d3872  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 005d387a  e891beecff           call 0x49f710
// 005d387f  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 005d3883  85c9                 test ecx, ecx
// 005d3885  7407                 je 0x5d388e
// 005d3887  e814fbffff           call 0x5d33a0
// 005d388c  eb02                 jmp 0x5d3890
// 005d388e  33c0                 xor eax, eax
// 005d3890  8ba844010000         mov ebp, dword ptr [eax + 0x144]
// 005d3896  8b5504               mov edx, dword ptr [ebp + 4]
// 005d3899  8db830010000         lea edi, [eax + 0x130]
// 005d389f  8d4c2410             lea ecx, [esp + 0x10]
// 005d38a3  51                   push ecx
// 005d38a4  52                   push edx
// 005d38a5  55                   push ebp
// 005d38a6  8bcf                 mov ecx, edi
// 005d38a8  8974241c             mov dword ptr [esp + 0x1c], esi
// 005d38ac  e8ff970700           call 0x64d0b0
// 005d38b1  6a01                 push 1
// 005d38b3  8bcf                 mov ecx, edi
// 005d38b5  8bd8                 mov ebx, eax
// 005d38b7  e804ee0100           call 0x5f26c0
// 005d38bc  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 005d38c0  895d04               mov dword ptr [ebp + 4], ebx
// 005d38c3  8b4304               mov eax, dword ptr [ebx + 4]
// 005d38c6  8918                 mov dword ptr [eax], ebx
// 005d38c8  837c247800           cmp dword ptr [esp + 0x78], 0
// 005d38cd  752e                 jne 0x5d38fd
// 005d38cf  8d8eec030000         lea ecx, [esi + 0x3ec]
// 005d38d5  e85619fcff           call 0x595230
// 005d38da  85ff                 test edi, edi
// 005d38dc  7409                 je 0x5d38e7
// 005d38de  8bcf                 mov ecx, edi
// 005d38e0  e84bd3ebff           call 0x490c30
// 005d38e5  eb02                 jmp 0x5d38e9
// 005d38e7  33c0                 xor eax, eax
// 005d38e9  8d4c2474             lea ecx, [esp + 0x74]
// 005d38ed  51                   push ecx
// 005d38ee  8d8830010000         lea ecx, [eax + 0x130]
// 005d38f4  89742478             mov dword ptr [esp + 0x78], esi
// 005d38f8  e8c3870500           call 0x62c0c0
// 005d38fd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005d3901  5f                   pop edi
// 005d3902  5e                   pop esi
// 005d3903  5d                   pop ebp
// 005d3904  64890d00000000       mov dword ptr fs:[0], ecx
// 005d390b  5b                   pop ebx
// 005d390c  83c460               add esp, 0x60
// 005d390f  c20800               ret 8

// from server: 69% by king_originala
// roc 2008-06 005d37d0  unit: RBX::SpawnLocation  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d37d0
//
// 005d37d0  6aff                 push -1
// 005d37d2  64a100000000         mov eax, dword ptr fs:[0]
// 005d37d8  68a07f7d00           push 0x7d7fa0
// 005d37dd  50                   push eax
// 005d37de  64892500000000       mov dword ptr fs:[0], esp
// 005d37e5  83ec54               sub esp, 0x54
// 005d37e8  53                   push ebx
// 005d37e9  55                   push ebp
// 005d37ea  56                   push esi
// 005d37eb  57                   push edi
// 005d37ec  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 005d37f0  8bf1                 mov esi, ecx
// 005d37f2  85ff                 test edi, edi
// 005d37f4  0f85ce000000         jne 0x5d38c8
// 005d37fa  33c9                 xor ecx, ecx
// 005d37fc  894c2428             mov dword ptr [esp + 0x28], ecx
// 005d3800  b8c01e5d00           mov eax, 0x5d1ec0
// 005d3805  8d4c2424             lea ecx, [esp + 0x24]
// 005d3809  89442424             mov dword ptr [esp + 0x24], eax
// 005d380d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005d3811  33d2                 xor edx, edx
// 005d3813  51                   push ecx
// 005d3814  8d4c2440             lea ecx, [esp + 0x40]
// 005d3818  89542430             mov dword ptr [esp + 0x30], edx
// 005d381c  89442434             mov dword ptr [esp + 0x34], eax
// 005d3820  89742438             mov dword ptr [esp + 0x38], esi
// 005d3824  e837f2ffff           call 0x5d2a60
// 005d3829  897c246c             mov dword ptr [esp + 0x6c], edi
// 005d382d  85f6                 test esi, esi
// 005d382f  7405                 je 0x5d3836
// 005d3831  8d4614               lea eax, [esi + 0x14]
// 005d3834  eb02                 jmp 0x5d3838
// 005d3836  33c0                 xor eax, eax
// 005d3838  6a0a                 push 0xa
// 005d383a  8d542440             lea edx, [esp + 0x40]
// 005d383e  52                   push edx
// 005d383f  50                   push eax
// 005d3840  8d442420             lea eax, [esp + 0x20]
// 005d3844  50                   push eax
// 005d3845  b964619700           mov ecx, 0x976164
// 005d384a  e8f1faecff           call 0x4a3340
// 005d384f  50                   push eax
// 005d3850  8d8eec030000         lea ecx, [esi + 0x3ec]
// 005d3856  c644247001           mov byte ptr [esp + 0x70], 1
// 005d385b  e8e01cfcff           call 0x595540
// 005d3860  8d4c2414             lea ecx, [esp + 0x14]
// 005d3864  c644246c00           mov byte ptr [esp + 0x6c], 0
// 005d3869  e8021bfcff           call 0x595370
// 005d386e  8d4c243c             lea ecx, [esp + 0x3c]
// 005d3872  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 005d387a  e891beecff           call 0x49f710
// 005d387f  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 005d3883  85c9                 test ecx, ecx
// 005d3885  7407                 je 0x5d388e
// 005d3887  e814fbffff           call 0x5d33a0
// 005d388c  eb02                 jmp 0x5d3890
// 005d388e  33c0                 xor eax, eax
// 005d3890  8ba844010000         mov ebp, dword ptr [eax + 0x144]
// 005d3896  8b5504               mov edx, dword ptr [ebp + 4]
// 005d3899  8db830010000         lea edi, [eax + 0x130]
// 005d389f  8d4c2410             lea ecx, [esp + 0x10]
// 005d38a3  51                   push ecx
// 005d38a4  52                   push edx
// 005d38a5  55                   push ebp
// 005d38a6  8bcf                 mov ecx, edi
// 005d38a8  8974241c             mov dword ptr [esp + 0x1c], esi
// 005d38ac  e8ff970700           call 0x64d0b0
// 005d38b1  6a01                 push 1
// 005d38b3  8bcf                 mov ecx, edi
// 005d38b5  8bd8                 mov ebx, eax
// 005d38b7  e804ee0100           call 0x5f26c0
// 005d38bc  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 005d38c0  895d04               mov dword ptr [ebp + 4], ebx
// 005d38c3  8b4304               mov eax, dword ptr [ebx + 4]
// 005d38c6  8918                 mov dword ptr [eax], ebx
// 005d38c8  837c247800           cmp dword ptr [esp + 0x78], 0
// 005d38cd  752e                 jne 0x5d38fd
// 005d38cf  8d8eec030000         lea ecx, [esi + 0x3ec]
// 005d38d5  e85619fcff           call 0x595230
// 005d38da  85ff                 test edi, edi
// 005d38dc  7409                 je 0x5d38e7
// 005d38de  8bcf                 mov ecx, edi
// 005d38e0  e84bd3ebff           call 0x490c30
// 005d38e5  eb02                 jmp 0x5d38e9
// 005d38e7  33c0                 xor eax, eax
// 005d38e9  8d4c2474             lea ecx, [esp + 0x74]
// 005d38ed  51                   push ecx
// 005d38ee  8d8830010000         lea ecx, [eax + 0x130]
// 005d38f4  89742478             mov dword ptr [esp + 0x78], esi
// 005d38f8  e8c3870500           call 0x62c0c0
// 005d38fd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005d3901  5f                   pop edi
// 005d3902  5e                   pop esi
// 005d3903  5d                   pop ebp
// 005d3904  64890d00000000       mov dword ptr fs:[0], ecx
// 005d390b  5b                   pop ebx
// 005d390c  83c460               add esp, 0x60
// 005d390f  c20800               ret 8

struct SpawnLocation;

struct Binding {
    void (__thiscall SpawnLocation::*method)();
    SpawnLocation* object;
};

struct Function {
    char storage[40];
    Function(const Binding&);
    ~Function();
};

struct Connection {
    char storage[12];
    ~Connection();
    Connection& operator=(const Connection&);
    void disconnect();
};

struct Registry {
    Connection connect(void*, const Function&, int);
};
extern Registry registry;

struct Node {
    Node* previous;
    Node* next;
};

struct Removal {
    void* context;
    SpawnLocation* object;
};

struct List {
    char storage[20];
    Node* head;
    Node* create(Node*, Node*, SpawnLocation* const*);
    void grow(unsigned int);
    void remove(const Removal&);
};

struct Service {
    char storage[0x130];
    List list;
};

struct Parent {
    Service* oldService();
    Service* newService();
};

struct SpawnLocation {
    char storage[0x3ec];
    Connection connection;
    void callback();
    void changeParent(Parent*, Parent*);
};

void SpawnLocation::changeParent(Parent* oldParent, Parent* newParent)
{
    if (!oldParent) {
        {
            Binding binding;
            binding.method = &SpawnLocation::callback;
            binding.object = this;
            Function function(binding);
            connection = registry.connect(
                this ? reinterpret_cast<char*>(this) + 0x14 : 0,
                function, 10);
        }

        Service* service = newParent ? newParent->newService() : 0;
        List* list = &service->list;
        Node* head = list->head;
        SpawnLocation* object = this;
        Node* node = list->create(head, head->next, &object);
        list->grow(1);
        head->next = node;
        node->next->previous = node;
    }

    if (!newParent) {
        connection.disconnect();
        Service* service = oldParent ? oldParent->oldService() : 0;
        Removal removal;
        removal.context = oldParent;
        removal.object = this;
        service->list.remove(removal);
    }
}

// from server: 41% by colin
// from server: 39% by colin
// roc 2008-06 004ef430  unit: RBX::ViewNew::Texture  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ef430
//
// 004ef430  6aff                 push -1
// 004ef432  687bac7c00           push 0x7cac7b
// 004ef437  64a100000000         mov eax, dword ptr fs:[0]
// 004ef43d  50                   push eax
// 004ef43e  64892500000000       mov dword ptr fs:[0], esp
// 004ef445  83ec1c               sub esp, 0x1c
// 004ef448  53                   push ebx
// 004ef449  55                   push ebp
// 004ef44a  56                   push esi
// 004ef44b  57                   push edi
// 004ef44c  684c279700           push 0x97274c
// 004ef451  68d0984d00           push 0x4d98d0
// 004ef456  e8d57e0600           call 0x557330
// 004ef45b  8b3534279700         mov esi, dword ptr [0x972734]
// 004ef461  8d4e10               lea ecx, [esi + 0x10]
// 004ef464  83c408               add esp, 8
// 004ef467  894c2414             mov dword ptr [esp + 0x14], ecx
// 004ef46b  e8203c0700           call 0x563090
// 004ef470  c644241801           mov byte ptr [esp + 0x18], 1
// 004ef475  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ef479  33d2                 xor edx, edx
// 004ef47b  8bc1                 mov eax, ecx
// 004ef47d  f7760c               div dword ptr [esi + 0xc]
// 004ef480  8b4608               mov eax, dword ptr [esi + 8]
// 004ef483  33db                 xor ebx, ebx
// 004ef485  895c2434             mov dword ptr [esp + 0x34], ebx
// 004ef489  8b0490               mov eax, dword ptr [eax + edx*4]
// 004ef48c  3bc3                 cmp eax, ebx
// 004ef48e  7410                 je 0x4ef4a0
// 004ef490  3908                 cmp dword ptr [eax], ecx
// 004ef492  7505                 jne 0x4ef499
// 004ef494  394804               cmp dword ptr [eax + 4], ecx
// 004ef497  7461                 je 0x4ef4fa
// 004ef499  8b4018               mov eax, dword ptr [eax + 0x18]
// 004ef49c  3bc3                 cmp eax, ebx
// 004ef49e  75f0                 jne 0x4ef490
// 004ef4a0  6a10                 push 0x10
// 004ef4a2  bf146c8200           mov edi, 0x826c14
// 004ef4a7  6a28                 push 0x28
// 004ef4a9  897c2424             mov dword ptr [esp + 0x24], edi
// 004ef4ad  c74424300a000000     mov dword ptr [esp + 0x30], 0xa
// 004ef4b5  895c2428             mov dword ptr [esp + 0x28], ebx
// 004ef4b9  e8c2900100           call 0x508580
// 004ef4be  6a28                 push 0x28
// 004ef4c0  53                   push ebx
// 004ef4c1  50                   push eax
// 004ef4c2  89442438             mov dword ptr [esp + 0x38], eax
// 004ef4c6  e865950100           call 0x508a30
// 004ef4cb  83c414               add esp, 0x14
// 004ef4ce  8d4c241c             lea ecx, [esp + 0x1c]
// 004ef4d2  51                   push ecx
// 004ef4d3  8d542444             lea edx, [esp + 0x44]
// 004ef4d7  52                   push edx
// 004ef4d8  8bce                 mov ecx, esi
// 004ef4da  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004ef4df  e8aca3ffff           call 0x4e9890
// 004ef4e4  8d4c241c             lea ecx, [esp + 0x1c]
// 004ef4e8  c644243400           mov byte ptr [esp + 0x34], 0
// 004ef4ed  897c241c             mov dword ptr [esp + 0x1c], edi
// 004ef4f1  e83a89feff           call 0x4d7e30
// 004ef4f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ef4fa  33d2                 xor edx, edx
// 004ef4fc  8bc1                 mov eax, ecx
// 004ef4fe  f7760c               div dword ptr [esi + 0xc]
// 004ef501  8b4608               mov eax, dword ptr [esi + 8]
// 004ef504  8b0490               mov eax, dword ptr [eax + edx*4]
// 004ef507  3bc3                 cmp eax, ebx
// 004ef509  7415                 je 0x4ef520
// 004ef50b  eb03                 jmp 0x4ef510
// 004ef50d  8d4900               lea ecx, [ecx]
// 004ef510  3908                 cmp dword ptr [eax], ecx
// 004ef512  7505                 jne 0x4ef519
// 004ef514  394804               cmp dword ptr [eax + 4], ecx
// 004ef517  7407                 je 0x4ef520
// 004ef519  8b4018               mov eax, dword ptr [eax + 0x18]
// 004ef51c  3bc3                 cmp eax, ebx
// 004ef51e  75f0                 jne 0x4ef510
// 004ef520  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 004ef524  8d7808               lea edi, [eax + 8]
// 004ef527  55                   push ebp
// 004ef528  8bcf                 mov ecx, edi
// 004ef52a  e8a167ffff           call 0x4e5cd0
// 004ef52f  84c0                 test al, al
// 004ef531  7542                 jne 0x4ef575
// 004ef533  68702a5000           push 0x502a70
// 004ef538  6810084f00           push 0x4f0810
// 004ef53d  6a01                 push 1
// 004ef53f  6a04                 push 4
// 004ef541  8d4c2420             lea ecx, [esp + 0x20]
// 004ef545  51                   push ecx
// 004ef546  e84d201b00           call 0x6a1598
// 004ef54b  8d542410             lea edx, [esp + 0x10]
// 004ef54f  52                   push edx
// 004ef550  55                   push ebp
// 004ef551  8bcf                 mov ecx, edi
// 004ef553  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004ef558  e8d380ffff           call 0x4e7630
// 004ef55d  68702a5000           push 0x502a70
// 004ef562  6a01                 push 1
// 004ef564  6a04                 push 4
// 004ef566  8d44241c             lea eax, [esp + 0x1c]
// 004ef56a  50                   push eax
// 004ef56b  c644244400           mov byte ptr [esp + 0x44], 0
// 004ef570  e8e6201b00           call 0x6a165b
// 004ef575  55                   push ebp
// 004ef576  8bcf                 mov ecx, edi
// 004ef578  e8b367ffff           call 0x4e5d30
// 004ef57d  8bf8                 mov edi, eax
// 004ef57f  8b1f                 mov ebx, dword ptr [edi]
// 004ef581  85db                 test ebx, ebx
// 004ef583  0f859a000000         jne 0x4ef623
// 004ef589  688c000000           push 0x8c
// 004ef58e  e88d131b00           call 0x6a0920
// 004ef593  83c404               add esp, 4
// 004ef596  89442410             mov dword ptr [esp + 0x10], eax
// 004ef59a  c644243403           mov byte ptr [esp + 0x34], 3
// 004ef59f  85c0                 test eax, eax
// 004ef5a1  740f                 je 0x4ef5b2
// 004ef5a3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ef5a7  51                   push ecx
// 004ef5a8  55                   push ebp
// 004ef5a9  8bc8                 mov ecx, eax
// 004ef5ab  e8d00b0100           call 0x500180
// 004ef5b0  eb02                 jmp 0x4ef5b4
// 004ef5b2  33c0                 xor eax, eax
// 004ef5b4  50                   push eax
// 004ef5b5  8bcf                 mov ecx, edi
// 004ef5b7  c644243800           mov byte ptr [esp + 0x38], 0
// 004ef5bc  8bd8                 mov ebx, eax
// 004ef5be  e8dd990a00           call 0x598fa0
// 004ef5c3  ff465c               inc dword ptr [esi + 0x5c]
// 004ef5c6  8b465c               mov eax, dword ptr [esi + 0x5c]
// 004ef5c9  99                   cdq 
// 004ef5ca  b964000000           mov ecx, 0x64
// 004ef5cf  f7f9                 idiv ecx
// 004ef5d1  85d2                 test edx, edx
// 004ef5d3  754e                 jne 0x4ef623
// 004ef5d5  8b3f                 mov edi, dword ptr [edi]
// 004ef5d7  33f6                 xor esi, esi
// 004ef5d9  89742410             mov dword ptr [esp + 0x10], esi
// 004ef5dd  85ff                 test edi, edi
// 004ef5df  7410                 je 0x4ef5f1
// 004ef5e1  8bf7                 mov esi, edi
// 004ef5e3  83c704               add edi, 4
// 004ef5e6  57                   push edi
// 004ef5e7  89742414             mov dword ptr [esp + 0x14], esi
// 004ef5eb  ff15b0218000         call dword ptr [0x8021b0]
// 004ef5f1  c644243404           mov byte ptr [esp + 0x34], 4
// 004ef5f6  e8f5e0ffff           call 0x4ed6f0
// 004ef5fb  c644243400           mov byte ptr [esp + 0x34], 0
// 004ef600  85f6                 test esi, esi
// 004ef602  741f                 je 0x4ef623
// 004ef604  8d4604               lea eax, [esi + 4]
// 004ef607  50                   push eax
// 004ef608  ff15ac218000         call dword ptr [0x8021ac]
// 004ef60e  85c0                 test eax, eax
// 004ef610  7511                 jne 0x4ef623
// 004ef612  8bce                 mov ecx, esi
// 004ef614  e877b7f6ff           call 0x45ad90
// 004ef619  8b16                 mov edx, dword ptr [esi]
// 004ef61b  8b02                 mov eax, dword ptr [edx]
// 004ef61d  6a01                 push 1
// 004ef61f  8bce                 mov ecx, esi
// 004ef621  ffd0                 call eax
// 004ef623  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ef627  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004ef62f  e8ac3a0700           call 0x5630e0
// 004ef634  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ef638  5f                   pop edi
// 004ef639  5e                   pop esi
// 004ef63a  5d                   pop ebp
// 004ef63b  8bc3                 mov eax, ebx
// 004ef63d  5b                   pop ebx
// 004ef63e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ef645  83c428               add esp, 0x28
// 004ef648  c3                   ret 

#pragma float_control(precise, off)

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(
    void*, unsigned int, int, void (__stdcall *)(void*));

extern "C" long __stdcall InterlockedIncrement(long*);
extern "C" long __stdcall InterlockedDecrement(long*);

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Node {
    unsigned int hash;
    Vector3 key;
    void* value;
    Node* next;
};

struct Block {
    unsigned char padding[8];
    Node** buckets;
    unsigned int capacity;
    unsigned char padding2[0x48];
    int count;
};

struct Texture {
    unsigned char padding[8];
    Block* block;
    void __cdecl insert(unsigned int, const void*);
};

struct Guard {
    void* vtable;
    void* prev;
    int state;
    Guard();
    ~Guard();
};

struct HashEntry {
    unsigned int a;
    unsigned int b;
    unsigned char padding[0x10];
    HashEntry* next;
};

struct HashTable {
    unsigned char padding[8];
    HashEntry** buckets;
    unsigned int capacity;
    unsigned char padding2[0x4c];
    int count;
    void* find(unsigned int);
    void insert(unsigned int, const void*);
};

struct Value {
    void* ptr;
    Value();
    __declspec(dllimport) ~Value() throw();
};

struct Holder {
    void* ptr;
    void* get();
};

struct RefCounted {
    void* vtable;
    void* refptr;
    void release();
};

extern "C" void __cdecl destroy_value_cdecl(void*);

void Texture::insert(unsigned int key, const void* value)
{
    Guard guard;
    HashTable* table = (HashTable*)this->block;

    HashEntry* entry = (HashEntry*)table->find(key);
    if (!entry) {
        Value v;
        table->insert(key, value);
        entry = (HashEntry*)table->find(key);
    }

    if (!((Holder*)&entry->a)->get()) {
        void* p = operator new(4);
        ((Holder*)&entry->a)->ptr = p;
    }

    void* slot = ((Holder*)&entry->a)->get();
    if (!slot) {
        Node* node = (Node*)operator new(0x8c);
        if (node) {
            node->hash = key;
            node->key.x = 0;
            node->key.y = 0;
            node->key.z = 0;
            node->value = 0;
            node->next = 0;
        }
        ((Holder*)&entry->a)->ptr = node;
        InterlockedIncrement((long*)&table->count);
        if (table->count % 100 == 0) {
            RefCounted* r = (RefCounted*)entry->next;
            if (r) {
                InterlockedDecrement((long*)&r->refptr);
                if (!InterlockedDecrement((long*)&r->refptr)) {
                    r->release();
                    (*(void (__thiscall**)(RefCounted*, int))r->vtable)(r, 1);
                }
            }
        }
    }
}

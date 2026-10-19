// from server: 32% by colin
// from server: 31% by colin
// roc 2008-06 004ee030  unit: RBX::ViewNew::Texture  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ee030
//
// 004ee030  6aff                 push -1
// 004ee032  683bab7c00           push 0x7cab3b
// 004ee037  64a100000000         mov eax, dword ptr fs:[0]
// 004ee03d  50                   push eax
// 004ee03e  64892500000000       mov dword ptr fs:[0], esp
// 004ee045  83ec1c               sub esp, 0x1c
// 004ee048  53                   push ebx
// 004ee049  55                   push ebp
// 004ee04a  56                   push esi
// 004ee04b  57                   push edi
// 004ee04c  6850279700           push 0x972750
// 004ee051  6830994d00           push 0x4d9930
// 004ee056  e8d5920600           call 0x557330
// 004ee05b  8b3538279700         mov esi, dword ptr [0x972738]
// 004ee061  8d4e10               lea ecx, [esi + 0x10]
// 004ee064  83c408               add esp, 8
// 004ee067  894c2414             mov dword ptr [esp + 0x14], ecx
// 004ee06b  e820500700           call 0x563090
// 004ee070  c644241801           mov byte ptr [esp + 0x18], 1
// 004ee075  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ee079  33d2                 xor edx, edx
// 004ee07b  8bc1                 mov eax, ecx
// 004ee07d  f7760c               div dword ptr [esi + 0xc]
// 004ee080  8b4608               mov eax, dword ptr [esi + 8]
// 004ee083  33db                 xor ebx, ebx
// 004ee085  895c2434             mov dword ptr [esp + 0x34], ebx
// 004ee089  8b0490               mov eax, dword ptr [eax + edx*4]
// 004ee08c  3bc3                 cmp eax, ebx
// 004ee08e  7410                 je 0x4ee0a0
// 004ee090  3908                 cmp dword ptr [eax], ecx
// 004ee092  7505                 jne 0x4ee099
// 004ee094  394804               cmp dword ptr [eax + 4], ecx
// 004ee097  7461                 je 0x4ee0fa
// 004ee099  8b4018               mov eax, dword ptr [eax + 0x18]
// 004ee09c  3bc3                 cmp eax, ebx
// 004ee09e  75f0                 jne 0x4ee090
// 004ee0a0  6a10                 push 0x10
// 004ee0a2  bf1c6c8200           mov edi, 0x826c1c
// 004ee0a7  6a28                 push 0x28
// 004ee0a9  897c2424             mov dword ptr [esp + 0x24], edi
// 004ee0ad  c74424300a000000     mov dword ptr [esp + 0x30], 0xa
// 004ee0b5  895c2428             mov dword ptr [esp + 0x28], ebx
// 004ee0b9  e8c2a40100           call 0x508580
// 004ee0be  6a28                 push 0x28
// 004ee0c0  53                   push ebx
// 004ee0c1  50                   push eax
// 004ee0c2  89442438             mov dword ptr [esp + 0x38], eax
// 004ee0c6  e865a90100           call 0x508a30
// 004ee0cb  83c414               add esp, 0x14
// 004ee0ce  8d4c241c             lea ecx, [esp + 0x1c]
// 004ee0d2  51                   push ecx
// 004ee0d3  8d542444             lea edx, [esp + 0x44]
// 004ee0d7  52                   push edx
// 004ee0d8  8bce                 mov ecx, esi
// 004ee0da  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004ee0df  e82cb1ffff           call 0x4e9210
// 004ee0e4  8d4c241c             lea ecx, [esp + 0x1c]
// 004ee0e8  c644243400           mov byte ptr [esp + 0x34], 0
// 004ee0ed  897c241c             mov dword ptr [esp + 0x1c], edi
// 004ee0f1  e83a9dfeff           call 0x4d7e30
// 004ee0f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ee0fa  33d2                 xor edx, edx
// 004ee0fc  8bc1                 mov eax, ecx
// 004ee0fe  f7760c               div dword ptr [esi + 0xc]
// 004ee101  8b4608               mov eax, dword ptr [esi + 8]
// 004ee104  8b0490               mov eax, dword ptr [eax + edx*4]
// 004ee107  3bc3                 cmp eax, ebx
// 004ee109  7415                 je 0x4ee120
// 004ee10b  eb03                 jmp 0x4ee110
// 004ee10d  8d4900               lea ecx, [ecx]
// 004ee110  3908                 cmp dword ptr [eax], ecx
// 004ee112  7505                 jne 0x4ee119
// 004ee114  394804               cmp dword ptr [eax + 4], ecx
// 004ee117  7407                 je 0x4ee120
// 004ee119  8b4018               mov eax, dword ptr [eax + 0x18]
// 004ee11c  3bc3                 cmp eax, ebx
// 004ee11e  75f0                 jne 0x4ee110
// 004ee120  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 004ee124  8d7808               lea edi, [eax + 8]
// 004ee127  55                   push ebp
// 004ee128  8bcf                 mov ecx, edi
// 004ee12a  e8a17bffff           call 0x4e5cd0
// 004ee12f  84c0                 test al, al
// 004ee131  7542                 jne 0x4ee175
// 004ee133  68702a5000           push 0x502a70
// 004ee138  6810084f00           push 0x4f0810
// 004ee13d  6a01                 push 1
// 004ee13f  6a04                 push 4
// 004ee141  8d4c2420             lea ecx, [esp + 0x20]
// 004ee145  51                   push ecx
// 004ee146  e84d341b00           call 0x6a1598
// 004ee14b  8d542410             lea edx, [esp + 0x10]
// 004ee14f  52                   push edx
// 004ee150  55                   push ebp
// 004ee151  8bcf                 mov ecx, edi
// 004ee153  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004ee158  e8d394ffff           call 0x4e7630
// 004ee15d  68702a5000           push 0x502a70
// 004ee162  6a01                 push 1
// 004ee164  6a04                 push 4
// 004ee166  8d44241c             lea eax, [esp + 0x1c]
// 004ee16a  50                   push eax
// 004ee16b  c644244400           mov byte ptr [esp + 0x44], 0
// 004ee170  e8e6341b00           call 0x6a165b
// 004ee175  55                   push ebp
// 004ee176  8bcf                 mov ecx, edi
// 004ee178  e8b37bffff           call 0x4e5d30
// 004ee17d  8bf8                 mov edi, eax
// 004ee17f  8b1f                 mov ebx, dword ptr [edi]
// 004ee181  85db                 test ebx, ebx
// 004ee183  0f859a000000         jne 0x4ee223
// 004ee189  688c000000           push 0x8c
// 004ee18e  e88d271b00           call 0x6a0920
// 004ee193  83c404               add esp, 4
// 004ee196  89442410             mov dword ptr [esp + 0x10], eax
// 004ee19a  c644243403           mov byte ptr [esp + 0x34], 3
// 004ee19f  85c0                 test eax, eax
// 004ee1a1  740f                 je 0x4ee1b2
// 004ee1a3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ee1a7  51                   push ecx
// 004ee1a8  55                   push ebp
// 004ee1a9  8bc8                 mov ecx, eax
// 004ee1ab  e8d0950000           call 0x4f7780
// 004ee1b0  eb02                 jmp 0x4ee1b4
// 004ee1b2  33c0                 xor eax, eax
// 004ee1b4  50                   push eax
// 004ee1b5  8bcf                 mov ecx, edi
// 004ee1b7  c644243800           mov byte ptr [esp + 0x38], 0
// 004ee1bc  8bd8                 mov ebx, eax
// 004ee1be  e8ddad0a00           call 0x598fa0
// 004ee1c3  ff465c               inc dword ptr [esi + 0x5c]
// 004ee1c6  8b465c               mov eax, dword ptr [esi + 0x5c]
// 004ee1c9  99                   cdq 
// 004ee1ca  b964000000           mov ecx, 0x64
// 004ee1cf  f7f9                 idiv ecx
// 004ee1d1  85d2                 test edx, edx
// 004ee1d3  754e                 jne 0x4ee223
// 004ee1d5  8b3f                 mov edi, dword ptr [edi]
// 004ee1d7  33f6                 xor esi, esi
// 004ee1d9  89742410             mov dword ptr [esp + 0x10], esi
// 004ee1dd  85ff                 test edi, edi
// 004ee1df  7410                 je 0x4ee1f1
// 004ee1e1  8bf7                 mov esi, edi
// 004ee1e3  83c704               add edi, 4
// 004ee1e6  57                   push edi
// 004ee1e7  89742414             mov dword ptr [esp + 0x14], esi
// 004ee1eb  ff15b0218000         call dword ptr [0x8021b0]
// 004ee1f1  c644243404           mov byte ptr [esp + 0x34], 4
// 004ee1f6  e835e4ffff           call 0x4ec630
// 004ee1fb  c644243400           mov byte ptr [esp + 0x34], 0
// 004ee200  85f6                 test esi, esi
// 004ee202  741f                 je 0x4ee223
// 004ee204  8d4604               lea eax, [esi + 4]
// 004ee207  50                   push eax
// 004ee208  ff15ac218000         call dword ptr [0x8021ac]
// 004ee20e  85c0                 test eax, eax
// 004ee210  7511                 jne 0x4ee223
// 004ee212  8bce                 mov ecx, esi
// 004ee214  e877cbf6ff           call 0x45ad90
// 004ee219  8b16                 mov edx, dword ptr [esi]
// 004ee21b  8b02                 mov eax, dword ptr [edx]
// 004ee21d  6a01                 push 1
// 004ee21f  8bce                 mov ecx, esi
// 004ee221  ffd0                 call eax
// 004ee223  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ee227  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004ee22f  e8ac4e0700           call 0x5630e0
// 004ee234  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ee238  5f                   pop edi
// 004ee239  5e                   pop esi
// 004ee23a  5d                   pop ebp
// 004ee23b  8bc3                 mov eax, ebx
// 004ee23d  5b                   pop ebx
// 004ee23e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee245  83c428               add esp, 0x28
// 004ee248  c3                   ret 

#pragma float_control(precise, off)

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(void*, unsigned int, int, void (__stdcall *)(void*));

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
    unsigned int bucketCount;
    unsigned int count;
    unsigned int pad;
    unsigned int counter;
};

struct Value {
    void* object;
    Value();
    Value(const Value&);
    __declspec(dllimport) ~Value() throw();
    Value& operator=(const Value&);
};

struct Map {
    Block* block;
    unsigned int hash(const Vector3&) const;
    Node* find(const Vector3&) const;
    Node* insert(const Vector3&, const Value&);
    void* operator new(unsigned int);
};

struct RefCounted {
    int refCount;
    void incRef();
    void decRef();
};

struct Texture : RefCounted {
    unsigned int __cdecl f(const Vector3&, const Value&);
};

unsigned int Texture::f(const Vector3& key, const Value& value)
{
    Map* map = *(Map**)0x972738;

    unsigned int hash = key.hashCode();
    unsigned int bucket = hash % map->block->bucketCount;
    Node* node = map->block->buckets[bucket];

    while (node) {
        if (node->hash == hash && node->key.x == key.x && node->key.y == key.y && node->key.z == key.z)
            break;
        node = node->next;
    }

    if (!node) {
        Value v;
        map->insert(key, value);
    }

    Node* found = map->find(key);
    if (!found->value) {
        void* p = operator new(0x8c);
        if (p)
            p = (void*)0;
        found->value = p;
        ++map->block->counter;
        if (map->block->counter % 100 == 0) {
            void* obj = found->value;
            if (obj) {
                void** vt = *(void***)obj;
                ((void (__thiscall*)(void*, int))vt[0])(obj, 1);
            }
        }
    }

    return (unsigned int)found->value;
}

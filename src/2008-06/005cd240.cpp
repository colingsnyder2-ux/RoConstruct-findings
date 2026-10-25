// from server: 100% by tester
// roc 2008-06 005cd240  unit: RBX::VCamera::?$FactoryProduct  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd240
//
// 005cd240  6aff                 push -1
// 005cd242  68a9707d00           push 0x7d70a9
// 005cd247  64a100000000         mov eax, dword ptr fs:[0]
// 005cd24d  50                   push eax
// 005cd24e  64892500000000       mov dword ptr fs:[0], esp
// 005cd255  83ec08               sub esp, 8
// 005cd258  53                   push ebx
// 005cd259  55                   push ebp
// 005cd25a  56                   push esi
// 005cd25b  8bf1                 mov esi, ecx
// 005cd25d  8974240c             mov dword ptr [esp + 0xc], esi
// 005cd261  c70650a48300         mov dword ptr [esi], 0x83a450
// 005cd267  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005cd26a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005cd270  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005cd278  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005cd27b  7602                 jbe 0x5cd27f
// 005cd27d  ffd3                 call ebx
// 005cd27f  57                   push edi
// 005cd280  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005cd283  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005cd286  7602                 jbe 0x5cd28a
// 005cd288  ffd3                 call ebx
// 005cd28a  33db                 xor ebx, ebx
// 005cd28c  3bfd                 cmp edi, ebp
// 005cd28e  7415                 je 0x5cd2a5
// 005cd290  8b0f                 mov ecx, dword ptr [edi]
// 005cd292  3bcb                 cmp ecx, ebx
// 005cd294  7408                 je 0x5cd29e
// 005cd296  8b01                 mov eax, dword ptr [ecx]
// 005cd298  8b10                 mov edx, dword ptr [eax]
// 005cd29a  6a01                 push 1
// 005cd29c  ffd2                 call edx
// 005cd29e  83c704               add edi, 4
// 005cd2a1  3bfd                 cmp edi, ebp
// 005cd2a3  75eb                 jne 0x5cd290
// 005cd2a5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005cd2ab  3bc3                 cmp eax, ebx
// 005cd2ad  7409                 je 0x5cd2b8
// 005cd2af  50                   push eax
// 005cd2b0  e8c5330d00           call 0x6a067a
// 005cd2b5  83c404               add esp, 4
// 005cd2b8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005cd2be  50                   push eax
// 005cd2bf  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005cd2c5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005cd2cb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005cd2d1  e8a4330d00           call 0x6a067a
// 005cd2d6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005cd2dc  83c404               add esp, 4
// 005cd2df  3bc3                 cmp eax, ebx
// 005cd2e1  7409                 je 0x5cd2ec
// 005cd2e3  50                   push eax
// 005cd2e4  e891330d00           call 0x6a067a
// 005cd2e9  83c404               add esp, 4
// 005cd2ec  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005cd2f2  50                   push eax
// 005cd2f3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005cd2f9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005cd2ff  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005cd305  e870330d00           call 0x6a067a
// 005cd30a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005cd310  83c404               add esp, 4
// 005cd313  3bc3                 cmp eax, ebx
// 005cd315  7409                 je 0x5cd320
// 005cd317  50                   push eax
// 005cd318  e85d330d00           call 0x6a067a
// 005cd31d  83c404               add esp, 4
// 005cd320  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005cd326  50                   push eax
// 005cd327  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005cd32d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005cd333  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005cd339  e83c330d00           call 0x6a067a
// 005cd33e  8dbe88000000         lea edi, [esi + 0x88]
// 005cd344  83c404               add esp, 4
// 005cd347  897c2414             mov dword ptr [esp + 0x14], edi
// 005cd34b  8bcf                 mov ecx, edi
// 005cd34d  c644242008           mov byte ptr [esp + 0x20], 8
// 005cd352  e879a4e3ff           call 0x4077d0
// 005cd357  8b3f                 mov edi, dword ptr [edi]
// 005cd359  57                   push edi
// 005cd35a  e81b330d00           call 0x6a067a
// 005cd35f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005cd362  83c404               add esp, 4
// 005cd365  5f                   pop edi
// 005cd366  3bc3                 cmp eax, ebx
// 005cd368  7409                 je 0x5cd373
// 005cd36a  50                   push eax
// 005cd36b  e80a330d00           call 0x6a067a
// 005cd370  83c404               add esp, 4
// 005cd373  8b4670               mov eax, dword ptr [esi + 0x70]
// 005cd376  50                   push eax
// 005cd377  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005cd37a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005cd380  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005cd386  e8ef320d00           call 0x6a067a
// 005cd38b  83c404               add esp, 4
// 005cd38e  8d4e50               lea ecx, [esi + 0x50]
// 005cd391  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cd396  e8e569f8ff           call 0x553d80
// 005cd39b  8d4e30               lea ecx, [esi + 0x30]
// 005cd39e  885c241c             mov byte ptr [esp + 0x1c], bl
// 005cd3a2  e8d969f8ff           call 0x553d80
// 005cd3a7  8bce                 mov ecx, esi
// 005cd3a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005cd3b1  e8caecf9ff           call 0x56c080
// 005cd3b6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cd3ba  5e                   pop esi
// 005cd3bb  5d                   pop ebp
// 005cd3bc  5b                   pop ebx
// 005cd3bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd3c4  83c414               add esp, 0x14
// 005cd3c7  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
void __cdecl operator delete(void *) throw();

struct Object {
    virtual ~Object();
};

struct Base {
    unsigned char padding[24];
    Object **first;
    Object **last;
    unsigned char tail[12];
    virtual ~Base();
};

struct String {
    unsigned char data[32];
    ~String();
};

struct Storage {
    void *allocation;
    unsigned int reserved[2];
    ~Storage();
};

__forceinline Storage::~Storage()
{
    void *memory = allocation;
    ::operator delete(memory);
}

struct Array {
    Storage storage;
    void *first;
    void *last;
    void *limit;
    ~Array();
};

__forceinline Array::~Array()
{
    if (first)
        ::operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

struct Elements {
    Storage storage;
    void *first;
    void *last;
    void *limit;
    void clear();
    ~Elements();
};

__forceinline Elements::~Elements()
{
    clear();
}

struct S : Base {
    String string1;
    String string2;
    Array array1;
    Elements elements;
    Array array2;
    Array array3;
    Array array4;
    virtual ~S();
};

S::~S()
{
    Object **end = last;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    if (first > end)
        invalid();

    Object **current = first;
    if (current > last)
        invalid();

    while (current != end) {
        if (*current)
            delete *current;
        ++current;
    }
}

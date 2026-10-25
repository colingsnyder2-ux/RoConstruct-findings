// from server: 100% by tester
// roc 2008-06 0059c1f0  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c1f0
//
// 0059c1f0  6aff                 push -1
// 0059c1f2  68a9707d00           push 0x7d70a9
// 0059c1f7  64a100000000         mov eax, dword ptr fs:[0]
// 0059c1fd  50                   push eax
// 0059c1fe  64892500000000       mov dword ptr fs:[0], esp
// 0059c205  83ec08               sub esp, 8
// 0059c208  53                   push ebx
// 0059c209  55                   push ebp
// 0059c20a  56                   push esi
// 0059c20b  8bf1                 mov esi, ecx
// 0059c20d  8974240c             mov dword ptr [esp + 0xc], esi
// 0059c211  c706c42d8300         mov dword ptr [esi], 0x832dc4
// 0059c217  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0059c21a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0059c220  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0059c228  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0059c22b  7602                 jbe 0x59c22f
// 0059c22d  ffd3                 call ebx
// 0059c22f  57                   push edi
// 0059c230  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0059c233  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0059c236  7602                 jbe 0x59c23a
// 0059c238  ffd3                 call ebx
// 0059c23a  33db                 xor ebx, ebx
// 0059c23c  3bfd                 cmp edi, ebp
// 0059c23e  7415                 je 0x59c255
// 0059c240  8b0f                 mov ecx, dword ptr [edi]
// 0059c242  3bcb                 cmp ecx, ebx
// 0059c244  7408                 je 0x59c24e
// 0059c246  8b01                 mov eax, dword ptr [ecx]
// 0059c248  8b10                 mov edx, dword ptr [eax]
// 0059c24a  6a01                 push 1
// 0059c24c  ffd2                 call edx
// 0059c24e  83c704               add edi, 4
// 0059c251  3bfd                 cmp edi, ebp
// 0059c253  75eb                 jne 0x59c240
// 0059c255  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0059c25b  3bc3                 cmp eax, ebx
// 0059c25d  7409                 je 0x59c268
// 0059c25f  50                   push eax
// 0059c260  e815441000           call 0x6a067a
// 0059c265  83c404               add esp, 4
// 0059c268  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0059c26e  50                   push eax
// 0059c26f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0059c275  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0059c27b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0059c281  e8f4431000           call 0x6a067a
// 0059c286  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0059c28c  83c404               add esp, 4
// 0059c28f  3bc3                 cmp eax, ebx
// 0059c291  7409                 je 0x59c29c
// 0059c293  50                   push eax
// 0059c294  e8e1431000           call 0x6a067a
// 0059c299  83c404               add esp, 4
// 0059c29c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0059c2a2  50                   push eax
// 0059c2a3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0059c2a9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0059c2af  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0059c2b5  e8c0431000           call 0x6a067a
// 0059c2ba  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0059c2c0  83c404               add esp, 4
// 0059c2c3  3bc3                 cmp eax, ebx
// 0059c2c5  7409                 je 0x59c2d0
// 0059c2c7  50                   push eax
// 0059c2c8  e8ad431000           call 0x6a067a
// 0059c2cd  83c404               add esp, 4
// 0059c2d0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0059c2d6  50                   push eax
// 0059c2d7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0059c2dd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0059c2e3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0059c2e9  e88c431000           call 0x6a067a
// 0059c2ee  8dbe88000000         lea edi, [esi + 0x88]
// 0059c2f4  83c404               add esp, 4
// 0059c2f7  897c2414             mov dword ptr [esp + 0x14], edi
// 0059c2fb  8bcf                 mov ecx, edi
// 0059c2fd  c644242008           mov byte ptr [esp + 0x20], 8
// 0059c302  e8c9b4e6ff           call 0x4077d0
// 0059c307  8b3f                 mov edi, dword ptr [edi]
// 0059c309  57                   push edi
// 0059c30a  e86b431000           call 0x6a067a
// 0059c30f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059c312  83c404               add esp, 4
// 0059c315  5f                   pop edi
// 0059c316  3bc3                 cmp eax, ebx
// 0059c318  7409                 je 0x59c323
// 0059c31a  50                   push eax
// 0059c31b  e85a431000           call 0x6a067a
// 0059c320  83c404               add esp, 4
// 0059c323  8b4670               mov eax, dword ptr [esi + 0x70]
// 0059c326  50                   push eax
// 0059c327  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0059c32a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0059c330  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0059c336  e83f431000           call 0x6a067a
// 0059c33b  83c404               add esp, 4
// 0059c33e  8d4e50               lea ecx, [esi + 0x50]
// 0059c341  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059c346  e8357afbff           call 0x553d80
// 0059c34b  8d4e30               lea ecx, [esi + 0x30]
// 0059c34e  885c241c             mov byte ptr [esp + 0x1c], bl
// 0059c352  e8297afbff           call 0x553d80
// 0059c357  8bce                 mov ecx, esi
// 0059c359  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0059c361  e81afdfcff           call 0x56c080
// 0059c366  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059c36a  5e                   pop esi
// 0059c36b  5d                   pop ebp
// 0059c36c  5b                   pop ebx
// 0059c36d  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c374  83c414               add esp, 0x14
// 0059c377  c3                   ret 

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

// from server: 100% by tester
// roc 2008-06 005baeb0  unit: RBX::Soundscape::W4ReverbType::?$EnumDesc  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005baeb0
//
// 005baeb0  6aff                 push -1
// 005baeb2  68a9707d00           push 0x7d70a9
// 005baeb7  64a100000000         mov eax, dword ptr fs:[0]
// 005baebd  50                   push eax
// 005baebe  64892500000000       mov dword ptr fs:[0], esp
// 005baec5  83ec08               sub esp, 8
// 005baec8  53                   push ebx
// 005baec9  55                   push ebp
// 005baeca  56                   push esi
// 005baecb  8bf1                 mov esi, ecx
// 005baecd  8974240c             mov dword ptr [esp + 0xc], esi
// 005baed1  c706407a8300         mov dword ptr [esi], 0x837a40
// 005baed7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005baeda  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005baee0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005baee8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005baeeb  7602                 jbe 0x5baeef
// 005baeed  ffd3                 call ebx
// 005baeef  57                   push edi
// 005baef0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005baef3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005baef6  7602                 jbe 0x5baefa
// 005baef8  ffd3                 call ebx
// 005baefa  33db                 xor ebx, ebx
// 005baefc  3bfd                 cmp edi, ebp
// 005baefe  7415                 je 0x5baf15
// 005baf00  8b0f                 mov ecx, dword ptr [edi]
// 005baf02  3bcb                 cmp ecx, ebx
// 005baf04  7408                 je 0x5baf0e
// 005baf06  8b01                 mov eax, dword ptr [ecx]
// 005baf08  8b10                 mov edx, dword ptr [eax]
// 005baf0a  6a01                 push 1
// 005baf0c  ffd2                 call edx
// 005baf0e  83c704               add edi, 4
// 005baf11  3bfd                 cmp edi, ebp
// 005baf13  75eb                 jne 0x5baf00
// 005baf15  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005baf1b  3bc3                 cmp eax, ebx
// 005baf1d  7409                 je 0x5baf28
// 005baf1f  50                   push eax
// 005baf20  e855570e00           call 0x6a067a
// 005baf25  83c404               add esp, 4
// 005baf28  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005baf2e  50                   push eax
// 005baf2f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005baf35  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005baf3b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005baf41  e834570e00           call 0x6a067a
// 005baf46  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005baf4c  83c404               add esp, 4
// 005baf4f  3bc3                 cmp eax, ebx
// 005baf51  7409                 je 0x5baf5c
// 005baf53  50                   push eax
// 005baf54  e821570e00           call 0x6a067a
// 005baf59  83c404               add esp, 4
// 005baf5c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005baf62  50                   push eax
// 005baf63  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005baf69  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005baf6f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005baf75  e800570e00           call 0x6a067a
// 005baf7a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005baf80  83c404               add esp, 4
// 005baf83  3bc3                 cmp eax, ebx
// 005baf85  7409                 je 0x5baf90
// 005baf87  50                   push eax
// 005baf88  e8ed560e00           call 0x6a067a
// 005baf8d  83c404               add esp, 4
// 005baf90  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005baf96  50                   push eax
// 005baf97  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005baf9d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005bafa3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005bafa9  e8cc560e00           call 0x6a067a
// 005bafae  8dbe88000000         lea edi, [esi + 0x88]
// 005bafb4  83c404               add esp, 4
// 005bafb7  897c2414             mov dword ptr [esp + 0x14], edi
// 005bafbb  8bcf                 mov ecx, edi
// 005bafbd  c644242008           mov byte ptr [esp + 0x20], 8
// 005bafc2  e809c8e4ff           call 0x4077d0
// 005bafc7  8b3f                 mov edi, dword ptr [edi]
// 005bafc9  57                   push edi
// 005bafca  e8ab560e00           call 0x6a067a
// 005bafcf  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005bafd2  83c404               add esp, 4
// 005bafd5  5f                   pop edi
// 005bafd6  3bc3                 cmp eax, ebx
// 005bafd8  7409                 je 0x5bafe3
// 005bafda  50                   push eax
// 005bafdb  e89a560e00           call 0x6a067a
// 005bafe0  83c404               add esp, 4
// 005bafe3  8b4670               mov eax, dword ptr [esi + 0x70]
// 005bafe6  50                   push eax
// 005bafe7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005bafea  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005baff0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005baff6  e87f560e00           call 0x6a067a
// 005baffb  83c404               add esp, 4
// 005baffe  8d4e50               lea ecx, [esi + 0x50]
// 005bb001  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005bb006  e8758df9ff           call 0x553d80
// 005bb00b  8d4e30               lea ecx, [esi + 0x30]
// 005bb00e  885c241c             mov byte ptr [esp + 0x1c], bl
// 005bb012  e8698df9ff           call 0x553d80
// 005bb017  8bce                 mov ecx, esi
// 005bb019  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bb021  e85a10fbff           call 0x56c080
// 005bb026  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bb02a  5e                   pop esi
// 005bb02b  5d                   pop ebp
// 005bb02c  5b                   pop ebx
// 005bb02d  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb034  83c414               add esp, 0x14
// 005bb037  c3                   ret 

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

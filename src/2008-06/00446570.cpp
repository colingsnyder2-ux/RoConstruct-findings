// from server: 100% by tester
// roc 2008-06 00446570  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446570
//
// 00446570  6aff                 push -1
// 00446572  68a9707d00           push 0x7d70a9
// 00446577  64a100000000         mov eax, dword ptr fs:[0]
// 0044657d  50                   push eax
// 0044657e  64892500000000       mov dword ptr fs:[0], esp
// 00446585  83ec08               sub esp, 8
// 00446588  53                   push ebx
// 00446589  55                   push ebp
// 0044658a  56                   push esi
// 0044658b  8bf1                 mov esi, ecx
// 0044658d  8974240c             mov dword ptr [esp + 0xc], esi
// 00446591  c706c85e8100         mov dword ptr [esi], 0x815ec8
// 00446597  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0044659a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004465a0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 004465a8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 004465ab  7602                 jbe 0x4465af
// 004465ad  ffd3                 call ebx
// 004465af  57                   push edi
// 004465b0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004465b3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 004465b6  7602                 jbe 0x4465ba
// 004465b8  ffd3                 call ebx
// 004465ba  33db                 xor ebx, ebx
// 004465bc  3bfd                 cmp edi, ebp
// 004465be  7415                 je 0x4465d5
// 004465c0  8b0f                 mov ecx, dword ptr [edi]
// 004465c2  3bcb                 cmp ecx, ebx
// 004465c4  7408                 je 0x4465ce
// 004465c6  8b01                 mov eax, dword ptr [ecx]
// 004465c8  8b10                 mov edx, dword ptr [eax]
// 004465ca  6a01                 push 1
// 004465cc  ffd2                 call edx
// 004465ce  83c704               add edi, 4
// 004465d1  3bfd                 cmp edi, ebp
// 004465d3  75eb                 jne 0x4465c0
// 004465d5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 004465db  3bc3                 cmp eax, ebx
// 004465dd  7409                 je 0x4465e8
// 004465df  50                   push eax
// 004465e0  e895a02500           call 0x6a067a
// 004465e5  83c404               add esp, 4
// 004465e8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004465ee  50                   push eax
// 004465ef  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 004465f5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 004465fb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446601  e874a02500           call 0x6a067a
// 00446606  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0044660c  83c404               add esp, 4
// 0044660f  3bc3                 cmp eax, ebx
// 00446611  7409                 je 0x44661c
// 00446613  50                   push eax
// 00446614  e861a02500           call 0x6a067a
// 00446619  83c404               add esp, 4
// 0044661c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00446622  50                   push eax
// 00446623  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00446629  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0044662f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00446635  e840a02500           call 0x6a067a
// 0044663a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446640  83c404               add esp, 4
// 00446643  3bc3                 cmp eax, ebx
// 00446645  7409                 je 0x446650
// 00446647  50                   push eax
// 00446648  e82da02500           call 0x6a067a
// 0044664d  83c404               add esp, 4
// 00446650  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00446656  50                   push eax
// 00446657  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0044665d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00446663  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00446669  e80ca02500           call 0x6a067a
// 0044666e  8dbe88000000         lea edi, [esi + 0x88]
// 00446674  83c404               add esp, 4
// 00446677  897c2414             mov dword ptr [esp + 0x14], edi
// 0044667b  8bcf                 mov ecx, edi
// 0044667d  c644242008           mov byte ptr [esp + 0x20], 8
// 00446682  e84911fcff           call 0x4077d0
// 00446687  8b3f                 mov edi, dword ptr [edi]
// 00446689  57                   push edi
// 0044668a  e8eb9f2500           call 0x6a067a
// 0044668f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446692  83c404               add esp, 4
// 00446695  5f                   pop edi
// 00446696  3bc3                 cmp eax, ebx
// 00446698  7409                 je 0x4466a3
// 0044669a  50                   push eax
// 0044669b  e8da9f2500           call 0x6a067a
// 004466a0  83c404               add esp, 4
// 004466a3  8b4670               mov eax, dword ptr [esi + 0x70]
// 004466a6  50                   push eax
// 004466a7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004466aa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 004466b0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 004466b6  e8bf9f2500           call 0x6a067a
// 004466bb  83c404               add esp, 4
// 004466be  8d4e50               lea ecx, [esi + 0x50]
// 004466c1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004466c6  e8b5d61000           call 0x553d80
// 004466cb  8d4e30               lea ecx, [esi + 0x30]
// 004466ce  885c241c             mov byte ptr [esp + 0x1c], bl
// 004466d2  e8a9d61000           call 0x553d80
// 004466d7  8bce                 mov ecx, esi
// 004466d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004466e1  e89a591200           call 0x56c080
// 004466e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004466ea  5e                   pop esi
// 004466eb  5d                   pop ebp
// 004466ec  5b                   pop ebx
// 004466ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004466f4  83c414               add esp, 0x14
// 004466f7  c3                   ret 

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

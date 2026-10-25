// from server: 100% by tester
// roc 2008-06 00564870  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564870
//
// 00564870  6aff                 push -1
// 00564872  68a9707d00           push 0x7d70a9
// 00564877  64a100000000         mov eax, dword ptr fs:[0]
// 0056487d  50                   push eax
// 0056487e  64892500000000       mov dword ptr fs:[0], esp
// 00564885  83ec08               sub esp, 8
// 00564888  53                   push ebx
// 00564889  55                   push ebp
// 0056488a  56                   push esi
// 0056488b  8bf1                 mov esi, ecx
// 0056488d  8974240c             mov dword ptr [esp + 0xc], esi
// 00564891  c70608e38200         mov dword ptr [esi], 0x82e308
// 00564897  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0056489a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005648a0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005648a8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005648ab  7602                 jbe 0x5648af
// 005648ad  ffd3                 call ebx
// 005648af  57                   push edi
// 005648b0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005648b3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005648b6  7602                 jbe 0x5648ba
// 005648b8  ffd3                 call ebx
// 005648ba  33db                 xor ebx, ebx
// 005648bc  3bfd                 cmp edi, ebp
// 005648be  7415                 je 0x5648d5
// 005648c0  8b0f                 mov ecx, dword ptr [edi]
// 005648c2  3bcb                 cmp ecx, ebx
// 005648c4  7408                 je 0x5648ce
// 005648c6  8b01                 mov eax, dword ptr [ecx]
// 005648c8  8b10                 mov edx, dword ptr [eax]
// 005648ca  6a01                 push 1
// 005648cc  ffd2                 call edx
// 005648ce  83c704               add edi, 4
// 005648d1  3bfd                 cmp edi, ebp
// 005648d3  75eb                 jne 0x5648c0
// 005648d5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005648db  3bc3                 cmp eax, ebx
// 005648dd  7409                 je 0x5648e8
// 005648df  50                   push eax
// 005648e0  e895bd1300           call 0x6a067a
// 005648e5  83c404               add esp, 4
// 005648e8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005648ee  50                   push eax
// 005648ef  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005648f5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005648fb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00564901  e874bd1300           call 0x6a067a
// 00564906  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0056490c  83c404               add esp, 4
// 0056490f  3bc3                 cmp eax, ebx
// 00564911  7409                 je 0x56491c
// 00564913  50                   push eax
// 00564914  e861bd1300           call 0x6a067a
// 00564919  83c404               add esp, 4
// 0056491c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00564922  50                   push eax
// 00564923  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00564929  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0056492f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00564935  e840bd1300           call 0x6a067a
// 0056493a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00564940  83c404               add esp, 4
// 00564943  3bc3                 cmp eax, ebx
// 00564945  7409                 je 0x564950
// 00564947  50                   push eax
// 00564948  e82dbd1300           call 0x6a067a
// 0056494d  83c404               add esp, 4
// 00564950  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00564956  50                   push eax
// 00564957  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0056495d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00564963  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00564969  e80cbd1300           call 0x6a067a
// 0056496e  8dbe88000000         lea edi, [esi + 0x88]
// 00564974  83c404               add esp, 4
// 00564977  897c2414             mov dword ptr [esp + 0x14], edi
// 0056497b  8bcf                 mov ecx, edi
// 0056497d  c644242008           mov byte ptr [esp + 0x20], 8
// 00564982  e8492eeaff           call 0x4077d0
// 00564987  8b3f                 mov edi, dword ptr [edi]
// 00564989  57                   push edi
// 0056498a  e8ebbc1300           call 0x6a067a
// 0056498f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00564992  83c404               add esp, 4
// 00564995  5f                   pop edi
// 00564996  3bc3                 cmp eax, ebx
// 00564998  7409                 je 0x5649a3
// 0056499a  50                   push eax
// 0056499b  e8dabc1300           call 0x6a067a
// 005649a0  83c404               add esp, 4
// 005649a3  8b4670               mov eax, dword ptr [esi + 0x70]
// 005649a6  50                   push eax
// 005649a7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005649aa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005649b0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005649b6  e8bfbc1300           call 0x6a067a
// 005649bb  83c404               add esp, 4
// 005649be  8d4e50               lea ecx, [esi + 0x50]
// 005649c1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005649c6  e8b5f3feff           call 0x553d80
// 005649cb  8d4e30               lea ecx, [esi + 0x30]
// 005649ce  885c241c             mov byte ptr [esp + 0x1c], bl
// 005649d2  e8a9f3feff           call 0x553d80
// 005649d7  8bce                 mov ecx, esi
// 005649d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005649e1  e89a760000           call 0x56c080
// 005649e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005649ea  5e                   pop esi
// 005649eb  5d                   pop ebp
// 005649ec  5b                   pop ebx
// 005649ed  64890d00000000       mov dword ptr fs:[0], ecx
// 005649f4  83c414               add esp, 0x14
// 005649f7  c3                   ret 

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

// from server: 100% by tester
// roc 2008-06 005646e0  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005646e0
//
// 005646e0  6aff                 push -1
// 005646e2  68a9707d00           push 0x7d70a9
// 005646e7  64a100000000         mov eax, dword ptr fs:[0]
// 005646ed  50                   push eax
// 005646ee  64892500000000       mov dword ptr fs:[0], esp
// 005646f5  83ec08               sub esp, 8
// 005646f8  53                   push ebx
// 005646f9  55                   push ebp
// 005646fa  56                   push esi
// 005646fb  8bf1                 mov esi, ecx
// 005646fd  8974240c             mov dword ptr [esp + 0xc], esi
// 00564701  c706fce28200         mov dword ptr [esi], 0x82e2fc
// 00564707  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0056470a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00564710  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00564718  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0056471b  7602                 jbe 0x56471f
// 0056471d  ffd3                 call ebx
// 0056471f  57                   push edi
// 00564720  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00564723  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00564726  7602                 jbe 0x56472a
// 00564728  ffd3                 call ebx
// 0056472a  33db                 xor ebx, ebx
// 0056472c  3bfd                 cmp edi, ebp
// 0056472e  7415                 je 0x564745
// 00564730  8b0f                 mov ecx, dword ptr [edi]
// 00564732  3bcb                 cmp ecx, ebx
// 00564734  7408                 je 0x56473e
// 00564736  8b01                 mov eax, dword ptr [ecx]
// 00564738  8b10                 mov edx, dword ptr [eax]
// 0056473a  6a01                 push 1
// 0056473c  ffd2                 call edx
// 0056473e  83c704               add edi, 4
// 00564741  3bfd                 cmp edi, ebp
// 00564743  75eb                 jne 0x564730
// 00564745  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0056474b  3bc3                 cmp eax, ebx
// 0056474d  7409                 je 0x564758
// 0056474f  50                   push eax
// 00564750  e825bf1300           call 0x6a067a
// 00564755  83c404               add esp, 4
// 00564758  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0056475e  50                   push eax
// 0056475f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00564765  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0056476b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00564771  e804bf1300           call 0x6a067a
// 00564776  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0056477c  83c404               add esp, 4
// 0056477f  3bc3                 cmp eax, ebx
// 00564781  7409                 je 0x56478c
// 00564783  50                   push eax
// 00564784  e8f1be1300           call 0x6a067a
// 00564789  83c404               add esp, 4
// 0056478c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00564792  50                   push eax
// 00564793  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00564799  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0056479f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005647a5  e8d0be1300           call 0x6a067a
// 005647aa  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005647b0  83c404               add esp, 4
// 005647b3  3bc3                 cmp eax, ebx
// 005647b5  7409                 je 0x5647c0
// 005647b7  50                   push eax
// 005647b8  e8bdbe1300           call 0x6a067a
// 005647bd  83c404               add esp, 4
// 005647c0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005647c6  50                   push eax
// 005647c7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005647cd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005647d3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005647d9  e89cbe1300           call 0x6a067a
// 005647de  8dbe88000000         lea edi, [esi + 0x88]
// 005647e4  83c404               add esp, 4
// 005647e7  897c2414             mov dword ptr [esp + 0x14], edi
// 005647eb  8bcf                 mov ecx, edi
// 005647ed  c644242008           mov byte ptr [esp + 0x20], 8
// 005647f2  e8d92feaff           call 0x4077d0
// 005647f7  8b3f                 mov edi, dword ptr [edi]
// 005647f9  57                   push edi
// 005647fa  e87bbe1300           call 0x6a067a
// 005647ff  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00564802  83c404               add esp, 4
// 00564805  5f                   pop edi
// 00564806  3bc3                 cmp eax, ebx
// 00564808  7409                 je 0x564813
// 0056480a  50                   push eax
// 0056480b  e86abe1300           call 0x6a067a
// 00564810  83c404               add esp, 4
// 00564813  8b4670               mov eax, dword ptr [esi + 0x70]
// 00564816  50                   push eax
// 00564817  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0056481a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00564820  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00564826  e84fbe1300           call 0x6a067a
// 0056482b  83c404               add esp, 4
// 0056482e  8d4e50               lea ecx, [esi + 0x50]
// 00564831  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00564836  e845f5feff           call 0x553d80
// 0056483b  8d4e30               lea ecx, [esi + 0x30]
// 0056483e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00564842  e839f5feff           call 0x553d80
// 00564847  8bce                 mov ecx, esi
// 00564849  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00564851  e82a780000           call 0x56c080
// 00564856  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056485a  5e                   pop esi
// 0056485b  5d                   pop ebp
// 0056485c  5b                   pop ebx
// 0056485d  64890d00000000       mov dword ptr fs:[0], ecx
// 00564864  83c414               add esp, 0x14
// 00564867  c3                   ret 

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

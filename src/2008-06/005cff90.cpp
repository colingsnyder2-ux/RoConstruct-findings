// from server: 100% by tester
// roc 2008-06 005cff90  unit: RBX::VHopperBin::?$FactoryProduct  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cff90
//
// 005cff90  6aff                 push -1
// 005cff92  68a9707d00           push 0x7d70a9
// 005cff97  64a100000000         mov eax, dword ptr fs:[0]
// 005cff9d  50                   push eax
// 005cff9e  64892500000000       mov dword ptr fs:[0], esp
// 005cffa5  83ec08               sub esp, 8
// 005cffa8  53                   push ebx
// 005cffa9  55                   push ebp
// 005cffaa  56                   push esi
// 005cffab  8bf1                 mov esi, ecx
// 005cffad  8974240c             mov dword ptr [esp + 0xc], esi
// 005cffb1  c706b4ae8300         mov dword ptr [esi], 0x83aeb4
// 005cffb7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005cffba  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005cffc0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005cffc8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005cffcb  7602                 jbe 0x5cffcf
// 005cffcd  ffd3                 call ebx
// 005cffcf  57                   push edi
// 005cffd0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005cffd3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005cffd6  7602                 jbe 0x5cffda
// 005cffd8  ffd3                 call ebx
// 005cffda  33db                 xor ebx, ebx
// 005cffdc  3bfd                 cmp edi, ebp
// 005cffde  7415                 je 0x5cfff5
// 005cffe0  8b0f                 mov ecx, dword ptr [edi]
// 005cffe2  3bcb                 cmp ecx, ebx
// 005cffe4  7408                 je 0x5cffee
// 005cffe6  8b01                 mov eax, dword ptr [ecx]
// 005cffe8  8b10                 mov edx, dword ptr [eax]
// 005cffea  6a01                 push 1
// 005cffec  ffd2                 call edx
// 005cffee  83c704               add edi, 4
// 005cfff1  3bfd                 cmp edi, ebp
// 005cfff3  75eb                 jne 0x5cffe0
// 005cfff5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005cfffb  3bc3                 cmp eax, ebx
// 005cfffd  7409                 je 0x5d0008
// 005cffff  50                   push eax
// 005d0000  e875060d00           call 0x6a067a
// 005d0005  83c404               add esp, 4
// 005d0008  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005d000e  50                   push eax
// 005d000f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005d0015  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005d001b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005d0021  e854060d00           call 0x6a067a
// 005d0026  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005d002c  83c404               add esp, 4
// 005d002f  3bc3                 cmp eax, ebx
// 005d0031  7409                 je 0x5d003c
// 005d0033  50                   push eax
// 005d0034  e841060d00           call 0x6a067a
// 005d0039  83c404               add esp, 4
// 005d003c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005d0042  50                   push eax
// 005d0043  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005d0049  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005d004f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005d0055  e820060d00           call 0x6a067a
// 005d005a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005d0060  83c404               add esp, 4
// 005d0063  3bc3                 cmp eax, ebx
// 005d0065  7409                 je 0x5d0070
// 005d0067  50                   push eax
// 005d0068  e80d060d00           call 0x6a067a
// 005d006d  83c404               add esp, 4
// 005d0070  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005d0076  50                   push eax
// 005d0077  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005d007d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005d0083  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005d0089  e8ec050d00           call 0x6a067a
// 005d008e  8dbe88000000         lea edi, [esi + 0x88]
// 005d0094  83c404               add esp, 4
// 005d0097  897c2414             mov dword ptr [esp + 0x14], edi
// 005d009b  8bcf                 mov ecx, edi
// 005d009d  c644242008           mov byte ptr [esp + 0x20], 8
// 005d00a2  e82977e3ff           call 0x4077d0
// 005d00a7  8b3f                 mov edi, dword ptr [edi]
// 005d00a9  57                   push edi
// 005d00aa  e8cb050d00           call 0x6a067a
// 005d00af  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005d00b2  83c404               add esp, 4
// 005d00b5  5f                   pop edi
// 005d00b6  3bc3                 cmp eax, ebx
// 005d00b8  7409                 je 0x5d00c3
// 005d00ba  50                   push eax
// 005d00bb  e8ba050d00           call 0x6a067a
// 005d00c0  83c404               add esp, 4
// 005d00c3  8b4670               mov eax, dword ptr [esi + 0x70]
// 005d00c6  50                   push eax
// 005d00c7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005d00ca  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005d00d0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005d00d6  e89f050d00           call 0x6a067a
// 005d00db  83c404               add esp, 4
// 005d00de  8d4e50               lea ecx, [esi + 0x50]
// 005d00e1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005d00e6  e8953cf8ff           call 0x553d80
// 005d00eb  8d4e30               lea ecx, [esi + 0x30]
// 005d00ee  885c241c             mov byte ptr [esp + 0x1c], bl
// 005d00f2  e8893cf8ff           call 0x553d80
// 005d00f7  8bce                 mov ecx, esi
// 005d00f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d0101  e87abff9ff           call 0x56c080
// 005d0106  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d010a  5e                   pop esi
// 005d010b  5d                   pop ebp
// 005d010c  5b                   pop ebx
// 005d010d  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0114  83c414               add esp, 0x14
// 005d0117  c3                   ret 

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

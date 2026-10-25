// from server: 100% by tester
// roc 2008-06 00446bb0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446bb0
//
// 00446bb0  6aff                 push -1
// 00446bb2  68a9707d00           push 0x7d70a9
// 00446bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00446bbd  50                   push eax
// 00446bbe  64892500000000       mov dword ptr fs:[0], esp
// 00446bc5  83ec08               sub esp, 8
// 00446bc8  53                   push ebx
// 00446bc9  55                   push ebp
// 00446bca  56                   push esi
// 00446bcb  8bf1                 mov esi, ecx
// 00446bcd  8974240c             mov dword ptr [esp + 0xc], esi
// 00446bd1  c706f85e8100         mov dword ptr [esi], 0x815ef8
// 00446bd7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 00446bda  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00446be0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00446be8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 00446beb  7602                 jbe 0x446bef
// 00446bed  ffd3                 call ebx
// 00446bef  57                   push edi
// 00446bf0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00446bf3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00446bf6  7602                 jbe 0x446bfa
// 00446bf8  ffd3                 call ebx
// 00446bfa  33db                 xor ebx, ebx
// 00446bfc  3bfd                 cmp edi, ebp
// 00446bfe  7415                 je 0x446c15
// 00446c00  8b0f                 mov ecx, dword ptr [edi]
// 00446c02  3bcb                 cmp ecx, ebx
// 00446c04  7408                 je 0x446c0e
// 00446c06  8b01                 mov eax, dword ptr [ecx]
// 00446c08  8b10                 mov edx, dword ptr [eax]
// 00446c0a  6a01                 push 1
// 00446c0c  ffd2                 call edx
// 00446c0e  83c704               add edi, 4
// 00446c11  3bfd                 cmp edi, ebp
// 00446c13  75eb                 jne 0x446c00
// 00446c15  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00446c1b  3bc3                 cmp eax, ebx
// 00446c1d  7409                 je 0x446c28
// 00446c1f  50                   push eax
// 00446c20  e8559a2500           call 0x6a067a
// 00446c25  83c404               add esp, 4
// 00446c28  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00446c2e  50                   push eax
// 00446c2f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00446c35  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 00446c3b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446c41  e8349a2500           call 0x6a067a
// 00446c46  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00446c4c  83c404               add esp, 4
// 00446c4f  3bc3                 cmp eax, ebx
// 00446c51  7409                 je 0x446c5c
// 00446c53  50                   push eax
// 00446c54  e8219a2500           call 0x6a067a
// 00446c59  83c404               add esp, 4
// 00446c5c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00446c62  50                   push eax
// 00446c63  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00446c69  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00446c6f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00446c75  e8009a2500           call 0x6a067a
// 00446c7a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446c80  83c404               add esp, 4
// 00446c83  3bc3                 cmp eax, ebx
// 00446c85  7409                 je 0x446c90
// 00446c87  50                   push eax
// 00446c88  e8ed992500           call 0x6a067a
// 00446c8d  83c404               add esp, 4
// 00446c90  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00446c96  50                   push eax
// 00446c97  899eac000000         mov dword ptr [esi + 0xac], ebx
// 00446c9d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00446ca3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00446ca9  e8cc992500           call 0x6a067a
// 00446cae  8dbe88000000         lea edi, [esi + 0x88]
// 00446cb4  83c404               add esp, 4
// 00446cb7  897c2414             mov dword ptr [esp + 0x14], edi
// 00446cbb  8bcf                 mov ecx, edi
// 00446cbd  c644242008           mov byte ptr [esp + 0x20], 8
// 00446cc2  e8090bfcff           call 0x4077d0
// 00446cc7  8b3f                 mov edi, dword ptr [edi]
// 00446cc9  57                   push edi
// 00446cca  e8ab992500           call 0x6a067a
// 00446ccf  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446cd2  83c404               add esp, 4
// 00446cd5  5f                   pop edi
// 00446cd6  3bc3                 cmp eax, ebx
// 00446cd8  7409                 je 0x446ce3
// 00446cda  50                   push eax
// 00446cdb  e89a992500           call 0x6a067a
// 00446ce0  83c404               add esp, 4
// 00446ce3  8b4670               mov eax, dword ptr [esi + 0x70]
// 00446ce6  50                   push eax
// 00446ce7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00446cea  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00446cf0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00446cf6  e87f992500           call 0x6a067a
// 00446cfb  83c404               add esp, 4
// 00446cfe  8d4e50               lea ecx, [esi + 0x50]
// 00446d01  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00446d06  e875d01000           call 0x553d80
// 00446d0b  8d4e30               lea ecx, [esi + 0x30]
// 00446d0e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00446d12  e869d01000           call 0x553d80
// 00446d17  8bce                 mov ecx, esi
// 00446d19  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00446d21  e85a531200           call 0x56c080
// 00446d26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446d2a  5e                   pop esi
// 00446d2b  5d                   pop ebp
// 00446d2c  5b                   pop ebx
// 00446d2d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446d34  83c414               add esp, 0x14
// 00446d37  c3                   ret 

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

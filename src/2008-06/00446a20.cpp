// from server: 100% by tester
// roc 2008-06 00446a20  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446a20
//
// 00446a20  6aff                 push -1
// 00446a22  68a9707d00           push 0x7d70a9
// 00446a27  64a100000000         mov eax, dword ptr fs:[0]
// 00446a2d  50                   push eax
// 00446a2e  64892500000000       mov dword ptr fs:[0], esp
// 00446a35  83ec08               sub esp, 8
// 00446a38  53                   push ebx
// 00446a39  55                   push ebp
// 00446a3a  56                   push esi
// 00446a3b  8bf1                 mov esi, ecx
// 00446a3d  8974240c             mov dword ptr [esp + 0xc], esi
// 00446a41  c706ec5e8100         mov dword ptr [esi], 0x815eec
// 00446a47  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 00446a4a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00446a50  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00446a58  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 00446a5b  7602                 jbe 0x446a5f
// 00446a5d  ffd3                 call ebx
// 00446a5f  57                   push edi
// 00446a60  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00446a63  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00446a66  7602                 jbe 0x446a6a
// 00446a68  ffd3                 call ebx
// 00446a6a  33db                 xor ebx, ebx
// 00446a6c  3bfd                 cmp edi, ebp
// 00446a6e  7415                 je 0x446a85
// 00446a70  8b0f                 mov ecx, dword ptr [edi]
// 00446a72  3bcb                 cmp ecx, ebx
// 00446a74  7408                 je 0x446a7e
// 00446a76  8b01                 mov eax, dword ptr [ecx]
// 00446a78  8b10                 mov edx, dword ptr [eax]
// 00446a7a  6a01                 push 1
// 00446a7c  ffd2                 call edx
// 00446a7e  83c704               add edi, 4
// 00446a81  3bfd                 cmp edi, ebp
// 00446a83  75eb                 jne 0x446a70
// 00446a85  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00446a8b  3bc3                 cmp eax, ebx
// 00446a8d  7409                 je 0x446a98
// 00446a8f  50                   push eax
// 00446a90  e8e59b2500           call 0x6a067a
// 00446a95  83c404               add esp, 4
// 00446a98  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00446a9e  50                   push eax
// 00446a9f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00446aa5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 00446aab  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446ab1  e8c49b2500           call 0x6a067a
// 00446ab6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00446abc  83c404               add esp, 4
// 00446abf  3bc3                 cmp eax, ebx
// 00446ac1  7409                 je 0x446acc
// 00446ac3  50                   push eax
// 00446ac4  e8b19b2500           call 0x6a067a
// 00446ac9  83c404               add esp, 4
// 00446acc  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00446ad2  50                   push eax
// 00446ad3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00446ad9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00446adf  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00446ae5  e8909b2500           call 0x6a067a
// 00446aea  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446af0  83c404               add esp, 4
// 00446af3  3bc3                 cmp eax, ebx
// 00446af5  7409                 je 0x446b00
// 00446af7  50                   push eax
// 00446af8  e87d9b2500           call 0x6a067a
// 00446afd  83c404               add esp, 4
// 00446b00  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00446b06  50                   push eax
// 00446b07  899eac000000         mov dword ptr [esi + 0xac], ebx
// 00446b0d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00446b13  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00446b19  e85c9b2500           call 0x6a067a
// 00446b1e  8dbe88000000         lea edi, [esi + 0x88]
// 00446b24  83c404               add esp, 4
// 00446b27  897c2414             mov dword ptr [esp + 0x14], edi
// 00446b2b  8bcf                 mov ecx, edi
// 00446b2d  c644242008           mov byte ptr [esp + 0x20], 8
// 00446b32  e8990cfcff           call 0x4077d0
// 00446b37  8b3f                 mov edi, dword ptr [edi]
// 00446b39  57                   push edi
// 00446b3a  e83b9b2500           call 0x6a067a
// 00446b3f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446b42  83c404               add esp, 4
// 00446b45  5f                   pop edi
// 00446b46  3bc3                 cmp eax, ebx
// 00446b48  7409                 je 0x446b53
// 00446b4a  50                   push eax
// 00446b4b  e82a9b2500           call 0x6a067a
// 00446b50  83c404               add esp, 4
// 00446b53  8b4670               mov eax, dword ptr [esi + 0x70]
// 00446b56  50                   push eax
// 00446b57  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00446b5a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00446b60  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00446b66  e80f9b2500           call 0x6a067a
// 00446b6b  83c404               add esp, 4
// 00446b6e  8d4e50               lea ecx, [esi + 0x50]
// 00446b71  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00446b76  e805d21000           call 0x553d80
// 00446b7b  8d4e30               lea ecx, [esi + 0x30]
// 00446b7e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00446b82  e8f9d11000           call 0x553d80
// 00446b87  8bce                 mov ecx, esi
// 00446b89  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00446b91  e8ea541200           call 0x56c080
// 00446b96  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446b9a  5e                   pop esi
// 00446b9b  5d                   pop ebp
// 00446b9c  5b                   pop ebx
// 00446b9d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446ba4  83c414               add esp, 0x14
// 00446ba7  c3                   ret 

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

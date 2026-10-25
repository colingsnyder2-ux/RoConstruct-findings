// from server: 100% by tester
// roc 2008-06 0059f480  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f480
//
// 0059f480  6aff                 push -1
// 0059f482  68a9707d00           push 0x7d70a9
// 0059f487  64a100000000         mov eax, dword ptr fs:[0]
// 0059f48d  50                   push eax
// 0059f48e  64892500000000       mov dword ptr fs:[0], esp
// 0059f495  83ec08               sub esp, 8
// 0059f498  53                   push ebx
// 0059f499  55                   push ebp
// 0059f49a  56                   push esi
// 0059f49b  8bf1                 mov esi, ecx
// 0059f49d  8974240c             mov dword ptr [esp + 0xc], esi
// 0059f4a1  c7065c338300         mov dword ptr [esi], 0x83335c
// 0059f4a7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0059f4aa  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0059f4b0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0059f4b8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0059f4bb  7602                 jbe 0x59f4bf
// 0059f4bd  ffd3                 call ebx
// 0059f4bf  57                   push edi
// 0059f4c0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0059f4c3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0059f4c6  7602                 jbe 0x59f4ca
// 0059f4c8  ffd3                 call ebx
// 0059f4ca  33db                 xor ebx, ebx
// 0059f4cc  3bfd                 cmp edi, ebp
// 0059f4ce  7415                 je 0x59f4e5
// 0059f4d0  8b0f                 mov ecx, dword ptr [edi]
// 0059f4d2  3bcb                 cmp ecx, ebx
// 0059f4d4  7408                 je 0x59f4de
// 0059f4d6  8b01                 mov eax, dword ptr [ecx]
// 0059f4d8  8b10                 mov edx, dword ptr [eax]
// 0059f4da  6a01                 push 1
// 0059f4dc  ffd2                 call edx
// 0059f4de  83c704               add edi, 4
// 0059f4e1  3bfd                 cmp edi, ebp
// 0059f4e3  75eb                 jne 0x59f4d0
// 0059f4e5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0059f4eb  3bc3                 cmp eax, ebx
// 0059f4ed  7409                 je 0x59f4f8
// 0059f4ef  50                   push eax
// 0059f4f0  e885111000           call 0x6a067a
// 0059f4f5  83c404               add esp, 4
// 0059f4f8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0059f4fe  50                   push eax
// 0059f4ff  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0059f505  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0059f50b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0059f511  e864111000           call 0x6a067a
// 0059f516  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0059f51c  83c404               add esp, 4
// 0059f51f  3bc3                 cmp eax, ebx
// 0059f521  7409                 je 0x59f52c
// 0059f523  50                   push eax
// 0059f524  e851111000           call 0x6a067a
// 0059f529  83c404               add esp, 4
// 0059f52c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0059f532  50                   push eax
// 0059f533  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0059f539  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0059f53f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0059f545  e830111000           call 0x6a067a
// 0059f54a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0059f550  83c404               add esp, 4
// 0059f553  3bc3                 cmp eax, ebx
// 0059f555  7409                 je 0x59f560
// 0059f557  50                   push eax
// 0059f558  e81d111000           call 0x6a067a
// 0059f55d  83c404               add esp, 4
// 0059f560  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0059f566  50                   push eax
// 0059f567  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0059f56d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0059f573  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0059f579  e8fc101000           call 0x6a067a
// 0059f57e  8dbe88000000         lea edi, [esi + 0x88]
// 0059f584  83c404               add esp, 4
// 0059f587  897c2414             mov dword ptr [esp + 0x14], edi
// 0059f58b  8bcf                 mov ecx, edi
// 0059f58d  c644242008           mov byte ptr [esp + 0x20], 8
// 0059f592  e83982e6ff           call 0x4077d0
// 0059f597  8b3f                 mov edi, dword ptr [edi]
// 0059f599  57                   push edi
// 0059f59a  e8db101000           call 0x6a067a
// 0059f59f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059f5a2  83c404               add esp, 4
// 0059f5a5  5f                   pop edi
// 0059f5a6  3bc3                 cmp eax, ebx
// 0059f5a8  7409                 je 0x59f5b3
// 0059f5aa  50                   push eax
// 0059f5ab  e8ca101000           call 0x6a067a
// 0059f5b0  83c404               add esp, 4
// 0059f5b3  8b4670               mov eax, dword ptr [esi + 0x70]
// 0059f5b6  50                   push eax
// 0059f5b7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0059f5ba  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0059f5c0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0059f5c6  e8af101000           call 0x6a067a
// 0059f5cb  83c404               add esp, 4
// 0059f5ce  8d4e50               lea ecx, [esi + 0x50]
// 0059f5d1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059f5d6  e8a547fbff           call 0x553d80
// 0059f5db  8d4e30               lea ecx, [esi + 0x30]
// 0059f5de  885c241c             mov byte ptr [esp + 0x1c], bl
// 0059f5e2  e89947fbff           call 0x553d80
// 0059f5e7  8bce                 mov ecx, esi
// 0059f5e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0059f5f1  e88acafcff           call 0x56c080
// 0059f5f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f5fa  5e                   pop esi
// 0059f5fb  5d                   pop ebp
// 0059f5fc  5b                   pop ebx
// 0059f5fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f604  83c414               add esp, 0x14
// 0059f607  c3                   ret 

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

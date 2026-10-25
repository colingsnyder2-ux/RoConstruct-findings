// from server: 100% by tester
// roc 2008-06 005ed170  unit: RBX::Controller::W4InputType::?$holder  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed170
//
// 005ed170  6aff                 push -1
// 005ed172  68a9707d00           push 0x7d70a9
// 005ed177  64a100000000         mov eax, dword ptr fs:[0]
// 005ed17d  50                   push eax
// 005ed17e  64892500000000       mov dword ptr fs:[0], esp
// 005ed185  83ec08               sub esp, 8
// 005ed188  53                   push ebx
// 005ed189  55                   push ebp
// 005ed18a  56                   push esi
// 005ed18b  8bf1                 mov esi, ecx
// 005ed18d  8974240c             mov dword ptr [esp + 0xc], esi
// 005ed191  c7067cfe8300         mov dword ptr [esi], 0x83fe7c
// 005ed197  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005ed19a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005ed1a0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005ed1a8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005ed1ab  7602                 jbe 0x5ed1af
// 005ed1ad  ffd3                 call ebx
// 005ed1af  57                   push edi
// 005ed1b0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005ed1b3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005ed1b6  7602                 jbe 0x5ed1ba
// 005ed1b8  ffd3                 call ebx
// 005ed1ba  33db                 xor ebx, ebx
// 005ed1bc  3bfd                 cmp edi, ebp
// 005ed1be  7415                 je 0x5ed1d5
// 005ed1c0  8b0f                 mov ecx, dword ptr [edi]
// 005ed1c2  3bcb                 cmp ecx, ebx
// 005ed1c4  7408                 je 0x5ed1ce
// 005ed1c6  8b01                 mov eax, dword ptr [ecx]
// 005ed1c8  8b10                 mov edx, dword ptr [eax]
// 005ed1ca  6a01                 push 1
// 005ed1cc  ffd2                 call edx
// 005ed1ce  83c704               add edi, 4
// 005ed1d1  3bfd                 cmp edi, ebp
// 005ed1d3  75eb                 jne 0x5ed1c0
// 005ed1d5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005ed1db  3bc3                 cmp eax, ebx
// 005ed1dd  7409                 je 0x5ed1e8
// 005ed1df  50                   push eax
// 005ed1e0  e895340b00           call 0x6a067a
// 005ed1e5  83c404               add esp, 4
// 005ed1e8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005ed1ee  50                   push eax
// 005ed1ef  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005ed1f5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005ed1fb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005ed201  e874340b00           call 0x6a067a
// 005ed206  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005ed20c  83c404               add esp, 4
// 005ed20f  3bc3                 cmp eax, ebx
// 005ed211  7409                 je 0x5ed21c
// 005ed213  50                   push eax
// 005ed214  e861340b00           call 0x6a067a
// 005ed219  83c404               add esp, 4
// 005ed21c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005ed222  50                   push eax
// 005ed223  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005ed229  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005ed22f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005ed235  e840340b00           call 0x6a067a
// 005ed23a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005ed240  83c404               add esp, 4
// 005ed243  3bc3                 cmp eax, ebx
// 005ed245  7409                 je 0x5ed250
// 005ed247  50                   push eax
// 005ed248  e82d340b00           call 0x6a067a
// 005ed24d  83c404               add esp, 4
// 005ed250  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005ed256  50                   push eax
// 005ed257  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005ed25d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005ed263  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005ed269  e80c340b00           call 0x6a067a
// 005ed26e  8dbe88000000         lea edi, [esi + 0x88]
// 005ed274  83c404               add esp, 4
// 005ed277  897c2414             mov dword ptr [esp + 0x14], edi
// 005ed27b  8bcf                 mov ecx, edi
// 005ed27d  c644242008           mov byte ptr [esp + 0x20], 8
// 005ed282  e849a5e1ff           call 0x4077d0
// 005ed287  8b3f                 mov edi, dword ptr [edi]
// 005ed289  57                   push edi
// 005ed28a  e8eb330b00           call 0x6a067a
// 005ed28f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005ed292  83c404               add esp, 4
// 005ed295  5f                   pop edi
// 005ed296  3bc3                 cmp eax, ebx
// 005ed298  7409                 je 0x5ed2a3
// 005ed29a  50                   push eax
// 005ed29b  e8da330b00           call 0x6a067a
// 005ed2a0  83c404               add esp, 4
// 005ed2a3  8b4670               mov eax, dword ptr [esi + 0x70]
// 005ed2a6  50                   push eax
// 005ed2a7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005ed2aa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005ed2b0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005ed2b6  e8bf330b00           call 0x6a067a
// 005ed2bb  83c404               add esp, 4
// 005ed2be  8d4e50               lea ecx, [esi + 0x50]
// 005ed2c1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ed2c6  e8b56af6ff           call 0x553d80
// 005ed2cb  8d4e30               lea ecx, [esi + 0x30]
// 005ed2ce  885c241c             mov byte ptr [esp + 0x1c], bl
// 005ed2d2  e8a96af6ff           call 0x553d80
// 005ed2d7  8bce                 mov ecx, esi
// 005ed2d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ed2e1  e89aedf7ff           call 0x56c080
// 005ed2e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ed2ea  5e                   pop esi
// 005ed2eb  5d                   pop ebp
// 005ed2ec  5b                   pop ebx
// 005ed2ed  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed2f4  83c414               add esp, 0x14
// 005ed2f7  c3                   ret 

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

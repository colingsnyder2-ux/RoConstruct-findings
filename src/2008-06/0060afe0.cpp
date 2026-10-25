// from server: 100% by tester
// roc 2008-06 0060afe0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060afe0
//
// 0060afe0  6aff                 push -1
// 0060afe2  68a9707d00           push 0x7d70a9
// 0060afe7  64a100000000         mov eax, dword ptr fs:[0]
// 0060afed  50                   push eax
// 0060afee  64892500000000       mov dword ptr fs:[0], esp
// 0060aff5  83ec08               sub esp, 8
// 0060aff8  53                   push ebx
// 0060aff9  55                   push ebp
// 0060affa  56                   push esi
// 0060affb  8bf1                 mov esi, ecx
// 0060affd  8974240c             mov dword ptr [esp + 0xc], esi
// 0060b001  c706742f8400         mov dword ptr [esi], 0x842f74
// 0060b007  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0060b00a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0060b010  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0060b018  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0060b01b  7602                 jbe 0x60b01f
// 0060b01d  ffd3                 call ebx
// 0060b01f  57                   push edi
// 0060b020  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0060b023  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0060b026  7602                 jbe 0x60b02a
// 0060b028  ffd3                 call ebx
// 0060b02a  33db                 xor ebx, ebx
// 0060b02c  3bfd                 cmp edi, ebp
// 0060b02e  7415                 je 0x60b045
// 0060b030  8b0f                 mov ecx, dword ptr [edi]
// 0060b032  3bcb                 cmp ecx, ebx
// 0060b034  7408                 je 0x60b03e
// 0060b036  8b01                 mov eax, dword ptr [ecx]
// 0060b038  8b10                 mov edx, dword ptr [eax]
// 0060b03a  6a01                 push 1
// 0060b03c  ffd2                 call edx
// 0060b03e  83c704               add edi, 4
// 0060b041  3bfd                 cmp edi, ebp
// 0060b043  75eb                 jne 0x60b030
// 0060b045  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0060b04b  3bc3                 cmp eax, ebx
// 0060b04d  7409                 je 0x60b058
// 0060b04f  50                   push eax
// 0060b050  e825560900           call 0x6a067a
// 0060b055  83c404               add esp, 4
// 0060b058  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0060b05e  50                   push eax
// 0060b05f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0060b065  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0060b06b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0060b071  e804560900           call 0x6a067a
// 0060b076  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0060b07c  83c404               add esp, 4
// 0060b07f  3bc3                 cmp eax, ebx
// 0060b081  7409                 je 0x60b08c
// 0060b083  50                   push eax
// 0060b084  e8f1550900           call 0x6a067a
// 0060b089  83c404               add esp, 4
// 0060b08c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0060b092  50                   push eax
// 0060b093  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0060b099  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0060b09f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0060b0a5  e8d0550900           call 0x6a067a
// 0060b0aa  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0060b0b0  83c404               add esp, 4
// 0060b0b3  3bc3                 cmp eax, ebx
// 0060b0b5  7409                 je 0x60b0c0
// 0060b0b7  50                   push eax
// 0060b0b8  e8bd550900           call 0x6a067a
// 0060b0bd  83c404               add esp, 4
// 0060b0c0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0060b0c6  50                   push eax
// 0060b0c7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0060b0cd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0060b0d3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0060b0d9  e89c550900           call 0x6a067a
// 0060b0de  8dbe88000000         lea edi, [esi + 0x88]
// 0060b0e4  83c404               add esp, 4
// 0060b0e7  897c2414             mov dword ptr [esp + 0x14], edi
// 0060b0eb  8bcf                 mov ecx, edi
// 0060b0ed  c644242008           mov byte ptr [esp + 0x20], 8
// 0060b0f2  e8d9c6dfff           call 0x4077d0
// 0060b0f7  8b3f                 mov edi, dword ptr [edi]
// 0060b0f9  57                   push edi
// 0060b0fa  e87b550900           call 0x6a067a
// 0060b0ff  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0060b102  83c404               add esp, 4
// 0060b105  5f                   pop edi
// 0060b106  3bc3                 cmp eax, ebx
// 0060b108  7409                 je 0x60b113
// 0060b10a  50                   push eax
// 0060b10b  e86a550900           call 0x6a067a
// 0060b110  83c404               add esp, 4
// 0060b113  8b4670               mov eax, dword ptr [esi + 0x70]
// 0060b116  50                   push eax
// 0060b117  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0060b11a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0060b120  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0060b126  e84f550900           call 0x6a067a
// 0060b12b  83c404               add esp, 4
// 0060b12e  8d4e50               lea ecx, [esi + 0x50]
// 0060b131  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0060b136  e8458cf4ff           call 0x553d80
// 0060b13b  8d4e30               lea ecx, [esi + 0x30]
// 0060b13e  885c241c             mov byte ptr [esp + 0x1c], bl
// 0060b142  e8398cf4ff           call 0x553d80
// 0060b147  8bce                 mov ecx, esi
// 0060b149  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0060b151  e82a0ff6ff           call 0x56c080
// 0060b156  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060b15a  5e                   pop esi
// 0060b15b  5d                   pop ebp
// 0060b15c  5b                   pop ebx
// 0060b15d  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b164  83c414               add esp, 0x14
// 0060b167  c3                   ret 

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

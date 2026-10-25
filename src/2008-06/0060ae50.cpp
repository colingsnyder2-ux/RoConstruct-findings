// from server: 100% by tester
// roc 2008-06 0060ae50  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ae50
//
// 0060ae50  6aff                 push -1
// 0060ae52  68a9707d00           push 0x7d70a9
// 0060ae57  64a100000000         mov eax, dword ptr fs:[0]
// 0060ae5d  50                   push eax
// 0060ae5e  64892500000000       mov dword ptr fs:[0], esp
// 0060ae65  83ec08               sub esp, 8
// 0060ae68  53                   push ebx
// 0060ae69  55                   push ebp
// 0060ae6a  56                   push esi
// 0060ae6b  8bf1                 mov esi, ecx
// 0060ae6d  8974240c             mov dword ptr [esp + 0xc], esi
// 0060ae71  c706682f8400         mov dword ptr [esi], 0x842f68
// 0060ae77  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0060ae7a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0060ae80  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0060ae88  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0060ae8b  7602                 jbe 0x60ae8f
// 0060ae8d  ffd3                 call ebx
// 0060ae8f  57                   push edi
// 0060ae90  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0060ae93  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0060ae96  7602                 jbe 0x60ae9a
// 0060ae98  ffd3                 call ebx
// 0060ae9a  33db                 xor ebx, ebx
// 0060ae9c  3bfd                 cmp edi, ebp
// 0060ae9e  7415                 je 0x60aeb5
// 0060aea0  8b0f                 mov ecx, dword ptr [edi]
// 0060aea2  3bcb                 cmp ecx, ebx
// 0060aea4  7408                 je 0x60aeae
// 0060aea6  8b01                 mov eax, dword ptr [ecx]
// 0060aea8  8b10                 mov edx, dword ptr [eax]
// 0060aeaa  6a01                 push 1
// 0060aeac  ffd2                 call edx
// 0060aeae  83c704               add edi, 4
// 0060aeb1  3bfd                 cmp edi, ebp
// 0060aeb3  75eb                 jne 0x60aea0
// 0060aeb5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0060aebb  3bc3                 cmp eax, ebx
// 0060aebd  7409                 je 0x60aec8
// 0060aebf  50                   push eax
// 0060aec0  e8b5570900           call 0x6a067a
// 0060aec5  83c404               add esp, 4
// 0060aec8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0060aece  50                   push eax
// 0060aecf  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0060aed5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0060aedb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0060aee1  e894570900           call 0x6a067a
// 0060aee6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0060aeec  83c404               add esp, 4
// 0060aeef  3bc3                 cmp eax, ebx
// 0060aef1  7409                 je 0x60aefc
// 0060aef3  50                   push eax
// 0060aef4  e881570900           call 0x6a067a
// 0060aef9  83c404               add esp, 4
// 0060aefc  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0060af02  50                   push eax
// 0060af03  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0060af09  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0060af0f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0060af15  e860570900           call 0x6a067a
// 0060af1a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0060af20  83c404               add esp, 4
// 0060af23  3bc3                 cmp eax, ebx
// 0060af25  7409                 je 0x60af30
// 0060af27  50                   push eax
// 0060af28  e84d570900           call 0x6a067a
// 0060af2d  83c404               add esp, 4
// 0060af30  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0060af36  50                   push eax
// 0060af37  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0060af3d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0060af43  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0060af49  e82c570900           call 0x6a067a
// 0060af4e  8dbe88000000         lea edi, [esi + 0x88]
// 0060af54  83c404               add esp, 4
// 0060af57  897c2414             mov dword ptr [esp + 0x14], edi
// 0060af5b  8bcf                 mov ecx, edi
// 0060af5d  c644242008           mov byte ptr [esp + 0x20], 8
// 0060af62  e869c8dfff           call 0x4077d0
// 0060af67  8b3f                 mov edi, dword ptr [edi]
// 0060af69  57                   push edi
// 0060af6a  e80b570900           call 0x6a067a
// 0060af6f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0060af72  83c404               add esp, 4
// 0060af75  5f                   pop edi
// 0060af76  3bc3                 cmp eax, ebx
// 0060af78  7409                 je 0x60af83
// 0060af7a  50                   push eax
// 0060af7b  e8fa560900           call 0x6a067a
// 0060af80  83c404               add esp, 4
// 0060af83  8b4670               mov eax, dword ptr [esi + 0x70]
// 0060af86  50                   push eax
// 0060af87  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0060af8a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0060af90  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0060af96  e8df560900           call 0x6a067a
// 0060af9b  83c404               add esp, 4
// 0060af9e  8d4e50               lea ecx, [esi + 0x50]
// 0060afa1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0060afa6  e8d58df4ff           call 0x553d80
// 0060afab  8d4e30               lea ecx, [esi + 0x30]
// 0060afae  885c241c             mov byte ptr [esp + 0x1c], bl
// 0060afb2  e8c98df4ff           call 0x553d80
// 0060afb7  8bce                 mov ecx, esi
// 0060afb9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0060afc1  e8ba10f6ff           call 0x56c080
// 0060afc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060afca  5e                   pop esi
// 0060afcb  5d                   pop ebp
// 0060afcc  5b                   pop ebx
// 0060afcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0060afd4  83c414               add esp, 0x14
// 0060afd7  c3                   ret 

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

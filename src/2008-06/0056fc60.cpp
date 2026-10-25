// from server: 100% by king_originala
// roc 2008-06 0056fc60  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fc60
//
// 0056fc60  6aff                 push -1
// 0056fc62  68a9707d00           push 0x7d70a9
// 0056fc67  64a100000000         mov eax, dword ptr fs:[0]
// 0056fc6d  50                   push eax
// 0056fc6e  64892500000000       mov dword ptr fs:[0], esp
// 0056fc75  83ec08               sub esp, 8
// 0056fc78  53                   push ebx
// 0056fc79  55                   push ebp
// 0056fc7a  56                   push esi
// 0056fc7b  8bf1                 mov esi, ecx
// 0056fc7d  8974240c             mov dword ptr [esp + 0xc], esi
// 0056fc81  c7069cf78200         mov dword ptr [esi], 0x82f79c
// 0056fc87  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0056fc8a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0056fc90  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0056fc98  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0056fc9b  7602                 jbe 0x56fc9f
// 0056fc9d  ffd3                 call ebx
// 0056fc9f  57                   push edi
// 0056fca0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0056fca3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0056fca6  7602                 jbe 0x56fcaa
// 0056fca8  ffd3                 call ebx
// 0056fcaa  33db                 xor ebx, ebx
// 0056fcac  3bfd                 cmp edi, ebp
// 0056fcae  7415                 je 0x56fcc5
// 0056fcb0  8b0f                 mov ecx, dword ptr [edi]
// 0056fcb2  3bcb                 cmp ecx, ebx
// 0056fcb4  7408                 je 0x56fcbe
// 0056fcb6  8b01                 mov eax, dword ptr [ecx]
// 0056fcb8  8b10                 mov edx, dword ptr [eax]
// 0056fcba  6a01                 push 1
// 0056fcbc  ffd2                 call edx
// 0056fcbe  83c704               add edi, 4
// 0056fcc1  3bfd                 cmp edi, ebp
// 0056fcc3  75eb                 jne 0x56fcb0
// 0056fcc5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0056fccb  3bc3                 cmp eax, ebx
// 0056fccd  7409                 je 0x56fcd8
// 0056fccf  50                   push eax
// 0056fcd0  e8a5091300           call 0x6a067a
// 0056fcd5  83c404               add esp, 4
// 0056fcd8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0056fcde  50                   push eax
// 0056fcdf  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0056fce5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0056fceb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0056fcf1  e884091300           call 0x6a067a
// 0056fcf6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0056fcfc  83c404               add esp, 4
// 0056fcff  3bc3                 cmp eax, ebx
// 0056fd01  7409                 je 0x56fd0c
// 0056fd03  50                   push eax
// 0056fd04  e871091300           call 0x6a067a
// 0056fd09  83c404               add esp, 4
// 0056fd0c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0056fd12  50                   push eax
// 0056fd13  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0056fd19  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0056fd1f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0056fd25  e850091300           call 0x6a067a
// 0056fd2a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0056fd30  83c404               add esp, 4
// 0056fd33  3bc3                 cmp eax, ebx
// 0056fd35  7409                 je 0x56fd40
// 0056fd37  50                   push eax
// 0056fd38  e83d091300           call 0x6a067a
// 0056fd3d  83c404               add esp, 4
// 0056fd40  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0056fd46  50                   push eax
// 0056fd47  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0056fd4d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0056fd53  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0056fd59  e81c091300           call 0x6a067a
// 0056fd5e  8dbe88000000         lea edi, [esi + 0x88]
// 0056fd64  83c404               add esp, 4
// 0056fd67  897c2414             mov dword ptr [esp + 0x14], edi
// 0056fd6b  8bcf                 mov ecx, edi
// 0056fd6d  c644242008           mov byte ptr [esp + 0x20], 8
// 0056fd72  e8597ae9ff           call 0x4077d0
// 0056fd77  8b3f                 mov edi, dword ptr [edi]
// 0056fd79  57                   push edi
// 0056fd7a  e8fb081300           call 0x6a067a
// 0056fd7f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0056fd82  83c404               add esp, 4
// 0056fd85  5f                   pop edi
// 0056fd86  3bc3                 cmp eax, ebx
// 0056fd88  7409                 je 0x56fd93
// 0056fd8a  50                   push eax
// 0056fd8b  e8ea081300           call 0x6a067a
// 0056fd90  83c404               add esp, 4
// 0056fd93  8b4670               mov eax, dword ptr [esi + 0x70]
// 0056fd96  50                   push eax
// 0056fd97  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0056fd9a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0056fda0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0056fda6  e8cf081300           call 0x6a067a
// 0056fdab  83c404               add esp, 4
// 0056fdae  8d4e50               lea ecx, [esi + 0x50]
// 0056fdb1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0056fdb6  e8c53ffeff           call 0x553d80
// 0056fdbb  8d4e30               lea ecx, [esi + 0x30]
// 0056fdbe  885c241c             mov byte ptr [esp + 0x1c], bl
// 0056fdc2  e8b93ffeff           call 0x553d80
// 0056fdc7  8bce                 mov ecx, esi
// 0056fdc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056fdd1  e8aac2ffff           call 0x56c080
// 0056fdd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056fdda  5e                   pop esi
// 0056fddb  5d                   pop ebp
// 0056fddc  5b                   pop ebx
// 0056fddd  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fde4  83c414               add esp, 0x14
// 0056fde7  c3                   ret 

extern void (__cdecl *invalid_parameter)();
void __cdecl operator delete(void *) throw();

struct Object {
    virtual ~Object();
};

struct Allocator {
    __forceinline void deallocate(void *, unsigned int);
};

struct Allocation {
    void *pointer;
    __forceinline ~Allocation();
};

struct Vector {
    Allocation allocation;
    unsigned int reserved[2];
    void *first;
    void *last;
    void *limit;
    __forceinline ~Vector();
};

struct Container {
    Allocation allocation;
    unsigned int reserved[5];
    void clear();
    __forceinline ~Container();
};

struct String {
    unsigned char data[32];
    ~String();
};

struct Base {
    virtual ~Base();
    unsigned char reserved[24];
    Object **first;
    Object **last;
    Object **limit;
    unsigned int tail[2];
};

struct S : Base {
    String name;
    String description;
    Vector entries;
    Container container;
    Vector values;
    Vector defaults;
    Vector attributes;
    virtual ~S();
};

__forceinline void Allocator::deallocate(void *p, unsigned int)
{
    operator delete(p);
}

__forceinline Allocation::~Allocation()
{
    Allocator allocator;
    allocator.deallocate(pointer, 1);
}

__forceinline Vector::~Vector()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline Container::~Container()
{
    clear();
}

S::~S()
{
    Object **finish = last;
    void (__cdecl *check)() = invalid_parameter;
    if (first > finish)
        check();

    Object **current = first;
    if (current > last)
        check();

    while (current != finish) {
        if (*current)
            delete *current;
        ++current;
    }
}

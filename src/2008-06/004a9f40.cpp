// from server: 100% by king_originala
// roc 2008-06 004a9f40  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9f40
//
// 004a9f40  6aff                 push -1
// 004a9f42  68a9707d00           push 0x7d70a9
// 004a9f47  64a100000000         mov eax, dword ptr fs:[0]
// 004a9f4d  50                   push eax
// 004a9f4e  64892500000000       mov dword ptr fs:[0], esp
// 004a9f55  83ec08               sub esp, 8
// 004a9f58  53                   push ebx
// 004a9f59  55                   push ebp
// 004a9f5a  56                   push esi
// 004a9f5b  8bf1                 mov esi, ecx
// 004a9f5d  8974240c             mov dword ptr [esp + 0xc], esi
// 004a9f61  c706c4408200         mov dword ptr [esi], 0x8240c4
// 004a9f67  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 004a9f6a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004a9f70  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 004a9f78  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 004a9f7b  7602                 jbe 0x4a9f7f
// 004a9f7d  ffd3                 call ebx
// 004a9f7f  57                   push edi
// 004a9f80  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004a9f83  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 004a9f86  7602                 jbe 0x4a9f8a
// 004a9f88  ffd3                 call ebx
// 004a9f8a  33db                 xor ebx, ebx
// 004a9f8c  3bfd                 cmp edi, ebp
// 004a9f8e  7415                 je 0x4a9fa5
// 004a9f90  8b0f                 mov ecx, dword ptr [edi]
// 004a9f92  3bcb                 cmp ecx, ebx
// 004a9f94  7408                 je 0x4a9f9e
// 004a9f96  8b01                 mov eax, dword ptr [ecx]
// 004a9f98  8b10                 mov edx, dword ptr [eax]
// 004a9f9a  6a01                 push 1
// 004a9f9c  ffd2                 call edx
// 004a9f9e  83c704               add edi, 4
// 004a9fa1  3bfd                 cmp edi, ebp
// 004a9fa3  75eb                 jne 0x4a9f90
// 004a9fa5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 004a9fab  3bc3                 cmp eax, ebx
// 004a9fad  7409                 je 0x4a9fb8
// 004a9faf  50                   push eax
// 004a9fb0  e8c5661f00           call 0x6a067a
// 004a9fb5  83c404               add esp, 4
// 004a9fb8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004a9fbe  50                   push eax
// 004a9fbf  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 004a9fc5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 004a9fcb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 004a9fd1  e8a4661f00           call 0x6a067a
// 004a9fd6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 004a9fdc  83c404               add esp, 4
// 004a9fdf  3bc3                 cmp eax, ebx
// 004a9fe1  7409                 je 0x4a9fec
// 004a9fe3  50                   push eax
// 004a9fe4  e891661f00           call 0x6a067a
// 004a9fe9  83c404               add esp, 4
// 004a9fec  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 004a9ff2  50                   push eax
// 004a9ff3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 004a9ff9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 004a9fff  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 004aa005  e870661f00           call 0x6a067a
// 004aa00a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 004aa010  83c404               add esp, 4
// 004aa013  3bc3                 cmp eax, ebx
// 004aa015  7409                 je 0x4aa020
// 004aa017  50                   push eax
// 004aa018  e85d661f00           call 0x6a067a
// 004aa01d  83c404               add esp, 4
// 004aa020  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 004aa026  50                   push eax
// 004aa027  899eac000000         mov dword ptr [esi + 0xac], ebx
// 004aa02d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 004aa033  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 004aa039  e83c661f00           call 0x6a067a
// 004aa03e  8dbe88000000         lea edi, [esi + 0x88]
// 004aa044  83c404               add esp, 4
// 004aa047  897c2414             mov dword ptr [esp + 0x14], edi
// 004aa04b  8bcf                 mov ecx, edi
// 004aa04d  c644242008           mov byte ptr [esp + 0x20], 8
// 004aa052  e879d7f5ff           call 0x4077d0
// 004aa057  8b3f                 mov edi, dword ptr [edi]
// 004aa059  57                   push edi
// 004aa05a  e81b661f00           call 0x6a067a
// 004aa05f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 004aa062  83c404               add esp, 4
// 004aa065  5f                   pop edi
// 004aa066  3bc3                 cmp eax, ebx
// 004aa068  7409                 je 0x4aa073
// 004aa06a  50                   push eax
// 004aa06b  e80a661f00           call 0x6a067a
// 004aa070  83c404               add esp, 4
// 004aa073  8b4670               mov eax, dword ptr [esi + 0x70]
// 004aa076  50                   push eax
// 004aa077  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004aa07a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 004aa080  899e84000000         mov dword ptr [esi + 0x84], ebx
// 004aa086  e8ef651f00           call 0x6a067a
// 004aa08b  83c404               add esp, 4
// 004aa08e  8d4e50               lea ecx, [esi + 0x50]
// 004aa091  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004aa096  e8e59c0a00           call 0x553d80
// 004aa09b  8d4e30               lea ecx, [esi + 0x30]
// 004aa09e  885c241c             mov byte ptr [esp + 0x1c], bl
// 004aa0a2  e8d99c0a00           call 0x553d80
// 004aa0a7  8bce                 mov ecx, esi
// 004aa0a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004aa0b1  e8ca1f0c00           call 0x56c080
// 004aa0b6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aa0ba  5e                   pop esi
// 004aa0bb  5d                   pop ebp
// 004aa0bc  5b                   pop ebx
// 004aa0bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa0c4  83c414               add esp, 0x14
// 004aa0c7  c3                   ret 

extern "C" void (__cdecl * const invalid_parameter_noinfo)();
void __cdecl operator delete(void *) throw();

struct Object {
    virtual ~Object();
};

struct Base {
    virtual ~Base();
    unsigned char reserved[24];
    Object **first;
    Object **last;
    Object **limit;
    unsigned int extra[2];
};

struct String {
    unsigned char storage[32];
    ~String();
};

struct ContainerProxy {
    void *container;
    void *iterator;
};

struct Buffer {
    ContainerProxy *proxy;
    unsigned int reserved[2];
    void *first;
    void *last;
    void *limit;
    ~Buffer();
};

inline Buffer::~Buffer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    delete proxy;
}

struct Proxy {
    ContainerProxy *pointer;
    ~Proxy();
};

inline Proxy::~Proxy()
{
    delete pointer;
}

struct ObjectBuffer {
    Proxy proxy;
    unsigned int reserved[2];
    void *first;
    void *last;
    void *limit;
    void clear();
    ~ObjectBuffer();
};

inline ObjectBuffer::~ObjectBuffer()
{
    clear();
}

struct Settings : Base {
    String string1;
    String string2;
    Buffer buffer1;
    ObjectBuffer objects;
    Buffer buffer2;
    Buffer buffer3;
    Buffer buffer4;
    virtual ~Settings();
};

Settings::~Settings()
{
    Object **finish = last;
    void (__cdecl *report)() = invalid_parameter_noinfo;
    if (first > finish)
        report();

    Object **current = first;
    if (current > last)
        report();

    while (current != finish) {
        if (*current)
            delete *current;
        ++current;
    }
}

// from server: 100% by king_originala
// roc 2008-06 004a9db0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9db0
//
// 004a9db0  6aff                 push -1
// 004a9db2  68a9707d00           push 0x7d70a9
// 004a9db7  64a100000000         mov eax, dword ptr fs:[0]
// 004a9dbd  50                   push eax
// 004a9dbe  64892500000000       mov dword ptr fs:[0], esp
// 004a9dc5  83ec08               sub esp, 8
// 004a9dc8  53                   push ebx
// 004a9dc9  55                   push ebp
// 004a9dca  56                   push esi
// 004a9dcb  8bf1                 mov esi, ecx
// 004a9dcd  8974240c             mov dword ptr [esp + 0xc], esi
// 004a9dd1  c706b8408200         mov dword ptr [esi], 0x8240b8
// 004a9dd7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 004a9dda  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004a9de0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 004a9de8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 004a9deb  7602                 jbe 0x4a9def
// 004a9ded  ffd3                 call ebx
// 004a9def  57                   push edi
// 004a9df0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004a9df3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 004a9df6  7602                 jbe 0x4a9dfa
// 004a9df8  ffd3                 call ebx
// 004a9dfa  33db                 xor ebx, ebx
// 004a9dfc  3bfd                 cmp edi, ebp
// 004a9dfe  7415                 je 0x4a9e15
// 004a9e00  8b0f                 mov ecx, dword ptr [edi]
// 004a9e02  3bcb                 cmp ecx, ebx
// 004a9e04  7408                 je 0x4a9e0e
// 004a9e06  8b01                 mov eax, dword ptr [ecx]
// 004a9e08  8b10                 mov edx, dword ptr [eax]
// 004a9e0a  6a01                 push 1
// 004a9e0c  ffd2                 call edx
// 004a9e0e  83c704               add edi, 4
// 004a9e11  3bfd                 cmp edi, ebp
// 004a9e13  75eb                 jne 0x4a9e00
// 004a9e15  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 004a9e1b  3bc3                 cmp eax, ebx
// 004a9e1d  7409                 je 0x4a9e28
// 004a9e1f  50                   push eax
// 004a9e20  e855681f00           call 0x6a067a
// 004a9e25  83c404               add esp, 4
// 004a9e28  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 004a9e2e  50                   push eax
// 004a9e2f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 004a9e35  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 004a9e3b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 004a9e41  e834681f00           call 0x6a067a
// 004a9e46  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 004a9e4c  83c404               add esp, 4
// 004a9e4f  3bc3                 cmp eax, ebx
// 004a9e51  7409                 je 0x4a9e5c
// 004a9e53  50                   push eax
// 004a9e54  e821681f00           call 0x6a067a
// 004a9e59  83c404               add esp, 4
// 004a9e5c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 004a9e62  50                   push eax
// 004a9e63  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 004a9e69  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 004a9e6f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 004a9e75  e800681f00           call 0x6a067a
// 004a9e7a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 004a9e80  83c404               add esp, 4
// 004a9e83  3bc3                 cmp eax, ebx
// 004a9e85  7409                 je 0x4a9e90
// 004a9e87  50                   push eax
// 004a9e88  e8ed671f00           call 0x6a067a
// 004a9e8d  83c404               add esp, 4
// 004a9e90  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 004a9e96  50                   push eax
// 004a9e97  899eac000000         mov dword ptr [esi + 0xac], ebx
// 004a9e9d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 004a9ea3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 004a9ea9  e8cc671f00           call 0x6a067a
// 004a9eae  8dbe88000000         lea edi, [esi + 0x88]
// 004a9eb4  83c404               add esp, 4
// 004a9eb7  897c2414             mov dword ptr [esp + 0x14], edi
// 004a9ebb  8bcf                 mov ecx, edi
// 004a9ebd  c644242008           mov byte ptr [esp + 0x20], 8
// 004a9ec2  e809d9f5ff           call 0x4077d0
// 004a9ec7  8b3f                 mov edi, dword ptr [edi]
// 004a9ec9  57                   push edi
// 004a9eca  e8ab671f00           call 0x6a067a
// 004a9ecf  8b467c               mov eax, dword ptr [esi + 0x7c]
// 004a9ed2  83c404               add esp, 4
// 004a9ed5  5f                   pop edi
// 004a9ed6  3bc3                 cmp eax, ebx
// 004a9ed8  7409                 je 0x4a9ee3
// 004a9eda  50                   push eax
// 004a9edb  e89a671f00           call 0x6a067a
// 004a9ee0  83c404               add esp, 4
// 004a9ee3  8b4670               mov eax, dword ptr [esi + 0x70]
// 004a9ee6  50                   push eax
// 004a9ee7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004a9eea  899e80000000         mov dword ptr [esi + 0x80], ebx
// 004a9ef0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 004a9ef6  e87f671f00           call 0x6a067a
// 004a9efb  83c404               add esp, 4
// 004a9efe  8d4e50               lea ecx, [esi + 0x50]
// 004a9f01  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004a9f06  e8759e0a00           call 0x553d80
// 004a9f0b  8d4e30               lea ecx, [esi + 0x30]
// 004a9f0e  885c241c             mov byte ptr [esp + 0x1c], bl
// 004a9f12  e8699e0a00           call 0x553d80
// 004a9f17  8bce                 mov ecx, esi
// 004a9f19  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004a9f21  e85a210c00           call 0x56c080
// 004a9f26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a9f2a  5e                   pop esi
// 004a9f2b  5d                   pop ebp
// 004a9f2c  5b                   pop ebx
// 004a9f2d  64890d00000000       mov dword ptr fs:[0], ecx
// 004a9f34  83c414               add esp, 0x14
// 004a9f37  c3                   ret 

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

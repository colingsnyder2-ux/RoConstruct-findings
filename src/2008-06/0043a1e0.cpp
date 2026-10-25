// from server: 100% by king_originala
// roc 2008-06 0043a1e0  unit: CPropertyGridItemBrickColor  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a1e0
//
// 0043a1e0  6aff                 push -1
// 0043a1e2  6800057c00           push 0x7c0500
// 0043a1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0043a1ed  50                   push eax
// 0043a1ee  64892500000000       mov dword ptr fs:[0], esp
// 0043a1f5  83ec0c               sub esp, 0xc
// 0043a1f8  53                   push ebx
// 0043a1f9  56                   push esi
// 0043a1fa  8bf1                 mov esi, ecx
// 0043a1fc  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0043a202  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043a208  57                   push edi
// 0043a209  33ff                 xor edi, edi
// 0043a20b  897c240c             mov dword ptr [esp + 0xc], edi
// 0043a20f  897c2410             mov dword ptr [esp + 0x10], edi
// 0043a213  50                   push eax
// 0043a214  8d4c2410             lea ecx, [esp + 0x10]
// 0043a218  897c2424             mov dword ptr [esp + 0x24], edi
// 0043a21c  897c2418             mov dword ptr [esp + 0x18], edi
// 0043a220  e8dbcc1300           call 0x576f00
// 0043a225  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043a229  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0043a231  3bc7                 cmp eax, edi
// 0043a233  7405                 je 0x43a23a
// 0043a235  83c014               add eax, 0x14
// 0043a238  eb02                 jmp 0x43a23c
// 0043a23a  33c0                 xor eax, eax
// 0043a23c  8bb640010000         mov esi, dword ptr [esi + 0x140]
// 0043a242  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043a245  8b11                 mov edx, dword ptr [ecx]
// 0043a247  50                   push eax
// 0043a248  8b4208               mov eax, dword ptr [edx + 8]
// 0043a24b  ffd0                 call eax
// 0043a24d  8d4c240c             lea ecx, [esp + 0xc]
// 0043a251  8ad8                 mov bl, al
// 0043a253  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0043a25b  e860d11300           call 0x5773c0
// 0043a260  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043a264  5f                   pop edi
// 0043a265  5e                   pop esi
// 0043a266  8ac3                 mov al, bl
// 0043a268  5b                   pop ebx
// 0043a269  64890d00000000       mov dword ptr fs:[0], ecx
// 0043a270  83c418               add esp, 0x18
// 0043a273  c20400               ret 4

struct Buffer {
    void *first;
    void *last;
    void *limit;

    Buffer();
    ~Buffer();
    void initialize(int);
};

inline Buffer::Buffer() : first(0), last(0) {}

struct Temporary {
    Buffer buffer;

    Temporary(int);
};

inline Temporary::Temporary(int value)
{
    buffer.limit = 0;
    buffer.initialize(value);
}

struct Source {
    char padding[0x198];
    int value;
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual bool apply(void *);
};

struct Destination {
    char padding[0x18];
    Receiver *receiver;

    bool apply(void *);
};

__forceinline bool Destination::apply(void *value)
{
    return receiver->apply(value);
}

struct Argument {
    char padding[0x14];
    char value;
};

struct S {
    char padding[0x13c];
    Source *source;
    Destination *destination;

    bool f(Argument *);
};

bool S::f(Argument *argument)
{
    Temporary temporary(source->value);
    return destination->apply(argument ? &argument->value : 0);
}

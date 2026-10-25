// from server: 100% by king_originala
// roc 2008-06 00654170  unit: RBX::ScoreHud  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00654170
//
// 00654170  6aff                 push -1
// 00654172  6878b97d00           push 0x7db978
// 00654177  64a100000000         mov eax, dword ptr fs:[0]
// 0065417d  50                   push eax
// 0065417e  64892500000000       mov dword ptr fs:[0], esp
// 00654185  83ec08               sub esp, 8
// 00654188  56                   push esi
// 00654189  57                   push edi
// 0065418a  83ec18               sub esp, 0x18
// 0065418d  89642424             mov dword ptr [esp + 0x24], esp
// 00654191  8bf4                 mov esi, esp
// 00654193  6a04                 push 4
// 00654195  8bf9                 mov edi, ecx
// 00654197  e884c70400           call 0x6a0920
// 0065419c  33c9                 xor ecx, ecx
// 0065419e  83c404               add esp, 4
// 006541a1  3bc1                 cmp eax, ecx
// 006541a3  7404                 je 0x6541a9
// 006541a5  8930                 mov dword ptr [eax], esi
// 006541a7  eb02                 jmp 0x6541ab
// 006541a9  33c0                 xor eax, eax
// 006541ab  8906                 mov dword ptr [esi], eax
// 006541ad  8b442438             mov eax, dword ptr [esp + 0x38]
// 006541b1  894e0c               mov dword ptr [esi + 0xc], ecx
// 006541b4  894e10               mov dword ptr [esi + 0x10], ecx
// 006541b7  894e14               mov dword ptr [esi + 0x14], ecx
// 006541ba  50                   push eax
// 006541bb  8bcf                 mov ecx, edi
// 006541bd  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006541c5  e886f9ffff           call 0x653b50
// 006541ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006541ce  5f                   pop edi
// 006541cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006541d6  5e                   pop esi
// 006541d7  83c414               add esp, 0x14
// 006541da  c20400               ret 4

void* __cdecl operator new(unsigned int);

struct Vector;

struct Proxy {
    Vector* owner;
    Proxy(Vector*);
};

inline Proxy::Proxy(Vector* p) : owner(p) {}

struct ProxyHolder {
    Proxy* proxy;
    ProxyHolder(Vector*);
    ~ProxyHolder();
};

inline ProxyHolder::ProxyHolder(Vector* p) : proxy(new Proxy(p)) {}

struct Vector : ProxyHolder {
    unsigned int unused[2];
    void* first;
    void* last;
    void* limit;

    Vector();
    Vector(const Vector&);
    ~Vector();
};

inline Vector::Vector()
    : ProxyHolder(this), first(0), last(0), limit(0)
{
    if (first)
        operator new(4);
}

struct S {
    void f(int);
    void g(int, Vector);
};

void S::f(int value)
{
    g(value, Vector());
}

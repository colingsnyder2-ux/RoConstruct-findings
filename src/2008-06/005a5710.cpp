// from server: 82% by colin
// from server: 79% by king_originala
// roc 2008-06 005a5710  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a5710
//
// 005a5710  64a100000000         mov eax, dword ptr fs:[0]
// 005a5716  6aff                 push -1
// 005a5718  68e82e7d00           push 0x7d2ee8
// 005a571d  50                   push eax
// 005a571e  64892500000000       mov dword ptr fs:[0], esp
// 005a5725  83ec18               sub esp, 0x18
// 005a5728  56                   push esi
// 005a5729  8bf1                 mov esi, ecx
// 005a572b  8b86fc030000         mov eax, dword ptr [esi + 0x3fc]
// 005a5731  85c0                 test eax, eax
// 005a5733  741c                 je 0x5a5751
// 005a5735  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 005a573b  3bc6                 cmp eax, esi
// 005a573d  0f842e010000         je 0x5a5871
// 005a5743  50                   push eax
// 005a5744  e80745f2ff           call 0x4c9c50
// 005a5749  84c0                 test al, al
// 005a574b  0f8520010000         jne 0x5a5871
// 005a5751  8bce                 mov ecx, esi
// 005a5753  e868beffff           call 0x5a15c0
// 005a5758  50                   push eax
// 005a5759  8d442408             lea eax, [esp + 8]
// 005a575d  50                   push eax
// 005a575e  e8dd320700           call 0x618a40
// 005a5763  83c408               add esp, 8
// 005a5766  837c240400           cmp dword ptr [esp + 4], 0
// 005a576b  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a5773  0f85b2000000         jne 0x5a582b
// 005a5779  8b8e04040000         mov ecx, dword ptr [esi + 0x404]
// 005a577f  57                   push edi
// 005a5780  8d542418             lea edx, [esp + 0x18]
// 005a5784  52                   push edx
// 005a5785  e8c63bfbff           call 0x559350
// 005a578a  50                   push eax
// 005a578b  8d442414             lea eax, [esp + 0x14]
// 005a578f  50                   push eax
// 005a5790  e8ebbeffff           call 0x5a1680
// 005a5795  83c408               add esp, 8
// 005a5798  8b08                 mov ecx, dword ptr [eax]
// 005a579a  83c004               add eax, 4
// 005a579d  894c2408             mov dword ptr [esp + 8], ecx
// 005a57a1  50                   push eax
// 005a57a2  8d4c2410             lea ecx, [esp + 0x10]
// 005a57a6  c644242c02           mov byte ptr [esp + 0x2c], 2
// 005a57ab  e800cee5ff           call 0x4025b0
// 005a57b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a57b4  c644242801           mov byte ptr [esp + 0x28], 1
// 005a57b9  85c0                 test eax, eax
// 005a57bb  742c                 je 0x5a57e9
// 005a57bd  8bf8                 mov edi, eax
// 005a57bf  83c004               add eax, 4
// 005a57c2  83caff               or edx, 0xffffffff
// 005a57c5  f00fc110             lock xadd dword ptr [eax], edx
// 005a57c9  751e                 jne 0x5a57e9
// 005a57cb  8b07                 mov eax, dword ptr [edi]
// 005a57cd  8b5004               mov edx, dword ptr [eax + 4]
// 005a57d0  8bcf                 mov ecx, edi
// 005a57d2  ffd2                 call edx
// 005a57d4  8d4708               lea eax, [edi + 8]
// 005a57d7  83c9ff               or ecx, 0xffffffff
// 005a57da  f00fc108             lock xadd dword ptr [eax], ecx
// 005a57de  7509                 jne 0x5a57e9
// 005a57e0  8b17                 mov edx, dword ptr [edi]
// 005a57e2  8b4208               mov eax, dword ptr [edx + 8]
// 005a57e5  8bcf                 mov ecx, edi
// 005a57e7  ffd0                 call eax
// 005a57e9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005a57ed  c644242800           mov byte ptr [esp + 0x28], 0
// 005a57f2  85ff                 test edi, edi
// 005a57f4  742a                 je 0x5a5820
// 005a57f6  8d4f04               lea ecx, [edi + 4]
// 005a57f9  83caff               or edx, 0xffffffff
// 005a57fc  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5800  751e                 jne 0x5a5820
// 005a5802  8b07                 mov eax, dword ptr [edi]
// 005a5804  8b5004               mov edx, dword ptr [eax + 4]
// 005a5807  8bcf                 mov ecx, edi
// 005a5809  ffd2                 call edx
// 005a580b  8d4708               lea eax, [edi + 8]
// 005a580e  83c9ff               or ecx, 0xffffffff
// 005a5811  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5815  7509                 jne 0x5a5820
// 005a5817  8b17                 mov edx, dword ptr [edi]
// 005a5819  8b4208               mov eax, dword ptr [edx + 8]
// 005a581c  8bcf                 mov ecx, edi
// 005a581e  ffd0                 call eax
// 005a5820  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a5824  56                   push esi
// 005a5825  e8c650fbff           call 0x55a8f0
// 005a582a  5f                   pop edi
// 005a582b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a582f  51                   push ecx
// 005a5830  8bce                 mov ecx, esi
// 005a5832  e8c9f9ffff           call 0x5a5200
// 005a5837  8b742408             mov esi, dword ptr [esp + 8]
// 005a583b  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a5843  85f6                 test esi, esi
// 005a5845  742a                 je 0x5a5871
// 005a5847  8d5604               lea edx, [esi + 4]
// 005a584a  83c8ff               or eax, 0xffffffff
// 005a584d  f00fc102             lock xadd dword ptr [edx], eax
// 005a5851  751e                 jne 0x5a5871
// 005a5853  8b16                 mov edx, dword ptr [esi]
// 005a5855  8b4204               mov eax, dword ptr [edx + 4]
// 005a5858  8bce                 mov ecx, esi
// 005a585a  ffd0                 call eax
// 005a585c  8d4e08               lea ecx, [esi + 8]
// 005a585f  83caff               or edx, 0xffffffff
// 005a5862  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5866  7509                 jne 0x5a5871
// 005a5868  8b06                 mov eax, dword ptr [esi]
// 005a586a  8b5008               mov edx, dword ptr [eax + 8]
// 005a586d  8bce                 mov ecx, esi
// 005a586f  ffd2                 call edx
// 005a5871  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a5875  5e                   pop esi
// 005a5876  64890d00000000       mov dword ptr fs:[0], ecx
// 005a587d  83c424               add esp, 0x24
// 005a5880  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;

    Reference& operator=(const Reference&);
    ~Reference();
};

__forceinline Reference::~Reference() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct S;

struct Object {
    void attach(S*);
};

struct Pointer {
    Object* object;
    Reference reference;

    Pointer& operator=(const Pointer&);
    ~Pointer();
};

__forceinline Pointer::~Pointer() {}

__forceinline Pointer& Pointer::operator=(const Pointer& other) {
    object = other.object;
    reference = other.reference;
    return *this;
}

struct Provider {
    Pointer get();
};

extern Pointer __cdecl resolve(void*);
extern Pointer __cdecl convert(const Pointer&);

struct S {
    unsigned char prefix[0x104];
    S* parent;
    unsigned char middle[0x2f4];
    S* context;
    unsigned int reserved;
    Provider* provider;

    bool contains(S*);
    void* lookup();
    void set(Object*);
    void update();
};

void S::update() {
    if (context) {
        S* p = context->parent;
        if (p == this || contains(p))
            return;
    }

    Pointer result = resolve(lookup());
    if (!result.object) {
        result = convert(provider->get());
        result.object->attach(this);
    }
    set(result.object);
}

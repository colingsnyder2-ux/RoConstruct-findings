// from server: 100% by colin
// roc 2008-06 0062c590  unit: RBX::FlagStandService  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c590
//
// 0062c590  6aff                 push -1
// 0062c592  689e917d00           push 0x7d919e
// 0062c597  64a100000000         mov eax, dword ptr fs:[0]
// 0062c59d  50                   push eax
// 0062c59e  64892500000000       mov dword ptr fs:[0], esp
// 0062c5a5  83ec1c               sub esp, 0x1c
// 0062c5a8  56                   push esi
// 0062c5a9  8bf1                 mov esi, ecx
// 0062c5ab  c70600000000         mov dword ptr [esi], 0
// 0062c5b1  89742404             mov dword ptr [esp + 4], esi
// 0062c5b5  c7460400000000       mov dword ptr [esi + 4], 0
// 0062c5bc  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062c5c0  8b10                 mov edx, dword ptr [eax]
// 0062c5c2  89542408             mov dword ptr [esp + 8], edx
// 0062c5c6  8b5004               mov edx, dword ptr [eax + 4]
// 0062c5c9  8954240c             mov dword ptr [esp + 0xc], edx
// 0062c5cd  8b5008               mov edx, dword ptr [eax + 8]
// 0062c5d0  89542410             mov dword ptr [esp + 0x10], edx
// 0062c5d4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0062c5d7  89542414             mov dword ptr [esp + 0x14], edx
// 0062c5db  8b5010               mov edx, dword ptr [eax + 0x10]
// 0062c5de  8b4014               mov eax, dword ptr [eax + 0x14]
// 0062c5e1  89542418             mov dword ptr [esp + 0x18], edx
// 0062c5e5  8d542408             lea edx, [esp + 8]
// 0062c5e9  8d4e08               lea ecx, [esi + 8]
// 0062c5ec  52                   push edx
// 0062c5ed  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0062c5f5  89442420             mov dword ptr [esp + 0x20], eax
// 0062c5f9  c70100000000         mov dword ptr [ecx], 0
// 0062c5ff  e85cfbffff           call 0x62c160
// 0062c604  6a28                 push 0x28
// 0062c606  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0062c60b  e810430700           call 0x6a0920
// 0062c610  83c404               add esp, 4
// 0062c613  89442430             mov dword ptr [esp + 0x30], eax
// 0062c617  c644242802           mov byte ptr [esp + 0x28], 2
// 0062c61c  85c0                 test eax, eax
// 0062c61e  7409                 je 0x62c629
// 0062c620  8bc8                 mov ecx, eax
// 0062c622  e819e7deff           call 0x41ad40
// 0062c627  eb02                 jmp 0x62c62b
// 0062c629  33c0                 xor eax, eax
// 0062c62b  50                   push eax
// 0062c62c  8bce                 mov ecx, esi
// 0062c62e  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0062c633  e8b8eadeff           call 0x41b0f0
// 0062c638  8bce                 mov ecx, esi
// 0062c63a  e80192f6ff           call 0x595840
// 0062c63f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062c643  8bc6                 mov eax, esi
// 0062c645  5e                   pop esi
// 0062c646  64890d00000000       mov dword ptr fs:[0], ecx
// 0062c64d  83c428               add esp, 0x28
// 0062c650  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Callback {
    unsigned int a, b, c, d, e, f;
    Callback(const Callback&);
};

inline Callback::Callback(const Callback& value) {
    a = value.a;
    b = value.b;
    c = value.c;
    d = value.d;
    e = value.e;
    f = value.f;
}

struct Control {
    void* pointer;
    Control();
    ~Control();
};

inline Control::Control() : pointer(0) {}

struct Holder {
    void* target;
    Holder(const Callback&);
    ~Holder();
    void assign(const Callback&);
};

inline Holder::Holder(const Callback& source) {
    Callback copy = source;
    target = 0;
    assign(copy);
}

struct Object {
    unsigned char storage[40];
    Object();
};

struct S {
    void* object;
    Control control;
    Holder callback;

    S(const Callback&);
    void set(Object*);
    void finish();
};

S::S(const Callback& value)
    : object(0), control(), callback(value) {
    set(new Object);
    finish();
}

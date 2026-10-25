// from server: 100% by king_originala
// roc 2008-06 0044d0c0  unit: CRobloxModule  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d0c0
//
// 0044d0c0  6aff                 push -1
// 0044d0c2  6843147c00           push 0x7c1443
// 0044d0c7  64a100000000         mov eax, dword ptr fs:[0]
// 0044d0cd  50                   push eax
// 0044d0ce  64892500000000       mov dword ptr fs:[0], esp
// 0044d0d5  51                   push ecx
// 0044d0d6  56                   push esi
// 0044d0d7  8bf1                 mov esi, ecx
// 0044d0d9  6a04                 push 4
// 0044d0db  89742408             mov dword ptr [esp + 8], esi
// 0044d0df  e83c382500           call 0x6a0920
// 0044d0e4  33c9                 xor ecx, ecx
// 0044d0e6  83c404               add esp, 4
// 0044d0e9  3bc1                 cmp eax, ecx
// 0044d0eb  7404                 je 0x44d0f1
// 0044d0ed  8930                 mov dword ptr [eax], esi
// 0044d0ef  eb02                 jmp 0x44d0f3
// 0044d0f1  33c0                 xor eax, eax
// 0044d0f3  8906                 mov dword ptr [esi], eax
// 0044d0f5  894e10               mov dword ptr [esi + 0x10], ecx
// 0044d0f8  894e14               mov dword ptr [esi + 0x14], ecx
// 0044d0fb  894e18               mov dword ptr [esi + 0x18], ecx
// 0044d0fe  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0044d101  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044d105  8d4e20               lea ecx, [esi + 0x20]
// 0044d108  e8635f1100           call 0x563070
// 0044d10d  8d4e2c               lea ecx, [esi + 0x2c]
// 0044d110  c644241001           mov byte ptr [esp + 0x10], 1
// 0044d115  ff1560248000         call dword ptr [0x802460]
// 0044d11b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044d11f  8bc6                 mov eax, esi
// 0044d121  5e                   pop esi
// 0044d122  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d129  83c410               add esp, 0x10
// 0044d12c  c3                   ret 

void* __cdecl operator new(unsigned int);

struct S;

struct Owner {
    S** pointer;
    unsigned int unused[3];
    unsigned int a, b, c, d;
    Owner(S**);
    ~Owner();
};

struct State {
    unsigned char storage[12];
    State();
    ~State();
};

extern void* (__thiscall *construct_string)(void*);

struct String {
    unsigned char storage[28];
    String();
};

struct S {
    Owner owner;
    State state;
    String text;
    S();
};

__forceinline Owner::Owner(S** p)
    : pointer(p), a(0), b(0), c(0), d(0) {
}

__forceinline String::String() {
    construct_string(this);
}

S::S()
    : owner(new S*(this)), state(), text() {
}

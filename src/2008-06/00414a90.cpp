// from server: 100% by king_originala
// roc 2008-06 00414a90  unit: RBX::VModelInstance::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414a90
//
// 00414a90  55                   push ebp
// 00414a91  8bec                 mov ebp, esp
// 00414a93  6aff                 push -1
// 00414a95  6870d97b00           push 0x7bd970
// 00414a9a  64a100000000         mov eax, dword ptr fs:[0]
// 00414aa0  50                   push eax
// 00414aa1  64892500000000       mov dword ptr fs:[0], esp
// 00414aa8  51                   push ecx
// 00414aa9  53                   push ebx
// 00414aaa  56                   push esi
// 00414aab  57                   push edi
// 00414aac  8965f0               mov dword ptr [ebp - 0x10], esp
// 00414aaf  8bf1                 mov esi, ecx
// 00414ab1  6a14                 push 0x14
// 00414ab3  c70600000000         mov dword ptr [esi], 0
// 00414ab9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00414ac0  e85bbe2800           call 0x6a0920
// 00414ac5  83c404               add esp, 4
// 00414ac8  85c0                 test eax, eax
// 00414aca  7419                 je 0x414ae5
// 00414acc  b901000000           mov ecx, 1
// 00414ad1  894804               mov dword ptr [eax + 4], ecx
// 00414ad4  894808               mov dword ptr [eax + 8], ecx
// 00414ad7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00414ada  c700d0e98000         mov dword ptr [eax], 0x80e9d0
// 00414ae0  89480c               mov dword ptr [eax + 0xc], ecx
// 00414ae3  eb02                 jmp 0x414ae7
// 00414ae5  33c0                 xor eax, eax
// 00414ae7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00414aea  8906                 mov dword ptr [esi], eax
// 00414aec  5f                   pop edi
// 00414aed  8bc6                 mov eax, esi
// 00414aef  5e                   pop esi
// 00414af0  64890d00000000       mov dword ptr fs:[0], ecx
// 00414af7  5b                   pop ebx
// 00414af8  8be5                 mov esp, ebp
// 00414afa  5d                   pop ebp
// 00414afb  c20800               ret 8
// 00414afe  8b5508               mov edx, dword ptr [ebp + 8]
// 00414b01  52                   push edx
// 00414b02  8d4d0c               lea ecx, [ebp + 0xc]
// 00414b05  e82613ffff           call 0x405e30
// 00414b0a  6a00                 push 0
// 00414b0c  6a00                 push 0
// 00414b0e  e879ca2800           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



struct Control {
    void** vtable;
    int strong;
    int weak;
    void* object;
    Deleter deleter;

    Control(void*, const Deleter&);
};

inline Control::Control(void* p, const Deleter& d)
    : strong(1), weak(1), deleter(d)
{
    vtable = controlVtable;
    object = p;
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}

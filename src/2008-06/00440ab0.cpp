// from server: 100% by tester
// roc 2008-06 00440ab0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00440ab0
//
// 00440ab0  55                   push ebp
// 00440ab1  8bec                 mov ebp, esp
// 00440ab3  6aff                 push -1
// 00440ab5  68400a7c00           push 0x7c0a40
// 00440aba  64a100000000         mov eax, dword ptr fs:[0]
// 00440ac0  50                   push eax
// 00440ac1  64892500000000       mov dword ptr fs:[0], esp
// 00440ac8  51                   push ecx
// 00440ac9  53                   push ebx
// 00440aca  56                   push esi
// 00440acb  57                   push edi
// 00440acc  8965f0               mov dword ptr [ebp - 0x10], esp
// 00440acf  8bf1                 mov esi, ecx
// 00440ad1  6a14                 push 0x14
// 00440ad3  c70600000000         mov dword ptr [esi], 0
// 00440ad9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00440ae0  e83bfe2500           call 0x6a0920
// 00440ae5  83c404               add esp, 4
// 00440ae8  85c0                 test eax, eax
// 00440aea  7419                 je 0x440b05
// 00440aec  b901000000           mov ecx, 1
// 00440af1  894804               mov dword ptr [eax + 4], ecx
// 00440af4  894808               mov dword ptr [eax + 8], ecx
// 00440af7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00440afa  c70038538100         mov dword ptr [eax], 0x815338
// 00440b00  89480c               mov dword ptr [eax + 0xc], ecx
// 00440b03  eb02                 jmp 0x440b07
// 00440b05  33c0                 xor eax, eax
// 00440b07  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00440b0a  8906                 mov dword ptr [esi], eax
// 00440b0c  5f                   pop edi
// 00440b0d  8bc6                 mov eax, esi
// 00440b0f  5e                   pop esi
// 00440b10  64890d00000000       mov dword ptr fs:[0], ecx
// 00440b17  5b                   pop ebx
// 00440b18  8be5                 mov esp, ebp
// 00440b1a  5d                   pop ebp
// 00440b1b  c20800               ret 8
// 00440b1e  8b5508               mov edx, dword ptr [ebp + 8]
// 00440b21  52                   push edx
// 00440b22  8d4d0c               lea ecx, [ebp + 0xc]
// 00440b25  e80653fcff           call 0x405e30
// 00440b2a  6a00                 push 0
// 00440b2c  6a00                 push 0
// 00440b2e  e8590a2600           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};

inline void Deleter::operator()(void*) const {}

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

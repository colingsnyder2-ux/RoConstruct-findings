// from server: 100% by tester
// roc 2008-06 00414f70  unit: RBX::VLocalScript::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414f70
//
// 00414f70  55                   push ebp
// 00414f71  8bec                 mov ebp, esp
// 00414f73  6aff                 push -1
// 00414f75  6890d97b00           push 0x7bd990
// 00414f7a  64a100000000         mov eax, dword ptr fs:[0]
// 00414f80  50                   push eax
// 00414f81  64892500000000       mov dword ptr fs:[0], esp
// 00414f88  51                   push ecx
// 00414f89  53                   push ebx
// 00414f8a  56                   push esi
// 00414f8b  57                   push edi
// 00414f8c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00414f8f  8bf1                 mov esi, ecx
// 00414f91  6a14                 push 0x14
// 00414f93  c70600000000         mov dword ptr [esi], 0
// 00414f99  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00414fa0  e87bb92800           call 0x6a0920
// 00414fa5  83c404               add esp, 4
// 00414fa8  85c0                 test eax, eax
// 00414faa  7419                 je 0x414fc5
// 00414fac  b901000000           mov ecx, 1
// 00414fb1  894804               mov dword ptr [eax + 4], ecx
// 00414fb4  894808               mov dword ptr [eax + 8], ecx
// 00414fb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00414fba  c70008ea8000         mov dword ptr [eax], 0x80ea08
// 00414fc0  89480c               mov dword ptr [eax + 0xc], ecx
// 00414fc3  eb02                 jmp 0x414fc7
// 00414fc5  33c0                 xor eax, eax
// 00414fc7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00414fca  8906                 mov dword ptr [esi], eax
// 00414fcc  5f                   pop edi
// 00414fcd  8bc6                 mov eax, esi
// 00414fcf  5e                   pop esi
// 00414fd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00414fd7  5b                   pop ebx
// 00414fd8  8be5                 mov esp, ebp
// 00414fda  5d                   pop ebp
// 00414fdb  c20800               ret 8
// 00414fde  8b5508               mov edx, dword ptr [ebp + 8]
// 00414fe1  52                   push edx
// 00414fe2  8d4d0c               lea ecx, [ebp + 0xc]
// 00414fe5  e8460effff           call 0x405e30
// 00414fea  6a00                 push 0
// 00414fec  6a00                 push 0
// 00414fee  e899c52800           call 0x6a158c

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

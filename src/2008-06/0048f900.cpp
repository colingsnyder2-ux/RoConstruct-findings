// from server: 100% by tester
// roc 2008-06 0048f900  unit: RBX::VClothing::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f900
//
// 0048f900  55                   push ebp
// 0048f901  8bec                 mov ebp, esp
// 0048f903  6aff                 push -1
// 0048f905  68b0637c00           push 0x7c63b0
// 0048f90a  64a100000000         mov eax, dword ptr fs:[0]
// 0048f910  50                   push eax
// 0048f911  64892500000000       mov dword ptr fs:[0], esp
// 0048f918  51                   push ecx
// 0048f919  53                   push ebx
// 0048f91a  56                   push esi
// 0048f91b  57                   push edi
// 0048f91c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048f91f  8bf1                 mov esi, ecx
// 0048f921  6a14                 push 0x14
// 0048f923  c70600000000         mov dword ptr [esi], 0
// 0048f929  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048f930  e8eb0f2100           call 0x6a0920
// 0048f935  83c404               add esp, 4
// 0048f938  85c0                 test eax, eax
// 0048f93a  7419                 je 0x48f955
// 0048f93c  b901000000           mov ecx, 1
// 0048f941  894804               mov dword ptr [eax + 4], ecx
// 0048f944  894808               mov dword ptr [eax + 8], ecx
// 0048f947  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048f94a  c7003c188200         mov dword ptr [eax], 0x82183c
// 0048f950  89480c               mov dword ptr [eax + 0xc], ecx
// 0048f953  eb02                 jmp 0x48f957
// 0048f955  33c0                 xor eax, eax
// 0048f957  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048f95a  8906                 mov dword ptr [esi], eax
// 0048f95c  5f                   pop edi
// 0048f95d  8bc6                 mov eax, esi
// 0048f95f  5e                   pop esi
// 0048f960  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f967  5b                   pop ebx
// 0048f968  8be5                 mov esp, ebp
// 0048f96a  5d                   pop ebp
// 0048f96b  c20800               ret 8
// 0048f96e  8b5508               mov edx, dword ptr [ebp + 8]
// 0048f971  52                   push edx
// 0048f972  8d4d0c               lea ecx, [ebp + 0xc]
// 0048f975  e8b664f7ff           call 0x405e30
// 0048f97a  6a00                 push 0
// 0048f97c  6a00                 push 0
// 0048f97e  e8091c2100           call 0x6a158c

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

// from server: 100% by tester
// roc 2008-06 0044a8c0  unit: CRbxPlayDocTemplate  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a8c0
//
// 0044a8c0  55                   push ebp
// 0044a8c1  8bec                 mov ebp, esp
// 0044a8c3  6aff                 push -1
// 0044a8c5  6860117c00           push 0x7c1160
// 0044a8ca  64a100000000         mov eax, dword ptr fs:[0]
// 0044a8d0  50                   push eax
// 0044a8d1  64892500000000       mov dword ptr fs:[0], esp
// 0044a8d8  51                   push ecx
// 0044a8d9  53                   push ebx
// 0044a8da  56                   push esi
// 0044a8db  57                   push edi
// 0044a8dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044a8df  8bf1                 mov esi, ecx
// 0044a8e1  6a14                 push 0x14
// 0044a8e3  c70600000000         mov dword ptr [esi], 0
// 0044a8e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044a8f0  e82b602500           call 0x6a0920
// 0044a8f5  83c404               add esp, 4
// 0044a8f8  85c0                 test eax, eax
// 0044a8fa  7419                 je 0x44a915
// 0044a8fc  b901000000           mov ecx, 1
// 0044a901  894804               mov dword ptr [eax + 4], ecx
// 0044a904  894808               mov dword ptr [eax + 8], ecx
// 0044a907  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0044a90a  c70014698100         mov dword ptr [eax], 0x816914
// 0044a910  89480c               mov dword ptr [eax + 0xc], ecx
// 0044a913  eb02                 jmp 0x44a917
// 0044a915  33c0                 xor eax, eax
// 0044a917  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044a91a  8906                 mov dword ptr [esi], eax
// 0044a91c  5f                   pop edi
// 0044a91d  8bc6                 mov eax, esi
// 0044a91f  5e                   pop esi
// 0044a920  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a927  5b                   pop ebx
// 0044a928  8be5                 mov esp, ebp
// 0044a92a  5d                   pop ebp
// 0044a92b  c20800               ret 8

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

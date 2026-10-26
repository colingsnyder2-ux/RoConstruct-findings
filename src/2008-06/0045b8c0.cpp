// from server: 100% by tester
// roc 2008-06 0045b8c0  unit: CRobloxWnd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b8c0
//
// 0045b8c0  55                   push ebp
// 0045b8c1  8bec                 mov ebp, esp
// 0045b8c3  6aff                 push -1
// 0045b8c5  68802b7c00           push 0x7c2b80
// 0045b8ca  64a100000000         mov eax, dword ptr fs:[0]
// 0045b8d0  50                   push eax
// 0045b8d1  64892500000000       mov dword ptr fs:[0], esp
// 0045b8d8  51                   push ecx
// 0045b8d9  53                   push ebx
// 0045b8da  56                   push esi
// 0045b8db  57                   push edi
// 0045b8dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045b8df  8bf1                 mov esi, ecx
// 0045b8e1  6a14                 push 0x14
// 0045b8e3  c70600000000         mov dword ptr [esi], 0
// 0045b8e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045b8f0  e82b502400           call 0x6a0920
// 0045b8f5  83c404               add esp, 4
// 0045b8f8  85c0                 test eax, eax
// 0045b8fa  7419                 je 0x45b915
// 0045b8fc  b901000000           mov ecx, 1
// 0045b901  894804               mov dword ptr [eax + 4], ecx
// 0045b904  894808               mov dword ptr [eax + 8], ecx
// 0045b907  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045b90a  c7007c988100         mov dword ptr [eax], 0x81987c
// 0045b910  89480c               mov dword ptr [eax + 0xc], ecx
// 0045b913  eb02                 jmp 0x45b917
// 0045b915  33c0                 xor eax, eax
// 0045b917  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045b91a  8906                 mov dword ptr [esi], eax
// 0045b91c  5f                   pop edi
// 0045b91d  8bc6                 mov eax, esi
// 0045b91f  5e                   pop esi
// 0045b920  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b927  5b                   pop ebx
// 0045b928  8be5                 mov esp, ebp
// 0045b92a  5d                   pop ebp
// 0045b92b  c20800               ret 8
// 0045b92e  8b5508               mov edx, dword ptr [ebp + 8]
// 0045b931  52                   push edx
// 0045b932  8d4d0c               lea ecx, [ebp + 0xc]
// 0045b935  e8f6a4faff           call 0x405e30
// 0045b93a  6a00                 push 0
// 0045b93c  6a00                 push 0
// 0045b93e  e8495c2400           call 0x6a158c

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

// from server: 100% by tester
// roc 2008-06 0045b830  unit: CRobloxWnd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b830
//
// 0045b830  55                   push ebp
// 0045b831  8bec                 mov ebp, esp
// 0045b833  6aff                 push -1
// 0045b835  68702b7c00           push 0x7c2b70
// 0045b83a  64a100000000         mov eax, dword ptr fs:[0]
// 0045b840  50                   push eax
// 0045b841  64892500000000       mov dword ptr fs:[0], esp
// 0045b848  51                   push ecx
// 0045b849  53                   push ebx
// 0045b84a  56                   push esi
// 0045b84b  57                   push edi
// 0045b84c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045b84f  8bf1                 mov esi, ecx
// 0045b851  6a14                 push 0x14
// 0045b853  c70600000000         mov dword ptr [esi], 0
// 0045b859  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045b860  e8bb502400           call 0x6a0920
// 0045b865  83c404               add esp, 4
// 0045b868  85c0                 test eax, eax
// 0045b86a  7419                 je 0x45b885
// 0045b86c  b901000000           mov ecx, 1
// 0045b871  894804               mov dword ptr [eax + 4], ecx
// 0045b874  894808               mov dword ptr [eax + 8], ecx
// 0045b877  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045b87a  c70068988100         mov dword ptr [eax], 0x819868
// 0045b880  89480c               mov dword ptr [eax + 0xc], ecx
// 0045b883  eb02                 jmp 0x45b887
// 0045b885  33c0                 xor eax, eax
// 0045b887  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045b88a  8906                 mov dword ptr [esi], eax
// 0045b88c  5f                   pop edi
// 0045b88d  8bc6                 mov eax, esi
// 0045b88f  5e                   pop esi
// 0045b890  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b897  5b                   pop ebx
// 0045b898  8be5                 mov esp, ebp
// 0045b89a  5d                   pop ebp
// 0045b89b  c20800               ret 8

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

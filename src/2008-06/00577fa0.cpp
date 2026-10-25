// from server: 100% by tester
// roc 2008-06 00577fa0  unit: RBX::VInstance::?$SignalDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577fa0
//
// 00577fa0  55                   push ebp
// 00577fa1  8bec                 mov ebp, esp
// 00577fa3  6aff                 push -1
// 00577fa5  6800087d00           push 0x7d0800
// 00577faa  64a100000000         mov eax, dword ptr fs:[0]
// 00577fb0  50                   push eax
// 00577fb1  64892500000000       mov dword ptr fs:[0], esp
// 00577fb8  51                   push ecx
// 00577fb9  53                   push ebx
// 00577fba  56                   push esi
// 00577fbb  57                   push edi
// 00577fbc  8965f0               mov dword ptr [ebp - 0x10], esp
// 00577fbf  8bf1                 mov esi, ecx
// 00577fc1  6a14                 push 0x14
// 00577fc3  c70600000000         mov dword ptr [esi], 0
// 00577fc9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00577fd0  e84b891200           call 0x6a0920
// 00577fd5  83c404               add esp, 4
// 00577fd8  85c0                 test eax, eax
// 00577fda  7419                 je 0x577ff5
// 00577fdc  b901000000           mov ecx, 1
// 00577fe1  894804               mov dword ptr [eax + 4], ecx
// 00577fe4  894808               mov dword ptr [eax + 8], ecx
// 00577fe7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00577fea  c70004008300         mov dword ptr [eax], 0x830004
// 00577ff0  89480c               mov dword ptr [eax + 0xc], ecx
// 00577ff3  eb02                 jmp 0x577ff7
// 00577ff5  33c0                 xor eax, eax
// 00577ff7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00577ffa  8906                 mov dword ptr [esi], eax
// 00577ffc  5f                   pop edi
// 00577ffd  8bc6                 mov eax, esi
// 00577fff  5e                   pop esi
// 00578000  64890d00000000       mov dword ptr fs:[0], ecx
// 00578007  5b                   pop ebx
// 00578008  8be5                 mov esp, ebp
// 0057800a  5d                   pop ebp
// 0057800b  c20800               ret 8

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

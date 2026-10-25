// from server: 100% by tester
// roc 2008-06 004b2ea0  unit: RBX::VRotateP::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2ea0
//
// 004b2ea0  55                   push ebp
// 004b2ea1  8bec                 mov ebp, esp
// 004b2ea3  6aff                 push -1
// 004b2ea5  6890877c00           push 0x7c8790
// 004b2eaa  64a100000000         mov eax, dword ptr fs:[0]
// 004b2eb0  50                   push eax
// 004b2eb1  64892500000000       mov dword ptr fs:[0], esp
// 004b2eb8  51                   push ecx
// 004b2eb9  53                   push ebx
// 004b2eba  56                   push esi
// 004b2ebb  57                   push edi
// 004b2ebc  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b2ebf  8bf1                 mov esi, ecx
// 004b2ec1  6a14                 push 0x14
// 004b2ec3  c70600000000         mov dword ptr [esi], 0
// 004b2ec9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b2ed0  e84bda1e00           call 0x6a0920
// 004b2ed5  83c404               add esp, 4
// 004b2ed8  85c0                 test eax, eax
// 004b2eda  7419                 je 0x4b2ef5
// 004b2edc  b901000000           mov ecx, 1
// 004b2ee1  894804               mov dword ptr [eax + 4], ecx
// 004b2ee4  894808               mov dword ptr [eax + 8], ecx
// 004b2ee7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b2eea  c700484c8200         mov dword ptr [eax], 0x824c48
// 004b2ef0  89480c               mov dword ptr [eax + 0xc], ecx
// 004b2ef3  eb02                 jmp 0x4b2ef7
// 004b2ef5  33c0                 xor eax, eax
// 004b2ef7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b2efa  8906                 mov dword ptr [esi], eax
// 004b2efc  5f                   pop edi
// 004b2efd  8bc6                 mov eax, esi
// 004b2eff  5e                   pop esi
// 004b2f00  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2f07  5b                   pop ebx
// 004b2f08  8be5                 mov esp, ebp
// 004b2f0a  5d                   pop ebp
// 004b2f0b  c20800               ret 8

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

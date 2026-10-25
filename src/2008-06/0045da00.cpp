// from server: 100% by tester
// roc 2008-06 0045da00  unit: RBX::VControllerService::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045da00
//
// 0045da00  55                   push ebp
// 0045da01  8bec                 mov ebp, esp
// 0045da03  6aff                 push -1
// 0045da05  68602e7c00           push 0x7c2e60
// 0045da0a  64a100000000         mov eax, dword ptr fs:[0]
// 0045da10  50                   push eax
// 0045da11  64892500000000       mov dword ptr fs:[0], esp
// 0045da18  51                   push ecx
// 0045da19  53                   push ebx
// 0045da1a  56                   push esi
// 0045da1b  57                   push edi
// 0045da1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045da1f  8bf1                 mov esi, ecx
// 0045da21  6a14                 push 0x14
// 0045da23  c70600000000         mov dword ptr [esi], 0
// 0045da29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045da30  e8eb2e2400           call 0x6a0920
// 0045da35  83c404               add esp, 4
// 0045da38  85c0                 test eax, eax
// 0045da3a  7419                 je 0x45da55
// 0045da3c  b901000000           mov ecx, 1
// 0045da41  894804               mov dword ptr [eax + 4], ecx
// 0045da44  894808               mov dword ptr [eax + 8], ecx
// 0045da47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045da4a  c7009c9d8100         mov dword ptr [eax], 0x819d9c
// 0045da50  89480c               mov dword ptr [eax + 0xc], ecx
// 0045da53  eb02                 jmp 0x45da57
// 0045da55  33c0                 xor eax, eax
// 0045da57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045da5a  8906                 mov dword ptr [esi], eax
// 0045da5c  5f                   pop edi
// 0045da5d  8bc6                 mov eax, esi
// 0045da5f  5e                   pop esi
// 0045da60  64890d00000000       mov dword ptr fs:[0], ecx
// 0045da67  5b                   pop ebx
// 0045da68  8be5                 mov esp, ebp
// 0045da6a  5d                   pop ebp
// 0045da6b  c20800               ret 8

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

// from server: 100% by tester
// roc 2008-06 00600bb0  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600bb0
//
// 00600bb0  55                   push ebp
// 00600bb1  8bec                 mov ebp, esp
// 00600bb3  6aff                 push -1
// 00600bb5  6810827d00           push 0x7d8210
// 00600bba  64a100000000         mov eax, dword ptr fs:[0]
// 00600bc0  50                   push eax
// 00600bc1  64892500000000       mov dword ptr fs:[0], esp
// 00600bc8  51                   push ecx
// 00600bc9  53                   push ebx
// 00600bca  56                   push esi
// 00600bcb  57                   push edi
// 00600bcc  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600bcf  8bf1                 mov esi, ecx
// 00600bd1  6a14                 push 0x14
// 00600bd3  c70600000000         mov dword ptr [esi], 0
// 00600bd9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600be0  e83bfd0900           call 0x6a0920
// 00600be5  83c404               add esp, 4
// 00600be8  85c0                 test eax, eax
// 00600bea  7419                 je 0x600c05
// 00600bec  b901000000           mov ecx, 1
// 00600bf1  894804               mov dword ptr [eax + 4], ecx
// 00600bf4  894808               mov dword ptr [eax + 8], ecx
// 00600bf7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600bfa  c700601f8400         mov dword ptr [eax], 0x841f60
// 00600c00  89480c               mov dword ptr [eax + 0xc], ecx
// 00600c03  eb02                 jmp 0x600c07
// 00600c05  33c0                 xor eax, eax
// 00600c07  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600c0a  8906                 mov dword ptr [esi], eax
// 00600c0c  5f                   pop edi
// 00600c0d  8bc6                 mov eax, esi
// 00600c0f  5e                   pop esi
// 00600c10  64890d00000000       mov dword ptr fs:[0], ecx
// 00600c17  5b                   pop ebx
// 00600c18  8be5                 mov esp, ebp
// 00600c1a  5d                   pop ebp
// 00600c1b  c20800               ret 8

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

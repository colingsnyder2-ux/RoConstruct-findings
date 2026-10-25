// from server: 100% by tester
// roc 2008-06 00600730  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600730
//
// 00600730  55                   push ebp
// 00600731  8bec                 mov ebp, esp
// 00600733  6aff                 push -1
// 00600735  6890817d00           push 0x7d8190
// 0060073a  64a100000000         mov eax, dword ptr fs:[0]
// 00600740  50                   push eax
// 00600741  64892500000000       mov dword ptr fs:[0], esp
// 00600748  51                   push ecx
// 00600749  53                   push ebx
// 0060074a  56                   push esi
// 0060074b  57                   push edi
// 0060074c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0060074f  8bf1                 mov esi, ecx
// 00600751  6a14                 push 0x14
// 00600753  c70600000000         mov dword ptr [esi], 0
// 00600759  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600760  e8bb010a00           call 0x6a0920
// 00600765  83c404               add esp, 4
// 00600768  85c0                 test eax, eax
// 0060076a  7419                 je 0x600785
// 0060076c  b901000000           mov ecx, 1
// 00600771  894804               mov dword ptr [eax + 4], ecx
// 00600774  894808               mov dword ptr [eax + 8], ecx
// 00600777  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0060077a  c700c01e8400         mov dword ptr [eax], 0x841ec0
// 00600780  89480c               mov dword ptr [eax + 0xc], ecx
// 00600783  eb02                 jmp 0x600787
// 00600785  33c0                 xor eax, eax
// 00600787  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0060078a  8906                 mov dword ptr [esi], eax
// 0060078c  5f                   pop edi
// 0060078d  8bc6                 mov eax, esi
// 0060078f  5e                   pop esi
// 00600790  64890d00000000       mov dword ptr fs:[0], ecx
// 00600797  5b                   pop ebx
// 00600798  8be5                 mov esp, ebp
// 0060079a  5d                   pop ebp
// 0060079b  c20800               ret 8

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

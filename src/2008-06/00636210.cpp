// from server: 100% by tester
// roc 2008-06 00636210  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636210
//
// 00636210  55                   push ebp
// 00636211  8bec                 mov ebp, esp
// 00636213  6aff                 push -1
// 00636215  6890a07d00           push 0x7da090
// 0063621a  64a100000000         mov eax, dword ptr fs:[0]
// 00636220  50                   push eax
// 00636221  64892500000000       mov dword ptr fs:[0], esp
// 00636228  51                   push ecx
// 00636229  53                   push ebx
// 0063622a  56                   push esi
// 0063622b  57                   push edi
// 0063622c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0063622f  8bf1                 mov esi, ecx
// 00636231  6a14                 push 0x14
// 00636233  c70600000000         mov dword ptr [esi], 0
// 00636239  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00636240  e8dba60600           call 0x6a0920
// 00636245  83c404               add esp, 4
// 00636248  85c0                 test eax, eax
// 0063624a  7419                 je 0x636265
// 0063624c  b901000000           mov ecx, 1
// 00636251  894804               mov dword ptr [eax + 4], ecx
// 00636254  894808               mov dword ptr [eax + 8], ecx
// 00636257  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063625a  c700108b8400         mov dword ptr [eax], 0x848b10
// 00636260  89480c               mov dword ptr [eax + 0xc], ecx
// 00636263  eb02                 jmp 0x636267
// 00636265  33c0                 xor eax, eax
// 00636267  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063626a  8906                 mov dword ptr [esi], eax
// 0063626c  5f                   pop edi
// 0063626d  8bc6                 mov eax, esi
// 0063626f  5e                   pop esi
// 00636270  64890d00000000       mov dword ptr fs:[0], ecx
// 00636277  5b                   pop ebx
// 00636278  8be5                 mov esp, ebp
// 0063627a  5d                   pop ebp
// 0063627b  c20800               ret 8
// 0063627e  8b5508               mov edx, dword ptr [ebp + 8]
// 00636281  52                   push edx
// 00636282  8d4d0c               lea ecx, [ebp + 0xc]
// 00636285  e8a6fbdcff           call 0x405e30
// 0063628a  6a00                 push 0
// 0063628c  6a00                 push 0
// 0063628e  e8f9b20600           call 0x6a158c

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

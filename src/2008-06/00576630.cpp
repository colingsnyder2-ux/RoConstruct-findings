// from server: 100% by tester
// roc 2008-06 00576630  unit: RBX::DataModel  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576630
//
// 00576630  55                   push ebp
// 00576631  8bec                 mov ebp, esp
// 00576633  6aff                 push -1
// 00576635  6830067d00           push 0x7d0630
// 0057663a  64a100000000         mov eax, dword ptr fs:[0]
// 00576640  50                   push eax
// 00576641  64892500000000       mov dword ptr fs:[0], esp
// 00576648  51                   push ecx
// 00576649  53                   push ebx
// 0057664a  56                   push esi
// 0057664b  57                   push edi
// 0057664c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057664f  8bf1                 mov esi, ecx
// 00576651  6a14                 push 0x14
// 00576653  c70600000000         mov dword ptr [esi], 0
// 00576659  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00576660  e8bba21200           call 0x6a0920
// 00576665  83c404               add esp, 4
// 00576668  85c0                 test eax, eax
// 0057666a  7419                 je 0x576685
// 0057666c  b901000000           mov ecx, 1
// 00576671  894804               mov dword ptr [eax + 4], ecx
// 00576674  894808               mov dword ptr [eax + 8], ecx
// 00576677  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057667a  c700c0fd8200         mov dword ptr [eax], 0x82fdc0
// 00576680  89480c               mov dword ptr [eax + 0xc], ecx
// 00576683  eb02                 jmp 0x576687
// 00576685  33c0                 xor eax, eax
// 00576687  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057668a  8906                 mov dword ptr [esi], eax
// 0057668c  5f                   pop edi
// 0057668d  8bc6                 mov eax, esi
// 0057668f  5e                   pop esi
// 00576690  64890d00000000       mov dword ptr fs:[0], ecx
// 00576697  5b                   pop ebx
// 00576698  8be5                 mov esp, ebp
// 0057669a  5d                   pop ebp
// 0057669b  c20800               ret 8
// 0057669e  8b5508               mov edx, dword ptr [ebp + 8]
// 005766a1  52                   push edx
// 005766a2  8d4d0c               lea ecx, [ebp + 0xc]
// 005766a5  e886f7e8ff           call 0x405e30
// 005766aa  6a00                 push 0
// 005766ac  6a00                 push 0
// 005766ae  e8d9ae1200           call 0x6a158c

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

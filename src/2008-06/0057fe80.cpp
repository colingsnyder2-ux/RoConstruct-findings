// from server: 100% by tester
// roc 2008-06 0057fe80  unit: RBX::VModelInstance::?$FilteredSelection  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057fe80
//
// 0057fe80  55                   push ebp
// 0057fe81  8bec                 mov ebp, esp
// 0057fe83  6aff                 push -1
// 0057fe85  6840107d00           push 0x7d1040
// 0057fe8a  64a100000000         mov eax, dword ptr fs:[0]
// 0057fe90  50                   push eax
// 0057fe91  64892500000000       mov dword ptr fs:[0], esp
// 0057fe98  51                   push ecx
// 0057fe99  53                   push ebx
// 0057fe9a  56                   push esi
// 0057fe9b  57                   push edi
// 0057fe9c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057fe9f  8bf1                 mov esi, ecx
// 0057fea1  6a14                 push 0x14
// 0057fea3  c70600000000         mov dword ptr [esi], 0
// 0057fea9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0057feb0  e86b0a1200           call 0x6a0920
// 0057feb5  83c404               add esp, 4
// 0057feb8  85c0                 test eax, eax
// 0057feba  7419                 je 0x57fed5
// 0057febc  b901000000           mov ecx, 1
// 0057fec1  894804               mov dword ptr [eax + 4], ecx
// 0057fec4  894808               mov dword ptr [eax + 8], ecx
// 0057fec7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057feca  c700240b8300         mov dword ptr [eax], 0x830b24
// 0057fed0  89480c               mov dword ptr [eax + 0xc], ecx
// 0057fed3  eb02                 jmp 0x57fed7
// 0057fed5  33c0                 xor eax, eax
// 0057fed7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057feda  8906                 mov dword ptr [esi], eax
// 0057fedc  5f                   pop edi
// 0057fedd  8bc6                 mov eax, esi
// 0057fedf  5e                   pop esi
// 0057fee0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057fee7  5b                   pop ebx
// 0057fee8  8be5                 mov esp, ebp
// 0057feea  5d                   pop ebp
// 0057feeb  c20800               ret 8
// 0057feee  8b5508               mov edx, dword ptr [ebp + 8]
// 0057fef1  52                   push edx
// 0057fef2  8d4d0c               lea ecx, [ebp + 0xc]
// 0057fef5  e8365fe8ff           call 0x405e30
// 0057fefa  6a00                 push 0
// 0057fefc  6a00                 push 0
// 0057fefe  e889161200           call 0x6a158c

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

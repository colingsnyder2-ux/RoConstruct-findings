// from server: 100% by tester
// roc 2008-06 0057ddc0  unit: RBX::WatchCameraCommand  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ddc0
//
// 0057ddc0  55                   push ebp
// 0057ddc1  8bec                 mov ebp, esp
// 0057ddc3  6aff                 push -1
// 0057ddc5  68700f7d00           push 0x7d0f70
// 0057ddca  64a100000000         mov eax, dword ptr fs:[0]
// 0057ddd0  50                   push eax
// 0057ddd1  64892500000000       mov dword ptr fs:[0], esp
// 0057ddd8  51                   push ecx
// 0057ddd9  53                   push ebx
// 0057ddda  56                   push esi
// 0057dddb  57                   push edi
// 0057dddc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057dddf  8bf1                 mov esi, ecx
// 0057dde1  6a14                 push 0x14
// 0057dde3  c70600000000         mov dword ptr [esi], 0
// 0057dde9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0057ddf0  e82b2b1200           call 0x6a0920
// 0057ddf5  83c404               add esp, 4
// 0057ddf8  85c0                 test eax, eax
// 0057ddfa  7419                 je 0x57de15
// 0057ddfc  b901000000           mov ecx, 1
// 0057de01  894804               mov dword ptr [eax + 4], ecx
// 0057de04  894808               mov dword ptr [eax + 8], ecx
// 0057de07  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057de0a  c7000c078300         mov dword ptr [eax], 0x83070c
// 0057de10  89480c               mov dword ptr [eax + 0xc], ecx
// 0057de13  eb02                 jmp 0x57de17
// 0057de15  33c0                 xor eax, eax
// 0057de17  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057de1a  8906                 mov dword ptr [esi], eax
// 0057de1c  5f                   pop edi
// 0057de1d  8bc6                 mov eax, esi
// 0057de1f  5e                   pop esi
// 0057de20  64890d00000000       mov dword ptr fs:[0], ecx
// 0057de27  5b                   pop ebx
// 0057de28  8be5                 mov esp, ebp
// 0057de2a  5d                   pop ebp
// 0057de2b  c20800               ret 8
// 0057de2e  8b5508               mov edx, dword ptr [ebp + 8]
// 0057de31  52                   push edx
// 0057de32  8d4d0c               lea ecx, [ebp + 0xc]
// 0057de35  e8f67fe8ff           call 0x405e30
// 0057de3a  6a00                 push 0
// 0057de3c  6a00                 push 0
// 0057de3e  e849371200           call 0x6a158c

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

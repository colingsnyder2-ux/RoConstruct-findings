// from server: 100% by tester
// roc 2008-06 0048ee70  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ee70
//
// 0048ee70  55                   push ebp
// 0048ee71  8bec                 mov ebp, esp
// 0048ee73  6aff                 push -1
// 0048ee75  6870637c00           push 0x7c6370
// 0048ee7a  64a100000000         mov eax, dword ptr fs:[0]
// 0048ee80  50                   push eax
// 0048ee81  64892500000000       mov dword ptr fs:[0], esp
// 0048ee88  51                   push ecx
// 0048ee89  53                   push ebx
// 0048ee8a  56                   push esi
// 0048ee8b  57                   push edi
// 0048ee8c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048ee8f  8bf1                 mov esi, ecx
// 0048ee91  6a14                 push 0x14
// 0048ee93  c70600000000         mov dword ptr [esi], 0
// 0048ee99  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048eea0  e87b1a2100           call 0x6a0920
// 0048eea5  83c404               add esp, 4
// 0048eea8  85c0                 test eax, eax
// 0048eeaa  7419                 je 0x48eec5
// 0048eeac  b901000000           mov ecx, 1
// 0048eeb1  894804               mov dword ptr [eax + 4], ecx
// 0048eeb4  894808               mov dword ptr [eax + 8], ecx
// 0048eeb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048eeba  c700cc178200         mov dword ptr [eax], 0x8217cc
// 0048eec0  89480c               mov dword ptr [eax + 0xc], ecx
// 0048eec3  eb02                 jmp 0x48eec7
// 0048eec5  33c0                 xor eax, eax
// 0048eec7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048eeca  8906                 mov dword ptr [esi], eax
// 0048eecc  5f                   pop edi
// 0048eecd  8bc6                 mov eax, esi
// 0048eecf  5e                   pop esi
// 0048eed0  64890d00000000       mov dword ptr fs:[0], ecx
// 0048eed7  5b                   pop ebx
// 0048eed8  8be5                 mov esp, ebp
// 0048eeda  5d                   pop ebp
// 0048eedb  c20800               ret 8
// 0048eede  8b5508               mov edx, dword ptr [ebp + 8]
// 0048eee1  52                   push edx
// 0048eee2  8d4d0c               lea ecx, [ebp + 0xc]
// 0048eee5  e8466ff7ff           call 0x405e30
// 0048eeea  6a00                 push 0
// 0048eeec  6a00                 push 0
// 0048eeee  e899262100           call 0x6a158c

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

// from server: 100% by tester
// roc 2008-06 004b2270  unit: RBX::VLighting::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2270
//
// 004b2270  55                   push ebp
// 004b2271  8bec                 mov ebp, esp
// 004b2273  6aff                 push -1
// 004b2275  6840877c00           push 0x7c8740
// 004b227a  64a100000000         mov eax, dword ptr fs:[0]
// 004b2280  50                   push eax
// 004b2281  64892500000000       mov dword ptr fs:[0], esp
// 004b2288  51                   push ecx
// 004b2289  53                   push ebx
// 004b228a  56                   push esi
// 004b228b  57                   push edi
// 004b228c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b228f  8bf1                 mov esi, ecx
// 004b2291  6a14                 push 0x14
// 004b2293  c70600000000         mov dword ptr [esi], 0
// 004b2299  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b22a0  e87be61e00           call 0x6a0920
// 004b22a5  83c404               add esp, 4
// 004b22a8  85c0                 test eax, eax
// 004b22aa  7419                 je 0x4b22c5
// 004b22ac  b901000000           mov ecx, 1
// 004b22b1  894804               mov dword ptr [eax + 4], ecx
// 004b22b4  894808               mov dword ptr [eax + 8], ecx
// 004b22b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b22ba  c700bc4b8200         mov dword ptr [eax], 0x824bbc
// 004b22c0  89480c               mov dword ptr [eax + 0xc], ecx
// 004b22c3  eb02                 jmp 0x4b22c7
// 004b22c5  33c0                 xor eax, eax
// 004b22c7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b22ca  8906                 mov dword ptr [esi], eax
// 004b22cc  5f                   pop edi
// 004b22cd  8bc6                 mov eax, esi
// 004b22cf  5e                   pop esi
// 004b22d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004b22d7  5b                   pop ebx
// 004b22d8  8be5                 mov esp, ebp
// 004b22da  5d                   pop ebp
// 004b22db  c20800               ret 8
// 004b22de  8b5508               mov edx, dword ptr [ebp + 8]
// 004b22e1  52                   push edx
// 004b22e2  8d4d0c               lea ecx, [ebp + 0xc]
// 004b22e5  e8463bf5ff           call 0x405e30
// 004b22ea  6a00                 push 0
// 004b22ec  6a00                 push 0
// 004b22ee  e899f21e00           call 0x6a158c

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

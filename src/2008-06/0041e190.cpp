// from server: 100% by king_originala
// roc 2008-06 0041e190  unit: VDHTMLWindow::?$SignalDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e190
//
// 0041e190  55                   push ebp
// 0041e191  8bec                 mov ebp, esp
// 0041e193  6aff                 push -1
// 0041e195  6800e57b00           push 0x7be500
// 0041e19a  64a100000000         mov eax, dword ptr fs:[0]
// 0041e1a0  50                   push eax
// 0041e1a1  64892500000000       mov dword ptr fs:[0], esp
// 0041e1a8  51                   push ecx
// 0041e1a9  53                   push ebx
// 0041e1aa  56                   push esi
// 0041e1ab  57                   push edi
// 0041e1ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041e1af  8bf1                 mov esi, ecx
// 0041e1b1  6a14                 push 0x14
// 0041e1b3  c70600000000         mov dword ptr [esi], 0
// 0041e1b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041e1c0  e85b272800           call 0x6a0920
// 0041e1c5  83c404               add esp, 4
// 0041e1c8  85c0                 test eax, eax
// 0041e1ca  7419                 je 0x41e1e5
// 0041e1cc  b901000000           mov ecx, 1
// 0041e1d1  894804               mov dword ptr [eax + 4], ecx
// 0041e1d4  894808               mov dword ptr [eax + 8], ecx
// 0041e1d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041e1da  c7008cf18000         mov dword ptr [eax], 0x80f18c
// 0041e1e0  89480c               mov dword ptr [eax + 0xc], ecx
// 0041e1e3  eb02                 jmp 0x41e1e7
// 0041e1e5  33c0                 xor eax, eax
// 0041e1e7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041e1ea  8906                 mov dword ptr [esi], eax
// 0041e1ec  5f                   pop edi
// 0041e1ed  8bc6                 mov eax, esi
// 0041e1ef  5e                   pop esi
// 0041e1f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e1f7  5b                   pop ebx
// 0041e1f8  8be5                 mov esp, ebp
// 0041e1fa  5d                   pop ebp
// 0041e1fb  c20800               ret 8
// 0041e1fe  8b5508               mov edx, dword ptr [ebp + 8]
// 0041e201  52                   push edx
// 0041e202  8d4d0c               lea ecx, [ebp + 0xc]
// 0041e205  e8267cfeff           call 0x405e30
// 0041e20a  6a00                 push 0
// 0041e20c  6a00                 push 0
// 0041e20e  e879332800           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



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

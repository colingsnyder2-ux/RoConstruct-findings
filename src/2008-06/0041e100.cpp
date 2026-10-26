// from server: 100% by tester
// roc 2008-06 0041e100  unit: VDHTMLWindow::?$SignalDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e100
//
// 0041e100  55                   push ebp
// 0041e101  8bec                 mov ebp, esp
// 0041e103  6aff                 push -1
// 0041e105  68f0e47b00           push 0x7be4f0
// 0041e10a  64a100000000         mov eax, dword ptr fs:[0]
// 0041e110  50                   push eax
// 0041e111  64892500000000       mov dword ptr fs:[0], esp
// 0041e118  51                   push ecx
// 0041e119  53                   push ebx
// 0041e11a  56                   push esi
// 0041e11b  57                   push edi
// 0041e11c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041e11f  8bf1                 mov esi, ecx
// 0041e121  6a14                 push 0x14
// 0041e123  c70600000000         mov dword ptr [esi], 0
// 0041e129  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041e130  e8eb272800           call 0x6a0920
// 0041e135  83c404               add esp, 4
// 0041e138  85c0                 test eax, eax
// 0041e13a  7419                 je 0x41e155
// 0041e13c  b901000000           mov ecx, 1
// 0041e141  894804               mov dword ptr [eax + 4], ecx
// 0041e144  894808               mov dword ptr [eax + 8], ecx
// 0041e147  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041e14a  c70078f18000         mov dword ptr [eax], 0x80f178
// 0041e150  89480c               mov dword ptr [eax + 0xc], ecx
// 0041e153  eb02                 jmp 0x41e157
// 0041e155  33c0                 xor eax, eax
// 0041e157  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041e15a  8906                 mov dword ptr [esi], eax
// 0041e15c  5f                   pop edi
// 0041e15d  8bc6                 mov eax, esi
// 0041e15f  5e                   pop esi
// 0041e160  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e167  5b                   pop ebx
// 0041e168  8be5                 mov esp, ebp
// 0041e16a  5d                   pop ebp
// 0041e16b  c20800               ret 8
// 0041e16e  8b5508               mov edx, dword ptr [ebp + 8]
// 0041e171  52                   push edx
// 0041e172  8d4d0c               lea ecx, [ebp + 0xc]
// 0041e175  e8b67cfeff           call 0x405e30
// 0041e17a  6a00                 push 0
// 0041e17c  6a00                 push 0
// 0041e17e  e809342800           call 0x6a158c

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

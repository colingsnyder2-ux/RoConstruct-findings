// from server: 100% by tester
// roc 2008-06 00456410  unit: CRobloxReportDocView  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456410
//
// 00456410  55                   push ebp
// 00456411  8bec                 mov ebp, esp
// 00456413  6aff                 push -1
// 00456415  68f0237c00           push 0x7c23f0
// 0045641a  64a100000000         mov eax, dword ptr fs:[0]
// 00456420  50                   push eax
// 00456421  64892500000000       mov dword ptr fs:[0], esp
// 00456428  51                   push ecx
// 00456429  53                   push ebx
// 0045642a  56                   push esi
// 0045642b  57                   push edi
// 0045642c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045642f  8bf1                 mov esi, ecx
// 00456431  6a14                 push 0x14
// 00456433  c70600000000         mov dword ptr [esi], 0
// 00456439  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00456440  e8dba42400           call 0x6a0920
// 00456445  83c404               add esp, 4
// 00456448  85c0                 test eax, eax
// 0045644a  7419                 je 0x456465
// 0045644c  b901000000           mov ecx, 1
// 00456451  894804               mov dword ptr [eax + 4], ecx
// 00456454  894808               mov dword ptr [eax + 8], ecx
// 00456457  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045645a  c70068848100         mov dword ptr [eax], 0x818468
// 00456460  89480c               mov dword ptr [eax + 0xc], ecx
// 00456463  eb02                 jmp 0x456467
// 00456465  33c0                 xor eax, eax
// 00456467  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045646a  8906                 mov dword ptr [esi], eax
// 0045646c  5f                   pop edi
// 0045646d  8bc6                 mov eax, esi
// 0045646f  5e                   pop esi
// 00456470  64890d00000000       mov dword ptr fs:[0], ecx
// 00456477  5b                   pop ebx
// 00456478  8be5                 mov esp, ebp
// 0045647a  5d                   pop ebp
// 0045647b  c20800               ret 8
// 0045647e  8b5508               mov edx, dword ptr [ebp + 8]
// 00456481  52                   push edx
// 00456482  8d4d0c               lea ecx, [ebp + 0xc]
// 00456485  e8a6f9faff           call 0x405e30
// 0045648a  6a00                 push 0
// 0045648c  6a00                 push 0
// 0045648e  e8f9b02400           call 0x6a158c

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

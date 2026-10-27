// from server: 100% by king_originala
// roc 2008-06 0045b700  unit: CRobloxWnd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b700
//
// 0045b700  55                   push ebp
// 0045b701  8bec                 mov ebp, esp
// 0045b703  6aff                 push -1
// 0045b705  68502b7c00           push 0x7c2b50
// 0045b70a  64a100000000         mov eax, dword ptr fs:[0]
// 0045b710  50                   push eax
// 0045b711  64892500000000       mov dword ptr fs:[0], esp
// 0045b718  51                   push ecx
// 0045b719  53                   push ebx
// 0045b71a  56                   push esi
// 0045b71b  57                   push edi
// 0045b71c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045b71f  8bf1                 mov esi, ecx
// 0045b721  6a14                 push 0x14
// 0045b723  c70600000000         mov dword ptr [esi], 0
// 0045b729  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045b730  e8eb512400           call 0x6a0920
// 0045b735  83c404               add esp, 4
// 0045b738  85c0                 test eax, eax
// 0045b73a  7419                 je 0x45b755
// 0045b73c  b901000000           mov ecx, 1
// 0045b741  894804               mov dword ptr [eax + 4], ecx
// 0045b744  894808               mov dword ptr [eax + 8], ecx
// 0045b747  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045b74a  c70040988100         mov dword ptr [eax], 0x819840
// 0045b750  89480c               mov dword ptr [eax + 0xc], ecx
// 0045b753  eb02                 jmp 0x45b757
// 0045b755  33c0                 xor eax, eax
// 0045b757  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045b75a  8906                 mov dword ptr [esi], eax
// 0045b75c  5f                   pop edi
// 0045b75d  8bc6                 mov eax, esi
// 0045b75f  5e                   pop esi
// 0045b760  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b767  5b                   pop ebx
// 0045b768  8be5                 mov esp, ebp
// 0045b76a  5d                   pop ebp
// 0045b76b  c20800               ret 8
// 0045b76e  8b5508               mov edx, dword ptr [ebp + 8]
// 0045b771  52                   push edx
// 0045b772  8d4d0c               lea ecx, [ebp + 0xc]
// 0045b775  e8b6a6faff           call 0x405e30
// 0045b77a  6a00                 push 0
// 0045b77c  6a00                 push 0
// 0045b77e  e8095e2400           call 0x6a158c

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

// from server: 100% by king_originala
// roc 2008-06 0045b790  unit: CRobloxWnd  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b790
//
// 0045b790  55                   push ebp
// 0045b791  8bec                 mov ebp, esp
// 0045b793  6aff                 push -1
// 0045b795  68602b7c00           push 0x7c2b60
// 0045b79a  64a100000000         mov eax, dword ptr fs:[0]
// 0045b7a0  50                   push eax
// 0045b7a1  64892500000000       mov dword ptr fs:[0], esp
// 0045b7a8  51                   push ecx
// 0045b7a9  53                   push ebx
// 0045b7aa  56                   push esi
// 0045b7ab  57                   push edi
// 0045b7ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045b7af  8bf1                 mov esi, ecx
// 0045b7b1  6a14                 push 0x14
// 0045b7b3  c70600000000         mov dword ptr [esi], 0
// 0045b7b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045b7c0  e85b512400           call 0x6a0920
// 0045b7c5  83c404               add esp, 4
// 0045b7c8  85c0                 test eax, eax
// 0045b7ca  7419                 je 0x45b7e5
// 0045b7cc  b901000000           mov ecx, 1
// 0045b7d1  894804               mov dword ptr [eax + 4], ecx
// 0045b7d4  894808               mov dword ptr [eax + 8], ecx
// 0045b7d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0045b7da  c70054988100         mov dword ptr [eax], 0x819854
// 0045b7e0  89480c               mov dword ptr [eax + 0xc], ecx
// 0045b7e3  eb02                 jmp 0x45b7e7
// 0045b7e5  33c0                 xor eax, eax
// 0045b7e7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045b7ea  8906                 mov dword ptr [esi], eax
// 0045b7ec  5f                   pop edi
// 0045b7ed  8bc6                 mov eax, esi
// 0045b7ef  5e                   pop esi
// 0045b7f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b7f7  5b                   pop ebx
// 0045b7f8  8be5                 mov esp, ebp
// 0045b7fa  5d                   pop ebp
// 0045b7fb  c20800               ret 8
// 0045b7fe  8b5508               mov edx, dword ptr [ebp + 8]
// 0045b801  52                   push edx
// 0045b802  8d4d0c               lea ecx, [ebp + 0xc]
// 0045b805  e826a6faff           call 0x405e30
// 0045b80a  6a00                 push 0
// 0045b80c  6a00                 push 0
// 0045b80e  e8795d2400           call 0x6a158c

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

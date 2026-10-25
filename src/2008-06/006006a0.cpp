// from server: 100% by king_originala
// roc 2008-06 006006a0  unit: RBX::VTool::?$BoundPropGetSet  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006006a0
//
// 006006a0  55                   push ebp
// 006006a1  8bec                 mov ebp, esp
// 006006a3  6aff                 push -1
// 006006a5  6880817d00           push 0x7d8180
// 006006aa  64a100000000         mov eax, dword ptr fs:[0]
// 006006b0  50                   push eax
// 006006b1  64892500000000       mov dword ptr fs:[0], esp
// 006006b8  51                   push ecx
// 006006b9  53                   push ebx
// 006006ba  56                   push esi
// 006006bb  57                   push edi
// 006006bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 006006bf  8bf1                 mov esi, ecx
// 006006c1  6a14                 push 0x14
// 006006c3  c70600000000         mov dword ptr [esi], 0
// 006006c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006006d0  e84b020a00           call 0x6a0920
// 006006d5  83c404               add esp, 4
// 006006d8  85c0                 test eax, eax
// 006006da  7419                 je 0x6006f5
// 006006dc  b901000000           mov ecx, 1
// 006006e1  894804               mov dword ptr [eax + 4], ecx
// 006006e4  894808               mov dword ptr [eax + 8], ecx
// 006006e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006006ea  c700ac1e8400         mov dword ptr [eax], 0x841eac
// 006006f0  89480c               mov dword ptr [eax + 0xc], ecx
// 006006f3  eb02                 jmp 0x6006f7
// 006006f5  33c0                 xor eax, eax
// 006006f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006006fa  8906                 mov dword ptr [esi], eax
// 006006fc  5f                   pop edi
// 006006fd  8bc6                 mov eax, esi
// 006006ff  5e                   pop esi
// 00600700  64890d00000000       mov dword ptr fs:[0], ecx
// 00600707  5b                   pop ebx
// 00600708  8be5                 mov esp, ebp
// 0060070a  5d                   pop ebp
// 0060070b  c20800               ret 8

typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct Deleter {
    void operator()(void*) const;
};

struct Control {
    int strong;
    int weak;
    void* object;
    Deleter deleter;

    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    virtual void* get_deleter(const void*);

    Control(void*, Deleter);
};

inline Control::Control(void* p, Deleter d)
    : strong(1), weak(1), object(p), deleter(d)
{
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}

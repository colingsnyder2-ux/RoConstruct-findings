// from server: 100% by king_originala
// roc 2008-06 00600970  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600970
//
// 00600970  55                   push ebp
// 00600971  8bec                 mov ebp, esp
// 00600973  6aff                 push -1
// 00600975  68d0817d00           push 0x7d81d0
// 0060097a  64a100000000         mov eax, dword ptr fs:[0]
// 00600980  50                   push eax
// 00600981  64892500000000       mov dword ptr fs:[0], esp
// 00600988  51                   push ecx
// 00600989  53                   push ebx
// 0060098a  56                   push esi
// 0060098b  57                   push edi
// 0060098c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0060098f  8bf1                 mov esi, ecx
// 00600991  6a14                 push 0x14
// 00600993  c70600000000         mov dword ptr [esi], 0
// 00600999  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006009a0  e87bff0900           call 0x6a0920
// 006009a5  83c404               add esp, 4
// 006009a8  85c0                 test eax, eax
// 006009aa  7419                 je 0x6009c5
// 006009ac  b901000000           mov ecx, 1
// 006009b1  894804               mov dword ptr [eax + 4], ecx
// 006009b4  894808               mov dword ptr [eax + 8], ecx
// 006009b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006009ba  c700101f8400         mov dword ptr [eax], 0x841f10
// 006009c0  89480c               mov dword ptr [eax + 0xc], ecx
// 006009c3  eb02                 jmp 0x6009c7
// 006009c5  33c0                 xor eax, eax
// 006009c7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006009ca  8906                 mov dword ptr [esi], eax
// 006009cc  5f                   pop edi
// 006009cd  8bc6                 mov eax, esi
// 006009cf  5e                   pop esi
// 006009d0  64890d00000000       mov dword ptr fs:[0], ecx
// 006009d7  5b                   pop ebx
// 006009d8  8be5                 mov esp, ebp
// 006009da  5d                   pop ebp
// 006009db  c20800               ret 8
// 006009de  8b5508               mov edx, dword ptr [ebp + 8]
// 006009e1  52                   push edx
// 006009e2  8d4d0c               lea ecx, [ebp + 0xc]
// 006009e5  e84654e0ff           call 0x405e30
// 006009ea  6a00                 push 0
// 006009ec  6a00                 push 0
// 006009ee  e8990b0a00           call 0x6a158c

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

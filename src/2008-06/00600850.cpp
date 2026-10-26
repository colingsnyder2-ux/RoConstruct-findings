// from server: 100% by king_originala
// roc 2008-06 00600850  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600850
//
// 00600850  55                   push ebp
// 00600851  8bec                 mov ebp, esp
// 00600853  6aff                 push -1
// 00600855  68b0817d00           push 0x7d81b0
// 0060085a  64a100000000         mov eax, dword ptr fs:[0]
// 00600860  50                   push eax
// 00600861  64892500000000       mov dword ptr fs:[0], esp
// 00600868  51                   push ecx
// 00600869  53                   push ebx
// 0060086a  56                   push esi
// 0060086b  57                   push edi
// 0060086c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0060086f  8bf1                 mov esi, ecx
// 00600871  6a14                 push 0x14
// 00600873  c70600000000         mov dword ptr [esi], 0
// 00600879  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600880  e89b000a00           call 0x6a0920
// 00600885  83c404               add esp, 4
// 00600888  85c0                 test eax, eax
// 0060088a  7419                 je 0x6008a5
// 0060088c  b901000000           mov ecx, 1
// 00600891  894804               mov dword ptr [eax + 4], ecx
// 00600894  894808               mov dword ptr [eax + 8], ecx
// 00600897  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0060089a  c700e81e8400         mov dword ptr [eax], 0x841ee8
// 006008a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006008a3  eb02                 jmp 0x6008a7
// 006008a5  33c0                 xor eax, eax
// 006008a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006008aa  8906                 mov dword ptr [esi], eax
// 006008ac  5f                   pop edi
// 006008ad  8bc6                 mov eax, esi
// 006008af  5e                   pop esi
// 006008b0  64890d00000000       mov dword ptr fs:[0], ecx
// 006008b7  5b                   pop ebx
// 006008b8  8be5                 mov esp, ebp
// 006008ba  5d                   pop ebp
// 006008bb  c20800               ret 8
// 006008be  8b5508               mov edx, dword ptr [ebp + 8]
// 006008c1  52                   push edx
// 006008c2  8d4d0c               lea ecx, [ebp + 0xc]
// 006008c5  e86655e0ff           call 0x405e30
// 006008ca  6a00                 push 0
// 006008cc  6a00                 push 0
// 006008ce  e8b90c0a00           call 0x6a158c

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

// from server: 100% by king_originala
// roc 2008-06 00600a90  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600a90
//
// 00600a90  55                   push ebp
// 00600a91  8bec                 mov ebp, esp
// 00600a93  6aff                 push -1
// 00600a95  68f0817d00           push 0x7d81f0
// 00600a9a  64a100000000         mov eax, dword ptr fs:[0]
// 00600aa0  50                   push eax
// 00600aa1  64892500000000       mov dword ptr fs:[0], esp
// 00600aa8  51                   push ecx
// 00600aa9  53                   push ebx
// 00600aaa  56                   push esi
// 00600aab  57                   push edi
// 00600aac  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600aaf  8bf1                 mov esi, ecx
// 00600ab1  6a14                 push 0x14
// 00600ab3  c70600000000         mov dword ptr [esi], 0
// 00600ab9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600ac0  e85bfe0900           call 0x6a0920
// 00600ac5  83c404               add esp, 4
// 00600ac8  85c0                 test eax, eax
// 00600aca  7419                 je 0x600ae5
// 00600acc  b901000000           mov ecx, 1
// 00600ad1  894804               mov dword ptr [eax + 4], ecx
// 00600ad4  894808               mov dword ptr [eax + 8], ecx
// 00600ad7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600ada  c700381f8400         mov dword ptr [eax], 0x841f38
// 00600ae0  89480c               mov dword ptr [eax + 0xc], ecx
// 00600ae3  eb02                 jmp 0x600ae7
// 00600ae5  33c0                 xor eax, eax
// 00600ae7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600aea  8906                 mov dword ptr [esi], eax
// 00600aec  5f                   pop edi
// 00600aed  8bc6                 mov eax, esi
// 00600aef  5e                   pop esi
// 00600af0  64890d00000000       mov dword ptr fs:[0], ecx
// 00600af7  5b                   pop ebx
// 00600af8  8be5                 mov esp, ebp
// 00600afa  5d                   pop ebp
// 00600afb  c20800               ret 8
// 00600afe  8b5508               mov edx, dword ptr [ebp + 8]
// 00600b01  52                   push edx
// 00600b02  8d4d0c               lea ecx, [ebp + 0xc]
// 00600b05  e82653e0ff           call 0x405e30
// 00600b0a  6a00                 push 0
// 00600b0c  6a00                 push 0
// 00600b0e  e8790a0a00           call 0x6a158c

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

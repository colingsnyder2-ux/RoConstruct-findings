// from server: 100% by king_originala
// roc 2008-06 0041e230  unit: VDHTMLWindow::?$SignalDesc  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e230
//
// 0041e230  55                   push ebp
// 0041e231  8bec                 mov ebp, esp
// 0041e233  6aff                 push -1
// 0041e235  6810e57b00           push 0x7be510
// 0041e23a  64a100000000         mov eax, dword ptr fs:[0]
// 0041e240  50                   push eax
// 0041e241  64892500000000       mov dword ptr fs:[0], esp
// 0041e248  51                   push ecx
// 0041e249  53                   push ebx
// 0041e24a  56                   push esi
// 0041e24b  57                   push edi
// 0041e24c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041e24f  8bf1                 mov esi, ecx
// 0041e251  6a14                 push 0x14
// 0041e253  c70600000000         mov dword ptr [esi], 0
// 0041e259  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041e260  e8bb262800           call 0x6a0920
// 0041e265  83c404               add esp, 4
// 0041e268  85c0                 test eax, eax
// 0041e26a  7419                 je 0x41e285
// 0041e26c  b901000000           mov ecx, 1
// 0041e271  894804               mov dword ptr [eax + 4], ecx
// 0041e274  894808               mov dword ptr [eax + 8], ecx
// 0041e277  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041e27a  c700a0f18000         mov dword ptr [eax], 0x80f1a0
// 0041e280  89480c               mov dword ptr [eax + 0xc], ecx
// 0041e283  eb02                 jmp 0x41e287
// 0041e285  33c0                 xor eax, eax
// 0041e287  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041e28a  8906                 mov dword ptr [esi], eax
// 0041e28c  5f                   pop edi
// 0041e28d  8bc6                 mov eax, esi
// 0041e28f  5e                   pop esi
// 0041e290  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e297  5b                   pop ebx
// 0041e298  8be5                 mov esp, ebp
// 0041e29a  5d                   pop ebp
// 0041e29b  c20800               ret 8

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
extern void* control_vtable[];

struct Deleter {
    void operator()(void*) const;
};

struct Control {
    void** vtable;
    long strong;
    long weak;
    void* object;
    Deleter deleter;

    Control(void*, Deleter);
};

inline Control::Control(void* value, Deleter)
{
    strong = 1;
    weak = 1;
    vtable = control_vtable;
    object = value;
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* object, Deleter deleter) : control(0)
{
    try {
        control = new Control(object, deleter);
    }
    catch (...) {
        deleter(object);
        throw;
    }
}

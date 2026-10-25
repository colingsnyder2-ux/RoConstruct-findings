// from server: 100% by king_originala
// roc 2008-06 00594740  unit: RBX::Lua::VFunctionRef::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594740
//
// 00594740  55                   push ebp
// 00594741  8bec                 mov ebp, esp
// 00594743  6aff                 push -1
// 00594745  68701f7d00           push 0x7d1f70
// 0059474a  64a100000000         mov eax, dword ptr fs:[0]
// 00594750  50                   push eax
// 00594751  64892500000000       mov dword ptr fs:[0], esp
// 00594758  51                   push ecx
// 00594759  53                   push ebx
// 0059475a  56                   push esi
// 0059475b  57                   push edi
// 0059475c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059475f  8bf1                 mov esi, ecx
// 00594761  6a10                 push 0x10
// 00594763  c70600000000         mov dword ptr [esi], 0
// 00594769  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00594770  e8abc11000           call 0x6a0920
// 00594775  83c404               add esp, 4
// 00594778  85c0                 test eax, eax
// 0059477a  7419                 je 0x594795
// 0059477c  b901000000           mov ecx, 1
// 00594781  894804               mov dword ptr [eax + 4], ecx
// 00594784  894808               mov dword ptr [eax + 8], ecx
// 00594787  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0059478a  c70058228300         mov dword ptr [eax], 0x832258
// 00594790  89480c               mov dword ptr [eax + 0xc], ecx
// 00594793  eb02                 jmp 0x594797
// 00594795  33c0                 xor eax, eax
// 00594797  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059479a  8906                 mov dword ptr [esi], eax
// 0059479c  5f                   pop edi
// 0059479d  8bc6                 mov eax, esi
// 0059479f  5e                   pop esi
// 005947a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005947a7  5b                   pop ebx
// 005947a8  8be5                 mov esp, ebp
// 005947aa  5d                   pop ebp
// 005947ab  c20400               ret 4

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Function {
    ~Function();
};

struct Control {
    virtual ~Control();
    long strong;
    long weak;
    Function* object;

    Control(Function* p) : strong(1), weak(1), object(p) {}
};

struct Holder {
    Control* control;
    Holder(Function*);
};

Holder::Holder(Function* p) : control(0)
{
    try {
        control = new Control(p);
    }
    catch (...) {
        delete p;
        throw;
    }
}

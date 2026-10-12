// from server: 100% by king_originala
// roc 2008-06 0048f5c0  unit: RBX::VShirtGraphic::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f5c0
//
// 0048f5c0  55                   push ebp
// 0048f5c1  8bec                 mov ebp, esp
// 0048f5c3  6aff                 push -1
// 0048f5c5  68a0637c00           push 0x7c63a0
// 0048f5ca  64a100000000         mov eax, dword ptr fs:[0]
// 0048f5d0  50                   push eax
// 0048f5d1  64892500000000       mov dword ptr fs:[0], esp
// 0048f5d8  51                   push ecx
// 0048f5d9  53                   push ebx
// 0048f5da  56                   push esi
// 0048f5db  57                   push edi
// 0048f5dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048f5df  8bf1                 mov esi, ecx
// 0048f5e1  6a14                 push 0x14
// 0048f5e3  c70600000000         mov dword ptr [esi], 0
// 0048f5e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048f5f0  e82b132100           call 0x6a0920
// 0048f5f5  83c404               add esp, 4
// 0048f5f8  85c0                 test eax, eax
// 0048f5fa  7419                 je 0x48f615
// 0048f5fc  b901000000           mov ecx, 1
// 0048f601  894804               mov dword ptr [eax + 4], ecx
// 0048f604  894808               mov dword ptr [eax + 8], ecx
// 0048f607  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048f60a  c70020188200         mov dword ptr [eax], 0x821820
// 0048f610  89480c               mov dword ptr [eax + 0xc], ecx
// 0048f613  eb02                 jmp 0x48f617
// 0048f615  33c0                 xor eax, eax
// 0048f617  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048f61a  8906                 mov dword ptr [esi], eax
// 0048f61c  5f                   pop edi
// 0048f61d  8bc6                 mov eax, esi
// 0048f61f  5e                   pop esi
// 0048f620  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f627  5b                   pop ebx
// 0048f628  8be5                 mov esp, ebp
// 0048f62a  5d                   pop ebp
// 0048f62b  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Product {
    virtual ~Product();
};

struct Deleter {
    void operator()(Product* p) const { delete p; }
};

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    virtual void* get_deleter(const void*);

    long strong;
    long weak;
    Product* object;
    Deleter deleter;

    Control(Product* p, Deleter d)
        : strong(1), weak(1), object(p), deleter(d) {}
};

struct S {
    Control* control;
    S(Product* p, Deleter d);
};

S::S(Product* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}

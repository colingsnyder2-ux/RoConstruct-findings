// from server: 100% by tester
// roc 2008-06 0042a630  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a630
//
// 0042a630  55                   push ebp
// 0042a631  8bec                 mov ebp, esp
// 0042a633  6aff                 push -1
// 0042a635  6850f47b00           push 0x7bf450
// 0042a63a  64a100000000         mov eax, dword ptr fs:[0]
// 0042a640  50                   push eax
// 0042a641  64892500000000       mov dword ptr fs:[0], esp
// 0042a648  51                   push ecx
// 0042a649  53                   push ebx
// 0042a64a  56                   push esi
// 0042a64b  57                   push edi
// 0042a64c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042a64f  8bf1                 mov esi, ecx
// 0042a651  6a10                 push 0x10
// 0042a653  c70600000000         mov dword ptr [esi], 0
// 0042a659  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042a660  e8bb622700           call 0x6a0920
// 0042a665  83c404               add esp, 4
// 0042a668  85c0                 test eax, eax
// 0042a66a  7419                 je 0x42a685
// 0042a66c  b901000000           mov ecx, 1
// 0042a671  894804               mov dword ptr [eax + 4], ecx
// 0042a674  894808               mov dword ptr [eax + 8], ecx
// 0042a677  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0042a67a  c70038058100         mov dword ptr [eax], 0x810538
// 0042a680  89480c               mov dword ptr [eax + 0xc], ecx
// 0042a683  eb02                 jmp 0x42a687
// 0042a685  33c0                 xor eax, eax
// 0042a687  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0042a68a  8906                 mov dword ptr [esi], eax
// 0042a68c  5f                   pop edi
// 0042a68d  8bc6                 mov eax, esi
// 0042a68f  5e                   pop esi
// 0042a690  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a697  5b                   pop ebx
// 0042a698  8be5                 mov esp, ebp
// 0042a69a  5d                   pop ebp
// 0042a69b  c20400               ret 4
// 0042a69e  8b5508               mov edx, dword ptr [ebp + 8]
// 0042a6a1  52                   push edx
// 0042a6a2  e8c9d4ffff           call 0x427b70
// 0042a6a7  83c404               add esp, 4
// 0042a6aa  6a00                 push 0
// 0042a6ac  6a00                 push 0
// 0042a6ae  e8d96e2700           call 0x6a158c

extern void* __cdecl operator new(unsigned int);
extern const unsigned char control_table[];

struct Object {
    virtual ~Object();
};

struct Deleter {};

struct Control {
    const void* table;
    long strong;
    long weak;
    Object* object;
};

struct S {
    Control* control;
    S(Object* object);
};

S::S(Object* object) : control(0)
{
    try {
        Control* p = static_cast<Control*>(operator new(sizeof(Control)));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = control_table;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        delete object;
        throw;
    }
}

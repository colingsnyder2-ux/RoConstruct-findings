// from server: 100% by tester
// roc 2008-06 0042a800  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a800
//
// 0042a800  55                   push ebp
// 0042a801  8bec                 mov ebp, esp
// 0042a803  6aff                 push -1
// 0042a805  6860f47b00           push 0x7bf460
// 0042a80a  64a100000000         mov eax, dword ptr fs:[0]
// 0042a810  50                   push eax
// 0042a811  64892500000000       mov dword ptr fs:[0], esp
// 0042a818  51                   push ecx
// 0042a819  53                   push ebx
// 0042a81a  56                   push esi
// 0042a81b  57                   push edi
// 0042a81c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042a81f  8bf1                 mov esi, ecx
// 0042a821  6a10                 push 0x10
// 0042a823  c70600000000         mov dword ptr [esi], 0
// 0042a829  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042a830  e8eb602700           call 0x6a0920
// 0042a835  83c404               add esp, 4
// 0042a838  85c0                 test eax, eax
// 0042a83a  7419                 je 0x42a855
// 0042a83c  b901000000           mov ecx, 1
// 0042a841  894804               mov dword ptr [eax + 4], ecx
// 0042a844  894808               mov dword ptr [eax + 8], ecx
// 0042a847  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0042a84a  c7004c058100         mov dword ptr [eax], 0x81054c
// 0042a850  89480c               mov dword ptr [eax + 0xc], ecx
// 0042a853  eb02                 jmp 0x42a857
// 0042a855  33c0                 xor eax, eax
// 0042a857  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0042a85a  8906                 mov dword ptr [esi], eax
// 0042a85c  5f                   pop edi
// 0042a85d  8bc6                 mov eax, esi
// 0042a85f  5e                   pop esi
// 0042a860  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a867  5b                   pop ebx
// 0042a868  8be5                 mov esp, ebp
// 0042a86a  5d                   pop ebp
// 0042a86b  c20400               ret 4

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

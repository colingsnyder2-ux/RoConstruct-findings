// from server: 100% by king_originala
// roc 2008-06 00432650  unit: RBX::VAccoutrement::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432650
//
// 00432650  55                   push ebp
// 00432651  8bec                 mov ebp, esp
// 00432653  6aff                 push -1
// 00432655  68c0fd7b00           push 0x7bfdc0
// 0043265a  64a100000000         mov eax, dword ptr fs:[0]
// 00432660  50                   push eax
// 00432661  64892500000000       mov dword ptr fs:[0], esp
// 00432668  51                   push ecx
// 00432669  53                   push ebx
// 0043266a  56                   push esi
// 0043266b  57                   push edi
// 0043266c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043266f  8bf1                 mov esi, ecx
// 00432671  6a14                 push 0x14
// 00432673  c70600000000         mov dword ptr [esi], 0
// 00432679  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00432680  e89be22600           call 0x6a0920
// 00432685  83c404               add esp, 4
// 00432688  85c0                 test eax, eax
// 0043268a  7419                 je 0x4326a5
// 0043268c  b901000000           mov ecx, 1
// 00432691  894804               mov dword ptr [eax + 4], ecx
// 00432694  894808               mov dword ptr [eax + 8], ecx
// 00432697  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0043269a  c7003c1c8100         mov dword ptr [eax], 0x811c3c
// 004326a0  89480c               mov dword ptr [eax + 0xc], ecx
// 004326a3  eb02                 jmp 0x4326a7
// 004326a5  33c0                 xor eax, eax
// 004326a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004326aa  8906                 mov dword ptr [esi], eax
// 004326ac  5f                   pop edi
// 004326ad  8bc6                 mov eax, esi
// 004326af  5e                   pop esi
// 004326b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004326b7  5b                   pop ebx
// 004326b8  8be5                 mov esp, ebp
// 004326ba  5d                   pop ebp
// 004326bb  c20800               ret 8

void* __cdecl allocate(unsigned int);
extern const unsigned int controlTable[];

struct Deleter {
    void operator()(void*) const;
};

struct Control {
    const unsigned int* table;
    long strong;
    long weak;
    void* object;
    unsigned char deleter[4];
};

struct S {
    Control* control;
    S(void*, const Deleter&);
};

S::S(void* object, const Deleter& deleter) : control(0)
{
    try {
        Control* p = static_cast<Control*>(allocate(20));
        if (p) {
            p->strong = 1;
            p->weak = 1;
            p->table = controlTable;
            p->object = object;
        } else {
            p = 0;
        }
        control = p;
    } catch (...) {
        deleter(object);
        throw;
    }
}

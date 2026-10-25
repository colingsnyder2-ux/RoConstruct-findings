// from server: 100% by tester
// roc 2008-06 0040bf70  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bf70
//
// 0040bf70  55                   push ebp
// 0040bf71  8bec                 mov ebp, esp
// 0040bf73  6aff                 push -1
// 0040bf75  6850d27b00           push 0x7bd250
// 0040bf7a  64a100000000         mov eax, dword ptr fs:[0]
// 0040bf80  50                   push eax
// 0040bf81  64892500000000       mov dword ptr fs:[0], esp
// 0040bf88  51                   push ecx
// 0040bf89  53                   push ebx
// 0040bf8a  56                   push esi
// 0040bf8b  57                   push edi
// 0040bf8c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040bf8f  8bf1                 mov esi, ecx
// 0040bf91  6a14                 push 0x14
// 0040bf93  c70600000000         mov dword ptr [esi], 0
// 0040bf99  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040bfa0  e87b492900           call 0x6a0920
// 0040bfa5  83c404               add esp, 4
// 0040bfa8  85c0                 test eax, eax
// 0040bfaa  7419                 je 0x40bfc5
// 0040bfac  b901000000           mov ecx, 1
// 0040bfb1  894804               mov dword ptr [eax + 4], ecx
// 0040bfb4  894808               mov dword ptr [eax + 8], ecx
// 0040bfb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040bfba  c70090c08000         mov dword ptr [eax], 0x80c090
// 0040bfc0  89480c               mov dword ptr [eax + 0xc], ecx
// 0040bfc3  eb02                 jmp 0x40bfc7
// 0040bfc5  33c0                 xor eax, eax
// 0040bfc7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040bfca  8906                 mov dword ptr [esi], eax
// 0040bfcc  5f                   pop edi
// 0040bfcd  8bc6                 mov eax, esi
// 0040bfcf  5e                   pop esi
// 0040bfd0  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bfd7  5b                   pop ebx
// 0040bfd8  8be5                 mov esp, ebp
// 0040bfda  5d                   pop ebp
// 0040bfdb  c20800               ret 8

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
    Deleter deleter;
};

struct S {
    Control* control;
    S(Object* object, Deleter deleter);
};

S::S(Object* object, Deleter deleter) : control(0)
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

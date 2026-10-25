// from server: 100% by tester
// roc 2008-06 00409000  unit: VCRenderSettings::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409000
//
// 00409000  55                   push ebp
// 00409001  8bec                 mov ebp, esp
// 00409003  6aff                 push -1
// 00409005  68b0cf7b00           push 0x7bcfb0
// 0040900a  64a100000000         mov eax, dword ptr fs:[0]
// 00409010  50                   push eax
// 00409011  64892500000000       mov dword ptr fs:[0], esp
// 00409018  51                   push ecx
// 00409019  53                   push ebx
// 0040901a  56                   push esi
// 0040901b  57                   push edi
// 0040901c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040901f  8bf1                 mov esi, ecx
// 00409021  6a14                 push 0x14
// 00409023  c70600000000         mov dword ptr [esi], 0
// 00409029  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00409030  e8eb782900           call 0x6a0920
// 00409035  83c404               add esp, 4
// 00409038  85c0                 test eax, eax
// 0040903a  7419                 je 0x409055
// 0040903c  b901000000           mov ecx, 1
// 00409041  894804               mov dword ptr [eax + 4], ecx
// 00409044  894808               mov dword ptr [eax + 8], ecx
// 00409047  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040904a  c70098b68000         mov dword ptr [eax], 0x80b698
// 00409050  89480c               mov dword ptr [eax + 0xc], ecx
// 00409053  eb02                 jmp 0x409057
// 00409055  33c0                 xor eax, eax
// 00409057  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040905a  8906                 mov dword ptr [esi], eax
// 0040905c  5f                   pop edi
// 0040905d  8bc6                 mov eax, esi
// 0040905f  5e                   pop esi
// 00409060  64890d00000000       mov dword ptr fs:[0], ecx
// 00409067  5b                   pop ebx
// 00409068  8be5                 mov esp, ebp
// 0040906a  5d                   pop ebp
// 0040906b  c20800               ret 8

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

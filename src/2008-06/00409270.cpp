// from server: 100% by tester
// roc 2008-06 00409270  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409270
//
// 00409270  55                   push ebp
// 00409271  8bec                 mov ebp, esp
// 00409273  6aff                 push -1
// 00409275  68c0cf7b00           push 0x7bcfc0
// 0040927a  64a100000000         mov eax, dword ptr fs:[0]
// 00409280  50                   push eax
// 00409281  64892500000000       mov dword ptr fs:[0], esp
// 00409288  51                   push ecx
// 00409289  53                   push ebx
// 0040928a  56                   push esi
// 0040928b  57                   push edi
// 0040928c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040928f  8bf1                 mov esi, ecx
// 00409291  6a14                 push 0x14
// 00409293  c70600000000         mov dword ptr [esi], 0
// 00409299  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004092a0  e87b762900           call 0x6a0920
// 004092a5  83c404               add esp, 4
// 004092a8  85c0                 test eax, eax
// 004092aa  7419                 je 0x4092c5
// 004092ac  b901000000           mov ecx, 1
// 004092b1  894804               mov dword ptr [eax + 4], ecx
// 004092b4  894808               mov dword ptr [eax + 8], ecx
// 004092b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004092ba  c700b4b68000         mov dword ptr [eax], 0x80b6b4
// 004092c0  89480c               mov dword ptr [eax + 0xc], ecx
// 004092c3  eb02                 jmp 0x4092c7
// 004092c5  33c0                 xor eax, eax
// 004092c7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004092ca  8906                 mov dword ptr [esi], eax
// 004092cc  5f                   pop edi
// 004092cd  8bc6                 mov eax, esi
// 004092cf  5e                   pop esi
// 004092d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004092d7  5b                   pop ebx
// 004092d8  8be5                 mov esp, ebp
// 004092da  5d                   pop ebp
// 004092db  c20800               ret 8
// 004092de  8b5508               mov edx, dword ptr [ebp + 8]
// 004092e1  52                   push edx
// 004092e2  8d4d0c               lea ecx, [ebp + 0xc]
// 004092e5  e846cbffff           call 0x405e30
// 004092ea  6a00                 push 0
// 004092ec  6a00                 push 0
// 004092ee  e899822900           call 0x6a158c

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

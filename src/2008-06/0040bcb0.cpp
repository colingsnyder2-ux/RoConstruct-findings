// from server: 100% by tester
// roc 2008-06 0040bcb0  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bcb0
//
// 0040bcb0  55                   push ebp
// 0040bcb1  8bec                 mov ebp, esp
// 0040bcb3  6aff                 push -1
// 0040bcb5  6820d27b00           push 0x7bd220
// 0040bcba  64a100000000         mov eax, dword ptr fs:[0]
// 0040bcc0  50                   push eax
// 0040bcc1  64892500000000       mov dword ptr fs:[0], esp
// 0040bcc8  51                   push ecx
// 0040bcc9  53                   push ebx
// 0040bcca  56                   push esi
// 0040bccb  57                   push edi
// 0040bccc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040bccf  8bf1                 mov esi, ecx
// 0040bcd1  6a14                 push 0x14
// 0040bcd3  c70600000000         mov dword ptr [esi], 0
// 0040bcd9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040bce0  e83b4c2900           call 0x6a0920
// 0040bce5  83c404               add esp, 4
// 0040bce8  85c0                 test eax, eax
// 0040bcea  7419                 je 0x40bd05
// 0040bcec  b901000000           mov ecx, 1
// 0040bcf1  894804               mov dword ptr [eax + 4], ecx
// 0040bcf4  894808               mov dword ptr [eax + 8], ecx
// 0040bcf7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040bcfa  c700b0bf8000         mov dword ptr [eax], 0x80bfb0
// 0040bd00  89480c               mov dword ptr [eax + 0xc], ecx
// 0040bd03  eb02                 jmp 0x40bd07
// 0040bd05  33c0                 xor eax, eax
// 0040bd07  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040bd0a  8906                 mov dword ptr [esi], eax
// 0040bd0c  5f                   pop edi
// 0040bd0d  8bc6                 mov eax, esi
// 0040bd0f  5e                   pop esi
// 0040bd10  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bd17  5b                   pop ebx
// 0040bd18  8be5                 mov esp, ebp
// 0040bd1a  5d                   pop ebp
// 0040bd1b  c20800               ret 8
// 0040bd1e  8b5508               mov edx, dword ptr [ebp + 8]
// 0040bd21  52                   push edx
// 0040bd22  8d4d0c               lea ecx, [ebp + 0xc]
// 0040bd25  e806a1ffff           call 0x405e30
// 0040bd2a  6a00                 push 0
// 0040bd2c  6a00                 push 0
// 0040bd2e  e859582900           call 0x6a158c

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

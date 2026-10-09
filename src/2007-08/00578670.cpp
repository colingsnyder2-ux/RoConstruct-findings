// from server: 71% by colin
// roc 2007-08 00578670  unit: RBX::VPartInstance::?$FactoryProduct  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578670
//
// 00578670  d9ee                 fldz 
// 00578672  56                   push esi
// 00578673  d9442408             fld dword ptr [esp + 8]
// 00578677  8bf1                 mov esi, ecx
// 00578679  d8d1                 fcom st(1)
// 0057867b  dfe0                 fnstsw ax
// 0057867d  f6c441               test ah, 0x41
// 00578680  7b11                 jnp 0x578693
// 00578682  ddd9                 fstp st(1)
// 00578684  d9e8                 fld1 
// 00578686  d8d1                 fcom st(1)
// 00578688  dfe0                 fnstsw ax
// 0057868a  f6c441               test ah, 0x41
// 0057868d  7a04                 jp 0x578693
// 0057868f  ddd9                 fstp st(1)
// 00578691  eb02                 jmp 0x578695
// 00578693  ddd8                 fstp st(0)
// 00578695  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 0057869b  d94178               fld dword ptr [ecx + 0x78]
// 0057869e  dde9                 fucomp st(1)
// 005786a0  dfe0                 fnstsw ax
// 005786a2  f6c444               test ah, 0x44
// 005786a5  7b19                 jnp 0x5786c0
// 005786a7  51                   push ecx
// 005786a8  d91c24               fstp dword ptr [esp]
// 005786ab  e870c20300           call 0x5b4920
// 005786b0  68a0278c00           push 0x8c27a0
// 005786b5  8bce                 mov ecx, esi
// 005786b7  e854c0ecff           call 0x444710
// 005786bc  5e                   pop esi
// 005786bd  c20400               ret 4
// 005786c0  ddd8                 fstp st(0)
// 005786c2  5e                   pop esi
// 005786c3  c20400               ret 4

struct VPartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void setSize(float);
};

extern "C" void __stdcall sub_5B4920(float);
extern "C" void __stdcall sub_444710(void*, void*);

void VPartInstance::setSize(float size) {
    float zero = 0.0f;
    float one = 1.0f;
    float clamped;
    if (size < zero) {
        clamped = zero;
    } else if (size > one) {
        clamped = one;
    } else {
        clamped = size;
    }
    void* p = field_1d8;
    float cur = *(float*)((char*)p + 0x78);
    if (cur != clamped) {
        sub_5B4920(clamped);
        sub_444710((void*)0x8c27a0, this);
    }
}

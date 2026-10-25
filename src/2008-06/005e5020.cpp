// from server: 100% by Espeon
// roc 2008-06 005e5020  unit: RBX::VMotor::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5020
//
// 005e5020  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 005e5026  d98294000000         fld dword ptr [edx + 0x94]
// 005e502c  d9c0                 fld st(0)
// 005e502e  d9442404             fld dword ptr [esp + 4]
// 005e5032  dde1                 fucom st(1)
// 005e5034  dfe0                 fnstsw ax
// 005e5036  ddd9                 fstp st(1)
// 005e5038  f6c444               test ah, 0x44
// 005e503b  7b34                 jnp 0x5e5071
// 005e503d  d9c0                 fld st(0)
// 005e503f  dee2                 fsubrp st(2)
// 005e5041  d9c9                 fxch st(1)
// 005e5043  d9e1                 fabs 
// 005e5045  d9c1                 fld st(1)
// 005e5047  d9e1                 fabs 
// 005e5049  d80594748200         fadd dword ptr [0x827494]
// 005e504f  d80dd4f68300         fmul dword ptr [0x83f6d4]
// 005e5055  ded9                 fcompp 
// 005e5057  dfe0                 fnstsw ax
// 005e5059  f6c401               test ah, 1
// 005e505c  7415                 je 0x5e5073
// 005e505e  d99a94000000         fstp dword ptr [edx + 0x94]
// 005e5064  c744240458ab9700     mov dword ptr [esp + 4], 0x97ab58
// 005e506c  e98f8ae2ff           jmp 0x40db00
// 005e5071  ddd9                 fstp st(1)
// 005e5073  ddd8                 fstp st(0)
// 005e5075  c20400               ret 4

extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)
// from server: 87% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float toleranceBase;
extern const float toleranceScale;
extern char descriptor;

struct Target {
    char padding[0x94];
    float value;
};

struct S {
    char padding[0x150];
    Target* target;

    void notify(const void* descriptor);
    void f(float value);
};

void S::f(float value)
{
    Target* object=target;
    float previous=object->value;
    _ReadWriteBarrier();
    if (value != previous &&
        !(fabs(value - previous) <=
            (fabs(value) + toleranceBase) * toleranceScale)) {
        object->value = value;
        notify(&descriptor);
    }
}

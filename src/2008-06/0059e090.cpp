// from server: 100% by colin
// roc 2008-06 0059e090  unit: VCRenderSettings::?$EnumPropDescriptor  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059e090
//
// 0059e090  d9ee                 fldz 
// 0059e092  56                   push esi
// 0059e093  d9442408             fld dword ptr [esp + 8]
// 0059e097  8bf1                 mov esi, ecx
// 0059e099  d8d1                 fcom st(1)
// 0059e09b  dfe0                 fnstsw ax
// 0059e09d  f6c441               test ah, 0x41
// 0059e0a0  7b15                 jnp 0x59e0b7
// 0059e0a2  ddd9                 fstp st(1)
// 0059e0a4  d90534c48100         fld dword ptr [0x81c434]
// 0059e0aa  d8d1                 fcom st(1)
// 0059e0ac  dfe0                 fnstsw ax
// 0059e0ae  f6c441               test ah, 0x41
// 0059e0b1  7a04                 jp 0x59e0b7
// 0059e0b3  ddd9                 fstp st(1)
// 0059e0b5  eb02                 jmp 0x59e0b9
// 0059e0b7  ddd8                 fstp st(0)
// 0059e0b9  d986d8020000         fld dword ptr [esi + 0x2d8]
// 0059e0bf  dde9                 fucomp st(1)
// 0059e0c1  dfe0                 fnstsw ax
// 0059e0c3  f6c444               test ah, 0x44
// 0059e0c6  7b1f                 jnp 0x59e0e7
// 0059e0c8  51                   push ecx
// 0059e0c9  8d8e28020000         lea ecx, [esi + 0x228]
// 0059e0cf  d91c24               fstp dword ptr [esp]
// 0059e0d2  e829950400           call 0x5e7600
// 0059e0d7  68b8619700           push 0x9761b8
// 0059e0dc  8bce                 mov ecx, esi
// 0059e0de  e81dfae6ff           call 0x40db00
// 0059e0e3  5e                   pop esi
// 0059e0e4  c20400               ret 4
// 0059e0e7  ddd8                 fstp st(0)
// 0059e0e9  5e                   pop esi
// 0059e0ea  c20400               ret 4

// from server: 92% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern const float upperLimit;
extern char propertyDescriptor;

struct Value {
    char storage[0xB0];
    void set(float);
};

struct Settings {
    char padding[0x228];
    Value value;
    float current;

    void notify(void*);
    void set(float);
};

void Settings::set(float amount)
{
    float clamped = amount <= 0.0f ? 0.0f :
                    upperLimit <= amount ? upperLimit : amount;

    if (clamped != current) {
        value.set(clamped);
        notify(&propertyDescriptor);
    }
}

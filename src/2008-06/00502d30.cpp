// from server: 89% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 88% by king_originala
// roc 2008-06 00502d30  unit: RBX::Render::RenderScene  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502d30
//
// 00502d30  64a100000000         mov eax, dword ptr fs:[0]
// 00502d36  6aff                 push -1
// 00502d38  6818b57c00           push 0x7cb518
// 00502d3d  50                   push eax
// 00502d3e  64892500000000       mov dword ptr fs:[0], esp
// 00502d45  d9ee                 fldz 
// 00502d47  d9442410             fld dword ptr [esp + 0x10]
// 00502d4b  56                   push esi
// 00502d4c  d8d1                 fcom st(1)
// 00502d4e  8bf1                 mov esi, ecx
// 00502d50  dfe0                 fnstsw ax
// 00502d52  f6c441               test ah, 0x41
// 00502d55  7b15                 jnp 0x502d6c
// 00502d57  ddd9                 fstp st(1)
// 00502d59  d905a4638100         fld dword ptr [0x8163a4]
// 00502d5f  d8d1                 fcom st(1)
// 00502d61  dfe0                 fnstsw ax
// 00502d63  f6c441               test ah, 0x41
// 00502d66  7a04                 jp 0x502d6c
// 00502d68  ddd9                 fstp st(1)
// 00502d6a  eb02                 jmp 0x502d6e
// 00502d6c  ddd8                 fstp st(0)
// 00502d6e  d94624               fld dword ptr [esi + 0x24]
// 00502d71  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00502d75  dde9                 fucomp st(1)
// 00502d77  dfe0                 fnstsw ax
// 00502d79  d9442420             fld dword ptr [esp + 0x20]
// 00502d7d  d9442418             fld dword ptr [esp + 0x18]
// 00502d81  f6c444               test ah, 0x44
// 00502d84  7a27                 jp 0x502dad
// 00502d86  d94628               fld dword ptr [esi + 0x28]
// 00502d89  dde9                 fucomp st(1)
// 00502d8b  dfe0                 fnstsw ax
// 00502d8d  f6c444               test ah, 0x44
// 00502d90  7a1b                 jp 0x502dad
// 00502d92  3a8ef0020000         cmp cl, byte ptr [esi + 0x2f0]
// 00502d98  7513                 jne 0x502dad
// 00502d9a  d986f4020000         fld dword ptr [esi + 0x2f4]
// 00502da0  ddea                 fucomp st(2)
// 00502da2  dfe0                 fnstsw ax
// 00502da4  f6c444               test ah, 0x44
// 00502da7  0f8bab000000         jnp 0x502e58
// 00502dad  8d8608040000         lea eax, [esi + 0x408]
// 00502db3  d9ca                 fxch st(2)
// 00502db5  50                   push eax
// 00502db6  d95624               fst dword ptr [esi + 0x24]
// 00502db9  8d9610030000         lea edx, [esi + 0x310]
// 00502dbf  d9ca                 fxch st(2)
// 00502dc1  52                   push edx
// 00502dc2  d95628               fst dword ptr [esi + 0x28]
// 00502dc5  8d86e8020000         lea eax, [esi + 0x2e8]
// 00502dcb  d9c9                 fxch st(1)
// 00502dcd  50                   push eax
// 00502dce  d996f4020000         fst dword ptr [esi + 0x2f4]
// 00502dd4  51                   push ecx
// 00502dd5  d91c24               fstp dword ptr [esp]
// 00502dd8  51                   push ecx
// 00502dd9  83ec08               sub esp, 8
// 00502ddc  d95c2404             fstp dword ptr [esp + 4]
// 00502de0  888ef0020000         mov byte ptr [esi + 0x2f0], cl
// 00502de6  8d4c2430             lea ecx, [esp + 0x30]
// 00502dea  d91c24               fstp dword ptr [esp]
// 00502ded  51                   push ecx
// 00502dee  8d8ed4020000         lea ecx, [esi + 0x2d4]
// 00502df4  e8d73f0000           call 0x506dd0
// 00502df9  8b10                 mov edx, dword ptr [eax]
// 00502dfb  8d8eec020000         lea ecx, [esi + 0x2ec]
// 00502e01  52                   push edx
// 00502e02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00502e0a  e891610900           call 0x598fa0
// 00502e0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00502e13  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00502e1b  85c0                 test eax, eax
// 00502e1d  743f                 je 0x502e5e
// 00502e1f  83c004               add eax, 4
// 00502e22  50                   push eax
// 00502e23  ff15ac218000         call dword ptr [0x8021ac]
// 00502e29  85c0                 test eax, eax
// 00502e2b  7531                 jne 0x502e5e
// 00502e2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00502e31  e85a7ff5ff           call 0x45ad90
// 00502e36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00502e3a  85c9                 test ecx, ecx
// 00502e3c  7420                 je 0x502e5e
// 00502e3e  8b01                 mov eax, dword ptr [ecx]
// 00502e40  8b10                 mov edx, dword ptr [eax]
// 00502e42  6a01                 push 1
// 00502e44  ffd2                 call edx
// 00502e46  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00502e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00502e51  5e                   pop esi
// 00502e52  83c40c               add esp, 0xc
// 00502e55  c21000               ret 0x10
// 00502e58  ddda                 fstp st(2)
// 00502e5a  ddd8                 fstp st(0)
// 00502e5c  ddd8                 fstp st(0)
// 00502e5e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00502e62  64890d00000000       mov dword ptr fs:[0], ecx
// 00502e69  5e                   pop esi
// 00502e6a  83c40c               add esp, 0xc
// 00502e6d  c21000               ret 0x10

#pragma float_control(precise, off)

extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);
extern float lowerLimit;

struct Control {
    virtual ~Control();
    volatile long count;
    void dispose();
};

struct Result {
    void* value;
    Control* control;

    ~Result() {
        if (control && InterlockedDecrement(&control->count) == 0) {
            control->dispose();
            if (control)
                delete control;
        }
    }
};

struct Producer {
    char storage[20];
    Result build(float, float, bool, float, void*, void*, void*);
};

struct Holder {
    void* value;
    void assign(void*);
};

struct S {
    char pad0[0x24];
    float first;
    float second;
    char pad1[0x2A8];
    Producer producer;
    char context[4];
    Holder holder;
    bool enabled;
    char pad2[3];
    float fourth;
    char pad3[0x18];
    char input[0xF8];
    char output[4];

    void f(float, float, bool, float);
};

void S::f(float a, float b, bool c, float d) {
    a = a > 0.0f ? 0.0f : (a < lowerLimit ? lowerLimit : a);

    if (first != a || second != b || c != enabled || d != fourth) {
        first = a;
        second = b;
        fourth = d;
        enabled = c;
        holder.assign(producer.build(a, b, c, d, context, input, output).value);
    }
}

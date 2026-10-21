// from server: 97% by EspClaude
// from server: 61% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 45% by colin
// roc 2008-06 00645af0  unit: RBX::RotatePJoint  size: 434 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645af0
//
// 00645af0  83ec0c               sub esp, 0xc
// 00645af3  56                   push esi
// 00645af4  57                   push edi
// 00645af5  8bf9                 mov edi, ecx
// 00645af7  8d4728               lea eax, [edi + 0x28]
// 00645afa  50                   push eax
// 00645afb  e81068faff           call 0x5ec310
// 00645b00  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00645b03  8bb481d0000000       mov esi, dword ptr [ecx + eax*4 + 0xd0]
// 00645b0a  83c404               add esp, 4
// 00645b0d  85f6                 test esi, esi
// 00645b0f  7536                 jne 0x645b47
// 00645b11  b801000000           mov eax, 1
// 00645b16  8405d0ab9700         test byte ptr [0x97abd0], al
// 00645b1c  7524                 jne 0x645b42
// 00645b1e  d905dc828200         fld dword ptr [0x8282dc]
// 00645b24  0905d0ab9700         or dword ptr [0x97abd0], eax
// 00645b2a  d91dc8ab9700         fstp dword ptr [0x97abc8]
// 00645b30  8935c4ab9700         mov dword ptr [0x97abc4], esi
// 00645b36  d905ac9b8100         fld dword ptr [0x819bac]
// 00645b3c  d91dccab9700         fstp dword ptr [0x97abcc]
// 00645b42  bec4ab9700           mov esi, 0x97abc4
// 00645b47  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00645b4a  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00645b50  8b11                 mov edx, dword ptr [ecx]
// 00645b52  8b06                 mov eax, dword ptr [esi]
// 00645b54  8b5204               mov edx, dword ptr [edx + 4]
// 00645b57  50                   push eax
// 00645b58  ffd2                 call edx
// 00645b5a  d95c2410             fstp dword ptr [esp + 0x10]
// 00645b5e  d94604               fld dword ptr [esi + 4]
// 00645b61  d95c240c             fstp dword ptr [esp + 0xc]
// 00645b65  d94608               fld dword ptr [esi + 8]
// 00645b68  d95c2408             fstp dword ptr [esp + 8]
// 00645b6c  e87f370000           call 0x6492f0
// 00645b71  8b36                 mov esi, dword ptr [esi]
// 00645b73  da4c2418             fimul dword ptr [esp + 0x18]
// 00645b77  83fe0d               cmp esi, 0xd
// 00645b7a  0f87b6000000         ja 0x645c36
// 00645b80  0fb686945c6400       movzx eax, byte ptr [esi + 0x645c94]
// 00645b87  ff24857c5c6400       jmp dword ptr [eax*4 + 0x645c7c]
// 00645b8e  5f                   pop edi
// 00645b8f  ddd8                 fstp st(0)
// 00645b91  d9442404             fld dword ptr [esp + 4]
// 00645b95  5e                   pop esi
// 00645b96  83c40c               add esp, 0xc
// 00645b99  c20400               ret 4
// 00645b9c  d84c2408             fmul dword ptr [esp + 8]
// 00645ba0  5f                   pop edi
// 00645ba1  5e                   pop esi
// 00645ba2  d9fe                 fsin 
// 00645ba4  d84c2404             fmul dword ptr [esp + 4]
// 00645ba8  83c40c               add esp, 0xc
// 00645bab  c20400               ret 4
// 00645bae  ddd8                 fstp st(0)
// 00645bb0  d9442410             fld dword ptr [esp + 0x10]
// 00645bb4  dc1500ae8400         fcom qword ptr [0x84ae00]
// 00645bba  dfe0                 fnstsw ax
// 00645bbc  f6c405               test ah, 5
// 00645bbf  7a10                 jp 0x645bd1
// 00645bc1  d944240c             fld dword ptr [esp + 0xc]
// 00645bc5  5f                   pop edi
// 00645bc6  d9e1                 fabs 
// 00645bc8  5e                   pop esi
// 00645bc9  dec9                 fmulp st(1)
// 00645bcb  83c40c               add esp, 0xc
// 00645bce  c20400               ret 4
// 00645bd1  dc1530128100         fcom qword ptr [0x811230]
// 00645bd7  dfe0                 fnstsw ax
// 00645bd9  f6c441               test ah, 0x41
// 00645bdc  0f858e000000         jne 0x645c70
// 00645be2  d9442408             fld dword ptr [esp + 8]
// 00645be6  5f                   pop edi
// 00645be7  d9e1                 fabs 
// 00645be9  5e                   pop esi
// 00645bea  dec9                 fmulp st(1)
// 00645bec  83c40c               add esp, 0xc
// 00645bef  c20400               ret 4
// 00645bf2  ddd8                 fstp st(0)
// 00645bf4  d9442410             fld dword ptr [esp + 0x10]
// 00645bf8  dc1500ae8400         fcom qword ptr [0x84ae00]
// 00645bfe  dfe0                 fnstsw ax
// 00645c00  f6c405               test ah, 5
// 00645c03  7a12                 jp 0x645c17
// 00645c05  d944240c             fld dword ptr [esp + 0xc]
// 00645c09  5f                   pop edi
// 00645c0a  d9e1                 fabs 
// 00645c0c  5e                   pop esi
// 00645c0d  dec9                 fmulp st(1)
// 00645c0f  d9e0                 fchs 
// 00645c11  83c40c               add esp, 0xc
// 00645c14  c20400               ret 4
// 00645c17  dc1530128100         fcom qword ptr [0x811230]
// 00645c1d  dfe0                 fnstsw ax
// 00645c1f  f6c441               test ah, 0x41
// 00645c22  754c                 jne 0x645c70
// 00645c24  d9442408             fld dword ptr [esp + 8]
// 00645c28  5f                   pop edi
// 00645c29  d9e1                 fabs 
// 00645c2b  5e                   pop esi
// 00645c2c  dec9                 fmulp st(1)
// 00645c2e  d9e0                 fchs 
// 00645c30  83c40c               add esp, 0xc
// 00645c33  c20400               ret 4
// 00645c36  ddd8                 fstp st(0)
// 00645c38  d9442410             fld dword ptr [esp + 0x10]
// 00645c3c  dc1500ae8400         fcom qword ptr [0x84ae00]
// 00645c42  dfe0                 fnstsw ax
// 00645c44  f6c405               test ah, 5
// 00645c47  7a0e                 jp 0x645c57
// 00645c49  d84c240c             fmul dword ptr [esp + 0xc]
// 00645c4d  5f                   pop edi
// 00645c4e  5e                   pop esi
// 00645c4f  d9e0                 fchs 
// 00645c51  83c40c               add esp, 0xc
// 00645c54  c20400               ret 4
// 00645c57  dc1530128100         fcom qword ptr [0x811230]
// 00645c5d  dfe0                 fnstsw ax
// 00645c5f  f6c441               test ah, 0x41
// 00645c62  750c                 jne 0x645c70
// 00645c64  d84c2408             fmul dword ptr [esp + 8]
// 00645c68  5f                   pop edi
// 00645c69  5e                   pop esi
// 00645c6a  83c40c               add esp, 0xc
// 00645c6d  c20400               ret 4
// 00645c70  5f                   pop edi
// 00645c71  ddd8                 fstp st(0)
// 00645c73  d9ee                 fldz 
// 00645c75  5e                   pop esi
// 00645c76  83c40c               add esp, 0xc
// 00645c79  c20400               ret 4
// 00645c7c  705c                 jo 0x645cda
// 00645c7e  6400ae5b6400f2       add byte ptr fs:[esi - 0xdff9ba5], ch
// 00645c85  5b                   pop ebx
// 00645c86  64008e5b64009c       add byte ptr fs:[esi - 0x63ff9ba5], cl
// 00645c8d  5b                   pop ebx
// 00645c8e  640036               add byte ptr fs:[esi], dh
// 00645c91  5c                   pop esp
// 00645c92  640000               add byte ptr fs:[eax], al
// 00645c95  0102                 add dword ptr [edx], eax
// 00645c97  0505050505           add eax, 0x5050505
// 00645c9c  0505050503           add eax, 0x3050505

#include <math.h>

enum InputType { NO_INPUT = 0 };

struct Entry {
    InputType type;
    float paramA;
    float paramB;
    Entry(InputType t, float a, float b) : type(t), paramA(a), paramB(b) {}
};

struct InputSource {
    virtual void unused();
    virtual float getValue(InputType type);
};

struct Kernel {
    char pad[0xd0];
    Entry* entries[6];
    InputSource* input;
    InputSource* getInput() const { return input; }
};

int lookup(const int* id);
float getTime();

struct RotatePJoint {
    char pad[0xc];
    Kernel* kernel;
    char pad2[0x28 - 0x10];
    int axleId;
    Kernel* getKernel() const { return kernel; }
    float stepWorld(int steps);
};

float RotatePJoint::stepWorld(int steps)
{
    Entry* c = kernel->entries[lookup(&axleId)];
    if (c == 0) {
        static Entry def(NO_INPUT, -0.5f, 0.5f);
        c = &def;
    }
    float value = kernel->input->getValue(c->type);
    float a = c->paramA;
    float b = c->paramB;
    float t = getTime() * steps;
    switch (c->type) {
    case 0:
        return 0.0f;
    case 12:
        return b;
    case 13:
        return a * sinf(t * b);
    case 1:
        if (value < -0.1)
            return value * fabsf(a);
        else if (value > 0.1)
            return value * fabsf(b);
        else
            return 0.0f;
    case 2:
        if (value < -0.1)
            return -(value * fabsf(a));
        else if (value > 0.1)
            return -(value * fabsf(b));
        else
            return 0.0f;
    default:
        if (value < -0.1)
            return -(value * a);
        else if (value > 0.1)
            return value * b;
        else
            return 0.0f;
    }
}

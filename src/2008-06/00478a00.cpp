// from server: 100% by king_originala
// roc 2008-06 00478a00  unit: CInstanceRecord::CNameItem  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478a00
//
// 00478a00  83ec2c               sub esp, 0x2c
// 00478a03  53                   push ebx
// 00478a04  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00478a08  55                   push ebp
// 00478a09  56                   push esi
// 00478a0a  57                   push edi
// 00478a0b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00478a0f  8bf1                 mov esi, ecx
// 00478a11  ff4678               inc dword ptr [esi + 0x78]
// 00478a14  8dab00400000         lea ebp, [ebx + 0x4000]
// 00478a1a  85ff                 test edi, edi
// 00478a1c  752d                 jne 0x478a4b
// 00478a1e  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00478a26  7416                 je 0x478a3e
// 00478a28  c68433a003000000     mov byte ptr [ebx + esi + 0x3a0], 0
// 00478a30  55                   push ebp
// 00478a31  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00478a38  ff1558298000         call dword ptr [0x802958]
// 00478a3e  ff4670               inc dword ptr [esi + 0x70]
// 00478a41  5f                   pop edi
// 00478a42  5e                   pop esi
// 00478a43  5d                   pop ebp
// 00478a44  5b                   pop ebx
// 00478a45  83c42c               add esp, 0x2c
// 00478a48  c20800               ret 8
// 00478a4b  80bc33a003000000     cmp byte ptr [ebx + esi + 0x3a0], 0
// 00478a53  7516                 jne 0x478a6b
// 00478a55  55                   push ebp
// 00478a56  ff1550298000         call dword ptr [0x802950]
// 00478a5c  c68433a003000001     mov byte ptr [ebx + esi + 0x3a0], 1
// 00478a64  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00478a6b  8d049b               lea eax, [ebx + ebx*4]
// 00478a6e  c1e004               shl eax, 4
// 00478a71  8d9c3020010000       lea ebx, [eax + esi + 0x120]
// 00478a78  57                   push edi
// 00478a79  8bcb                 mov ecx, ebx
// 00478a7b  e870ba0900           call 0x5144f0
// 00478a80  84c0                 test al, al
// 00478a82  0f843a010000         je 0x478bc2
// 00478a88  57                   push edi
// 00478a89  8bcb                 mov ecx, ebx
// 00478a8b  c686bd03000001       mov byte ptr [esi + 0x3bd], 1
// 00478a92  e809dfffff           call 0x4769a0
// 00478a97  d9ee                 fldz 
// 00478a99  ff4670               inc dword ptr [esi + 0x70]
// 00478a9c  d954241c             fst dword ptr [esp + 0x1c]
// 00478aa0  d9542420             fst dword ptr [esp + 0x20]
// 00478aa4  51                   push ecx
// 00478aa5  d95c2428             fstp dword ptr [esp + 0x28]
// 00478aa9  8d4c2414             lea ecx, [esp + 0x14]
// 00478aad  d9e8                 fld1 
// 00478aaf  d95c242c             fstp dword ptr [esp + 0x2c]
// 00478ab3  dd4610               fld qword ptr [esi + 0x10]
// 00478ab6  d91c24               fstp dword ptr [esp]
// 00478ab9  51                   push ecx
// 00478aba  8d4f40               lea ecx, [edi + 0x40]
// 00478abd  e87ec10900           call 0x514c40
// 00478ac2  d900                 fld dword ptr [eax]
// 00478ac4  d95c242c             fstp dword ptr [esp + 0x2c]
// 00478ac8  68a00b0000           push 0xba0
// 00478acd  d94004               fld dword ptr [eax + 4]
// 00478ad0  d95c2434             fstp dword ptr [esp + 0x34]
// 00478ad4  d94008               fld dword ptr [eax + 8]
// 00478ad7  d95c2438             fstp dword ptr [esp + 0x38]
// 00478adb  d9e8                 fld1 
// 00478add  d95c243c             fstp dword ptr [esp + 0x3c]
// 00478ae1  e8faac0000           call 0x4837e0
// 00478ae6  83c404               add esp, 4
// 00478ae9  6800170000           push 0x1700
// 00478aee  89442444             mov dword ptr [esp + 0x44], eax
// 00478af2  ff1580298000         call dword ptr [0x802980]
// 00478af8  ff15642a8000         call dword ptr [0x802a64]
// 00478afe  ff1584298000         call dword ptr [0x802984]
// 00478b04  81c608080000         add esi, 0x808
// 00478b0a  56                   push esi
// 00478b0b  e820a90000           call 0x483430
// 00478b10  8b35682a8000         mov esi, dword ptr [0x802a68]
// 00478b16  83c404               add esp, 4
// 00478b19  57                   push edi
// 00478b1a  6803120000           push 0x1203
// 00478b1f  55                   push ebp
// 00478b20  ffd6                 call esi
// 00478b22  8d5710               lea edx, [edi + 0x10]
// 00478b25  52                   push edx
// 00478b26  6804120000           push 0x1204
// 00478b2b  55                   push ebp
// 00478b2c  ffd6                 call esi
// 00478b2e  dd4720               fld qword ptr [edi + 0x20]
// 00478b31  8b1d6c2a8000         mov ebx, dword ptr [0x802a6c]
// 00478b37  51                   push ecx
// 00478b38  d91c24               fstp dword ptr [esp]
// 00478b3b  6806120000           push 0x1206
// 00478b40  55                   push ebp
// 00478b41  ffd3                 call ebx
// 00478b43  8d44241c             lea eax, [esp + 0x1c]
// 00478b47  50                   push eax
// 00478b48  6800120000           push 0x1200
// 00478b4d  55                   push ebp
// 00478b4e  ffd6                 call esi
// 00478b50  807f4e00             cmp byte ptr [edi + 0x4e], 0
// 00478b54  7407                 je 0x478b5d
// 00478b56  8d4c242c             lea ecx, [esp + 0x2c]
// 00478b5a  51                   push ecx
// 00478b5b  eb05                 jmp 0x478b62
// 00478b5d  8d54241c             lea edx, [esp + 0x1c]
// 00478b61  52                   push edx
// 00478b62  6801120000           push 0x1201
// 00478b67  55                   push ebp
// 00478b68  ffd6                 call esi
// 00478b6a  807f4d00             cmp byte ptr [edi + 0x4d], 0
// 00478b6e  7407                 je 0x478b77
// 00478b70  8d44242c             lea eax, [esp + 0x2c]
// 00478b74  50                   push eax
// 00478b75  eb05                 jmp 0x478b7c
// 00478b77  8d4c241c             lea ecx, [esp + 0x1c]
// 00478b7b  51                   push ecx
// 00478b7c  6802120000           push 0x1202
// 00478b81  55                   push ebp
// 00478b82  ffd6                 call esi
// 00478b84  dd4728               fld qword ptr [edi + 0x28]
// 00478b87  51                   push ecx
// 00478b88  d91c24               fstp dword ptr [esp]
// 00478b8b  6807120000           push 0x1207
// 00478b90  55                   push ebp
// 00478b91  ffd3                 call ebx
// 00478b93  dd4730               fld qword ptr [edi + 0x30]
// 00478b96  51                   push ecx
// 00478b97  d91c24               fstp dword ptr [esp]
// 00478b9a  6808120000           push 0x1208
// 00478b9f  55                   push ebp
// 00478ba0  ffd3                 call ebx
// 00478ba2  dd4738               fld qword ptr [edi + 0x38]
// 00478ba5  51                   push ecx
// 00478ba6  d91c24               fstp dword ptr [esp]
// 00478ba9  6809120000           push 0x1209
// 00478bae  55                   push ebp
// 00478baf  ffd3                 call ebx
// 00478bb1  ff15702a8000         call dword ptr [0x802a70]
// 00478bb7  8b542440             mov edx, dword ptr [esp + 0x40]
// 00478bbb  52                   push edx
// 00478bbc  ff1580298000         call dword ptr [0x802980]
// 00478bc2  5f                   pop edi
// 00478bc3  5e                   pop esi
// 00478bc4  5d                   pop ebp
// 00478bc5  5b                   pop ebx
// 00478bc6  83c42c               add esp, 0x2c
// 00478bc9  c20800               ret 8

#pragma float_control(precise, off)

extern "C" {
extern void (__stdcall *glDisable)(unsigned int);
extern void (__stdcall *glEnable)(unsigned int);
extern void (__stdcall *glMatrixMode)(unsigned int);
extern void (__stdcall *glLoadIdentity)();
extern void (__stdcall *glPushMatrix)();
extern void (__stdcall *glPopMatrix)();
extern void (__stdcall *glLightfv)(unsigned int, unsigned int, const float*);
extern void (__stdcall *glLightf)(unsigned int, unsigned int, float);
}

struct Color3 {
    float r, g, b;
    Color3* multiply(Color3*, float) const;
};

struct Light {
    float position[4];
    float direction[4];
    double exponent;
    double constantAttenuation;
    double linearAttenuation;
    double quadraticAttenuation;
    Color3 color;
    unsigned char flags[4];

    bool operator!=(const Light&) const;
    Light& operator=(const Light&);
};

struct Matrix {
    float data[12];
};

extern int __cdecl getInteger(unsigned int);
extern void __cdecl loadMatrix(const Matrix&);

struct S {
    unsigned char padding0[0x10];
    double colorScale;
    unsigned char padding1[0x58];
    int changes;
    unsigned char padding2[4];
    int calls;
    unsigned char padding3[0xa4];
    Light lights[8];
    unsigned char enabled[8];
    unsigned char padding4[0x15];
    unsigned char dirty;
    unsigned char padding5[0x44a];
    Matrix matrix;

    void setLight(int, const Light*);
};

void S::setLight(int index, const Light* light)
{
    ++calls;
    unsigned int number = index + 0x4000;

    if (!light) {
        if (enabled[index]) {
            enabled[index] = 0;
            dirty = 1;
            glDisable(number);
        }
        ++changes;
        return;
    }

    if (!enabled[index]) {
        glEnable(number);
        enabled[index] = 1;
        dirty = 1;
    }

    Light& cached = lights[index];
    if (cached != *light) {
        dirty = 1;
        cached = *light;
        ++changes;

        float black[4] = { 0.0f, 0.0f, 0.0f, 1.0f };
        Color3 temporary;
        const Color3* scaled = light->color.multiply(&temporary, colorScale);
        float color[4] = { scaled->r, scaled->g, scaled->b, 1.0f };

        int oldMode = getInteger(0xba0);
        glMatrixMode(0x1700);
        glPushMatrix();
        glLoadIdentity();
        loadMatrix(matrix);

        void (__stdcall *lightfv)(unsigned int, unsigned int, const float*) = glLightfv;
        lightfv(number, 0x1203, light->position);
        lightfv(number, 0x1204, light->direction);

        void (__stdcall *lightf)(unsigned int, unsigned int, float) = glLightf;
        lightf(number, 0x1206, light->exponent);
        lightfv(number, 0x1200, black);

        if (light->flags[2])
            lightfv(number, 0x1201, color);
        else
            lightfv(number, 0x1201, black);

        if (light->flags[1])
            lightfv(number, 0x1202, color);
        else
            lightfv(number, 0x1202, black);

        lightf(number, 0x1207, light->constantAttenuation);
        lightf(number, 0x1208, light->linearAttenuation);
        lightf(number, 0x1209, light->quadraticAttenuation);

        glPopMatrix();
        glMatrixMode(oldMode);
    }
}

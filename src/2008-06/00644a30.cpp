// from server: 49% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 45% by colin
// roc 2008-06 00644a30  unit: RBX::HUMAN::Climbing  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00644a30
//
// 00644a30  83ec5c               sub esp, 0x5c
// 00644a33  53                   push ebx
// 00644a34  55                   push ebp
// 00644a35  56                   push esi
// 00644a36  8bf1                 mov esi, ecx
// 00644a38  8b4e08               mov ecx, dword ptr [esi + 8]
// 00644a3b  57                   push edi
// 00644a3c  e81f47f9ff           call 0x5d9160
// 00644a41  8bf8                 mov edi, eax
// 00644a43  8bcf                 mov ecx, edi
// 00644a45  e81649f5ff           call 0x599360
// 00644a4a  8b4608               mov eax, dword ptr [esi + 8]
// 00644a4d  50                   push eax
// 00644a4e  81c794000000         add edi, 0x94
// 00644a54  e887ffffff           call 0x6449e0
// 00644a59  d905608b8200         fld dword ptr [0x828b60]
// 00644a5f  83c404               add esp, 4
// 00644a62  d95c2410             fstp dword ptr [esp + 0x10]
// 00644a66  6a02                 push 2
// 00644a68  8d4c2418             lea ecx, [esp + 0x18]
// 00644a6c  51                   push ecx
// 00644a6d  8bcf                 mov ecx, edi
// 00644a6f  8bd8                 mov ebx, eax
// 00644a71  e8cae7ecff           call 0x513240
// 00644a76  d900                 fld dword ptr [eax]
// 00644a78  d9442410             fld dword ptr [esp + 0x10]
// 00644a7c  6a00                 push 0
// 00644a7e  dcc9                 fmul st(1), st(0)
// 00644a80  6a00                 push 0
// 00644a82  d94004               fld dword ptr [eax + 4]
// 00644a85  d8c9                 fmul st(1)
// 00644a87  d94008               fld dword ptr [eax + 8]
// 00644a8a  deca                 fmulp st(2)
// 00644a8c  d90534c48100         fld dword ptr [0x81c434]
// 00644a92  dccb                 fmul st(3), st(0)
// 00644a94  dcc9                 fmul st(1), st(0)
// 00644a96  deca                 fmulp st(2)
// 00644a98  d905ac9b8100         fld dword ptr [0x819bac]
// 00644a9e  dccb                 fmul st(3), st(0)
// 00644aa0  dcc9                 fmul st(1), st(0)
// 00644aa2  deca                 fmulp st(2)
// 00644aa4  d94724               fld dword ptr [edi + 0x24]
// 00644aa7  dec3                 faddp st(3)
// 00644aa9  d84728               fadd dword ptr [edi + 0x28]
// 00644aac  d9472c               fld dword ptr [edi + 0x2c]
// 00644aaf  8d7e14               lea edi, [esi + 0x14]
// 00644ab2  dec2                 faddp st(2)
// 00644ab4  8bcf                 mov ecx, edi
// 00644ab6  d9c2                 fld st(2)
// 00644ab8  d9e8                 fld1 
// 00644aba  dcc1                 fadd st(1), st(0)
// 00644abc  d9c2                 fld st(2)
// 00644abe  d9c4                 fld st(4)
// 00644ac0  d8c2                 fadd st(2)
// 00644ac2  d9ce                 fxch st(6)
// 00644ac4  d8e2                 fsub st(2)
// 00644ac6  d9cc                 fxch st(4)
// 00644ac8  d825b8788300         fsub dword ptr [0x8378b8]
// 00644ace  d9cd                 fxch st(5)
// 00644ad0  dee2                 fsubrp st(2)
// 00644ad2  d9cb                 fxch st(3)
// 00644ad4  d95c242c             fstp dword ptr [esp + 0x2c]
// 00644ad8  d9cb                 fxch st(3)
// 00644ada  d95c2430             fstp dword ptr [esp + 0x30]
// 00644ade  d9ca                 fxch st(2)
// 00644ae0  d95c2434             fstp dword ptr [esp + 0x34]
// 00644ae4  d9c9                 fxch st(1)
// 00644ae6  d95c2438             fstp dword ptr [esp + 0x38]
// 00644aea  d95c243c             fstp dword ptr [esp + 0x3c]
// 00644aee  d95c2440             fstp dword ptr [esp + 0x40]
// 00644af2  e8e98efeff           call 0x62d9e0
// 00644af7  57                   push edi
// 00644af8  6a00                 push 0
// 00644afa  8d54242c             lea edx, [esp + 0x2c]
// 00644afe  52                   push edx
// 00644aff  8bcb                 mov ecx, ebx
// 00644b01  e85a90feff           call 0x62db60
// 00644b06  8b4608               mov eax, dword ptr [esi + 8]
// 00644b09  8b7618               mov esi, dword ptr [esi + 0x18]
// 00644b0c  8ba804010000         mov ebp, dword ptr [eax + 0x104]
// 00644b12  33db                 xor ebx, ebx
// 00644b14  85f6                 test esi, esi
// 00644b16  7e36                 jle 0x644b4e
// 00644b18  8b3f                 mov edi, dword ptr [edi]
// 00644b1a  8d9b00000000         lea ebx, [ebx]
// 00644b20  8b07                 mov eax, dword ptr [edi]
// 00644b22  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 00644b28  89442410             mov dword ptr [esp + 0x10], eax
// 00644b2c  3be9                 cmp ebp, ecx
// 00644b2e  7416                 je 0x644b46
// 00644b30  85c9                 test ecx, ecx
// 00644b32  0f84f6000000         je 0x644c2e
// 00644b38  55                   push ebp
// 00644b39  e8a2dfddff           call 0x422ae0
// 00644b3e  84c0                 test al, al
// 00644b40  0f84e8000000         je 0x644c2e
// 00644b46  43                   inc ebx
// 00644b47  83c704               add edi, 4
// 00644b4a  3bde                 cmp ebx, esi
// 00644b4c  7cd2                 jl 0x644b20
// 00644b4e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00644b52  85ff                 test edi, edi
// 00644b54  0f84c8000000         je 0x644c22
// 00644b5a  e8c1f2ecff           call 0x513e20
// 00644b5f  50                   push eax
// 00644b60  8d4c2440             lea ecx, [esp + 0x40]
// 00644b64  e8b7e6ecff           call 0x513220
// 00644b69  f60550f0960001       test byte ptr [0x96f050], 1
// 00644b70  751b                 jne 0x644b8d
// 00644b72  d9ee                 fldz 
// 00644b74  830d50f0960001       or dword ptr [0x96f050], 1
// 00644b7b  d91544f09600         fst dword ptr [0x96f044]
// 00644b81  d91548f09600         fst dword ptr [0x96f048]
// 00644b87  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00644b8d  d90544f09600         fld dword ptr [0x96f044]
// 00644b93  8b17                 mov edx, dword ptr [edi]
// 00644b95  8b5238               mov edx, dword ptr [edx + 0x38]
// 00644b98  d95c2460             fstp dword ptr [esp + 0x60]
// 00644b9c  d90548f09600         fld dword ptr [0x96f048]
// 00644ba2  8d44243c             lea eax, [esp + 0x3c]
// 00644ba6  d95c2464             fstp dword ptr [esp + 0x64]
// 00644baa  50                   push eax
// 00644bab  d9054cf09600         fld dword ptr [0x96f04c]
// 00644bb1  8bcf                 mov ecx, edi
// 00644bb3  d95c246c             fstp dword ptr [esp + 0x6c]
// 00644bb7  ffd2                 call edx
// 00644bb9  d9e8                 fld1 
// 00644bbb  8b37                 mov esi, dword ptr [edi]
// 00644bbd  d95c2414             fstp dword ptr [esp + 0x14]
// 00644bc1  83c640               add esi, 0x40
// 00644bc4  d905f8498200         fld dword ptr [0x8249f8]
// 00644bca  d9542418             fst dword ptr [esp + 0x18]
// 00644bce  d95c241c             fstp dword ptr [esp + 0x1c]
// 00644bd2  d905ac9b8100         fld dword ptr [0x819bac]
// 00644bd8  d95c2420             fstp dword ptr [esp + 0x20]
// 00644bdc  d9442424             fld dword ptr [esp + 0x24]
// 00644be0  d95c243c             fstp dword ptr [esp + 0x3c]
// 00644be4  d9442428             fld dword ptr [esp + 0x28]
// 00644be8  d95c2440             fstp dword ptr [esp + 0x40]
// 00644bec  d944242c             fld dword ptr [esp + 0x2c]
// 00644bf0  d95c2444             fstp dword ptr [esp + 0x44]
// 00644bf4  d9442430             fld dword ptr [esp + 0x30]
// 00644bf8  d95c2448             fstp dword ptr [esp + 0x48]
// 00644bfc  d9442434             fld dword ptr [esp + 0x34]
// 00644c00  d95c244c             fstp dword ptr [esp + 0x4c]
// 00644c04  d9442438             fld dword ptr [esp + 0x38]
// 00644c08  d95c2450             fstp dword ptr [esp + 0x50]
// 00644c0c  e8ff621700           call 0x7baf10
// 00644c11  8b16                 mov edx, dword ptr [esi]
// 00644c13  50                   push eax
// 00644c14  8d442418             lea eax, [esp + 0x18]
// 00644c18  50                   push eax
// 00644c19  8d4c2444             lea ecx, [esp + 0x44]
// 00644c1d  51                   push ecx
// 00644c1e  8bcf                 mov ecx, edi
// 00644c20  ffd2                 call edx
// 00644c22  5f                   pop edi
// 00644c23  5e                   pop esi
// 00644c24  5d                   pop ebp
// 00644c25  32c0                 xor al, al
// 00644c27  5b                   pop ebx
// 00644c28  83c45c               add esp, 0x5c
// 00644c2b  c20400               ret 4
// 00644c2e  8b742470             mov esi, dword ptr [esp + 0x70]
// 00644c32  85f6                 test esi, esi
// 00644c34  7437                 je 0x644c6d
// 00644c36  e875fcecff           call 0x5148b0
// 00644c3b  d900                 fld dword ptr [eax]
// 00644c3d  d95c2414             fstp dword ptr [esp + 0x14]
// 00644c41  8d4c2414             lea ecx, [esp + 0x14]
// 00644c45  d94004               fld dword ptr [eax + 4]
// 00644c48  51                   push ecx
// 00644c49  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00644c4d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00644c51  d94008               fld dword ptr [eax + 8]
// 00644c54  56                   push esi
// 00644c55  d95c2424             fstp dword ptr [esp + 0x24]
// 00644c59  d9e8                 fld1 
// 00644c5b  d95c2428             fstp dword ptr [esp + 0x28]
// 00644c5f  e82c5ef5ff           call 0x59aa90
// 00644c64  50                   push eax
// 00644c65  e896210300           call 0x676e00
// 00644c6a  83c40c               add esp, 0xc
// 00644c6d  5f                   pop edi
// 00644c6e  5e                   pop esi
// 00644c6f  5d                   pop ebp
// 00644c70  b001                 mov al, 1
// 00644c72  5b                   pop ebx
// 00644c73  83c45c               add esp, 0x5c
// 00644c76  c20400               ret 4

struct GCamera {
    float m[9];
    void copyFrom(const GCamera* other);
    void getVector(int index, float* out) const;
};

struct Instance {
    char padding0[0x104];
    Instance* parent;
    bool isDescendantOf(Instance* node);
};

struct Humanoid {
    char padding0[8];
    Instance* character;
    char padding1[0x0C];
    int ladderCount;
};

struct Climbing {
    char padding0[8];
    Humanoid* humanoid;
    char padding1[0x08];
    GCamera camera;
    char padding2[0x04];
    int count;
    bool onStepImpl(void* arg);
};

extern float g_float_828b60;
extern float g_float_81c434;
extern float g_float_819bac;
extern float g_float_8378b8;
extern float g_float_8249f8;
extern float g_float_96f044;
extern float g_float_96f048;
extern float g_float_96f04c;
extern int g_int_96f050;

extern "C" void* __stdcall sub_5d9160(void*);
extern "C" void __stdcall sub_599360(void*);
extern "C" void __stdcall sub_6449e0(void*);
extern "C" void __stdcall sub_62d9e0();
extern "C" void __stdcall sub_62db60(void*, void*, int, void*);
extern "C" void* __stdcall sub_513e20();
extern "C" void* __stdcall sub_5148b0();
extern "C" void* __stdcall sub_59aa90(void*, void*);
extern "C" void __stdcall sub_676e00(void*, void*, void*);
extern "C" void* __stdcall sub_7baf10();

void GCamera::copyFrom(const GCamera* other) {
    for (int i = 0; i < 9; i++) m[i] = other->m[i];
}

void GCamera::getVector(int index, float* out) const {
    out[0] = m[index];
    out[1] = m[index + 3];
    out[2] = m[index + 6];
}

bool Climbing::onStepImpl(void* arg) {
    Instance* inst = (Instance*)humanoid->character;
    void* v = sub_5d9160(inst);
    sub_599360(v);
    sub_6449e0(humanoid->character);
    float f = g_float_828b60;
    GCamera* cam = (GCamera*)((char*)v + 0x94);
    float vec[3];
    cam->getVector(2, vec);
    float a = vec[0] * f;
    float b = vec[1] * f;
    float c = vec[2] * f;
    a *= g_float_81c434;
    b *= g_float_81c434;
    c *= g_float_81c434;
    a *= g_float_819bac;
    b *= g_float_819bac;
    c *= g_float_819bac;
    float px = cam->m[0] + a;
    float py = cam->m[1] + b;
    float pz = cam->m[2] + c;
    float qx = px + 1.0f;
    float qy = py + 1.0f;
    float qz = pz + 1.0f;
    float rx = px - g_float_8378b8;
    float ry = py - g_float_8378b8;
    float rz = pz - g_float_8378b8;
    float arr[6];
    arr[0] = qx;
    arr[1] = qy;
    arr[2] = qz;
    arr[3] = rx;
    arr[4] = ry;
    arr[5] = rz;
    sub_62d9e0();
    sub_62db60(inst, arr, 0, &camera);
    Instance* charInst = (Instance*)humanoid->character;
    int n = count;
    Instance* target = (Instance*)((char*)charInst + 0x104);
    int i = 0;
    if (n > 0) {
        Instance** list = *(Instance***)&camera;
        do {
            Instance* e = list[i];
            if (target != e) {
                if (!e) goto fail;
                if (!target->isDescendantOf(e)) goto fail;
            }
            i++;
        } while (i < n);
    }
    if (arg) {
        void* cam2 = sub_513e20();
        GCamera tmp;
        tmp.copyFrom((GCamera*)cam2);
        if (!(g_int_96f050 & 1)) {
            g_int_96f050 |= 1;
            g_float_96f044 = 0.0f;
            g_float_96f048 = 0.0f;
            g_float_96f04c = 0.0f;
        }
        float vx = g_float_96f044;
        float vy = g_float_96f048;
        float vz = g_float_96f04c;
        float out[3];
        out[0] = vx;
        out[1] = vy;
        out[2] = vz;
        void** vtbl = *(void***)arg;
        void (*fn)(void*, float*) = (void (*)(void*, float*))vtbl[14];
        fn(arg, out);
        float one = 1.0f;
        float mf = g_float_8249f8;
        float mb = g_float_819bac;
        float m[9];
        m[0] = one;
        m[1] = mf;
        m[2] = mf;
        m[3] = mb;
        m[4] = arr[0];
        m[5] = arr[1];
        m[6] = arr[2];
        m[7] = arr[3];
        m[8] = arr[4];
        void* r = sub_7baf10();
        void** vtbl2 = *(void***)((char*)arg + 0x40);
        void (*fn2)(void*, float*, float*, void*) = (void (*)(void*, float*, float*, void*))vtbl2[0];
        fn2(arg, m, out, r);
    }
    return false;
fail:
    if (arg) {
        void* p = sub_5148b0();
        float v[4];
        v[0] = ((float*)p)[0];
        v[1] = ((float*)p)[1];
        v[2] = ((float*)p)[2];
        v[3] = 1.0f;
        void* r = sub_59aa90(arg, v);
        sub_676e00(arg, v, r);
    }
    return true;
}

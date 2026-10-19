// from server: 42% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 41% by colin
// roc 2008-06 0063e430  unit: RBX::SlingshotTool  size: 652 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063e430
//
// 0063e430  83ec6c               sub esp, 0x6c
// 0063e433  d9ee                 fldz 
// 0063e435  8b542474             mov edx, dword ptr [esp + 0x74]
// 0063e439  53                   push ebx
// 0063e43a  d9542410             fst dword ptr [esp + 0x10]
// 0063e43e  56                   push esi
// 0063e43f  d9542418             fst dword ptr [esp + 0x18]
// 0063e443  57                   push edi
// 0063e444  d95c2420             fstp dword ptr [esp + 0x20]
// 0063e448  8d442418             lea eax, [esp + 0x18]
// 0063e44c  50                   push eax
// 0063e44d  6a00                 push 0
// 0063e44f  52                   push edx
// 0063e450  e83b79fdff           call 0x615d90
// 0063e455  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 0063e45c  8bf8                 mov edi, eax
// 0063e45e  85ff                 test edi, edi
// 0063e460  7441                 je 0x63e4a3
// 0063e462  d9442418             fld dword ptr [esp + 0x18]
// 0063e466  d86624               fsub dword ptr [esi + 0x24]
// 0063e469  d944241c             fld dword ptr [esp + 0x1c]
// 0063e46d  d86628               fsub dword ptr [esi + 0x28]
// 0063e470  d9442420             fld dword ptr [esp + 0x20]
// 0063e474  d8662c               fsub dword ptr [esi + 0x2c]
// 0063e477  d9c1                 fld st(1)
// 0063e479  d8ca                 fmul st(2)
// 0063e47b  d9c1                 fld st(1)
// 0063e47d  d8ca                 fmul st(2)
// 0063e47f  dec1                 faddp st(1)
// 0063e481  d9c3                 fld st(3)
// 0063e483  d8cc                 fmul st(4)
// 0063e485  dec1                 faddp st(1)
// 0063e487  d9fa                 fsqrt 
// 0063e489  d9e8                 fld1 
// 0063e48b  def1                 fdivrp st(1)
// 0063e48d  d9c0                 fld st(0)
// 0063e48f  decc                 fmulp st(4)
// 0063e491  d9cb                 fxch st(3)
// 0063e493  d95c2424             fstp dword ptr [esp + 0x24]
// 0063e497  d9c9                 fxch st(1)
// 0063e499  d8ca                 fmul st(2)
// 0063e49b  d95c2428             fstp dword ptr [esp + 0x28]
// 0063e49f  dec9                 fmulp st(1)
// 0063e4a1  eb36                 jmp 0x63e4d9
// 0063e4a3  d905608b8200         fld dword ptr [0x828b60]
// 0063e4a9  6a02                 push 2
// 0063e4ab  8d442410             lea eax, [esp + 0x10]
// 0063e4af  d99c2484000000       fstp dword ptr [esp + 0x84]
// 0063e4b6  50                   push eax
// 0063e4b7  8bce                 mov ecx, esi
// 0063e4b9  e8824dedff           call 0x513240
// 0063e4be  d9842480000000       fld dword ptr [esp + 0x80]
// 0063e4c5  d9c0                 fld st(0)
// 0063e4c7  d808                 fmul dword ptr [eax]
// 0063e4c9  d95c2424             fstp dword ptr [esp + 0x24]
// 0063e4cd  d94004               fld dword ptr [eax + 4]
// 0063e4d0  d8c9                 fmul st(1)
// 0063e4d2  d95c2428             fstp dword ptr [esp + 0x28]
// 0063e4d6  d84808               fmul dword ptr [eax + 8]
// 0063e4d9  d95c242c             fstp dword ptr [esp + 0x2c]
// 0063e4dd  8d442424             lea eax, [esp + 0x24]
// 0063e4e1  d900                 fld dword ptr [eax]
// 0063e4e3  d954240c             fst dword ptr [esp + 0xc]
// 0063e4e7  d94004               fld dword ptr [eax + 4]
// 0063e4ea  d9542410             fst dword ptr [esp + 0x10]
// 0063e4ee  d94008               fld dword ptr [eax + 8]
// 0063e4f1  d9542414             fst dword ptr [esp + 0x14]
// 0063e4f5  d90580e38100         fld dword ptr [0x81e380]
// 0063e4fb  dccb                 fmul st(3), st(0)
// 0063e4fd  dcca                 fmul st(2), st(0)
// 0063e4ff  dec9                 fmulp st(1)
// 0063e501  d94624               fld dword ptr [esi + 0x24]
// 0063e504  dec3                 faddp st(3)
// 0063e506  d9ca                 fxch st(2)
// 0063e508  d9542424             fst dword ptr [esp + 0x24]
// 0063e50c  d94628               fld dword ptr [esi + 0x28]
// 0063e50f  dec2                 faddp st(2)
// 0063e511  d9c9                 fxch st(1)
// 0063e513  d9542428             fst dword ptr [esp + 0x28]
// 0063e517  d9462c               fld dword ptr [esi + 0x2c]
// 0063e51a  dec3                 faddp st(3)
// 0063e51c  d9ca                 fxch st(2)
// 0063e51e  d954242c             fst dword ptr [esp + 0x2c]
// 0063e522  85ff                 test edi, edi
// 0063e524  751d                 jne 0x63e543
// 0063e526  ddda                 fstp st(2)
// 0063e528  ddd8                 fstp st(0)
// 0063e52a  ddd8                 fstp st(0)
// 0063e52c  e8ef58edff           call 0x513e20
// 0063e531  50                   push eax
// 0063e532  8d4c244c             lea ecx, [esp + 0x4c]
// 0063e536  e8e54cedff           call 0x513220
// 0063e53b  8d5f01               lea ebx, [edi + 1]
// 0063e53e  e9d9000000           jmp 0x63e61c
// 0063e543  d9442418             fld dword ptr [esp + 0x18]
// 0063e547  51                   push ecx
// 0063e548  dee2                 fsubrp st(2)
// 0063e54a  8d4c2410             lea ecx, [esp + 0x10]
// 0063e54e  d9c9                 fxch st(1)
// 0063e550  d95c2410             fstp dword ptr [esp + 0x10]
// 0063e554  d9442420             fld dword ptr [esp + 0x20]
// 0063e558  dee2                 fsubrp st(2)
// 0063e55a  d86c2424             fsubr dword ptr [esp + 0x24]
// 0063e55e  d95c2418             fstp dword ptr [esp + 0x18]
// 0063e562  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0063e569  d9ee                 fldz 
// 0063e56b  d95c2414             fstp dword ptr [esp + 0x14]
// 0063e56f  d905706e8200         fld dword ptr [0x826e70]
// 0063e575  d91c24               fstp dword ptr [esp]
// 0063e578  e8f39eedff           call 0x518470
// 0063e57d  d99c2480000000       fstp dword ptr [esp + 0x80]
// 0063e584  bb01000000           mov ebx, 1
// 0063e589  841dd4be9700         test byte ptr [0x97bed4], bl
// 0063e58f  7520                 jne 0x63e5b1
// 0063e591  d9ee                 fldz 
// 0063e593  091dd4be9700         or dword ptr [0x97bed4], ebx
// 0063e599  d915c8be9700         fst dword ptr [0x97bec8]
// 0063e59f  d905c0388400         fld dword ptr [0x8438c0]
// 0063e5a5  d91dccbe9700         fstp dword ptr [0x97becc]
// 0063e5ab  d91dd0be9700         fstp dword ptr [0x97bed0]
// 0063e5b1  8d442430             lea eax, [esp + 0x30]
// 0063e5b5  68c8be9700           push 0x97bec8
// 0063e5ba  50                   push eax
// 0063e5bb  e8c01b0200           call 0x660180
// 0063e5c0  d94004               fld dword ptr [eax + 4]
// 0063e5c3  d95c2404             fstp dword ptr [esp + 4]
// 0063e5c7  83ec08               sub esp, 8
// 0063e5ca  d9842494000000       fld dword ptr [esp + 0x94]
// 0063e5d1  d95c2408             fstp dword ptr [esp + 8]
// 0063e5d5  d9842490000000       fld dword ptr [esp + 0x90]
// 0063e5dc  d95c2404             fstp dword ptr [esp + 4]
// 0063e5e0  d90540a38400         fld dword ptr [0x84a340]
// 0063e5e6  d91c24               fstp dword ptr [esp]
// 0063e5e9  e89207faff           call 0x5ded80
// 0063e5ee  d9c0                 fld st(0)
// 0063e5f0  83c410               add esp, 0x10
// 0063e5f3  d9fe                 fsin 
// 0063e5f5  d95c2410             fstp dword ptr [esp + 0x10]
// 0063e5f9  d9ff                 fcos 
// 0063e5fb  d944240c             fld dword ptr [esp + 0xc]
// 0063e5ff  d8c9                 fmul st(1)
// 0063e601  d95c240c             fstp dword ptr [esp + 0xc]
// 0063e605  d84c2414             fmul dword ptr [esp + 0x14]
// 0063e609  d95c2414             fstp dword ptr [esp + 0x14]
// 0063e60d  e80e58edff           call 0x513e20
// 0063e612  50                   push eax
// 0063e613  8d4c244c             lea ecx, [esp + 0x4c]
// 0063e617  e8044cedff           call 0x513220
// 0063e61c  d9442424             fld dword ptr [esp + 0x24]
// 0063e620  d95c246c             fstp dword ptr [esp + 0x6c]
// 0063e624  d9442428             fld dword ptr [esp + 0x28]
// 0063e628  d95c2470             fstp dword ptr [esp + 0x70]
// 0063e62c  d944242c             fld dword ptr [esp + 0x2c]
// 0063e630  d95c2474             fstp dword ptr [esp + 0x74]
// 0063e634  841d50f09600         test byte ptr [0x96f050], bl
// 0063e63a  751a                 jne 0x63e656
// 0063e63c  d9ee                 fldz 
// 0063e63e  091d50f09600         or dword ptr [0x96f050], ebx
// 0063e644  d91544f09600         fst dword ptr [0x96f044]
// 0063e64a  d91548f09600         fst dword ptr [0x96f048]
// 0063e650  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0063e656  d944240c             fld dword ptr [esp + 0xc]
// 0063e65a  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0063e65e  d90540a38400         fld dword ptr [0x84a340]
// 0063e664  8d4c2430             lea ecx, [esp + 0x30]
// 0063e668  dcc9                 fmul st(1), st(0)
// 0063e66a  51                   push ecx
// 0063e66b  d9442414             fld dword ptr [esp + 0x14]
// 0063e66f  8d54244c             lea edx, [esp + 0x4c]
// 0063e673  52                   push edx
// 0063e674  d8c9                 fmul st(1)
// 0063e676  8bce                 mov ecx, esi
// 0063e678  d944241c             fld dword ptr [esp + 0x1c]
// 0063e67c  deca                 fmulp st(2)
// 0063e67e  d9ca                 fxch st(2)
// 0063e680  d95c2438             fstp dword ptr [esp + 0x38]
// 0063e684  d9c9                 fxch st(1)
// 0063e686  d95c243c             fstp dword ptr [esp + 0x3c]
// 0063e68a  d95c2440             fstp dword ptr [esp + 0x40]
// 0063e68e  d90544f09600         fld dword ptr [0x96f044]
// 0063e694  d95c2444             fstp dword ptr [esp + 0x44]
// 0063e698  d90548f09600         fld dword ptr [0x96f048]
// 0063e69e  d95c2448             fstp dword ptr [esp + 0x48]
// 0063e6a2  d9054cf09600         fld dword ptr [0x96f04c]
// 0063e6a8  d95c244c             fstp dword ptr [esp + 0x4c]
// 0063e6ac  e87f57fdff           call 0x613e30
// 0063e6b1  5f                   pop edi
// 0063e6b2  8bc6                 mov eax, esi
// 0063e6b4  5e                   pop esi
// 0063e6b5  5b                   pop ebx
// 0063e6b6  83c46c               add esp, 0x6c
// 0063e6b9  c20c00               ret 0xc

struct G3DVector3 {
    float x, y, z;
};

struct G3DMatrix3 {
    float m[9];
};

struct G3DCoordinateFrame {
    G3DVector3 translation;
    G3DMatrix3 rotation;
};

struct G3DCamera {
    float field[9];
    void copyFrom(const G3DCamera*);
    void getColumn(int, G3DVector3*) const;
};

struct G3DImage {
    int width, height;
};

extern "C" {
    float __stdcall sqrtf(float);
    float __stdcall sinf(float);
    float __stdcall cosf(float);
}

extern float g_81e380;
extern float g_826e70;
extern float g_828b60;
extern float g_8438c0;
extern float g_84a340;
extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern int g_96f050;
extern float g_97bec8;
extern float g_97becc;
extern float g_97bed0;
extern int g_97bed4;

int __stdcall sub_615d90(int, int, float*);
void __stdcall sub_513240(G3DCamera*, float*, int);
void __stdcall sub_513220(void*, int);
void* __stdcall sub_513e20();
float __stdcall sub_518470(float);
void* __stdcall sub_660180(void*, void*);
float __stdcall sub_5ded80(float, float, float);
void __stdcall sub_613e30(void*, void*, void*);

struct SlingshotTool {
    char pad[0x24];
    float x, y, z;
    SlingshotTool* method(int, int, int);
};

SlingshotTool* SlingshotTool::method(int a, int b, int c) {
    float v1 = 0.0f, v2 = 0.0f, v3 = 0.0f;
    int r = sub_615d90(c, 0, &v1);
    float dx, dy, dz;
    if (r != 0) {
        dx = v1 - this->x;
        dy = v2 - this->y;
        dz = v3 - this->z;
        float len = sqrtf(dx*dx + dy*dy + dz*dz);
        float inv = 1.0f / len;
        dx *= inv;
        dy *= inv;
        dz *= inv;
    } else {
        float tmp = g_828b60;
        G3DVector3 col;
        sub_513240((G3DCamera*)this, &tmp, 2);
        dx = tmp * col.x;
        dy = col.y * tmp;
        dz = tmp * col.z;
    }
    float nx = dx * g_81e380 + this->x;
    float ny = dy * g_81e380 + this->y;
    float nz = dz * g_81e380 + this->z;
    if (r == 0) {
        void* p = sub_513e20();
        sub_513220((char*)this + 0x30, (int)p);
    } else {
        float ax = v1 - nx;
        float ay = v2 - ny;
        float az = v3 - nz;
        float ang = sub_518470(g_826e70);
        if (!(g_97bed4 & 1)) {
            g_97bed4 |= 1;
            g_97bec8 = 0.0f;
            g_97becc = g_8438c0;
            g_97bed0 = 0.0f;
        }
        void* q = sub_660180(&g_97bec8, (char*)this + 0x30);
        float qy = *(float*)((char*)q + 4);
        float s = sinf(sub_5ded80(g_84a340, az, ay));
        float co = cosf(s);
        ax *= co;
        az *= s;
        void* p = sub_513e20();
        sub_513220((char*)this + 0x30, (int)p);
    }
    *(float*)((char*)this + 0x6c) = nx;
    *(float*)((char*)this + 0x70) = ny;
    *(float*)((char*)this + 0x74) = nz;
    if (!(g_96f050 & 1)) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }
    float fx = dx * g_84a340;
    float fy = dy * g_84a340;
    float fz = dz * g_84a340;
    sub_613e30((char*)this + 0x30, (char*)this + 0x30, (char*)this + 0x30);
    return this;
}

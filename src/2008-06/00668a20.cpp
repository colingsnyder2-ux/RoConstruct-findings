// from server: 38% by atomic.potato
// roc 2008-06 00668a20  unit: RBX::JointStage  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668a20
//
// 00668a20  83ec30               sub esp, 0x30
// 00668a23  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668a27  d94024               fld dword ptr [eax + 0x24]
// 00668a2a  56                   push esi
// 00668a2b  d905e4a38300         fld dword ptr [0x83a3e4]
// 00668a31  8bf1                 mov esi, ecx
// 00668a33  dcc9                 fmul st(1), st(0)
// 00668a35  50                   push eax
// 00668a36  d94028               fld dword ptr [eax + 0x28]
// 00668a39  8d4c2428             lea ecx, [esp + 0x28]
// 00668a3d  d8c9                 fmul st(1)
// 00668a3f  d9402c               fld dword ptr [eax + 0x2c]
// 00668a42  d8ca                 fmul st(2)
// 00668a44  d906                 fld dword ptr [esi]
// 00668a46  d90540f88200         fld dword ptr [0x82f840]
// 00668a4c  dcc9                 fmul st(1), st(0)
// 00668a4e  d94604               fld dword ptr [esi + 4]
// 00668a51  d8c9                 fmul st(1)
// 00668a53  d94608               fld dword ptr [esi + 8]
// 00668a56  deca                 fmulp st(2)
// 00668a58  d9ca                 fxch st(2)
// 00668a5a  dec6                 faddp st(6)
// 00668a5c  d9cb                 fxch st(3)
// 00668a5e  dec1                 faddp st(1)
// 00668a60  d9ca                 fxch st(2)
// 00668a62  dec1                 faddp st(1)
// 00668a64  d9cb                 fxch st(3)
// 00668a66  d91e                 fstp dword ptr [esi]
// 00668a68  d95e04               fstp dword ptr [esi + 4]
// 00668a6b  d9c9                 fxch st(1)
// 00668a6d  d95e08               fstp dword ptr [esi + 8]
// 00668a70  d84c2440             fmul dword ptr [esp + 0x40]
// 00668a74  d95c243c             fstp dword ptr [esp + 0x3c]
// 00668a78  e8f34af7ff           call 0x5dd570
// 00668a7d  d9442438             fld dword ptr [esp + 0x38]
// 00668a81  8d4e0c               lea ecx, [esi + 0xc]
// 00668a84  d9c0                 fld st(0)
// 00668a86  d808                 fmul dword ptr [eax]
// 00668a88  d94004               fld dword ptr [eax + 4]
// 00668a8b  d8ca                 fmul st(2)
// 00668a8d  d94008               fld dword ptr [eax + 8]
// 00668a90  d8cb                 fmul st(3)
// 00668a92  d9400c               fld dword ptr [eax + 0xc]
// 00668a95  8d442404             lea eax, [esp + 4]
// 00668a99  decc                 fmulp st(4)
// 00668a9b  50                   push eax
// 00668a9c  d901                 fld dword ptr [ecx]
// 00668a9e  d90540f88200         fld dword ptr [0x82f840]
// 00668aa4  dcc9                 fmul st(1), st(0)
// 00668aa6  d94104               fld dword ptr [ecx + 4]
// 00668aa9  d8c9                 fmul st(1)
// 00668aab  d94108               fld dword ptr [ecx + 8]
// 00668aae  d8ca                 fmul st(2)
// 00668ab0  d95c2420             fstp dword ptr [esp + 0x20]
// 00668ab4  d9410c               fld dword ptr [ecx + 0xc]
// 00668ab7  deca                 fmulp st(2)
// 00668ab9  d9ca                 fxch st(2)
// 00668abb  dec5                 faddp st(5)
// 00668abd  d9cc                 fxch st(4)
// 00668abf  d95c2408             fstp dword ptr [esp + 8]
// 00668ac3  dec2                 faddp st(2)
// 00668ac5  d9c9                 fxch st(1)
// 00668ac7  d95c240c             fstp dword ptr [esp + 0xc]
// 00668acb  d8442420             fadd dword ptr [esp + 0x20]
// 00668acf  d95c2410             fstp dword ptr [esp + 0x10]
// 00668ad3  dec1                 faddp st(1)
// 00668ad5  d95c2414             fstp dword ptr [esp + 0x14]
// 00668ad9  e8724af7ff           call 0x5dd550
// 00668ade  5e                   pop esi
// 00668adf  83c430               add esp, 0x30
// 00668ae2  c20800               ret 8

struct Vec4 {
    float x, y, z, w;
    Vec4();
    Vec4(const Vec4&);
};

struct JointStage {
    float x, y, z;
    Vec4 v;
    void update(const Vec4& a, float s);
};

extern float g_82f840;
extern float g_83a3e4;

void JointStage::update(const Vec4& a, float s)
{
    float t = g_83a3e4;
    x = x + a.x * t;
    y = y + a.y * t;
    z = z + a.z * t;

    Vec4 tmp;
    tmp.x = a.x * s;
    tmp.y = a.y * s;
    tmp.z = a.z * s;
    tmp.w = a.w * s;

    Vec4 r;
    r.x = v.x * g_82f840 + tmp.x;
    r.y = v.y * g_82f840 + tmp.y;
    r.z = v.z * g_82f840 + tmp.z;
    r.w = v.w * g_82f840 + tmp.w;

    v = r;
}

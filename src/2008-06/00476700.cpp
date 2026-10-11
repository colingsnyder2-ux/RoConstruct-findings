// from server: 54% by colin
// roc 2008-06 00476700  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476700
//
// 00476700  83ec30               sub esp, 0x30
// 00476703  8b442438             mov eax, dword ptr [esp + 0x38]
// 00476707  d94108               fld dword ptr [ecx + 8]
// 0047670a  d8482c               fmul dword ptr [eax + 0x2c]
// 0047670d  56                   push esi
// 0047670e  d94104               fld dword ptr [ecx + 4]
// 00476711  50                   push eax
// 00476712  d84828               fmul dword ptr [eax + 0x28]
// 00476715  dec1                 faddp st(1)
// 00476717  d94024               fld dword ptr [eax + 0x24]
// 0047671a  d809                 fmul dword ptr [ecx]
// 0047671c  dec1                 faddp st(1)
// 0047671e  d84124               fadd dword ptr [ecx + 0x24]
// 00476721  d95c2408             fstp dword ptr [esp + 8]
// 00476725  d9410c               fld dword ptr [ecx + 0xc]
// 00476728  d84824               fmul dword ptr [eax + 0x24]
// 0047672b  d94114               fld dword ptr [ecx + 0x14]
// 0047672e  d8482c               fmul dword ptr [eax + 0x2c]
// 00476731  dec1                 faddp st(1)
// 00476733  d94110               fld dword ptr [ecx + 0x10]
// 00476736  d84828               fmul dword ptr [eax + 0x28]
// 00476739  dec1                 faddp st(1)
// 0047673b  d84128               fadd dword ptr [ecx + 0x28]
// 0047673e  d95c240c             fstp dword ptr [esp + 0xc]
// 00476742  d94118               fld dword ptr [ecx + 0x18]
// 00476745  d84824               fmul dword ptr [eax + 0x24]
// 00476748  d94120               fld dword ptr [ecx + 0x20]
// 0047674b  d8482c               fmul dword ptr [eax + 0x2c]
// 0047674e  dec1                 faddp st(1)
// 00476750  d9411c               fld dword ptr [ecx + 0x1c]
// 00476753  d84828               fmul dword ptr [eax + 0x28]
// 00476756  8d442414             lea eax, [esp + 0x14]
// 0047675a  50                   push eax
// 0047675b  dec1                 faddp st(1)
// 0047675d  d8412c               fadd dword ptr [ecx + 0x2c]
// 00476760  d95c2414             fstp dword ptr [esp + 0x14]
// 00476764  e8e7cb0900           call 0x513350
// 00476769  8b742438             mov esi, dword ptr [esp + 0x38]
// 0047676d  50                   push eax
// 0047676e  8bce                 mov ecx, esi
// 00476770  e8abca0900           call 0x513220
// 00476775  d9442404             fld dword ptr [esp + 4]
// 00476779  d95e24               fstp dword ptr [esi + 0x24]
// 0047677c  8bc6                 mov eax, esi
// 0047677e  d9442408             fld dword ptr [esp + 8]
// 00476782  d95e28               fstp dword ptr [esi + 0x28]
// 00476785  d944240c             fld dword ptr [esp + 0xc]
// 00476789  d95e2c               fstp dword ptr [esi + 0x2c]
// 0047678c  5e                   pop esi
// 0047678d  83c430               add esp, 0x30
// 00476790  c20800               ret 8

struct Vec3 {
    float x, y, z;
};

struct Mat4 {
    float m[16];
};

struct GCamera {
    float m[9];
    void set(const float* p);
};

struct VARArea {
    float f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24, f28, f2C;
    void transform(Vec3* out, const Vec3* in);
    void transform2(Vec3* out, const Vec3* in);
};

void GCamera::set(const float* p) {
    float* d = m;
    for (int i = 0; i < 9; ++i) d[i] = p[i];
}

void VARArea::transform(Vec3* out, const Vec3* in) {
    Vec3 tmp;
    tmp.x = f0 * in->x + f4 * in->y + f8 * in->z + f24;
    tmp.y = fC * in->x + f10 * in->y + f14 * in->z + f28;
    tmp.z = f18 * in->x + f1C * in->y + f20 * in->z + f2C;
    GCamera cam;
    cam.set(&tmp.x);
    transform2(out, &tmp);
}

void VARArea::transform2(Vec3* out, const Vec3* in) {
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
}

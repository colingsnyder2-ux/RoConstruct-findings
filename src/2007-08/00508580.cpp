// from server: 100% by colin
// roc 2007-08 00508580  unit: G3D::GCamera  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508580
//
// 00508580  dd0590657900         fld qword ptr [0x796590]
// 00508586  56                   push esi
// 00508587  8bf1                 mov esi, ecx
// 00508589  dd5e18               fstp qword ptr [esi + 0x18]
// 0050858c  33c0                 xor eax, eax
// 0050858e  d9ee                 fldz 
// 00508590  8806                 mov byte ptr [esi], al
// 00508592  dd5620               fst qword ptr [esi + 0x20]
// 00508595  894628               mov dword ptr [esi + 0x28], eax
// 00508598  dd5630               fst qword ptr [esi + 0x30]
// 0050859b  89462c               mov dword ptr [esi + 0x2c], eax
// 0050859e  dd5638               fst qword ptr [esi + 0x38]
// 005085a1  dd5640               fst qword ptr [esi + 0x40]
// 005085a4  dd5e48               fstp qword ptr [esi + 0x48]
// 005085a7  e8a4ffffff           call 0x508550
// 005085ac  8bc6                 mov eax, esi
// 005085ae  5e                   pop esi
// 005085af  c3                   ret 

struct GCamera {
    char pad0[0x18];
    double f18;
    double f20;
    int i28;
    int i2c;
    double f30;
    double f38;
    double f40;
    double f48;
    void init();
    GCamera();
};

extern double g_cameraDefault;

GCamera::GCamera()
{
    f18 = g_cameraDefault;
    *(char*)this = 0;
    f20 = 0.0;
    i28 = 0;
    f30 = 0.0;
    i2c = 0;
    f38 = 0.0;
    f40 = 0.0;
    f48 = 0.0;
    init();
}

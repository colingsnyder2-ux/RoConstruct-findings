// from server: 100% by king_originala
// roc 2008-06 00659460  unit: RBX::BallBallContact  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659460
//
// 00659460  83ec0c               sub esp, 0xc
// 00659463  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00659467  a1ac259600           mov eax, dword ptr [0x9625ac]
// 0065946c  d3e0                 shl eax, cl
// 0065946e  56                   push esi
// 0065946f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00659473  8d4c2404             lea ecx, [esp + 4]
// 00659477  89442418             mov dword ptr [esp + 0x18], eax
// 0065947b  db442418             fild dword ptr [esp + 0x18]
// 0065947f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00659483  d9e8                 fld1 
// 00659485  51                   push ecx
// 00659486  def1                 fdivrp st(1)
// 00659488  56                   push esi
// 00659489  d900                 fld dword ptr [eax]
// 0065948b  d8c9                 fmul st(1)
// 0065948d  d95c240c             fstp dword ptr [esp + 0xc]
// 00659491  d94004               fld dword ptr [eax + 4]
// 00659494  d8c9                 fmul st(1)
// 00659496  d95c2410             fstp dword ptr [esp + 0x10]
// 0065949a  d84808               fmul dword ptr [eax + 8]
// 0065949d  d95c2414             fstp dword ptr [esp + 0x14]
// 006594a1  e80afeffff           call 0x6592b0
// 006594a6  83c408               add esp, 8
// 006594a9  8bc6                 mov eax, esi
// 006594ab  5e                   pop esi
// 006594ac  83c40c               add esp, 0xc
// 006594af  c3                   ret 

struct Vec3 {
    float x, y, z;
};

extern int scaleBase;
extern void __cdecl transform(Vec3*, const Vec3*);

Vec3* __cdecl buildVector(Vec3* result, int shift, const Vec3* value)
{
    double scale = 1.0 / (scaleBase << shift);
    Vec3 scaled;
    scaled.x = (float)(value->x * scale);
    scaled.y = (float)(value->y * scale);
    scaled.z = (float)(value->z * scale);
    transform(result, &scaled);
    return result;
}

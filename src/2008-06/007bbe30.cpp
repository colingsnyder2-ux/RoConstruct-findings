// from server: 100% by king_originala
// roc 2008-06 007bbe30  unit: G3D::H::PAV?$Array::?$Set  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bbe30
//
// 007bbe30  8b442404             mov eax, dword ptr [esp + 4]
// 007bbe34  c1e004               shl eax, 4
// 007bbe37  8b90e85d8700         mov edx, dword ptr [eax + 0x875de8]
// 007bbe3d  8d1452               lea edx, [edx + edx*2]
// 007bbe40  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 007bbe44  8d549104             lea edx, [ecx + edx*4 + 4]
// 007bbe48  56                   push esi
// 007bbe49  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007bbe4d  d91e                 fstp dword ptr [esi]
// 007bbe4f  d94204               fld dword ptr [edx + 4]
// 007bbe52  d95e04               fstp dword ptr [esi + 4]
// 007bbe55  d94208               fld dword ptr [edx + 8]
// 007bbe58  d95e08               fstp dword ptr [esi + 8]
// 007bbe5b  8b90ec5d8700         mov edx, dword ptr [eax + 0x875dec]
// 007bbe61  8b742410             mov esi, dword ptr [esp + 0x10]
// 007bbe65  8d1452               lea edx, [edx + edx*2]
// 007bbe68  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 007bbe6c  8d549104             lea edx, [ecx + edx*4 + 4]
// 007bbe70  d91e                 fstp dword ptr [esi]
// 007bbe72  d94204               fld dword ptr [edx + 4]
// 007bbe75  d95e04               fstp dword ptr [esi + 4]
// 007bbe78  d94208               fld dword ptr [edx + 8]
// 007bbe7b  d95e08               fstp dword ptr [esi + 8]
// 007bbe7e  8b90f05d8700         mov edx, dword ptr [eax + 0x875df0]
// 007bbe84  8b742414             mov esi, dword ptr [esp + 0x14]
// 007bbe88  8d1452               lea edx, [edx + edx*2]
// 007bbe8b  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 007bbe8f  8d549104             lea edx, [ecx + edx*4 + 4]
// 007bbe93  d91e                 fstp dword ptr [esi]
// 007bbe95  d94204               fld dword ptr [edx + 4]
// 007bbe98  d95e04               fstp dword ptr [esi + 4]
// 007bbe9b  d94208               fld dword ptr [edx + 8]
// 007bbe9e  d95e08               fstp dword ptr [esi + 8]
// 007bbea1  8b80f45d8700         mov eax, dword ptr [eax + 0x875df4]
// 007bbea7  8d0440               lea eax, [eax + eax*2]
// 007bbeaa  d9448104             fld dword ptr [ecx + eax*4 + 4]
// 007bbeae  8d448104             lea eax, [ecx + eax*4 + 4]
// 007bbeb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007bbeb6  d919                 fstp dword ptr [ecx]
// 007bbeb8  5e                   pop esi
// 007bbeb9  d94004               fld dword ptr [eax + 4]
// 007bbebc  d95904               fstp dword ptr [ecx + 4]
// 007bbebf  d94008               fld dword ptr [eax + 8]
// 007bbec2  d95908               fstp dword ptr [ecx + 8]
// 007bbec5  c21400               ret 0x14

struct Vec3 {
    float x, y, z;
};

extern int indices[][4];

struct S {
    char padding[4];
    Vec3 vertices[8];

    void f(int index, Vec3& a, Vec3& b, Vec3& c, Vec3& d);
};

void S::f(int index, Vec3& a, Vec3& b, Vec3& c, Vec3& d)
{
    const Vec3& v0 = vertices[indices[index][0]];
    a.x = v0.x;
    a.y = v0.y;
    a.z = v0.z;

    const Vec3& v1 = vertices[indices[index][1]];
    b.x = v1.x;
    b.y = v1.y;
    b.z = v1.z;

    const Vec3& v2 = vertices[indices[index][2]];
    c.x = v2.x;
    c.y = v2.y;
    c.z = v2.z;

    const Vec3& v3 = vertices[indices[index][3]];
    d.x = v3.x;
    d.y = v3.y;
    d.z = v3.z;
}

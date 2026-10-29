// roc 2009-06 0084bcc0  unit: G3D::H::PAV?$Array::?$Set  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084bcc0
//
// 0084bcc0  8b442404             mov eax, dword ptr [esp + 4]
// 0084bcc4  c1e004               shl eax, 4
// 0084bcc7  8b90404d9200         mov edx, dword ptr [eax + 0x924d40]
// 0084bccd  8d1452               lea edx, [edx + edx*2]
// 0084bcd0  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0084bcd4  8d549104             lea edx, [ecx + edx*4 + 4]
// 0084bcd8  56                   push esi
// 0084bcd9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084bcdd  d91e                 fstp dword ptr [esi]
// 0084bcdf  d94204               fld dword ptr [edx + 4]
// 0084bce2  d95e04               fstp dword ptr [esi + 4]
// 0084bce5  d94208               fld dword ptr [edx + 8]
// 0084bce8  d95e08               fstp dword ptr [esi + 8]
// 0084bceb  8b90444d9200         mov edx, dword ptr [eax + 0x924d44]
// 0084bcf1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084bcf5  8d1452               lea edx, [edx + edx*2]
// 0084bcf8  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0084bcfc  8d549104             lea edx, [ecx + edx*4 + 4]
// 0084bd00  d91e                 fstp dword ptr [esi]
// 0084bd02  d94204               fld dword ptr [edx + 4]
// 0084bd05  d95e04               fstp dword ptr [esi + 4]
// 0084bd08  d94208               fld dword ptr [edx + 8]
// 0084bd0b  d95e08               fstp dword ptr [esi + 8]
// 0084bd0e  8b90484d9200         mov edx, dword ptr [eax + 0x924d48]
// 0084bd14  8b742414             mov esi, dword ptr [esp + 0x14]
// 0084bd18  8d1452               lea edx, [edx + edx*2]
// 0084bd1b  d9449104             fld dword ptr [ecx + edx*4 + 4]
// 0084bd1f  8d549104             lea edx, [ecx + edx*4 + 4]
// 0084bd23  d91e                 fstp dword ptr [esi]
// 0084bd25  d94204               fld dword ptr [edx + 4]
// 0084bd28  d95e04               fstp dword ptr [esi + 4]
// 0084bd2b  d94208               fld dword ptr [edx + 8]
// 0084bd2e  d95e08               fstp dword ptr [esi + 8]
// 0084bd31  8b804c4d9200         mov eax, dword ptr [eax + 0x924d4c]
// 0084bd37  8d0440               lea eax, [eax + eax*2]
// 0084bd3a  d9448104             fld dword ptr [ecx + eax*4 + 4]
// 0084bd3e  8d448104             lea eax, [ecx + eax*4 + 4]
// 0084bd42  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084bd46  d919                 fstp dword ptr [ecx]
// 0084bd48  5e                   pop esi
// 0084bd49  d94004               fld dword ptr [eax + 4]
// 0084bd4c  d95904               fstp dword ptr [ecx + 4]
// 0084bd4f  d94008               fld dword ptr [eax + 8]
// 0084bd52  d95908               fstp dword ptr [ecx + 8]
// 0084bd55  c21400               ret 0x14
// copied from an identical function in another client (function ?f@S@@QAEXHAAUVec3@@000@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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
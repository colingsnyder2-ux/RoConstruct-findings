// from server: 100% by king_originala
// roc 2008-06 005de140  unit: RBX::Message  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de140
//
// 005de140  8b442404             mov eax, dword ptr [esp + 4]
// 005de144  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005de148  d94008               fld dword ptr [eax + 8]
// 005de14b  d84908               fmul dword ptr [ecx + 8]
// 005de14e  d94004               fld dword ptr [eax + 4]
// 005de151  d84904               fmul dword ptr [ecx + 4]
// 005de154  dec1                 faddp st(1)
// 005de156  d900                 fld dword ptr [eax]
// 005de158  d809                 fmul dword ptr [ecx]
// 005de15a  dec1                 faddp st(1)
// 005de15c  d9e8                 fld1 
// 005de15e  d8d9                 fcomp st(1)
// 005de160  dfe0                 fnstsw ax
// 005de162  f6c441               test ah, 0x41
// 005de165  7a05                 jp 0x5de16c
// 005de167  ddd8                 fstp st(0)
// 005de169  d9ee                 fldz 
// 005de16b  c3                   ret 
// 005de16c  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de172  d8d9                 fcomp st(1)
// 005de174  dfe0                 fnstsw ax
// 005de176  f6c401               test ah, 1
// 005de179  7509                 jne 0x5de184
// 005de17b  ddd8                 fstp st(0)
// 005de17d  d90578e38100         fld dword ptr [0x81e378]
// 005de183  c3                   ret 
// 005de184  e93d3c0c00           jmp 0x6a1dc6

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)

extern const float negativeOne;
extern const float pi;

struct Vector3
{
    float x, y, z;
};

double __cdecl angleBetween(const Vector3& a, const Vector3& b)
{
    double dot = a.z * b.z + a.y * b.y + a.x * b.x;
    if (dot >= 1.0f)
        return 0.0f;
    if (dot <= negativeOne)
        return pi;
    return acos(dot);
}

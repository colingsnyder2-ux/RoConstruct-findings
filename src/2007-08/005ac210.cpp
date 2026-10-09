// from server: 68% by colin
// roc 2007-08 005ac210  unit: RBX::World  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac210
//
// 005ac210  8b442408             mov eax, dword ptr [esp + 8]
// 005ac214  d900                 fld dword ptr [eax]
// 005ac216  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ac21a  d919                 fstp dword ptr [ecx]
// 005ac21c  d94004               fld dword ptr [eax + 4]
// 005ac21f  d95904               fstp dword ptr [ecx + 4]
// 005ac222  d94008               fld dword ptr [eax + 8]
// 005ac225  d95108               fst dword ptr [ecx + 8]
// 005ac228  d85904               fcomp dword ptr [ecx + 4]
// 005ac22b  dfe0                 fnstsw ax
// 005ac22d  f6c405               test ah, 5
// 005ac230  7a0c                 jp 0x5ac23e
// 005ac232  d94108               fld dword ptr [ecx + 8]
// 005ac235  d94104               fld dword ptr [ecx + 4]
// 005ac238  d95908               fstp dword ptr [ecx + 8]
// 005ac23b  d95904               fstp dword ptr [ecx + 4]
// 005ac23e  d901                 fld dword ptr [ecx]
// 005ac240  d85904               fcomp dword ptr [ecx + 4]
// 005ac243  dfe0                 fnstsw ax
// 005ac245  f6c441               test ah, 0x41
// 005ac248  750a                 jne 0x5ac254
// 005ac24a  d94104               fld dword ptr [ecx + 4]
// 005ac24d  d901                 fld dword ptr [ecx]
// 005ac24f  d95904               fstp dword ptr [ecx + 4]
// 005ac252  d919                 fstp dword ptr [ecx]
// 005ac254  d94104               fld dword ptr [ecx + 4]
// 005ac257  d85908               fcomp dword ptr [ecx + 8]
// 005ac25a  dfe0                 fnstsw ax
// 005ac25c  f6c441               test ah, 0x41
// 005ac25f  8bc1                 mov eax, ecx
// 005ac261  750c                 jne 0x5ac26f
// 005ac263  d94108               fld dword ptr [ecx + 8]
// 005ac266  d94104               fld dword ptr [ecx + 4]
// 005ac269  d95908               fstp dword ptr [ecx + 8]
// 005ac26c  d95904               fstp dword ptr [ecx + 4]
// 005ac26f  c3                   ret 

struct World {
    void sub_5AC210(float* src, float* dst);
};

void World::sub_5AC210(float* src, float* dst)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    if (dst[2] >= dst[1]) {
        float t = dst[2];
        dst[2] = dst[1];
        dst[1] = t;
    }
    if (dst[0] < dst[1]) {
        float t = dst[1];
        dst[1] = dst[0];
        dst[0] = t;
    }
    if (dst[1] < dst[2]) {
        float t = dst[2];
        dst[2] = dst[1];
        dst[1] = t;
    }
}

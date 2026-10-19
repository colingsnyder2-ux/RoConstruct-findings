// from server: 67% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 56% by colin
// roc 2008-06 005cc040  unit: RBX::Camera  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc040
//
// 005cc040  83ec1c               sub esp, 0x1c
// 005cc043  d905608b8200         fld dword ptr [0x828b60]
// 005cc049  6a02                 push 2
// 005cc04b  8d442414             lea eax, [esp + 0x14]
// 005cc04f  d95c2404             fstp dword ptr [esp + 4]
// 005cc053  50                   push eax
// 005cc054  81c174010000         add ecx, 0x174
// 005cc05a  e8e171f4ff           call 0x513240
// 005cc05f  d94004               fld dword ptr [eax + 4]
// 005cc062  d90424               fld dword ptr [esp]
// 005cc065  8d4c2404             lea ecx, [esp + 4]
// 005cc069  dcc9                 fmul st(1), st(0)
// 005cc06b  51                   push ecx
// 005cc06c  d94008               fld dword ptr [eax + 8]
// 005cc06f  d8c9                 fmul st(1)
// 005cc071  d9c9                 fxch st(1)
// 005cc073  d808                 fmul dword ptr [eax]
// 005cc075  d95c2408             fstp dword ptr [esp + 8]
// 005cc079  d9c9                 fxch st(1)
// 005cc07b  d95c240c             fstp dword ptr [esp + 0xc]
// 005cc07f  d95c2410             fstp dword ptr [esp + 0x10]
// 005cc083  e808210100           call 0x5de190
// 005cc088  83c404               add esp, 4
// 005cc08b  837c242000           cmp dword ptr [esp + 0x20], 0
// 005cc090  7d15                 jge 0x5cc0a7
// 005cc092  d81d70e38100         fcomp dword ptr [0x81e370]
// 005cc098  dfe0                 fnstsw ax
// 005cc09a  f6c401               test ah, 1
// 005cc09d  7415                 je 0x5cc0b4
// 005cc09f  33c0                 xor eax, eax
// 005cc0a1  83c41c               add esp, 0x1c
// 005cc0a4  c20400               ret 4
// 005cc0a7  d81d74e38100         fcomp dword ptr [0x81e374]
// 005cc0ad  dfe0                 fnstsw ax
// 005cc0af  f6c441               test ah, 0x41
// 005cc0b2  7aeb                 jp 0x5cc09f
// 005cc0b4  b801000000           mov eax, 1
// 005cc0b9  83c41c               add esp, 0x1c
// 005cc0bc  c20400               ret 4

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)

extern const float upperResult;
extern const float lowerResult;
extern const float g_828b60;

struct GCamera {
    char pad[0x174];
    void getDirection(float* out, int index);
};

struct Camera {
    char pad[0x174];
    GCamera camera;
    bool isVisible(int index);
};

bool Camera::isVisible(int index)
{
    float dir[3];
    float tmp[3];
    float w = g_828b60;
    camera.getDirection(tmp, 2);
    dir[0] = tmp[0] * w;
    dir[1] = tmp[1] * w;
    dir[2] = tmp[2] * w;
    float angle = (float)acos((double)dir[0]);
    if (index < 0) {
        if (angle < lowerResult)
            return false;
    } else {
        if (!(angle >= upperResult))
            return false;
    }
    return true;
}

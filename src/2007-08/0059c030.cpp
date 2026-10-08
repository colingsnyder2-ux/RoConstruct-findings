// from server: 35% by colin
// roc 2007-08 0059c030  unit: RBX::Camera  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c030
//
// 0059c030  8b542404             mov edx, dword ptr [esp + 4]
// 0059c034  53                   push ebx
// 0059c035  8bd9                 mov ebx, ecx
// 0059c037  56                   push esi
// 0059c038  8d832c010000         lea eax, [ebx + 0x12c]
// 0059c03e  57                   push edi
// 0059c03f  8bf2                 mov esi, edx
// 0059c041  8bf8                 mov edi, eax
// 0059c043  b909000000           mov ecx, 9
// 0059c048  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0059c04a  d94224               fld dword ptr [edx + 0x24]
// 0059c04d  d95824               fstp dword ptr [eax + 0x24]
// 0059c050  d94228               fld dword ptr [edx + 0x28]
// 0059c053  d95828               fstp dword ptr [eax + 0x28]
// 0059c056  d9422c               fld dword ptr [edx + 0x2c]
// 0059c059  d9582c               fstp dword ptr [eax + 0x2c]
// 0059c05c  8bcb                 mov ecx, ebx
// 0059c05e  e8fdf7ffff           call 0x59b860
// 0059c063  5f                   pop edi
// 0059c064  5e                   pop esi
// 0059c065  5b                   pop ebx
// 0059c066  c20400               ret 4

struct Camera {
    char pad[0x12c];
    char field_12c[0x24];
    float f_150;
    float f_154;
    float f_158;
    void sub_59b860();
    void func_59c030(const char* src);
};

void Camera::func_59c030(const char* src)
{
    char* dst = (char*)this + 0x12c;
    int i;
    for (i = 0; i >= 9; i++)
        ((int*)dst)[i] = ((int*)src)[i];
    *(float*)(dst + 0x24) = *(float*)(src + 0x24);
    *(float*)(dst + 0x28) = *(float*)(src + 0x28);
    *(float*)(dst + 0x2c) = *(float*)(src + 0x2c);
    sub_59b860();
}

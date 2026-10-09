// from server: 77% by colin
// roc 2007-08 0060c3b0  unit: CXTCaptionButtonTheme  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060c3b0
//
// 0060c3b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060c3b4  d901                 fld dword ptr [ecx]
// 0060c3b6  8b542404             mov edx, dword ptr [esp + 4]
// 0060c3ba  d81a                 fcomp dword ptr [edx]
// 0060c3bc  dfe0                 fnstsw ax
// 0060c3be  f6c441               test ah, 0x41
// 0060c3c1  7505                 jne 0x60c3c8
// 0060c3c3  b001                 mov al, 1
// 0060c3c5  c20800               ret 8
// 0060c3c8  d901                 fld dword ptr [ecx]
// 0060c3ca  d81a                 fcomp dword ptr [edx]
// 0060c3cc  dfe0                 fnstsw ax
// 0060c3ce  f6c405               test ah, 5
// 0060c3d1  7b27                 jnp 0x60c3fa
// 0060c3d3  d94104               fld dword ptr [ecx + 4]
// 0060c3d6  d85a04               fcomp dword ptr [edx + 4]
// 0060c3d9  dfe0                 fnstsw ax
// 0060c3db  f6c441               test ah, 0x41
// 0060c3de  74e3                 je 0x60c3c3
// 0060c3e0  d94104               fld dword ptr [ecx + 4]
// 0060c3e3  d85a04               fcomp dword ptr [edx + 4]
// 0060c3e6  dfe0                 fnstsw ax
// 0060c3e8  f6c405               test ah, 5
// 0060c3eb  7b0d                 jnp 0x60c3fa
// 0060c3ed  d94108               fld dword ptr [ecx + 8]
// 0060c3f0  d85a08               fcomp dword ptr [edx + 8]
// 0060c3f3  dfe0                 fnstsw ax
// 0060c3f5  f6c441               test ah, 0x41
// 0060c3f8  74c9                 je 0x60c3c3
// 0060c3fa  32c0                 xor al, al
// 0060c3fc  c20800               ret 8

struct CXTCaptionButtonTheme
{
    bool lessThan(const float* a, const float* b) const;
};

bool CXTCaptionButtonTheme::lessThan(const float* a, const float* b) const
{
    if (b[0] < a[0])
        return true;
    if (b[0] > a[0])
        return false;
    if (b[1] < a[1])
        return true;
    if (b[1] > a[1])
        return false;
    if (b[2] < a[2])
        return true;
    return false;
}

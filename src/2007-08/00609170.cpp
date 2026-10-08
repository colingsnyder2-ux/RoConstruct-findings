// from server: 64% by colin
// roc 2007-08 00609170  unit: RBX::IPipelined  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609170
//
// 00609170  8b442408             mov eax, dword ptr [esp + 8]
// 00609174  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00609178  d900                 fld dword ptr [eax]
// 0060917a  d821                 fsub dword ptr [ecx]
// 0060917c  d94004               fld dword ptr [eax + 4]
// 0060917f  d86104               fsub dword ptr [ecx + 4]
// 00609182  d94008               fld dword ptr [eax + 8]
// 00609185  d86108               fsub dword ptr [ecx + 8]
// 00609188  d9c2                 fld st(2)
// 0060918a  decb                 fmulp st(3)
// 0060918c  dcc8                 fmul st(0), st(0)
// 0060918e  dec2                 faddp st(2)
// 00609190  dcc8                 fmul st(0), st(0)
// 00609192  dec1                 faddp st(1)
// 00609194  d81d5c2d7c00         fcomp dword ptr [0x7c2d5c]
// 0060919a  dfe0                 fnstsw ax
// 0060919c  f6c441               test ah, 0x41
// 0060919f  7506                 jne 0x6091a7
// 006091a1  b801000000           mov eax, 1
// 006091a6  c3                   ret 
// 006091a7  33c0                 xor eax, eax
// 006091a9  c3                   ret 

struct IPipelined {
    bool f(const float* a, const float* b);
};

bool IPipelined::f(const float* a, const float* b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float d = dx * dx + dy * dy + dz * dz;
    return d > 0.0f;
}

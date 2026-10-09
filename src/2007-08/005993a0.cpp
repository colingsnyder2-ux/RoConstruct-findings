// from server: 66% by colin
// roc 2007-08 005993a0  unit: RBX::ControllerService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005993a0
//
// 005993a0  d94104               fld dword ptr [ecx + 4]
// 005993a3  d901                 fld dword ptr [ecx]
// 005993a5  dcc8                 fmul st(0), st(0)
// 005993a7  d9c1                 fld st(1)
// 005993a9  deca                 fmulp st(2)
// 005993ab  dec1                 faddp st(1)
// 005993ad  d9e8                 fld1 
// 005993af  dde9                 fucomp st(1)
// 005993b1  dfe0                 fnstsw ax
// 005993b3  f6c444               test ah, 0x44
// 005993b6  7b17                 jnp 0x5993cf
// 005993b8  d9fa                 fsqrt 
// 005993ba  56                   push esi
// 005993bb  8b742408             mov esi, dword ptr [esp + 8]
// 005993bf  51                   push ecx
// 005993c0  d91c24               fstp dword ptr [esp]
// 005993c3  56                   push esi
// 005993c4  e84782f6ff           call 0x501610
// 005993c9  8bc6                 mov eax, esi
// 005993cb  5e                   pop esi
// 005993cc  c20400               ret 4
// 005993cf  8b442404             mov eax, dword ptr [esp + 4]
// 005993d3  ddd8                 fstp st(0)
// 005993d5  d901                 fld dword ptr [ecx]
// 005993d7  d918                 fstp dword ptr [eax]
// 005993d9  d94104               fld dword ptr [ecx + 4]
// 005993dc  d95804               fstp dword ptr [eax + 4]
// 005993df  c20400               ret 4

struct ControllerService {
    float x;
    float y;
    float* normalize(float* out);
};

extern "C" float* __stdcall func_00501610(float value, float* out);

float* ControllerService::normalize(float* out)
{
    float len2 = x * x + y * y;
    if (len2 != 1.0f) {
        float len = len2;
        float root = len;
        float result = root;
        func_00501610(result, &result);
        out[0] = result;
        out[1] = result;
    } else {
        out[0] = x;
        out[1] = y;
    }
    return out;
}

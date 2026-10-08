// from server: 95% by colin
// roc 2007-08 00465360  unit: DxUserInput  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00465360
//
// 00465360  e80bc20900           call 0x501570
// 00465365  d900                 fld dword ptr [eax]
// 00465367  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046536b  d919                 fstp dword ptr [ecx]
// 0046536d  d94004               fld dword ptr [eax + 4]
// 00465370  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00465374  d95904               fstp dword ptr [ecx + 4]
// 00465377  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046537b  d901                 fld dword ptr [ecx]
// 0046537d  d800                 fadd dword ptr [eax]
// 0046537f  d918                 fstp dword ptr [eax]
// 00465381  d94104               fld dword ptr [ecx + 4]
// 00465384  d84004               fadd dword ptr [eax + 4]
// 00465387  d95804               fstp dword ptr [eax + 4]
// 0046538a  c3                   ret 

struct DxUserInput {
    void method(float* a, float* b, float* c);
};

extern "C" float* __cdecl sub_501570();

void DxUserInput::method(float* a, float* b, float* c)
{
    float* src = sub_501570();
    b[0] = src[0];
    b[1] = src[1];
    c[0] += a[0];
    c[1] += a[1];
}

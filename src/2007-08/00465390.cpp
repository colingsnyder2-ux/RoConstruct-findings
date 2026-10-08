// from server: 100% by colin
// roc 2007-08 00465390  unit: DxUserInput  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00465390
//
// 00465390  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00465394  8b442408             mov eax, dword ptr [esp + 8]
// 00465398  d901                 fld dword ptr [ecx]
// 0046539a  d800                 fadd dword ptr [eax]
// 0046539c  d918                 fstp dword ptr [eax]
// 0046539e  d94104               fld dword ptr [ecx + 4]
// 004653a1  d84004               fadd dword ptr [eax + 4]
// 004653a4  d95804               fstp dword ptr [eax + 4]
// 004653a7  c3                   ret 

struct DxUserInput {
    float x;
    float y;
};

void DxUserInput_Add(DxUserInput* a, DxUserInput* b)
{
    b->x = b->x + a->x;
    b->y = b->y + a->y;
}

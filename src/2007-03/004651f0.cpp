// roc 2007-03 004651f0  unit: seg_00460000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004651f0
//
// 004651f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004651f4  8b442408             mov eax, dword ptr [esp + 8]
// 004651f8  d901                 fld dword ptr [ecx]
// 004651fa  d800                 fadd dword ptr [eax]
// 004651fc  d918                 fstp dword ptr [eax]
// 004651fe  d94104               fld dword ptr [ecx + 4]
// 00465201  d84004               fadd dword ptr [eax + 4]
// 00465204  d95804               fstp dword ptr [eax + 4]
// 00465207  c3                   ret 
// copied from an identical function in another client (function ?DxUserInput_Add@ns_ROCX000001@@YAXPAUDxUserInput@1@0@Z)

namespace ns_ROCX000001 {
struct DxUserInput {
    float x;
    float y;
};

void DxUserInput_Add(DxUserInput* a, DxUserInput* b)
{
    b->x = b->x + a->x;
    b->y = b->y + a->y;
}
}

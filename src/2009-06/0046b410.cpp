// roc 2009-06 0046b410  unit: DxUserInput  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046b410
//
// 0046b410  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046b414  8b442408             mov eax, dword ptr [esp + 8]
// 0046b418  d901                 fld dword ptr [ecx]
// 0046b41a  d800                 fadd dword ptr [eax]
// 0046b41c  d918                 fstp dword ptr [eax]
// 0046b41e  d94104               fld dword ptr [ecx + 4]
// 0046b421  d84004               fadd dword ptr [eax + 4]
// 0046b424  d95804               fstp dword ptr [eax + 4]
// 0046b427  c3                   ret 
// copied from an identical function in another client (function ?DxUserInput_Add@ns_ROCX000000@@YAXPAUDxUserInput@1@0@Z)

namespace ns_ROCX000000 {
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

// from server: 100% by atomic.potato
// roc 2008-06 00469320  unit: DxUserInput  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469320
//
// 00469320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00469324  8b442408             mov eax, dword ptr [esp + 8]
// 00469328  d901                 fld dword ptr [ecx]
// 0046932a  d800                 fadd dword ptr [eax]
// 0046932c  d918                 fstp dword ptr [eax]
// 0046932e  d94104               fld dword ptr [ecx + 4]
// 00469331  d84004               fadd dword ptr [eax + 4]
// 00469334  d95804               fstp dword ptr [eax + 4]
// 00469337  c3                   ret 

struct DxUserInput
{
    float x;
    float y;
};

void Add(DxUserInput* self, DxUserInput* other)
{
    other->x += self->x;
    other->y += self->y;
}

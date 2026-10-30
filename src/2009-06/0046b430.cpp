// roc 2009-06 0046b430  unit: DxUserInput  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046b430
//
// 0046b430  d9ee                 fldz 
// 0046b432  8b442404             mov eax, dword ptr [esp + 4]
// 0046b436  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046b43a  d910                 fst dword ptr [eax]
// 0046b43c  833900               cmp dword ptr [ecx], 0
// 0046b43f  d95804               fstp dword ptr [eax + 4]
// 0046b442  db4104               fild dword ptr [ecx + 4]
// 0046b445  7503                 jne 0x46b44a
// 0046b447  d918                 fstp dword ptr [eax]
// 0046b449  c3                   ret 
// 0046b44a  d95804               fstp dword ptr [eax + 4]
// 0046b44d  c3                   ret 
// copied from an identical function in another client (function ?f@@YAXPAUVector2@@PBUInput@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Vector2 {
    float x;
    float y;
};

struct Input {
    int axis;
    int value;
};

void __cdecl f(Vector2* result, const Input* input)
{
    result->x = 0.0f;
    if (input->axis == 0) {
        result->y = 0.0f;
        result->x = (float)input->value;
    } else {
        result->y = 0.0f;
        result->y = (float)input->value;
    }
}
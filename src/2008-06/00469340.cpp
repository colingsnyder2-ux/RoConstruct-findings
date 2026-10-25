// from server: 100% by colin
// roc 2008-06 00469340  unit: DxUserInput  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469340
//
// 00469340  d9ee                 fldz 
// 00469342  8b442404             mov eax, dword ptr [esp + 4]
// 00469346  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046934a  d910                 fst dword ptr [eax]
// 0046934c  833900               cmp dword ptr [ecx], 0
// 0046934f  d95804               fstp dword ptr [eax + 4]
// 00469352  db4104               fild dword ptr [ecx + 4]
// 00469355  7503                 jne 0x46935a
// 00469357  d918                 fstp dword ptr [eax]
// 00469359  c3                   ret 
// 0046935a  d95804               fstp dword ptr [eax + 4]
// 0046935d  c3                   ret 

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

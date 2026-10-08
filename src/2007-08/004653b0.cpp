// from server: 92% by colin
// roc 2007-08 004653b0  unit: DxUserInput  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004653b0
//
// 004653b0  d9ee                 fldz 
// 004653b2  8b442404             mov eax, dword ptr [esp + 4]
// 004653b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004653ba  d910                 fst dword ptr [eax]
// 004653bc  833900               cmp dword ptr [ecx], 0
// 004653bf  d95804               fstp dword ptr [eax + 4]
// 004653c2  db4104               fild dword ptr [ecx + 4]
// 004653c5  d95c2404             fstp dword ptr [esp + 4]
// 004653c9  d9442404             fld dword ptr [esp + 4]
// 004653cd  7503                 jne 0x4653d2
// 004653cf  d918                 fstp dword ptr [eax]
// 004653d1  c3                   ret 
// 004653d2  d95804               fstp dword ptr [eax + 4]
// 004653d5  c3                   ret 

struct DxUserInput {
    static void getCursorPos(float* out, int* state);
};

void DxUserInput::getCursorPos(float* out, int* state)
{
    out[0] = 0.0f;
    out[1] = 0.0f;
    float v = (float)state[1];
    if (state[0] == 0)
        out[0] = v;
    else
        out[1] = v;
}

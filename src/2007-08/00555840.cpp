// from server: 100% by colin
// roc 2007-08 00555840  unit: RBX::UnifiedWidget  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555840
//
// 00555840  d9ee                 fldz 
// 00555842  8b442404             mov eax, dword ptr [esp + 4]
// 00555846  d918                 fstp dword ptr [eax]
// 00555848  d90568837a00         fld dword ptr [0x7a8368]
// 0055584e  d95804               fstp dword ptr [eax + 4]
// 00555851  c20400               ret 4

struct S {
    void f(float* out);
};

extern float g_val;

void S::f(float* out)
{
    out[0] = 0.0f;
    out[1] = g_val;
}

// from server: 80% by colin
// roc 2007-08 005554b0  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005554b0
//
// 005554b0  b801000000           mov eax, 1
// 005554b5  8405281e8c00         test byte ptr [0x8c1e28], al
// 005554bb  7526                 jne 0x5554e3
// 005554bd  d90540837a00         fld dword ptr [0x7a8340]
// 005554c3  0905281e8c00         or dword ptr [0x8c1e28], eax
// 005554c9  d915181e8c00         fst dword ptr [0x8c1e18]
// 005554cf  d9151c1e8c00         fst dword ptr [0x8c1e1c]
// 005554d5  d91d201e8c00         fstp dword ptr [0x8c1e20]
// 005554db  d9e8                 fld1 
// 005554dd  d91d241e8c00         fstp dword ptr [0x8c1e24]
// 005554e3  b8181e8c00           mov eax, 0x8c1e18
// 005554e8  c3                   ret 

struct BoundFuncDesc
{
    static float* getRelativePanel();
};

float* BoundFuncDesc::getRelativePanel()
{
    static int initialized = 0;
    static float values[4];

    if (!(initialized & 1))
    {
        float v = *(float*)0x7a8340;
        initialized |= 1;
        values[0] = v;
        values[1] = v;
        values[2] = v;
        values[3] = 1.0f;
    }

    return values;
}

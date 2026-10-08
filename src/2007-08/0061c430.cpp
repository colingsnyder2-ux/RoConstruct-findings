// from server: 100% by colin
// roc 2007-08 0061c430  unit: RBX::ImageButton  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c430
//
// 0061c430  b801000000           mov eax, 1
// 0061c435  8405a8828c00         test byte ptr [0x8c82a8], al
// 0061c43b  7526                 jne 0x61c463
// 0061c43d  d9e8                 fld1 
// 0061c43f  0905a8828c00         or dword ptr [0x8c82a8], eax
// 0061c445  d91d9c828c00         fstp dword ptr [0x8c829c]
// 0061c44b  d905b0427c00         fld dword ptr [0x7c42b0]
// 0061c451  d91da0828c00         fstp dword ptr [0x8c82a0]
// 0061c457  d905ac427c00         fld dword ptr [0x7c42ac]
// 0061c45d  d91da4828c00         fstp dword ptr [0x8c82a4]
// 0061c463  b89c828c00           mov eax, 0x8c829c
// 0061c468  c3                   ret 

struct RBX_ImageButton_StaticData
{
    static float* get();
};

float* RBX_ImageButton_StaticData::get()
{
    static unsigned int initFlag = 0;
    static float value0;
    static float value1;
    static float value2;

    if ((initFlag & 1) == 0)
    {
        initFlag |= 1;
        value0 = 1.0f;
        value1 = *(float*)0x7c42b0;
        value2 = *(float*)0x7c42ac;
    }

    return &value0;
}

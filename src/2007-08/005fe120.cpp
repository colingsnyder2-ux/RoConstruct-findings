// from server: 59% by colin
// roc 2007-08 005fe120  unit: RBX::GameTool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe120
//
// 005fe120  b801000000           mov eax, 1
// 005fe125  8405c47f8c00         test byte ptr [0x8c7fc4], al
// 005fe12b  7520                 jne 0x5fe14d
// 005fe12d  d9e8                 fld1 
// 005fe12f  0905c47f8c00         or dword ptr [0x8c7fc4], eax
// 005fe135  d915b87f8c00         fst dword ptr [0x8c7fb8]
// 005fe13b  d905b4a87a00         fld dword ptr [0x7aa8b4]
// 005fe141  d91dbc7f8c00         fstp dword ptr [0x8c7fbc]
// 005fe147  d91dc07f8c00         fstp dword ptr [0x8c7fc0]
// 005fe14d  b8b87f8c00           mov eax, 0x8c7fb8
// 005fe152  c3                   ret 

struct GameTool {
    static float* getSomething();
};

float* GameTool::getSomething()
{
    if (!(*(unsigned char*)0x8c7fc4 & 1)) {
        *(unsigned int*)0x8c7fc4 |= 1;
        *(float*)0x8c7fb8 = 1.0f;
        *(float*)0x8c7fbc = *(float*)0x7aa8b4;
        *(float*)0x8c7fc0 = 0.0f;
    }
    return (float*)0x8c7fb8;
}

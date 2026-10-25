// from server: 100% by tester
// roc 2008-06 0064f7f0  unit: RBX::ImageKeyButton  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f7f0
//
// 0064f7f0  b801000000           mov eax, 1
// 0064f7f5  840534d99700         test byte ptr [0x97d934], al
// 0064f7fb  7526                 jne 0x64f823
// 0064f7fd  d9e8                 fld1 
// 0064f7ff  090534d99700         or dword ptr [0x97d934], eax
// 0064f805  d91d28d99700         fstp dword ptr [0x97d928]
// 0064f80b  d905e0ba8400         fld dword ptr [0x84bae0]
// 0064f811  d91d2cd99700         fstp dword ptr [0x97d92c]
// 0064f817  d905dcba8400         fld dword ptr [0x84badc]
// 0064f81d  d91d30d99700         fstp dword ptr [0x97d930]
// 0064f823  b828d99700           mov eax, 0x97d928
// 0064f828  c3                   ret 

struct RBX_ImageButton_Statics {
    static float* getDefaults();
};

float* RBX_ImageButton_Statics::getDefaults()
{
    static unsigned int initialized = 0;
    static float values[3];
    if (!(initialized & 1)) {
        initialized |= 1;
        values[0] = 1.0f;
        values[1] = *(float*)0x7c4298;
        values[2] = *(float*)0x7ab980;
    }
    return values;
}

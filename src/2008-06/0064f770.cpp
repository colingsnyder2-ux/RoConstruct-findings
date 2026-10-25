// from server: 100% by tester
// roc 2008-06 0064f770  unit: RBX::ImageKeyButton  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f770
//
// 0064f770  b801000000           mov eax, 1
// 0064f775  840504d99700         test byte ptr [0x97d904], al
// 0064f77b  7526                 jne 0x64f7a3
// 0064f77d  d9e8                 fld1 
// 0064f77f  090504d99700         or dword ptr [0x97d904], eax
// 0064f785  d91df8d89700         fstp dword ptr [0x97d8f8]
// 0064f78b  d905c8ba8400         fld dword ptr [0x84bac8]
// 0064f791  d91dfcd89700         fstp dword ptr [0x97d8fc]
// 0064f797  d905f8498200         fld dword ptr [0x8249f8]
// 0064f79d  d91d00d99700         fstp dword ptr [0x97d900]
// 0064f7a3  b8f8d89700           mov eax, 0x97d8f8
// 0064f7a8  c3                   ret 

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

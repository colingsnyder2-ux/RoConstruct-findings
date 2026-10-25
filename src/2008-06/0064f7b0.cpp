// from server: 100% by tester
// roc 2008-06 0064f7b0  unit: RBX::ImageKeyButton  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f7b0
//
// 0064f7b0  b801000000           mov eax, 1
// 0064f7b5  840514d99700         test byte ptr [0x97d914], al
// 0064f7bb  7526                 jne 0x64f7e3
// 0064f7bd  d9e8                 fld1 
// 0064f7bf  090514d99700         or dword ptr [0x97d914], eax
// 0064f7c5  d91d08d99700         fstp dword ptr [0x97d908]
// 0064f7cb  d905ccba8400         fld dword ptr [0x84bacc]
// 0064f7d1  d91d0cd99700         fstp dword ptr [0x97d90c]
// 0064f7d7  d905f8498200         fld dword ptr [0x8249f8]
// 0064f7dd  d91d10d99700         fstp dword ptr [0x97d910]
// 0064f7e3  b808d99700           mov eax, 0x97d908
// 0064f7e8  c3                   ret 

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

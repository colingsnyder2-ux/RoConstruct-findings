// from server: 100% by colin
// roc 2007-08 0061c3f0  unit: RBX::ImageButton  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c3f0
//
// 0061c3f0  b801000000           mov eax, 1
// 0061c3f5  840588828c00         test byte ptr [0x8c8288], al
// 0061c3fb  7526                 jne 0x61c423
// 0061c3fd  d9e8                 fld1 
// 0061c3ff  090588828c00         or dword ptr [0x8c8288], eax
// 0061c405  d91d7c828c00         fstp dword ptr [0x8c827c]
// 0061c40b  d9059c427c00         fld dword ptr [0x7c429c]
// 0061c411  d91d80828c00         fstp dword ptr [0x8c8280]
// 0061c417  d90580b97a00         fld dword ptr [0x7ab980]
// 0061c41d  d91d84828c00         fstp dword ptr [0x8c8284]
// 0061c423  b87c828c00           mov eax, 0x8c827c
// 0061c428  c3                   ret 

struct RBX_ImageButton_Statics {
    static float* getDefaults();
};

float* RBX_ImageButton_Statics::getDefaults()
{
    static unsigned int initialized = 0;
    static float values[3];

    if ((initialized & 1) == 0) {
        initialized |= 1;
        values[0] = 1.0f;
        values[1] = *(float*)0x7c429c;
        values[2] = *(float*)0x7ab980;
    }

    return values;
}

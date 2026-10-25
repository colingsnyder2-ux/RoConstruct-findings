// from server: 100% by tester
// roc 2008-06 0064f730  unit: RBX::ImageKeyButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f730
//
// 0064f730  b801000000           mov eax, 1
// 0064f735  8405f4d89700         test byte ptr [0x97d8f4], al
// 0064f73b  752a                 jne 0x64f767
// 0064f73d  d90514d28300         fld dword ptr [0x83d214]
// 0064f743  0905f4d89700         or dword ptr [0x97d8f4], eax
// 0064f749  d91de8d89700         fstp dword ptr [0x97d8e8]
// 0064f74f  d905c4ba8400         fld dword ptr [0x84bac4]
// 0064f755  d91decd89700         fstp dword ptr [0x97d8ec]
// 0064f75b  d905c0ba8400         fld dword ptr [0x84bac0]
// 0064f761  d91df0d89700         fstp dword ptr [0x97d8f0]
// 0064f767  b8e8d89700           mov eax, 0x97d8e8
// 0064f76c  c3                   ret 

struct RBX_ImageButton {
    static float* getColors();
};

float* RBX_ImageButton::getColors()
{
    static int initialized = 0;
    static float colors[3];
    if (!(initialized & 1))
    {
        initialized |= 1;
        colors[0] = *(float*)0x7c4280;
        colors[1] = *(float*)0x7c427c;
        colors[2] = *(float*)0x7c4278;
    }
    return colors;
}

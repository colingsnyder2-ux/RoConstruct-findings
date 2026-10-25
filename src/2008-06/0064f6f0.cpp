// from server: 100% by tester
// roc 2008-06 0064f6f0  unit: RBX::ImageKeyButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f6f0
//
// 0064f6f0  b801000000           mov eax, 1
// 0064f6f5  8405e4d89700         test byte ptr [0x97d8e4], al
// 0064f6fb  752a                 jne 0x64f727
// 0064f6fd  d905bcba8400         fld dword ptr [0x84babc]
// 0064f703  0905e4d89700         or dword ptr [0x97d8e4], eax
// 0064f709  d91dd8d89700         fstp dword ptr [0x97d8d8]
// 0064f70f  d905b8ba8400         fld dword ptr [0x84bab8]
// 0064f715  d91ddcd89700         fstp dword ptr [0x97d8dc]
// 0064f71b  d905b4ba8400         fld dword ptr [0x84bab4]
// 0064f721  d91de0d89700         fstp dword ptr [0x97d8e0]
// 0064f727  b8d8d89700           mov eax, 0x97d8d8
// 0064f72c  c3                   ret 

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

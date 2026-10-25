// from server: 100% by tester
// roc 2008-06 0064f6b0  unit: RBX::ImageKeyButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f6b0
//
// 0064f6b0  b801000000           mov eax, 1
// 0064f6b5  8405d4d89700         test byte ptr [0x97d8d4], al
// 0064f6bb  752a                 jne 0x64f6e7
// 0064f6bd  d905b0ba8400         fld dword ptr [0x84bab0]
// 0064f6c3  0905d4d89700         or dword ptr [0x97d8d4], eax
// 0064f6c9  d91dc8d89700         fstp dword ptr [0x97d8c8]
// 0064f6cf  d905acba8400         fld dword ptr [0x84baac]
// 0064f6d5  d91dccd89700         fstp dword ptr [0x97d8cc]
// 0064f6db  d905a8ba8400         fld dword ptr [0x84baa8]
// 0064f6e1  d91dd0d89700         fstp dword ptr [0x97d8d0]
// 0064f6e7  b8c8d89700           mov eax, 0x97d8c8
// 0064f6ec  c3                   ret 

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

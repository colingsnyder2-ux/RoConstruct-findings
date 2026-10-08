// from server: 100% by colin
// roc 2007-08 0061c2f0  unit: RBX::ImageButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c2f0
//
// 0061c2f0  b801000000           mov eax, 1
// 0061c2f5  840548828c00         test byte ptr [0x8c8248], al
// 0061c2fb  752a                 jne 0x61c327
// 0061c2fd  d90580427c00         fld dword ptr [0x7c4280]
// 0061c303  090548828c00         or dword ptr [0x8c8248], eax
// 0061c309  d91d3c828c00         fstp dword ptr [0x8c823c]
// 0061c30f  d9057c427c00         fld dword ptr [0x7c427c]
// 0061c315  d91d40828c00         fstp dword ptr [0x8c8240]
// 0061c31b  d90578427c00         fld dword ptr [0x7c4278]
// 0061c321  d91d44828c00         fstp dword ptr [0x8c8244]
// 0061c327  b83c828c00           mov eax, 0x8c823c
// 0061c32c  c3                   ret 

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

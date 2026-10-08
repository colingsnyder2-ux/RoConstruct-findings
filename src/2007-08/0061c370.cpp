// from server: 100% by colin
// roc 2007-08 0061c370  unit: RBX::ImageButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c370
//
// 0061c370  b801000000           mov eax, 1
// 0061c375  840568828c00         test byte ptr [0x8c8268], al
// 0061c37b  752a                 jne 0x61c3a7
// 0061c37d  d90554527b00         fld dword ptr [0x7b5254]
// 0061c383  090568828c00         or dword ptr [0x8c8268], eax
// 0061c389  d91d5c828c00         fstp dword ptr [0x8c825c]
// 0061c38f  d90594427c00         fld dword ptr [0x7c4294]
// 0061c395  d91d60828c00         fstp dword ptr [0x8c8260]
// 0061c39b  d90590427c00         fld dword ptr [0x7c4290]
// 0061c3a1  d91d64828c00         fstp dword ptr [0x8c8264]
// 0061c3a7  b85c828c00           mov eax, 0x8c825c
// 0061c3ac  c3                   ret 

struct RBX_ImageButton {
    static float* getColors();
};

float* RBX_ImageButton::getColors()
{
    static unsigned int initialized = 0;
    static float colors[3];
    if (!(initialized & 1)) {
        initialized |= 1;
        colors[0] = *(float*)0x7b5254;
        colors[1] = *(float*)0x7c4294;
        colors[2] = *(float*)0x7c4290;
    }
    return colors;
}

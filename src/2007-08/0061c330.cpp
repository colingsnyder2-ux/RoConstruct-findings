// from server: 100% by colin
// roc 2007-08 0061c330  unit: RBX::ImageButton  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c330
//
// 0061c330  b801000000           mov eax, 1
// 0061c335  840558828c00         test byte ptr [0x8c8258], al
// 0061c33b  752a                 jne 0x61c367
// 0061c33d  d9058c427c00         fld dword ptr [0x7c428c]
// 0061c343  090558828c00         or dword ptr [0x8c8258], eax
// 0061c349  d91d4c828c00         fstp dword ptr [0x8c824c]
// 0061c34f  d90588427c00         fld dword ptr [0x7c4288]
// 0061c355  d91d50828c00         fstp dword ptr [0x8c8250]
// 0061c35b  d90584427c00         fld dword ptr [0x7c4284]
// 0061c361  d91d54828c00         fstp dword ptr [0x8c8254]
// 0061c367  b84c828c00           mov eax, 0x8c824c
// 0061c36c  c3                   ret 

struct S {
    static float* f();
};

float* S::f() {
    static int init = 0;
    static float values[3];
    if (!(init & 1)) {
        init |= 1;
        values[0] = *(float*)0x7c428c;
        values[1] = *(float*)0x7c4288;
        values[2] = *(float*)0x7c4284;
    }
    return values;
}

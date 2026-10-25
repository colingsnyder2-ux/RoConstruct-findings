// from server: 100% by tester
// roc 2008-06 00640470  unit: RBX::GameTool  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640470
//
// 00640470  b801000000           mov eax, 1
// 00640475  8405c4d59700         test byte ptr [0x97d5c4], al
// 0064047b  7520                 jne 0x64049d
// 0064047d  d9e8                 fld1 
// 0064047f  0905c4d59700         or dword ptr [0x97d5c4], eax
// 00640485  d915b8d59700         fst dword ptr [0x97d5b8]
// 0064048b  d905182a8300         fld dword ptr [0x832a18]
// 00640491  d91dbcd59700         fstp dword ptr [0x97d5bc]
// 00640497  d91dc0d59700         fstp dword ptr [0x97d5c0]
// 0064049d  b8b8d59700           mov eax, 0x97d5b8
// 006404a2  c3                   ret 

struct S_func_005fe120 {
    float* f();
};

float* S_func_005fe120::f()
{
    static unsigned int init = 0;
    static float a;
    static float b;
    static float c;
    if (!(init & 1)) {
        init |= 1;
        a = 1.0f;
        b = *(float*)0x7aa8b4;
        c = a;
    }
    return &a;
}

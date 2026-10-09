// from server: 55% by colin
// roc 2007-08 0059c770  unit: RBX::UserInputBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c770
//
// 0059c770  d94108               fld dword ptr [ecx + 8]
// 0059c773  8b442404             mov eax, dword ptr [esp + 4]
// 0059c777  d801                 fadd dword ptr [ecx]
// 0059c779  8b542408             mov edx, dword ptr [esp + 8]
// 0059c77d  83ea02               sub edx, 2
// 0059c780  d9410c               fld dword ptr [ecx + 0xc]
// 0059c783  d84104               fadd dword ptr [ecx + 4]
// 0059c786  d9059c7e7900         fld dword ptr [0x797e9c]
// 0059c78c  dcca                 fmul st(2), st(0)
// 0059c78e  d9ca                 fxch st(2)
// 0059c790  d918                 fstp dword ptr [eax]
// 0059c792  dec9                 fmulp st(1)
// 0059c794  d95804               fstp dword ptr [eax + 4]
// 0059c797  740a                 je 0x59c7a3
// 0059c799  83ea01               sub edx, 1
// 0059c79c  7509                 jne 0x59c7a7
// 0059c79e  d94108               fld dword ptr [ecx + 8]
// 0059c7a1  eb02                 jmp 0x59c7a5
// 0059c7a3  d901                 fld dword ptr [ecx]
// 0059c7a5  d918                 fstp dword ptr [eax]
// 0059c7a7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059c7ab  83ea00               sub edx, 0
// 0059c7ae  7414                 je 0x59c7c4
// 0059c7b0  83ea01               sub edx, 1
// 0059c7b3  7406                 je 0x59c7bb
// 0059c7b5  83ea03               sub edx, 3
// 0059c7b8  c20c00               ret 0xc
// 0059c7bb  d9410c               fld dword ptr [ecx + 0xc]
// 0059c7be  d95804               fstp dword ptr [eax + 4]
// 0059c7c1  c20c00               ret 0xc
// 0059c7c4  d94104               fld dword ptr [ecx + 4]
// 0059c7c7  d95804               fstp dword ptr [eax + 4]
// 0059c7ca  c20c00               ret 0xc

struct UserInputBase {
    float x;
    float y;
    float dx;
    float dy;
    void getMoveVector(float* out, int axisX, int axisY, int axisZ);
};

extern float g_scale;

void UserInputBase::getMoveVector(float* out, int axisX, int axisY, int axisZ)
{
    out[0] = (dx + x) * g_scale;
    out[1] = (dy + y) * g_scale;

    if (axisX == 2) {
        out[0] = x;
    } else if (axisX == 3) {
        out[0] = dx;
    }

    if (axisY == 0) {
        out[1] = y;
    } else if (axisY == 1) {
        out[1] = dy;
    }
}

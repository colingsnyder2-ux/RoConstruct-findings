// from server: 54% by colin
// roc 2007-08 004800f0  unit: G3D::Win32Window  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004800f0
//
// 004800f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004800f4  8d4424c0             lea eax, [esp - 0x40]
// 004800f8  83ec40               sub esp, 0x40
// 004800fb  8d5124               lea edx, [ecx + 0x24]
// 004800fe  50                   push eax
// 004800ff  e88cffffff           call 0x480090
// 00480104  83c404               add esp, 4
// 00480107  8d0c24               lea ecx, [esp]
// 0048010a  51                   push ecx
// 0048010b  ff158cea7700         call dword ptr [0x77ea8c]
// 00480111  83c440               add esp, 0x40
// 00480114  c3                   ret 

struct G3D_Win32Window {
    void getMatrix(float* out);
    void loadMatrix();
};

extern "C" void __stdcall glLoadMatrixf(const float* m);

void G3D_Win32Window::loadMatrix()
{
    float m[16];
    getMatrix(m);
    glLoadMatrixf(m);
}

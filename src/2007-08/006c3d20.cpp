// from server: 42% by colin
// roc 2007-08 006c3d20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c3d20
//
// 006c3d20  8b542408             mov edx, dword ptr [esp + 8]
// 006c3d24  6a10                 push 0x10
// 006c3d26  6a10                 push 0x10
// 006c3d28  83ec10               sub esp, 0x10
// 006c3d2b  8bc4                 mov eax, esp
// 006c3d2d  8910                 mov dword ptr [eax], edx
// 006c3d2f  8b542424             mov edx, dword ptr [esp + 0x24]
// 006c3d33  895004               mov dword ptr [eax + 4], edx
// 006c3d36  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c3d3a  895008               mov dword ptr [eax + 8], edx
// 006c3d3d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c3d41  89500c               mov dword ptr [eax + 0xc], edx
// 006c3d44  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c3d48  50                   push eax
// 006c3d49  e82292f7ff           call 0x63cf70
// 006c3d4e  c21800               ret 0x18

struct XTPPaintThemes_CXTPOfficeTheme {
    void f(int, int, int, int, int, int);
};

extern "C" void __stdcall sub_63cf70(int, int, int, int, int, int, int);

void XTPPaintThemes_CXTPOfficeTheme::f(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int buf[4];
    buf[0] = a1;
    buf[1] = a2;
    buf[2] = a3;
    buf[3] = a4;
    sub_63cf70(a5, a6, buf[0], buf[1], buf[2], buf[3], 0x10);
}

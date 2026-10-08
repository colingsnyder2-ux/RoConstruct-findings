// from server: 42% by colin
// roc 2007-08 004804b0  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004804b0
//
// 004804b0  83ec24               sub esp, 0x24
// 004804b3  a188518b00           mov eax, dword ptr [0x8b5188]
// 004804b8  33c4                 xor eax, esp
// 004804ba  89442420             mov dword ptr [esp + 0x20], eax
// 004804be  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004804c2  8d0424               lea eax, [esp]
// 004804c5  50                   push eax
// 004804c6  51                   push ecx
// 004804c7  ff155cea7700         call dword ptr [0x77ea5c]
// 004804cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004804d1  8a0424               mov al, byte ptr [esp]
// 004804d4  33cc                 xor ecx, esp
// 004804d6  e843051b00           call 0x630a1e
// 004804db  83c424               add esp, 0x24
// 004804de  c3                   ret 

extern "C" __declspec(dllimport) void __stdcall glGetBooleanv(unsigned int pname, unsigned char *params);
extern "C" void __cdecl __security_check_cookie(unsigned int cookie);
extern unsigned int __security_cookie;

struct G3D_Win32Window
{
    bool getBool(unsigned int pname);
};

bool G3D_Win32Window::getBool(unsigned int pname)
{
    unsigned char result;
    glGetBooleanv(pname, &result);
    return result != 0;
}

// from server: 75% by colin
// roc 2007-08 00671ab0  unit: CPropertyGridItemBrickColor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671ab0
//
// 00671ab0  8b542408             mov edx, dword ptr [esp + 8]
// 00671ab4  83ec38               sub esp, 0x38
// 00671ab7  56                   push esi
// 00671ab8  8d442414             lea eax, [esp + 0x14]
// 00671abc  50                   push eax
// 00671abd  52                   push edx
// 00671abe  e84df7ffff           call 0x671210
// 00671ac3  85c0                 test eax, eax
// 00671ac5  7419                 je 0x671ae0
// 00671ac7  8b742440             mov esi, dword ptr [esp + 0x40]
// 00671acb  8d442428             lea eax, [esp + 0x28]
// 00671acf  50                   push eax
// 00671ad0  56                   push esi
// 00671ad1  ff15e0ed7700         call dword ptr [0x77ede0]
// 00671ad7  8bc6                 mov eax, esi
// 00671ad9  5e                   pop esi
// 00671ada  83c438               add esp, 0x38
// 00671add  c20800               ret 8
// 00671ae0  6a00                 push 0
// 00671ae2  8d4c2408             lea ecx, [esp + 8]
// 00671ae6  51                   push ecx
// 00671ae7  6a00                 push 0
// 00671ae9  6a30                 push 0x30
// 00671aeb  ff150cee7700         call dword ptr [0x77ee0c]
// 00671af1  8b742440             mov esi, dword ptr [esp + 0x40]
// 00671af5  8d542404             lea edx, [esp + 4]
// 00671af9  52                   push edx
// 00671afa  56                   push esi
// 00671afb  ff15e0ed7700         call dword ptr [0x77ede0]
// 00671b01  8bc6                 mov eax, esi
// 00671b03  5e                   pop esi
// 00671b04  83c438               add esp, 0x38
// 00671b07  c20800               ret 8

struct RECT {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall CopyRect(RECT* dest, const RECT* src);
extern "C" int __stdcall SystemParametersInfoA(unsigned int action, unsigned int param, void* data, unsigned int winIni);

struct CPropertyGridItemBrickColor {
    RECT* getRect(RECT* out, const RECT* in);
    RECT* getRect2(RECT* out, const RECT* in);
};

int __stdcall func_00671210(const RECT* src, RECT* dst);

RECT* CPropertyGridItemBrickColor::getRect(RECT* out, const RECT* in)
{
    RECT local;
    if (func_00671210(in, &local)) {
        CopyRect(out, &local);
        return out;
    }
    SystemParametersInfoA(0x30, 0, &local, 0);
    CopyRect(out, &local);
    return out;
}

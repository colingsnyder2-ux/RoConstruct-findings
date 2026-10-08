// from server: 100% by colin
// roc 2007-08 006bedc0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bedc0
//
// 006bedc0  56                   push esi
// 006bedc1  8b742408             mov esi, dword ptr [esp + 8]
// 006bedc5  56                   push esi
// 006bedc6  e845e9f7ff           call 0x63d710
// 006bedcb  85c0                 test eax, eax
// 006bedcd  7512                 jne 0x6bede1
// 006bedcf  f686e80000000f       test byte ptr [esi + 0xe8], 0xf
// 006bedd6  7409                 je 0x6bede1
// 006bedd8  b801000000           mov eax, 1
// 006beddd  5e                   pop esi
// 006bedde  c20400               ret 4
// 006bede1  33c0                 xor eax, eax
// 006bede3  5e                   pop esi
// 006bede4  c20400               ret 4

struct XTPPaintThemes_CXTPOffice2003Theme
{
    int IsThemeActive(void* p);
};

extern "C" int __stdcall sub_63d710(void* p);

int XTPPaintThemes_CXTPOffice2003Theme::IsThemeActive(void* p)
{
    if (sub_63d710(p) == 0)
    {
        if ((*(unsigned char*)((char*)p + 0xe8) & 0xf) != 0)
            return 1;
    }
    return 0;
}

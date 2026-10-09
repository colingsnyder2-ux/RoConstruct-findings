// from server: 58% by colin
// roc 2007-08 006bf060  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bf060
//
// 006bf060  83ec10               sub esp, 0x10
// 006bf063  837c242800           cmp dword ptr [esp + 0x28], 0
// 006bf068  7408                 je 0x6bf072
// 006bf06a  81c1bc040000         add ecx, 0x4bc
// 006bf070  eb06                 jmp 0x6bf078
// 006bf072  81c15c040000         add ecx, 0x45c
// 006bf078  8b442418             mov eax, dword ptr [esp + 0x18]
// 006bf07c  8b542420             mov edx, dword ptr [esp + 0x20]
// 006bf080  890424               mov dword ptr [esp], eax
// 006bf083  03c2                 add eax, edx
// 006bf085  8b542424             mov edx, dword ptr [esp + 0x24]
// 006bf089  89442408             mov dword ptr [esp + 8], eax
// 006bf08d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006bf091  6a00                 push 0
// 006bf093  89442408             mov dword ptr [esp + 8], eax
// 006bf097  03c2                 add eax, edx
// 006bf099  6a01                 push 1
// 006bf09b  51                   push ecx
// 006bf09c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006bf0a0  89442418             mov dword ptr [esp + 0x18], eax
// 006bf0a4  8d44240c             lea eax, [esp + 0xc]
// 006bf0a8  50                   push eax
// 006bf0a9  51                   push ecx
// 006bf0aa  e89131fcff           call 0x682240
// 006bf0af  8bc8                 mov ecx, eax
// 006bf0b1  e8aa34fcff           call 0x682560
// 006bf0b6  83c410               add esp, 0x10
// 006bf0b9  c21800               ret 0x18

struct CXTPOffice2003Theme {
    void DrawFrame(int, int, int, int, int, int);
};

extern "C" int __stdcall sub_682240(int, int, int, int, int, int);
extern "C" void __stdcall sub_682560(int);

void CXTPOffice2003Theme::DrawFrame(int a1, int a2, int a3, int a4, int a5, int a6)
{
    char* base;
    if (a6 != 0) {
        base = (char*)this + 0x4bc;
    } else {
        base = (char*)this + 0x45c;
    }
    int r[4];
    r[0] = a1;
    r[1] = a2;
    r[2] = a1 + a3;
    r[3] = a2 + a4;
    int v = sub_682240((int)base, a5, (int)r, 1, 0, 0);
    sub_682560(v);
}

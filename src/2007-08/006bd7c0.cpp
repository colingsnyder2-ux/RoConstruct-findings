// from server: 72% by colin
// roc 2007-08 006bd7c0  unit: CXTPOffice2007Theme  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bd7c0
//
// 006bd7c0  837c241800           cmp dword ptr [esp + 0x18], 0
// 006bd7c5  7545                 jne 0x6bd80c
// 006bd7c7  53                   push ebx
// 006bd7c8  55                   push ebp
// 006bd7c9  56                   push esi
// 006bd7ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 006bd7ce  57                   push edi
// 006bd7cf  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006bd7d3  2bfe                 sub edi, esi
// 006bd7d5  6a27                 push 0x27
// 006bd7d7  83c7fe               add edi, -2
// 006bd7da  e891f5f7ff           call 0x63cd70
// 006bd7df  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006bd7e3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006bd7e7  50                   push eax
// 006bd7e8  57                   push edi
// 006bd7e9  6a01                 push 1
// 006bd7eb  56                   push esi
// 006bd7ec  8d43ff               lea eax, [ebx - 1]
// 006bd7ef  50                   push eax
// 006bd7f0  8bcd                 mov ecx, ebp
// 006bd7f2  e8d3ab0700           call 0x7383ca
// 006bd7f7  68ffffff00           push 0xffffff
// 006bd7fc  57                   push edi
// 006bd7fd  6a01                 push 1
// 006bd7ff  56                   push esi
// 006bd800  53                   push ebx
// 006bd801  8bcd                 mov ecx, ebp
// 006bd803  e8c2ab0700           call 0x7383ca
// 006bd808  5f                   pop edi
// 006bd809  5e                   pop esi
// 006bd80a  5d                   pop ebp
// 006bd80b  5b                   pop ebx
// 006bd80c  c21800               ret 0x18

struct CXTPOffice2007Theme
{
    void Draw3dRect(int x, int y, int cx, int cy, unsigned int clrTopLeft, unsigned int clrBottomRight);
};

extern "C" unsigned int __stdcall sub_63cd70(int);
extern "C" void __stdcall sub_7383ca(CXTPOffice2007Theme*, int, int, int, int, unsigned int);

void CXTPOffice2007Theme::Draw3dRect(int x, int y, int cx, int cy, unsigned int clrTopLeft, unsigned int clrBottomRight)
{
    if (clrBottomRight != 0)
        return;

    int w = cx - x - 2;
    unsigned int c = sub_63cd70(0x27);
    sub_7383ca(this, cy - 1, x, 1, w, c);
    sub_7383ca(this, cy, x, 1, w, 0xffffff);
}

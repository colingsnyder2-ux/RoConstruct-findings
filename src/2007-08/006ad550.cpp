// from server: 84% by colin
// roc 2007-08 006ad550  unit: CXTPRibbonTheme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad550
//
// 006ad550  8b442408             mov eax, dword ptr [esp + 8]
// 006ad554  53                   push ebx
// 006ad555  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006ad559  55                   push ebp
// 006ad55a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ad55e  56                   push esi
// 006ad55f  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ad563  57                   push edi
// 006ad564  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006ad568  68e9eeee00           push 0xeeeee9
// 006ad56d  56                   push esi
// 006ad56e  55                   push ebp
// 006ad56f  57                   push edi
// 006ad570  50                   push eax
// 006ad571  8bcb                 mov ecx, ebx
// 006ad573  e852ae0800           call 0x7383ca
// 006ad578  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ad57c  68c5c5c500           push 0xc5c5c5
// 006ad581  56                   push esi
// 006ad582  03e9                 add ebp, ecx
// 006ad584  6a01                 push 1
// 006ad586  57                   push edi
// 006ad587  8d55ff               lea edx, [ebp - 1]
// 006ad58a  52                   push edx
// 006ad58b  8bcb                 mov ecx, ebx
// 006ad58d  e838ae0800           call 0x7383ca
// 006ad592  68f5f5f500           push 0xf5f5f5
// 006ad597  56                   push esi
// 006ad598  6a01                 push 1
// 006ad59a  57                   push edi
// 006ad59b  55                   push ebp
// 006ad59c  8bcb                 mov ecx, ebx
// 006ad59e  e827ae0800           call 0x7383ca
// 006ad5a3  5f                   pop edi
// 006ad5a4  5e                   pop esi
// 006ad5a5  5d                   pop ebp
// 006ad5a6  5b                   pop ebx
// 006ad5a7  c21800               ret 0x18

struct CXTPRibbonTheme
{
    void Draw3dRect(int x, int y, int cx, int cy, unsigned int clrTopLeft, unsigned int clrBottomRight);
};

extern "C" void __stdcall sub_7383ca(int, int, int, int, int, int);

void CXTPRibbonTheme::Draw3dRect(int x, int y, int cx, int cy, unsigned int clrTopLeft, unsigned int clrBottomRight)
{
    sub_7383ca(x, y, cx, cy, 0xeeeee9, clrBottomRight);
    sub_7383ca(x, y + cy - 1, cx, 1, 0xc5c5c5, clrBottomRight);
    sub_7383ca(x, y + cy, cx, 1, 0xf5f5f5, clrBottomRight);
}

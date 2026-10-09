// from server: 64% by colin
// roc 2007-08 006cb9d0  unit: CXTPReportPaintManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb9d0
//
// 006cb9d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cb9d4  53                   push ebx
// 006cb9d5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006cb9d9  55                   push ebp
// 006cb9da  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006cb9de  56                   push esi
// 006cb9df  57                   push edi
// 006cb9e0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006cb9e4  8bf1                 mov esi, ecx
// 006cb9e6  6a00                 push 0
// 006cb9e8  8bcb                 mov ecx, ebx
// 006cb9ea  2bc8                 sub ecx, eax
// 006cb9ec  51                   push ecx
// 006cb9ed  50                   push eax
// 006cb9ee  57                   push edi
// 006cb9ef  55                   push ebp
// 006cb9f0  8bce                 mov ecx, esi
// 006cb9f2  e819ffffff           call 0x6cb910
// 006cb9f7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006cb9fb  6a00                 push 0
// 006cb9fd  2bd7                 sub edx, edi
// 006cb9ff  52                   push edx
// 006cba00  53                   push ebx
// 006cba01  57                   push edi
// 006cba02  55                   push ebp
// 006cba03  8bce                 mov ecx, esi
// 006cba05  e8d6feffff           call 0x6cb8e0
// 006cba0a  5f                   pop edi
// 006cba0b  5e                   pop esi
// 006cba0c  5d                   pop ebp
// 006cba0d  5b                   pop ebx
// 006cba0e  c21400               ret 0x14

struct CXTPReportPaintManager
{
    void DrawGridLine(int, int, int, int, int, int);
    void DrawGridLine2(int, int, int, int, int, int);
    void DrawGridLines(int, int, int, int, int, int, int, int);
};

void CXTPReportPaintManager::DrawGridLines(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int v8 = a8;
    int v9 = a7;
    int v10 = a6;
    int v11 = a5;
    int v12 = a4;
    int v13 = a3;
    int v14 = a2;
    int v15 = a1;

    DrawGridLine(v15, v14, v13, v12, v11, 0);
    DrawGridLine2(v15, v14, v13, v12, v10, 0);
}

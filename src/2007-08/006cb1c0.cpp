// from server: 100% by auto
// roc 2007-08 006cb1c0  unit: CXTPDockContext  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb1c0
//
// 006cb1c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cb1c4  83ec08               sub esp, 8
// 006cb1c7  53                   push ebx
// 006cb1c8  55                   push ebp
// 006cb1c9  56                   push esi
// 006cb1ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 006cb1ce  57                   push edi
// 006cb1cf  50                   push eax
// 006cb1d0  8bce                 mov ecx, esi
// 006cb1d2  e831d90600           call 0x738b08
// 006cb1d7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006cb1db  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006cb1df  53                   push ebx
// 006cb1e0  55                   push ebp
// 006cb1e1  8d4c2418             lea ecx, [esp + 0x18]
// 006cb1e5  51                   push ecx
// 006cb1e6  8bce                 mov ecx, esi
// 006cb1e8  8bf8                 mov edi, eax
// 006cb1ea  e88d57f6ff           call 0x63097c
// 006cb1ef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006cb1f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 006cb1f7  03da                 add ebx, edx
// 006cb1f9  53                   push ebx
// 006cb1fa  03e8                 add ebp, eax
// 006cb1fc  55                   push ebp
// 006cb1fd  8bce                 mov ecx, esi
// 006cb1ff  e87257f6ff           call 0x630976
// 006cb204  57                   push edi
// 006cb205  8bce                 mov ecx, esi
// 006cb207  e8fcd80600           call 0x738b08
// 006cb20c  5f                   pop edi
// 006cb20d  5e                   pop esi
// 006cb20e  5d                   pop ebp
// 006cb20f  5b                   pop ebx
// 006cb210  83c408               add esp, 8
// 006cb213  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?Line@CXTPReportPaintManager@@QAEXPAVCDC@@HHHHPAVCPen@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp

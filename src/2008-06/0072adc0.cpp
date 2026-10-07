// roc 2008-06 0072adc0  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072adc0
//
// 0072adc0  83ec10               sub esp, 0x10
// 0072adc3  837c242800           cmp dword ptr [esp + 0x28], 0
// 0072adc8  7408                 je 0x72add2
// 0072adca  81c1dc040000         add ecx, 0x4dc
// 0072add0  eb06                 jmp 0x72add8
// 0072add2  81c184060000         add ecx, 0x684
// 0072add8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072addc  53                   push ebx
// 0072addd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0072ade1  55                   push ebp
// 0072ade2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0072ade6  56                   push esi
// 0072ade7  8b742428             mov esi, dword ptr [esp + 0x28]
// 0072adeb  57                   push edi
// 0072adec  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0072adf0  40                   inc eax
// 0072adf1  6a00                 push 0
// 0072adf3  89442414             mov dword ptr [esp + 0x14], eax
// 0072adf7  8d4428ff             lea eax, [eax + ebp - 1]
// 0072adfb  6a01                 push 1
// 0072adfd  89442420             mov dword ptr [esp + 0x20], eax
// 0072ae01  51                   push ecx
// 0072ae02  8d44241c             lea eax, [esp + 0x1c]
// 0072ae06  50                   push eax
// 0072ae07  8d143e               lea edx, [esi + edi]
// 0072ae0a  53                   push ebx
// 0072ae0b  89742428             mov dword ptr [esp + 0x28], esi
// 0072ae0f  89542430             mov dword ptr [esp + 0x30], edx
// 0072ae13  e8b8edfcff           call 0x6f9bd0
// 0072ae18  8bc8                 mov ecx, eax
// 0072ae1a  e8d1f0fcff           call 0x6f9ef0
// 0072ae1f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072ae23  68c5c5c500           push 0xc5c5c5
// 0072ae28  57                   push edi
// 0072ae29  03e9                 add ebp, ecx
// 0072ae2b  6a01                 push 1
// 0072ae2d  56                   push esi
// 0072ae2e  8d55ff               lea edx, [ebp - 1]
// 0072ae31  52                   push edx
// 0072ae32  8bcb                 mov ecx, ebx
// 0072ae34  e807120900           call 0x7bc040
// 0072ae39  68f5f5f500           push 0xf5f5f5
// 0072ae3e  57                   push edi
// 0072ae3f  6a01                 push 1
// 0072ae41  56                   push esi
// 0072ae42  55                   push ebp
// 0072ae43  8bcb                 mov ecx, ebx
// 0072ae45  e8f6110900           call 0x7bc040
// 0072ae4a  5f                   pop edi
// 0072ae4b  5e                   pop esi
// 0072ae4c  5d                   pop ebp
// 0072ae4d  5b                   pop ebx
// 0072ae4e  83c410               add esp, 0x10
// 0072ae51  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp

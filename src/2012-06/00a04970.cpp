// roc 2012-06 00a04970  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a04970
//
// 00a04970  83ec10               sub esp, 0x10
// 00a04973  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a04978  7408                 je 0xa04982
// 00a0497a  81c1dc040000         add ecx, 0x4dc
// 00a04980  eb06                 jmp 0xa04988
// 00a04982  81c184060000         add ecx, 0x684
// 00a04988  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a0498c  53                   push ebx
// 00a0498d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a04991  55                   push ebp
// 00a04992  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a04996  56                   push esi
// 00a04997  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a0499b  57                   push edi
// 00a0499c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a049a0  40                   inc eax
// 00a049a1  6a00                 push 0
// 00a049a3  89442414             mov dword ptr [esp + 0x14], eax
// 00a049a7  8d4428ff             lea eax, [eax + ebp - 1]
// 00a049ab  6a01                 push 1
// 00a049ad  89442420             mov dword ptr [esp + 0x20], eax
// 00a049b1  51                   push ecx
// 00a049b2  8d44241c             lea eax, [esp + 0x1c]
// 00a049b6  50                   push eax
// 00a049b7  8d143e               lea edx, [esi + edi]
// 00a049ba  53                   push ebx
// 00a049bb  89742428             mov dword ptr [esp + 0x28], esi
// 00a049bf  89542430             mov dword ptr [esp + 0x30], edx
// 00a049c3  e8c827fdff           call 0x9d7190
// 00a049c8  8bc8                 mov ecx, eax
// 00a049ca  e8e12afdff           call 0x9d74b0
// 00a049cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a049d3  68c5c5c500           push 0xc5c5c5
// 00a049d8  57                   push edi
// 00a049d9  03e9                 add ebp, ecx
// 00a049db  6a01                 push 1
// 00a049dd  56                   push esi
// 00a049de  8d55ff               lea edx, [ebp - 1]
// 00a049e1  52                   push edx
// 00a049e2  8bcb                 mov ecx, ebx
// 00a049e4  e8a74b0900           call 0xa99590
// 00a049e9  68f5f5f500           push 0xf5f5f5
// 00a049ee  57                   push edi
// 00a049ef  6a01                 push 1
// 00a049f1  56                   push esi
// 00a049f2  55                   push ebp
// 00a049f3  8bcb                 mov ecx, ebx
// 00a049f5  e8964b0900           call 0xa99590
// 00a049fa  5f                   pop edi
// 00a049fb  5e                   pop esi
// 00a049fc  5d                   pop ebp
// 00a049fd  5b                   pop ebx
// 00a049fe  83c410               add esp, 0x10
// 00a04a01  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp

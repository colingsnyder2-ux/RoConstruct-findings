// roc 2011-06 0088c390  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088c390
//
// 0088c390  83ec10               sub esp, 0x10
// 0088c393  837c242800           cmp dword ptr [esp + 0x28], 0
// 0088c398  7408                 je 0x88c3a2
// 0088c39a  81c1dc040000         add ecx, 0x4dc
// 0088c3a0  eb06                 jmp 0x88c3a8
// 0088c3a2  81c184060000         add ecx, 0x684
// 0088c3a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088c3ac  53                   push ebx
// 0088c3ad  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0088c3b1  55                   push ebp
// 0088c3b2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0088c3b6  56                   push esi
// 0088c3b7  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088c3bb  57                   push edi
// 0088c3bc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088c3c0  40                   inc eax
// 0088c3c1  6a00                 push 0
// 0088c3c3  89442414             mov dword ptr [esp + 0x14], eax
// 0088c3c7  8d4428ff             lea eax, [eax + ebp - 1]
// 0088c3cb  6a01                 push 1
// 0088c3cd  89442420             mov dword ptr [esp + 0x20], eax
// 0088c3d1  51                   push ecx
// 0088c3d2  8d44241c             lea eax, [esp + 0x1c]
// 0088c3d6  50                   push eax
// 0088c3d7  8d143e               lea edx, [esi + edi]
// 0088c3da  53                   push ebx
// 0088c3db  89742428             mov dword ptr [esp + 0x28], esi
// 0088c3df  89542430             mov dword ptr [esp + 0x30], edx
// 0088c3e3  e89829fdff           call 0x85ed80
// 0088c3e8  8bc8                 mov ecx, eax
// 0088c3ea  e8b12cfdff           call 0x85f0a0
// 0088c3ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088c3f3  68c5c5c500           push 0xc5c5c5
// 0088c3f8  57                   push edi
// 0088c3f9  03e9                 add ebp, ecx
// 0088c3fb  6a01                 push 1
// 0088c3fd  56                   push esi
// 0088c3fe  8d55ff               lea edx, [ebp - 1]
// 0088c401  52                   push edx
// 0088c402  8bcb                 mov ecx, ebx
// 0088c404  e8cd011400           call 0x9cc5d6
// 0088c409  68f5f5f500           push 0xf5f5f5
// 0088c40e  57                   push edi
// 0088c40f  6a01                 push 1
// 0088c411  56                   push esi
// 0088c412  55                   push ebp
// 0088c413  8bcb                 mov ecx, ebx
// 0088c415  e8bc011400           call 0x9cc5d6
// 0088c41a  5f                   pop edi
// 0088c41b  5e                   pop esi
// 0088c41c  5d                   pop ebp
// 0088c41d  5b                   pop ebx
// 0088c41e  83c410               add esp, 0x10
// 0088c421  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp

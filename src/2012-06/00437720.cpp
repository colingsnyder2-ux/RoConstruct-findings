// from server: 100% by auto
// roc 2012-06 00437720  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00437720
//
// 00437720  53                   push ebx
// 00437721  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00437725  55                   push ebp
// 00437726  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0043772a  56                   push esi
// 0043772b  8bf1                 mov esi, ecx
// 0043772d  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00437733  57                   push edi
// 00437734  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00437738  85c9                 test ecx, ecx
// 0043773a  741d                 je 0x437759
// 0043773c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00437740  57                   push edi
// 00437741  53                   push ebx
// 00437742  55                   push ebp
// 00437743  50                   push eax
// 00437744  e8c7cc5600           call 0x9a4410
// 00437749  85c0                 test eax, eax
// 0043774b  740c                 je 0x437759
// 0043774d  5f                   pop edi
// 0043774e  5e                   pop esi
// 0043774f  5d                   pop ebp
// 00437750  b801000000           mov eax, 1
// 00437755  5b                   pop ebx
// 00437756  c21000               ret 0x10
// 00437759  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043775d  57                   push edi
// 0043775e  53                   push ebx
// 0043775f  55                   push ebp
// 00437760  51                   push ecx
// 00437761  8bce                 mov ecx, esi
// 00437763  e82cab5400           call 0x982294
// 00437768  5f                   pop edi
// 00437769  5e                   pop esi
// 0043776a  5d                   pop ebp
// 0043776b  5b                   pop ebx
// 0043776c  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp

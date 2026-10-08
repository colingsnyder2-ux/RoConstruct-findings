// from server: 100% by auto
// roc 2008-06 00430580  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430580
//
// 00430580  53                   push ebx
// 00430581  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00430585  55                   push ebp
// 00430586  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0043058a  56                   push esi
// 0043058b  8bf1                 mov esi, ecx
// 0043058d  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00430593  57                   push edi
// 00430594  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00430598  85c9                 test ecx, ecx
// 0043059a  741d                 je 0x4305b9
// 0043059c  8b442414             mov eax, dword ptr [esp + 0x14]
// 004305a0  57                   push edi
// 004305a1  53                   push ebx
// 004305a2  55                   push ebp
// 004305a3  50                   push eax
// 004305a4  e887472700           call 0x6a4d30
// 004305a9  85c0                 test eax, eax
// 004305ab  740c                 je 0x4305b9
// 004305ad  5f                   pop edi
// 004305ae  5e                   pop esi
// 004305af  5d                   pop ebp
// 004305b0  b801000000           mov eax, 1
// 004305b5  5b                   pop ebx
// 004305b6  c21000               ret 0x10
// 004305b9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004305bd  57                   push edi
// 004305be  53                   push ebx
// 004305bf  55                   push ebp
// 004305c0  51                   push ecx
// 004305c1  8bce                 mov ecx, esi
// 004305c3  e838022700           call 0x6a0800
// 004305c8  5f                   pop edi
// 004305c9  5e                   pop esi
// 004305ca  5d                   pop ebp
// 004305cb  5b                   pop ebx
// 004305cc  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp

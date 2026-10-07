// roc 2008-06 004330c0  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004330c0
//
// 004330c0  53                   push ebx
// 004330c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004330c5  55                   push ebp
// 004330c6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004330ca  56                   push esi
// 004330cb  8bf1                 mov esi, ecx
// 004330cd  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 004330d3  57                   push edi
// 004330d4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004330d8  85c9                 test ecx, ecx
// 004330da  741d                 je 0x4330f9
// 004330dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004330e0  57                   push edi
// 004330e1  53                   push ebx
// 004330e2  55                   push ebp
// 004330e3  50                   push eax
// 004330e4  e8471c2700           call 0x6a4d30
// 004330e9  85c0                 test eax, eax
// 004330eb  740c                 je 0x4330f9
// 004330ed  5f                   pop edi
// 004330ee  5e                   pop esi
// 004330ef  5d                   pop ebp
// 004330f0  b801000000           mov eax, 1
// 004330f5  5b                   pop ebx
// 004330f6  c21000               ret 0x10
// 004330f9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004330fd  57                   push edi
// 004330fe  53                   push ebx
// 004330ff  55                   push ebp
// 00433100  51                   push ecx
// 00433101  8bce                 mov ecx, esi
// 00433103  e8f8d62600           call 0x6a0800
// 00433108  5f                   pop edi
// 00433109  5e                   pop esi
// 0043310a  5d                   pop ebp
// 0043310b  5b                   pop ebx
// 0043310c  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp

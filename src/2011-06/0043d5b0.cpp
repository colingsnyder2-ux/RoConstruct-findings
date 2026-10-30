// from server: 100% by auto
// roc 2011-06 0043d5b0  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d5b0
//
// 0043d5b0  53                   push ebx
// 0043d5b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0043d5b5  55                   push ebp
// 0043d5b6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0043d5ba  56                   push esi
// 0043d5bb  8bf1                 mov esi, ecx
// 0043d5bd  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0043d5c3  57                   push edi
// 0043d5c4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0043d5c8  85c9                 test ecx, ecx
// 0043d5ca  741d                 je 0x43d5e9
// 0043d5cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043d5d0  57                   push edi
// 0043d5d1  53                   push ebx
// 0043d5d2  55                   push ebp
// 0043d5d3  50                   push eax
// 0043d5d4  e867e83e00           call 0x82be40
// 0043d5d9  85c0                 test eax, eax
// 0043d5db  740c                 je 0x43d5e9
// 0043d5dd  5f                   pop edi
// 0043d5de  5e                   pop esi
// 0043d5df  5d                   pop ebp
// 0043d5e0  b801000000           mov eax, 1
// 0043d5e5  5b                   pop ebx
// 0043d5e6  c21000               ret 0x10
// 0043d5e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043d5ed  57                   push edi
// 0043d5ee  53                   push ebx
// 0043d5ef  55                   push ebp
// 0043d5f0  51                   push ecx
// 0043d5f1  8bce                 mov ecx, esi
// 0043d5f3  e8e0cb3c00           call 0x80a1d8
// 0043d5f8  5f                   pop edi
// 0043d5f9  5e                   pop esi
// 0043d5fa  5d                   pop ebp
// 0043d5fb  5b                   pop ebx
// 0043d5fc  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp

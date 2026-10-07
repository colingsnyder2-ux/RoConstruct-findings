// roc 2007-08 00433e50  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433e50
//
// 00433e50  53                   push ebx
// 00433e51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00433e55  55                   push ebp
// 00433e56  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00433e5a  56                   push esi
// 00433e5b  8bf1                 mov esi, ecx
// 00433e5d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433e63  85c9                 test ecx, ecx
// 00433e65  57                   push edi
// 00433e66  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00433e6a  741d                 je 0x433e89
// 00433e6c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00433e70  57                   push edi
// 00433e71  53                   push ebx
// 00433e72  55                   push ebp
// 00433e73  50                   push eax
// 00433e74  e8d7012000           call 0x634050
// 00433e79  85c0                 test eax, eax
// 00433e7b  740c                 je 0x433e89
// 00433e7d  5f                   pop edi
// 00433e7e  5e                   pop esi
// 00433e7f  5d                   pop ebp
// 00433e80  b801000000           mov eax, 1
// 00433e85  5b                   pop ebx
// 00433e86  c21000               ret 0x10
// 00433e89  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00433e8d  57                   push edi
// 00433e8e  53                   push ebx
// 00433e8f  55                   push ebp
// 00433e90  51                   push ecx
// 00433e91  8bce                 mov ecx, esi
// 00433e93  e844bf1f00           call 0x62fddc
// 00433e98  5f                   pop edi
// 00433e99  5e                   pop esi
// 00433e9a  5d                   pop ebp
// 00433e9b  5b                   pop ebx
// 00433e9c  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp

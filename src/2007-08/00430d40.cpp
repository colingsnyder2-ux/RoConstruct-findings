// from server: 100% by auto
// roc 2007-08 00430d40  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430d40
//
// 00430d40  53                   push ebx
// 00430d41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00430d45  55                   push ebp
// 00430d46  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00430d4a  56                   push esi
// 00430d4b  8bf1                 mov esi, ecx
// 00430d4d  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00430d53  85c9                 test ecx, ecx
// 00430d55  57                   push edi
// 00430d56  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00430d5a  741d                 je 0x430d79
// 00430d5c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00430d60  57                   push edi
// 00430d61  53                   push ebx
// 00430d62  55                   push ebp
// 00430d63  50                   push eax
// 00430d64  e8e7322000           call 0x634050
// 00430d69  85c0                 test eax, eax
// 00430d6b  740c                 je 0x430d79
// 00430d6d  5f                   pop edi
// 00430d6e  5e                   pop esi
// 00430d6f  5d                   pop ebp
// 00430d70  b801000000           mov eax, 1
// 00430d75  5b                   pop ebx
// 00430d76  c21000               ret 0x10
// 00430d79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430d7d  57                   push edi
// 00430d7e  53                   push ebx
// 00430d7f  55                   push ebp
// 00430d80  51                   push ecx
// 00430d81  8bce                 mov ecx, esi
// 00430d83  e854f01f00           call 0x62fddc
// 00430d88  5f                   pop edi
// 00430d89  5e                   pop esi
// 00430d8a  5d                   pop ebp
// 00430d8b  5b                   pop ebx
// 00430d8c  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp

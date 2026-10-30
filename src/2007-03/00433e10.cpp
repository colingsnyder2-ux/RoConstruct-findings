// roc 2007-03 00433e10  unit: seg_00430000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433e10
//
// 00433e10  53                   push ebx
// 00433e11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00433e15  55                   push ebp
// 00433e16  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00433e1a  56                   push esi
// 00433e1b  8bf1                 mov esi, ecx
// 00433e1d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433e23  85c9                 test ecx, ecx
// 00433e25  57                   push edi
// 00433e26  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00433e2a  741d                 je 0x433e49
// 00433e2c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00433e30  57                   push edi
// 00433e31  53                   push ebx
// 00433e32  55                   push ebp
// 00433e33  50                   push eax
// 00433e34  e8c7991f00           call 0x62d800
// 00433e39  85c0                 test eax, eax
// 00433e3b  740c                 je 0x433e49
// 00433e3d  5f                   pop edi
// 00433e3e  5e                   pop esi
// 00433e3f  5d                   pop ebp
// 00433e40  b801000000           mov eax, 1
// 00433e45  5b                   pop ebx
// 00433e46  c21000               ret 0x10
// 00433e49  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00433e4d  57                   push edi
// 00433e4e  53                   push ebx
// 00433e4f  55                   push ebp
// 00433e50  51                   push ecx
// 00433e51  8bce                 mov ecx, esi
// 00433e53  e818a41e00           call 0x61e270
// 00433e58  5f                   pop edi
// 00433e59  5e                   pop esi
// 00433e5a  5d                   pop ebp
// 00433e5b  5b                   pop ebx
// 00433e5c  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp

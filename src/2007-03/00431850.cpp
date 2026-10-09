// roc 2007-03 00431850  unit: seg_00430000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00431850
//
// 00431850  53                   push ebx
// 00431851  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00431855  55                   push ebp
// 00431856  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0043185a  56                   push esi
// 0043185b  8bf1                 mov esi, ecx
// 0043185d  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00431863  85c9                 test ecx, ecx
// 00431865  57                   push edi
// 00431866  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0043186a  741d                 je 0x431889
// 0043186c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00431870  57                   push edi
// 00431871  53                   push ebx
// 00431872  55                   push ebp
// 00431873  50                   push eax
// 00431874  e887bf1f00           call 0x62d800
// 00431879  85c0                 test eax, eax
// 0043187b  740c                 je 0x431889
// 0043187d  5f                   pop edi
// 0043187e  5e                   pop esi
// 0043187f  5d                   pop ebp
// 00431880  b801000000           mov eax, 1
// 00431885  5b                   pop ebx
// 00431886  c21000               ret 0x10
// 00431889  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043188d  57                   push edi
// 0043188e  53                   push ebx
// 0043188f  55                   push ebp
// 00431890  51                   push ecx
// 00431891  8bce                 mov ecx, esi
// 00431893  e8d8c91e00           call 0x61e270
// 00431898  5f                   pop edi
// 00431899  5e                   pop esi
// 0043189a  5d                   pop ebp
// 0043189b  5b                   pop ebx
// 0043189c  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnWndMsg@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp

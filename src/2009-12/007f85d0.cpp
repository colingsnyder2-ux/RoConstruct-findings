// roc 2009-12 007f85d0  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f85d0
//
// 007f85d0  56                   push esi
// 007f85d1  8bf1                 mov esi, ecx
// 007f85d3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f85d9  85c9                 test ecx, ecx
// 007f85db  7506                 jne 0x7f85e3
// 007f85dd  33c0                 xor eax, eax
// 007f85df  5e                   pop esi
// 007f85e0  c20800               ret 8
// 007f85e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f85e7  8b542408             mov edx, dword ptr [esp + 8]
// 007f85eb  50                   push eax
// 007f85ec  52                   push edx
// 007f85ed  e8feea0000           call 0x8070f0
// 007f85f2  50                   push eax
// 007f85f3  8bce                 mov ecx, esi
// 007f85f5  e846e2ffff           call 0x7f6840
// 007f85fa  5e                   pop esi
// 007f85fb  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

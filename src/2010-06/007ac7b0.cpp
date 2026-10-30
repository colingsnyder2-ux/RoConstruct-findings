// roc 2010-06 007ac7b0  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ac7b0
//
// 007ac7b0  56                   push esi
// 007ac7b1  8bf1                 mov esi, ecx
// 007ac7b3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007ac7b9  85c9                 test ecx, ecx
// 007ac7bb  7506                 jne 0x7ac7c3
// 007ac7bd  33c0                 xor eax, eax
// 007ac7bf  5e                   pop esi
// 007ac7c0  c20800               ret 8
// 007ac7c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ac7c7  8b542408             mov edx, dword ptr [esp + 8]
// 007ac7cb  50                   push eax
// 007ac7cc  52                   push edx
// 007ac7cd  e88eea0000           call 0x7bb260
// 007ac7d2  50                   push eax
// 007ac7d3  8bce                 mov ecx, esi
// 007ac7d5  e846e1ffff           call 0x7aa920
// 007ac7da  5e                   pop esi
// 007ac7db  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

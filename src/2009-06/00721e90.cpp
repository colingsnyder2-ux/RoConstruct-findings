// roc 2009-06 00721e90  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721e90
//
// 00721e90  56                   push esi
// 00721e91  8bf1                 mov esi, ecx
// 00721e93  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00721e99  85c9                 test ecx, ecx
// 00721e9b  7506                 jne 0x721ea3
// 00721e9d  33c0                 xor eax, eax
// 00721e9f  5e                   pop esi
// 00721ea0  c20800               ret 8
// 00721ea3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00721ea7  8b542408             mov edx, dword ptr [esp + 8]
// 00721eab  50                   push eax
// 00721eac  52                   push edx
// 00721ead  e8dee00000           call 0x72ff90
// 00721eb2  50                   push eax
// 00721eb3  8bce                 mov ecx, esi
// 00721eb5  e876e2ffff           call 0x720130
// 00721eba  5e                   pop esi
// 00721ebb  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

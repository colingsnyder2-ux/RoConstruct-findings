// roc 2012-06 00986fa0  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986fa0
//
// 00986fa0  56                   push esi
// 00986fa1  8bf1                 mov esi, ecx
// 00986fa3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00986fa9  85c9                 test ecx, ecx
// 00986fab  7506                 jne 0x986fb3
// 00986fad  33c0                 xor eax, eax
// 00986faf  5e                   pop esi
// 00986fb0  c20800               ret 8
// 00986fb3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00986fb7  8b542408             mov edx, dword ptr [esp + 8]
// 00986fbb  50                   push eax
// 00986fbc  52                   push edx
// 00986fbd  e8dee90000           call 0x9959a0
// 00986fc2  50                   push eax
// 00986fc3  8bce                 mov ecx, esi
// 00986fc5  e8e6e1ffff           call 0x9851b0
// 00986fca  5e                   pop esi
// 00986fcb  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

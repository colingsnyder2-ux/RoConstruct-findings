// roc 2011-06 0080ec90  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080ec90
//
// 0080ec90  56                   push esi
// 0080ec91  8bf1                 mov esi, ecx
// 0080ec93  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0080ec99  85c9                 test ecx, ecx
// 0080ec9b  7506                 jne 0x80eca3
// 0080ec9d  33c0                 xor eax, eax
// 0080ec9f  5e                   pop esi
// 0080eca0  c20800               ret 8
// 0080eca3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080eca7  8b542408             mov edx, dword ptr [esp + 8]
// 0080ecab  50                   push eax
// 0080ecac  52                   push edx
// 0080ecad  e81eea0000           call 0x81d6d0
// 0080ecb2  50                   push eax
// 0080ecb3  8bce                 mov ecx, esi
// 0080ecb5  e856e2ffff           call 0x80cf10
// 0080ecba  5e                   pop esi
// 0080ecbb  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

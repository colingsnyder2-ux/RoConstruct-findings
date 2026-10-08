// roc 2011-06 008d2a10  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2a10
//
// 008d2a10  56                   push esi
// 008d2a11  8bf1                 mov esi, ecx
// 008d2a13  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008d2a19  85c0                 test eax, eax
// 008d2a1b  7416                 je 0x8d2a33
// 008d2a1d  50                   push eax
// 008d2a1e  ff15201ca400         call dword ptr [0xa41c20]
// 008d2a24  85c0                 test eax, eax
// 008d2a26  740b                 je 0x8d2a33
// 008d2a28  8bce                 mov ecx, esi
// 008d2a2a  e8b19cf3ff           call 0x80c6e0
// 008d2a2f  85c0                 test eax, eax
// 008d2a31  7416                 je 0x8d2a49
// 008d2a33  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d2a37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d2a3b  8b542408             mov edx, dword ptr [esp + 8]
// 008d2a3f  50                   push eax
// 008d2a40  51                   push ecx
// 008d2a41  52                   push edx
// 008d2a42  8bce                 mov ecx, esi
// 008d2a44  e877ecfcff           call 0x8a16c0
// 008d2a49  5e                   pop esi
// 008d2a4a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp

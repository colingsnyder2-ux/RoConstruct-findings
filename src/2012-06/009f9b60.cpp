// roc 2012-06 009f9b60  unit: CXTPDockingPaneAutoHidePanel  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9b60
//
// 009f9b60  56                   push esi
// 009f9b61  8bf1                 mov esi, ecx
// 009f9b63  837e0400             cmp dword ptr [esi + 4], 0
// 009f9b67  7411                 je 0x9f9b7a
// 009f9b69  837e0800             cmp dword ptr [esi + 8], 0
// 009f9b6d  7505                 jne 0x9f9b74
// 009f9b6f  e89cffffff           call 0x9f9b10
// 009f9b74  8b442408             mov eax, dword ptr [esp + 8]
// 009f9b78  8906                 mov dword ptr [esi], eax
// 009f9b7a  5e                   pop esi
// 009f9b7b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp

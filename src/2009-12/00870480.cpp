// roc 2009-12 00870480  unit: CXTPNewToolbarDlg  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870480
//
// 00870480  56                   push esi
// 00870481  8bf1                 mov esi, ecx
// 00870483  837e0400             cmp dword ptr [esi + 4], 0
// 00870487  7411                 je 0x87049a
// 00870489  837e0800             cmp dword ptr [esi + 8], 0
// 0087048d  7505                 jne 0x870494
// 0087048f  e89cffffff           call 0x870430
// 00870494  8b442408             mov eax, dword ptr [esp + 8]
// 00870498  8906                 mov dword ptr [esi], eax
// 0087049a  5e                   pop esi
// 0087049b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp

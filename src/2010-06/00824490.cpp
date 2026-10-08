// roc 2010-06 00824490  unit: CXTPNewToolbarDlg  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824490
//
// 00824490  56                   push esi
// 00824491  8bf1                 mov esi, ecx
// 00824493  837e0400             cmp dword ptr [esi + 4], 0
// 00824497  7411                 je 0x8244aa
// 00824499  837e0800             cmp dword ptr [esi + 8], 0
// 0082449d  7505                 jne 0x8244a4
// 0082449f  e89cffffff           call 0x824440
// 008244a4  8b442408             mov eax, dword ptr [esp + 8]
// 008244a8  8906                 mov dword ptr [esi], eax
// 008244aa  5e                   pop esi
// 008244ab  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp

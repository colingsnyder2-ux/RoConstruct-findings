// roc 2007-03 00693ce0  unit: seg_00690000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693ce0
//
// 00693ce0  56                   push esi
// 00693ce1  8bf1                 mov esi, ecx
// 00693ce3  837e0400             cmp dword ptr [esi + 4], 0
// 00693ce7  7411                 je 0x693cfa
// 00693ce9  837e0800             cmp dword ptr [esi + 8], 0
// 00693ced  7505                 jne 0x693cf4
// 00693cef  e81cffffff           call 0x693c10
// 00693cf4  8b442408             mov eax, dword ptr [esp + 8]
// 00693cf8  8906                 mov dword ptr [esi], eax
// 00693cfa  5e                   pop esi
// 00693cfb  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp

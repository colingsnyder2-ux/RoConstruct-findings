// from server: 100% by auto
// roc 2008-06 007279c0  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007279c0
//
// 007279c0  56                   push esi
// 007279c1  8bf1                 mov esi, ecx
// 007279c3  837e0400             cmp dword ptr [esi + 4], 0
// 007279c7  7411                 je 0x7279da
// 007279c9  837e0800             cmp dword ptr [esi + 8], 0
// 007279cd  7505                 jne 0x7279d4
// 007279cf  e89cffffff           call 0x727970
// 007279d4  8b442408             mov eax, dword ptr [esp + 8]
// 007279d8  8906                 mov dword ptr [esi], eax
// 007279da  5e                   pop esi
// 007279db  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp

// roc 2009-06 007a8480  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a8480
//
// 007a8480  56                   push esi
// 007a8481  8b742408             mov esi, dword ptr [esp + 8]
// 007a8485  56                   push esi
// 007a8486  e8e5acf7ff           call 0x723170
// 007a848b  85c0                 test eax, eax
// 007a848d  7512                 jne 0x7a84a1
// 007a848f  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 007a8496  7409                 je 0x7a84a1
// 007a8498  b801000000           mov eax, 1
// 007a849d  5e                   pop esi
// 007a849e  c20400               ret 4
// 007a84a1  33c0                 xor eax, eax
// 007a84a3  5e                   pop esi
// 007a84a4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp

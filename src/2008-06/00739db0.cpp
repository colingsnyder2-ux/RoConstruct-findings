// roc 2008-06 00739db0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00739db0
//
// 00739db0  56                   push esi
// 00739db1  8b742408             mov esi, dword ptr [esp + 8]
// 00739db5  56                   push esi
// 00739db6  e8a54cf7ff           call 0x6aea60
// 00739dbb  85c0                 test eax, eax
// 00739dbd  7512                 jne 0x739dd1
// 00739dbf  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 00739dc6  7409                 je 0x739dd1
// 00739dc8  b801000000           mov eax, 1
// 00739dcd  5e                   pop esi
// 00739dce  c20400               ret 4
// 00739dd1  33c0                 xor eax, eax
// 00739dd3  5e                   pop esi
// 00739dd4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp

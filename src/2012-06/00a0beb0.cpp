// roc 2012-06 00a0beb0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0beb0
//
// 00a0beb0  56                   push esi
// 00a0beb1  8b742408             mov esi, dword ptr [esp + 8]
// 00a0beb5  56                   push esi
// 00a0beb6  e8c5c3f7ff           call 0x988280
// 00a0bebb  85c0                 test eax, eax
// 00a0bebd  7512                 jne 0xa0bed1
// 00a0bebf  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 00a0bec6  7409                 je 0xa0bed1
// 00a0bec8  b801000000           mov eax, 1
// 00a0becd  5e                   pop esi
// 00a0bece  c20400               ret 4
// 00a0bed1  33c0                 xor eax, eax
// 00a0bed3  5e                   pop esi
// 00a0bed4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp

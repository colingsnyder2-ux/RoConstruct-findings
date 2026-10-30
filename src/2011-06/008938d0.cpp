// roc 2011-06 008938d0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008938d0
//
// 008938d0  56                   push esi
// 008938d1  8b742408             mov esi, dword ptr [esp + 8]
// 008938d5  56                   push esi
// 008938d6  e8c5c6f7ff           call 0x80ffa0
// 008938db  85c0                 test eax, eax
// 008938dd  7512                 jne 0x8938f1
// 008938df  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 008938e6  7409                 je 0x8938f1
// 008938e8  b801000000           mov eax, 1
// 008938ed  5e                   pop esi
// 008938ee  c20400               ret 4
// 008938f1  33c0                 xor eax, eax
// 008938f3  5e                   pop esi
// 008938f4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp

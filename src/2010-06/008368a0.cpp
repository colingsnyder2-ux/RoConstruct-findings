// roc 2010-06 008368a0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008368a0
//
// 008368a0  56                   push esi
// 008368a1  8b742408             mov esi, dword ptr [esp + 8]
// 008368a5  56                   push esi
// 008368a6  e85572f7ff           call 0x7adb00
// 008368ab  85c0                 test eax, eax
// 008368ad  7512                 jne 0x8368c1
// 008368af  f686ec0000000f       test byte ptr [esi + 0xec], 0xf
// 008368b6  7409                 je 0x8368c1
// 008368b8  b801000000           mov eax, 1
// 008368bd  5e                   pop esi
// 008368be  c20400               ret 4
// 008368c1  33c0                 xor eax, eax
// 008368c3  5e                   pop esi
// 008368c4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?HasFloatingBarGradientEntry@CXTPOffice2003Theme@XTPPaintThemes@@MAEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp

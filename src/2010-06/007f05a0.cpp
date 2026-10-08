// roc 2010-06 007f05a0  unit: CPatchedControlComboBox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f05a0
//
// 007f05a0  56                   push esi
// 007f05a1  8bf1                 mov esi, ecx
// 007f05a3  8d4e38               lea ecx, [esi + 0x38]
// 007f05a6  c7062cc6a500         mov dword ptr [esi], 0xa5c62c
// 007f05ac  e81fffffff           call 0x7f04d0
// 007f05b1  8d4e14               lea ecx, [esi + 0x14]
// 007f05b4  5e                   pop esi
// 007f05b5  e916ffffff           jmp 0x7f04d0
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

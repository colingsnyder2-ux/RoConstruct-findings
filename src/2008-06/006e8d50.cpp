// from server: 100% by auto
// roc 2008-06 006e8d50  unit: CPatchedControlComboBox  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8d50
//
// 006e8d50  56                   push esi
// 006e8d51  8bf1                 mov esi, ecx
// 006e8d53  8d4e38               lea ecx, [esi + 0x38]
// 006e8d56  c7066c6e8500         mov dword ptr [esi], 0x856e6c
// 006e8d5c  e81fffffff           call 0x6e8c80
// 006e8d61  8d4e14               lea ecx, [esi + 0x14]
// 006e8d64  5e                   pop esi
// 006e8d65  e916ffffff           jmp 0x6e8c80
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

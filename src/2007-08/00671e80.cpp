// roc 2007-08 00671e80  unit: CPropertyGridItemBrickColor  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671e80
//
// 00671e80  56                   push esi
// 00671e81  8bf1                 mov esi, ecx
// 00671e83  8d4e38               lea ecx, [esi + 0x38]
// 00671e86  c7068cb67c00         mov dword ptr [esi], 0x7cb68c
// 00671e8c  e81fffffff           call 0x671db0
// 00671e91  8d4e14               lea ecx, [esi + 0x14]
// 00671e94  5e                   pop esi
// 00671e95  e916ffffff           jmp 0x671db0
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp

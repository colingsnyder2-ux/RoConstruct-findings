// roc 2007-03 006869c0  unit: seg_00680000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006869c0
//
// 006869c0  56                   push esi
// 006869c1  8bf1                 mov esi, ecx
// 006869c3  8d4e38               lea ecx, [esi + 0x38]
// 006869c6  c706f4e87c00         mov dword ptr [esi], 0x7ce8f4
// 006869cc  e81fffffff           call 0x6868f0
// 006869d1  8d4e14               lea ecx, [esi + 0x14]
// 006869d4  5e                   pop esi
// 006869d5  e916ffffff           jmp 0x6868f0
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

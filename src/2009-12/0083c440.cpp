// roc 2009-12 0083c440  unit: CXTPAccessible  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c440
//
// 0083c440  56                   push esi
// 0083c441  8bf1                 mov esi, ecx
// 0083c443  8d4e38               lea ecx, [esi + 0x38]
// 0083c446  c7066c839f00         mov dword ptr [esi], 0x9f836c
// 0083c44c  e81fffffff           call 0x83c370
// 0083c451  8d4e14               lea ecx, [esi + 0x14]
// 0083c454  5e                   pop esi
// 0083c455  e916ffffff           jmp 0x83c370
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

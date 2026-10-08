// roc 2011-06 00851de0  unit: CSourceStream  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851de0
//
// 00851de0  56                   push esi
// 00851de1  8bf1                 mov esi, ecx
// 00851de3  8d4e38               lea ecx, [esi + 0x38]
// 00851de6  c7067482ac00         mov dword ptr [esi], 0xac8274
// 00851dec  e81fffffff           call 0x851d10
// 00851df1  8d4e14               lea ecx, [esi + 0x14]
// 00851df4  5e                   pop esi
// 00851df5  e916ffffff           jmp 0x851d10
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

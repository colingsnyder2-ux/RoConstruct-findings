// roc 2012-06 009ca2a0  unit: ATL::CRegObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca2a0
//
// 009ca2a0  56                   push esi
// 009ca2a1  8bf1                 mov esi, ecx
// 009ca2a3  8d4e38               lea ecx, [esi + 0x38]
// 009ca2a6  c7066c39c100         mov dword ptr [esi], 0xc1396c
// 009ca2ac  e81fffffff           call 0x9ca1d0
// 009ca2b1  8d4e14               lea ecx, [esi + 0x14]
// 009ca2b4  5e                   pop esi
// 009ca2b5  e916ffffff           jmp 0x9ca1d0
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

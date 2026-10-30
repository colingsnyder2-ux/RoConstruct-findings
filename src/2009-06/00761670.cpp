// roc 2009-06 00761670  unit: ATL::CRegObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761670
//
// 00761670  56                   push esi
// 00761671  8bf1                 mov esi, ecx
// 00761673  8d4e38               lea ecx, [esi + 0x38]
// 00761676  c706c47e8f00         mov dword ptr [esi], 0x8f7ec4
// 0076167c  e81fffffff           call 0x7615a0
// 00761681  8d4e14               lea ecx, [esi + 0x14]
// 00761684  5e                   pop esi
// 00761685  e916ffffff           jmp 0x7615a0
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPAccessible@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp

// roc 2012-06 009ca1d0  unit: ATL::CRegObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca1d0
//
// 009ca1d0  56                   push esi
// 009ca1d1  8bf1                 mov esi, ecx
// 009ca1d3  c7065039c100         mov dword ptr [esi], 0xc13950
// 009ca1d9  e8e2f4ffff           call 0x9c96c0
// 009ca1de  8d4e04               lea ecx, [esi + 4]
// 009ca1e1  5e                   pop esi
// 009ca1e2  ff25d047b200         jmp dword ptr [0xb247d0]
// library xtp-15.2.1-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ??1CXTPModuleHandle@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPSystemHelpers.cpp

// roc 2012-06 009f4ca0  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4ca0
//
// 009f4ca0  8b442404             mov eax, dword ptr [esp + 4]
// 009f4ca4  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 009f4caa  f7d8                 neg eax
// 009f4cac  1bc0                 sbb eax, eax
// 009f4cae  83e0fb               and eax, 0xfffffffb
// 009f4cb1  83c005               add eax, 5
// 009f4cb4  89442404             mov dword ptr [esp + 4], eax
// 009f4cb8  e993c6ffff           jmp 0x9f1350
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

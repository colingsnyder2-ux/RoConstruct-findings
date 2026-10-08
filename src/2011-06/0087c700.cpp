// roc 2011-06 0087c700  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c700
//
// 0087c700  8b442404             mov eax, dword ptr [esp + 4]
// 0087c704  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 0087c70a  f7d8                 neg eax
// 0087c70c  1bc0                 sbb eax, eax
// 0087c70e  83e0fb               and eax, 0xfffffffb
// 0087c711  83c005               add eax, 5
// 0087c714  89442404             mov dword ptr [esp + 4], eax
// 0087c718  e9c3c6ffff           jmp 0x878de0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

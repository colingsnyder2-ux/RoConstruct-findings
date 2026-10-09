// roc 2009-12 0086af40  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086af40
//
// 0086af40  8b442404             mov eax, dword ptr [esp + 4]
// 0086af44  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 0086af4a  f7d8                 neg eax
// 0086af4c  1bc0                 sbb eax, eax
// 0086af4e  83e0fb               and eax, 0xfffffffb
// 0086af51  83c005               add eax, 5
// 0086af54  89442404             mov dword ptr [esp + 4], eax
// 0086af58  e99396ffff           jmp 0x8645f0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

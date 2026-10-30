// roc 2009-06 0078ff20  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ff20
//
// 0078ff20  8b442404             mov eax, dword ptr [esp + 4]
// 0078ff24  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 0078ff2a  f7d8                 neg eax
// 0078ff2c  1bc0                 sbb eax, eax
// 0078ff2e  83e0fb               and eax, 0xfffffffb
// 0078ff31  83c005               add eax, 5
// 0078ff34  89442404             mov dword ptr [esp + 4], eax
// 0078ff38  e9b396ffff           jmp 0x7895f0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

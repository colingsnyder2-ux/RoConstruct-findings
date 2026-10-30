// from server: 100% by auto
// roc 2008-06 00717780  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717780
//
// 00717780  8b442404             mov eax, dword ptr [esp + 4]
// 00717784  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 0071778a  f7d8                 neg eax
// 0071778c  1bc0                 sbb eax, eax
// 0071778e  83e0fb               and eax, 0xfffffffb
// 00717791  83c005               add eax, 5
// 00717794  89442404             mov dword ptr [esp + 4], eax
// 00717798  e93396ffff           jmp 0x710dd0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

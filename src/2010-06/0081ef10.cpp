// roc 2010-06 0081ef10  unit: CPropertyGridItemBrickColor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081ef10
//
// 0081ef10  8b442404             mov eax, dword ptr [esp + 4]
// 0081ef14  89811c010000         mov dword ptr [ecx + 0x11c], eax
// 0081ef1a  f7d8                 neg eax
// 0081ef1c  1bc0                 sbb eax, eax
// 0081ef1e  83e0fb               and eax, 0xfffffffb
// 0081ef21  83c005               add eax, 5
// 0081ef24  89442404             mov dword ptr [esp + 4], eax
// 0081ef28  e9a396ffff           jmp 0x8185d0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?SetCheckBoxStyle@CXTPPropertyGridItemBool@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp

// roc 2008-06 00711020  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711020
//
// 00711020  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00711026  f7d8                 neg eax
// 00711028  1bc0                 sbb eax, eax
// 0071102a  83e020               and eax, 0x20
// 0071102d  33d2                 xor edx, edx
// 0071102f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 00711036  0f9ec2               setle dl
// 00711039  4a                   dec edx
// 0071103a  83e204               and edx, 4
// 0071103d  0bc2                 or eax, edx
// 0071103f  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 00711045  0d00000040           or eax, 0x40000000
// 0071104a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

// roc 2009-06 00789820  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789820
//
// 00789820  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00789826  f7d8                 neg eax
// 00789828  1bc0                 sbb eax, eax
// 0078982a  83e020               and eax, 0x20
// 0078982d  33d2                 xor edx, edx
// 0078982f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 00789836  0f9ec2               setle dl
// 00789839  4a                   dec edx
// 0078983a  83e204               and edx, 4
// 0078983d  0bc2                 or eax, edx
// 0078983f  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 00789845  0d00000040           or eax, 0x40000000
// 0078984a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

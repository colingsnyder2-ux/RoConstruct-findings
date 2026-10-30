// roc 2009-12 00864830  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864830
//
// 00864830  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00864836  f7d8                 neg eax
// 00864838  1bc0                 sbb eax, eax
// 0086483a  83e020               and eax, 0x20
// 0086483d  33d2                 xor edx, edx
// 0086483f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 00864846  0f9ec2               setle dl
// 00864849  4a                   dec edx
// 0086484a  83e204               and edx, 4
// 0086484d  0bc2                 or eax, edx
// 0086484f  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 00864855  0d00000040           or eax, 0x40000000
// 0086485a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

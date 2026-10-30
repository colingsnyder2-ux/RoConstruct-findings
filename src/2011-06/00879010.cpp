// roc 2011-06 00879010  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879010
//
// 00879010  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00879016  f7d8                 neg eax
// 00879018  1bc0                 sbb eax, eax
// 0087901a  83e020               and eax, 0x20
// 0087901d  33d2                 xor edx, edx
// 0087901f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 00879026  0f9ec2               setle dl
// 00879029  4a                   dec edx
// 0087902a  83e204               and edx, 4
// 0087902d  0bc2                 or eax, edx
// 0087902f  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 00879035  0d00000040           or eax, 0x40000000
// 0087903a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

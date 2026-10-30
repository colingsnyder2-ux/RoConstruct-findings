// roc 2012-06 009f1590  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1590
//
// 009f1590  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 009f1596  f7d8                 neg eax
// 009f1598  1bc0                 sbb eax, eax
// 009f159a  83e020               and eax, 0x20
// 009f159d  33d2                 xor edx, edx
// 009f159f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 009f15a6  0f9ec2               setle dl
// 009f15a9  4a                   dec edx
// 009f15aa  83e204               and edx, 4
// 009f15ad  0bc2                 or eax, edx
// 009f15af  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 009f15b5  0d00000040           or eax, 0x40000000
// 009f15ba  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

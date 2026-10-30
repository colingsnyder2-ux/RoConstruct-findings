// roc 2010-06 00818810  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818810
//
// 00818810  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00818816  f7d8                 neg eax
// 00818818  1bc0                 sbb eax, eax
// 0081881a  83e020               and eax, 0x20
// 0081881d  33d2                 xor edx, edx
// 0081881f  83b90401000001       cmp dword ptr [ecx + 0x104], 1
// 00818826  0f9ec2               setle dl
// 00818829  4a                   dec edx
// 0081882a  83e204               and edx, 4
// 0081882d  0bc2                 or eax, edx
// 0081882f  0b8108010000         or eax, dword ptr [ecx + 0x108]
// 00818835  0d00000040           or eax, 0x40000000
// 0081883a  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetEditStyle@CXTPPropertyGridItem@@MBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

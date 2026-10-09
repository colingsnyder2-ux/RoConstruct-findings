// roc 2007-03 0065da30  unit: seg_00650000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065da30
//
// 0065da30  56                   push esi
// 0065da31  8bf1                 mov esi, ecx
// 0065da33  e848ecffff           call 0x65c680
// 0065da38  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 0065da3e  6a01                 push 1
// 0065da40  6a01                 push 1
// 0065da42  50                   push eax
// 0065da43  8bce                 mov ecx, esi
// 0065da45  e836ecffff           call 0x65c680
// 0065da4a  8bc8                 mov ecx, eax
// 0065da4c  e89fbb0200           call 0x6895f0
// 0065da51  5e                   pop esi
// 0065da52  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

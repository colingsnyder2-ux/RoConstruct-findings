// roc 2011-06 00879830  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879830
//
// 00879830  56                   push esi
// 00879831  8bf1                 mov esi, ecx
// 00879833  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00879839  85c0                 test eax, eax
// 0087983b  742d                 je 0x87986a
// 0087983d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00879844  7424                 je 0x87986a
// 00879846  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0087984c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0087984f  6a00                 push 0
// 00879851  51                   push ecx
// 00879852  6886010000           push 0x186
// 00879857  52                   push edx
// 00879858  ff15c019a400         call dword ptr [0xa419c0]
// 0087985e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00879864  5e                   pop esi
// 00879865  e956dfffff           jmp 0x8777c0
// 0087986a  5e                   pop esi
// 0087986b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

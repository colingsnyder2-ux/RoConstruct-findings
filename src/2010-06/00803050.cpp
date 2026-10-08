// roc 2010-06 00803050  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00803050
//
// 00803050  56                   push esi
// 00803051  8bf1                 mov esi, ecx
// 00803053  e888eaffff           call 0x801ae0
// 00803058  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 0080305e  6a01                 push 1
// 00803060  6a01                 push 1
// 00803062  50                   push eax
// 00803063  8bce                 mov ecx, esi
// 00803065  e876eaffff           call 0x801ae0
// 0080306a  8bc8                 mov ecx, eax
// 0080306c  e81fb30100           call 0x81e390
// 00803071  5e                   pop esi
// 00803072  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

// roc 2012-06 009e2c60  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2c60
//
// 009e2c60  56                   push esi
// 009e2c61  8bf1                 mov esi, ecx
// 009e2c63  e8b8eaffff           call 0x9e1720
// 009e2c68  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 009e2c6e  6a01                 push 1
// 009e2c70  6a01                 push 1
// 009e2c72  50                   push eax
// 009e2c73  8bce                 mov ecx, esi
// 009e2c75  e8a6eaffff           call 0x9e1720
// 009e2c7a  8bc8                 mov ecx, eax
// 009e2c7c  e85fe20000           call 0x9f0ee0
// 009e2c81  5e                   pop esi
// 009e2c82  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

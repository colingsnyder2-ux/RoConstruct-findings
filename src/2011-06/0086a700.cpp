// roc 2011-06 0086a700  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a700
//
// 0086a700  56                   push esi
// 0086a701  8bf1                 mov esi, ecx
// 0086a703  e8a8eaffff           call 0x8691b0
// 0086a708  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 0086a70e  6a01                 push 1
// 0086a710  6a01                 push 1
// 0086a712  50                   push eax
// 0086a713  8bce                 mov ecx, esi
// 0086a715  e896eaffff           call 0x8691b0
// 0086a71a  8bc8                 mov ecx, eax
// 0086a71c  e83fe20000           call 0x878960
// 0086a721  5e                   pop esi
// 0086a722  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

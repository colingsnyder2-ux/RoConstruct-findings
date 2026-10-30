// roc 2009-06 00774290  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00774290
//
// 00774290  56                   push esi
// 00774291  8bf1                 mov esi, ecx
// 00774293  e8b8eaffff           call 0x772d50
// 00774298  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 0077429e  6a01                 push 1
// 007742a0  6a01                 push 1
// 007742a2  50                   push eax
// 007742a3  8bce                 mov ecx, esi
// 007742a5  e8a6eaffff           call 0x772d50
// 007742aa  8bc8                 mov ecx, eax
// 007742ac  e8bfb00100           call 0x78f370
// 007742b1  5e                   pop esi
// 007742b2  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

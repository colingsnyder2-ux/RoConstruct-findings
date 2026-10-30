// from server: 100% by auto
// roc 2007-08 00683e40  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683e40
//
// 00683e40  56                   push esi
// 00683e41  8bf1                 mov esi, ecx
// 00683e43  e8d8ebffff           call 0x682a20
// 00683e48  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 00683e4e  6a01                 push 1
// 00683e50  6a01                 push 1
// 00683e52  50                   push eax
// 00683e53  8bce                 mov ecx, esi
// 00683e55  e8c6ebffff           call 0x682a20
// 00683e5a  8bc8                 mov ecx, eax
// 00683e5c  e8df940100           call 0x69d340
// 00683e61  5e                   pop esi
// 00683e62  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp

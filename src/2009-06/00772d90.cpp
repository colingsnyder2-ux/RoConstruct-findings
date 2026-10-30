// roc 2009-06 00772d90  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772d90
//
// 00772d90  8b442404             mov eax, dword ptr [esp + 4]
// 00772d94  56                   push esi
// 00772d95  50                   push eax
// 00772d96  8bf1                 mov esi, ecx
// 00772d98  e81f5dfaff           call 0x718abc
// 00772d9d  85c0                 test eax, eax
// 00772d9f  7504                 jne 0x772da5
// 00772da1  5e                   pop esi
// 00772da2  c20400               ret 4
// 00772da5  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 00772daf  b801000000           mov eax, 1
// 00772db4  5e                   pop esi
// 00772db5  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

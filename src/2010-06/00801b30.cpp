// roc 2010-06 00801b30  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801b30
//
// 00801b30  8b442404             mov eax, dword ptr [esp + 4]
// 00801b34  56                   push esi
// 00801b35  50                   push eax
// 00801b36  8bf1                 mov esi, ecx
// 00801b38  e8e75efaff           call 0x7a7a24
// 00801b3d  85c0                 test eax, eax
// 00801b3f  7504                 jne 0x801b45
// 00801b41  5e                   pop esi
// 00801b42  c20400               ret 4
// 00801b45  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 00801b4f  b801000000           mov eax, 1
// 00801b54  5e                   pop esi
// 00801b55  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

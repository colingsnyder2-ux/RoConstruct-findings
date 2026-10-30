// roc 2011-06 008691f0  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008691f0
//
// 008691f0  8b442404             mov eax, dword ptr [esp + 4]
// 008691f4  56                   push esi
// 008691f5  50                   push eax
// 008691f6  8bf1                 mov esi, ecx
// 008691f8  e8e50efaff           call 0x80a0e2
// 008691fd  85c0                 test eax, eax
// 008691ff  7504                 jne 0x869205
// 00869201  5e                   pop esi
// 00869202  c20400               ret 4
// 00869205  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 0086920f  b801000000           mov eax, 1
// 00869214  5e                   pop esi
// 00869215  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

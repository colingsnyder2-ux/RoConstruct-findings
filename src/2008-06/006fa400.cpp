// roc 2008-06 006fa400  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa400
//
// 006fa400  8b442404             mov eax, dword ptr [esp + 4]
// 006fa404  56                   push esi
// 006fa405  50                   push eax
// 006fa406  8bf1                 mov esi, ecx
// 006fa408  e8fd62faff           call 0x6a070a
// 006fa40d  85c0                 test eax, eax
// 006fa40f  7504                 jne 0x6fa415
// 006fa411  5e                   pop esi
// 006fa412  c20400               ret 4
// 006fa415  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 006fa41f  b801000000           mov eax, 1
// 006fa424  5e                   pop esi
// 006fa425  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

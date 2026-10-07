// roc 2012-06 00a5e3c0  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e3c0
//
// 00a5e3c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a5e3c4  56                   push esi
// 00a5e3c5  50                   push eax
// 00a5e3c6  8bf1                 mov esi, ecx
// 00a5e3c8  e8d13df2ff           call 0x98219e
// 00a5e3cd  85c0                 test eax, eax
// 00a5e3cf  7504                 jne 0xa5e3d5
// 00a5e3d1  5e                   pop esi
// 00a5e3d2  c20400               ret 4
// 00a5e3d5  c6465c00             mov byte ptr [esi + 0x5c], 0
// 00a5e3d9  b801000000           mov eax, 1
// 00a5e3de  5e                   pop esi
// 00a5e3df  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?PreCreateWindow@CXTPColorHex@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageStandard.cpp

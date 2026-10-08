// from server: 100% by auto
// roc 2008-06 00785dd0  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785dd0
//
// 00785dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00785dd4  56                   push esi
// 00785dd5  50                   push eax
// 00785dd6  8bf1                 mov esi, ecx
// 00785dd8  e82da9f1ff           call 0x6a070a
// 00785ddd  85c0                 test eax, eax
// 00785ddf  7504                 jne 0x785de5
// 00785de1  5e                   pop esi
// 00785de2  c20400               ret 4
// 00785de5  c6465c00             mov byte ptr [esi + 0x5c], 0
// 00785de9  b801000000           mov eax, 1
// 00785dee  5e                   pop esi
// 00785def  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?PreCreateWindow@CXTColorHex@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp

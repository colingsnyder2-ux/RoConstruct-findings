// from server: 100% by auto
// roc 2012-06 00a62630  unit: CXTColorBase  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62630
//
// 00a62630  8b442404             mov eax, dword ptr [esp + 4]
// 00a62634  56                   push esi
// 00a62635  50                   push eax
// 00a62636  8bf1                 mov esi, ecx
// 00a62638  e861fbf1ff           call 0x98219e
// 00a6263d  85c0                 test eax, eax
// 00a6263f  7504                 jne 0xa62645
// 00a62641  5e                   pop esi
// 00a62642  c20400               ret 4
// 00a62645  c6465400             mov byte ptr [esi + 0x54], 0
// 00a62649  b801000000           mov eax, 1
// 00a6264e  5e                   pop esi
// 00a6264f  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?PreCreateWindow@CXTPColorBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp

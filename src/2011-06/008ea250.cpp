// roc 2011-06 008ea250  unit: CXTColorBase  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea250
//
// 008ea250  8b442404             mov eax, dword ptr [esp + 4]
// 008ea254  56                   push esi
// 008ea255  50                   push eax
// 008ea256  8bf1                 mov esi, ecx
// 008ea258  e885fef1ff           call 0x80a0e2
// 008ea25d  85c0                 test eax, eax
// 008ea25f  7504                 jne 0x8ea265
// 008ea261  5e                   pop esi
// 008ea262  c20400               ret 4
// 008ea265  c6465400             mov byte ptr [esi + 0x54], 0
// 008ea269  b801000000           mov eax, 1
// 008ea26e  5e                   pop esi
// 008ea26f  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?PreCreateWindow@CXTPColorBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp

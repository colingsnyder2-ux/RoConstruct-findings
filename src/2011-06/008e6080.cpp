// roc 2011-06 008e6080  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e6080
//
// 008e6080  8b442404             mov eax, dword ptr [esp + 4]
// 008e6084  56                   push esi
// 008e6085  50                   push eax
// 008e6086  8bf1                 mov esi, ecx
// 008e6088  e85540f2ff           call 0x80a0e2
// 008e608d  85c0                 test eax, eax
// 008e608f  7504                 jne 0x8e6095
// 008e6091  5e                   pop esi
// 008e6092  c20400               ret 4
// 008e6095  c6465c00             mov byte ptr [esi + 0x5c], 0
// 008e6099  b801000000           mov eax, 1
// 008e609e  5e                   pop esi
// 008e609f  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageStandard.cpp (function ?PreCreateWindow@CXTPColorHex@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageStandard.cpp

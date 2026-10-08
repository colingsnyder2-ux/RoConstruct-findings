// roc 2012-06 009e1760  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1760
//
// 009e1760  8b442404             mov eax, dword ptr [esp + 4]
// 009e1764  56                   push esi
// 009e1765  50                   push eax
// 009e1766  8bf1                 mov esi, ecx
// 009e1768  e8310afaff           call 0x98219e
// 009e176d  85c0                 test eax, eax
// 009e176f  7504                 jne 0x9e1775
// 009e1771  5e                   pop esi
// 009e1772  c20400               ret 4
// 009e1775  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 009e177f  b801000000           mov eax, 1
// 009e1784  5e                   pop esi
// 009e1785  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

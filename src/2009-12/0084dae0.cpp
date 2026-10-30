// roc 2009-12 0084dae0  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dae0
//
// 0084dae0  8b442404             mov eax, dword ptr [esp + 4]
// 0084dae4  56                   push esi
// 0084dae5  50                   push eax
// 0084dae6  8bf1                 mov esi, ecx
// 0084dae8  e8f75dfaff           call 0x7f38e4
// 0084daed  85c0                 test eax, eax
// 0084daef  7504                 jne 0x84daf5
// 0084daf1  5e                   pop esi
// 0084daf2  c20400               ret 4
// 0084daf5  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 0084daff  b801000000           mov eax, 1
// 0084db04  5e                   pop esi
// 0084db05  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreCreateWindow@CXTPPropertyGrid@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

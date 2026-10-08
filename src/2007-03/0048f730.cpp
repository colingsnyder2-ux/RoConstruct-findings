// roc 2007-03 0048f730  unit: seg_00480000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048f730
//
// 0048f730  8b442404             mov eax, dword ptr [esp + 4]
// 0048f734  50                   push eax
// 0048f735  e896feffff           call 0x48f5d0
// 0048f73a  83c404               add esp, 4
// 0048f73d  85c0                 test eax, eax
// 0048f73f  7411                 je 0x48f752
// 0048f741  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0048f747  85c0                 test eax, eax
// 0048f749  7407                 je 0x48f752
// 0048f74b  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0048f751  c3                   ret 
// 0048f752  33c0                 xor eax, eax
// 0048f754  c3                   ret 
// library rbxgs-net/Players.cpp (function ?findLocalCharacter@Players@Network@RBX@@SAPAVModelInstance@3@PBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

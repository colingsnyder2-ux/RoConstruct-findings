// roc 2007-03 0048f710  unit: seg_00480000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048f710
//
// 0048f710  8b442404             mov eax, dword ptr [esp + 4]
// 0048f714  50                   push eax
// 0048f715  e8b6feffff           call 0x48f5d0
// 0048f71a  83c404               add esp, 4
// 0048f71d  85c0                 test eax, eax
// 0048f71f  7407                 je 0x48f728
// 0048f721  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0048f727  c3                   ret 
// 0048f728  33c0                 xor eax, eax
// 0048f72a  c3                   ret 
// library rbxgs-net/Players.cpp (function ?findLocalPlayer@Players@Network@RBX@@SAPAVPlayer@23@PBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

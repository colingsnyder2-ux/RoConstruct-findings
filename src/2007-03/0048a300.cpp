// roc 2007-03 0048a300  unit: seg_00480000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048a300
//
// 0048a300  8b442404             mov eax, dword ptr [esp + 4]
// 0048a304  3b8128010000         cmp eax, dword ptr [ecx + 0x128]
// 0048a30a  7413                 je 0x48a31f
// 0048a30c  898128010000         mov dword ptr [ecx + 0x128], eax
// 0048a312  c744240448848b00     mov dword ptr [esp + 4], 0x8b8448
// 0048a31a  e9219bfbff           jmp 0x443e40
// 0048a31f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?setTeamColor@Player@Network@RBX@@QAEXVBrickColor@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

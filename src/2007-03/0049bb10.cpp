// roc 2007-03 0049bb10  unit: seg_00490000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bb10
//
// 0049bb10  8b442404             mov eax, dword ptr [esp + 4]
// 0049bb14  6a00                 push 0
// 0049bb16  6860f48800           push 0x88f460
// 0049bb1b  6864108800           push 0x881064
// 0049bb20  6a00                 push 0
// 0049bb22  50                   push eax
// 0049bb23  e89e361800           call 0x61f1c6
// 0049bb28  83c414               add esp, 0x14
// 0049bb2b  85c0                 test eax, eax
// 0049bb2d  0f94c0               sete al
// 0049bb30  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?wantReplicate@Replicator@Network@RBX@@MBE_NPBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp

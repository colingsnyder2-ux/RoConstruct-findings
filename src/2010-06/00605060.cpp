// roc 2010-06 00605060  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00605060
//
// 00605060  8b442404             mov eax, dword ptr [esp + 4]
// 00605064  50                   push eax
// 00605065  e886ffffff           call 0x604ff0
// 0060506a  83c404               add esp, 4
// 0060506d  85c0                 test eax, eax
// 0060506f  7407                 je 0x605078
// 00605071  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 00605077  c3                   ret 
// 00605078  33c0                 xor eax, eax
// 0060507a  c3                   ret 
// library rbxgs-net/Players.cpp (function ?findLocalPlayer@Players@Network@RBX@@SAPAVPlayer@23@PBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

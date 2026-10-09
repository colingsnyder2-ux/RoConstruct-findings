// roc 2009-12 00699860  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00699860
//
// 00699860  8b442404             mov eax, dword ptr [esp + 4]
// 00699864  50                   push eax
// 00699865  e886ffffff           call 0x6997f0
// 0069986a  83c404               add esp, 4
// 0069986d  85c0                 test eax, eax
// 0069986f  7407                 je 0x699878
// 00699871  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 00699877  c3                   ret 
// 00699878  33c0                 xor eax, eax
// 0069987a  c3                   ret 
// library rbxgs-net/Players.cpp (function ?findLocalPlayer@Players@Network@RBX@@SAPAVPlayer@23@PBVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp

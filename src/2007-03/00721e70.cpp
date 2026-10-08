// roc 2007-03 00721e70  unit: seg_00720000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721e70
//
// 00721e70  8b442404             mov eax, dword ptr [esp + 4]
// 00721e74  894134               mov dword ptr [ecx + 0x34], eax
// 00721e77  c20400               ret 4
// library rbxgs-raknet/ReplicaManager.cpp (function ?OnAttach@ReplicaManager@@MAEXPAVRakPeerInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp

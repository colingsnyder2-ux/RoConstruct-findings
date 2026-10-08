// roc 2008-06 004aae80  unit: FilePacketLogger  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aae80
//
// 004aae80  8b442404             mov eax, dword ptr [esp + 4]
// 004aae84  56                   push esi
// 004aae85  50                   push eax
// 004aae86  8bf1                 mov esi, ecx
// 004aae88  e8a3a91900           call 0x645830
// 004aae8d  8b16                 mov edx, dword ptr [esi]
// 004aae8f  8b422c               mov eax, dword ptr [edx + 0x2c]
// 004aae92  8bce                 mov ecx, esi
// 004aae94  ffd0                 call eax
// 004aae96  5e                   pop esi
// 004aae97  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?OnAttach@FilePacketLogger@@UAEXPAVRakPeerInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp

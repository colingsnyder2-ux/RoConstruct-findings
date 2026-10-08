// roc 2007-03 0049ba90  unit: seg_00490000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049ba90
//
// 0049ba90  8b442404             mov eax, dword ptr [esp + 4]
// 0049ba94  56                   push esi
// 0049ba95  50                   push eax
// 0049ba96  8bf1                 mov esi, ecx
// 0049ba98  e873ea0000           call 0x4aa510
// 0049ba9d  8b16                 mov edx, dword ptr [esi]
// 0049ba9f  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0049baa2  8bce                 mov ecx, esi
// 0049baa4  ffd0                 call eax
// 0049baa6  5e                   pop esi
// 0049baa7  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?OnAttach@FilePacketLogger@@UAEXPAVRakPeerInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp

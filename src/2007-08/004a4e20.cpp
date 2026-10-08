// roc 2007-08 004a4e20  unit: FilePacketLogger  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4e20
//
// 004a4e20  8b442404             mov eax, dword ptr [esp + 4]
// 004a4e24  56                   push esi
// 004a4e25  50                   push eax
// 004a4e26  8bf1                 mov esi, ecx
// 004a4e28  e803431600           call 0x609130
// 004a4e2d  8b16                 mov edx, dword ptr [esi]
// 004a4e2f  8b422c               mov eax, dword ptr [edx + 0x2c]
// 004a4e32  8bce                 mov ecx, esi
// 004a4e34  ffd0                 call eax
// 004a4e36  5e                   pop esi
// 004a4e37  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?OnAttach@FilePacketLogger@@UAEXPAVRakPeerInterface@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp

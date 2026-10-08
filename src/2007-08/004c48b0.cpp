// roc 2007-08 004c48b0  unit: RakPeer  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c48b0
//
// 004c48b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c48b4  56                   push esi
// 004c48b5  50                   push eax
// 004c48b6  8bf1                 mov esi, ecx
// 004c48b8  ff1530ef7700         call dword ptr [0x77ef30]
// 004c48be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c48c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c48c6  51                   push ecx
// 004c48c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c48cb  50                   push eax
// 004c48cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c48d0  52                   push edx
// 004c48d1  50                   push eax
// 004c48d2  51                   push ecx
// 004c48d3  8bce                 mov ecx, esi
// 004c48d5  e826ffffff           call 0x4c4800
// 004c48da  5e                   pop esi
// 004c48db  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHQADG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp

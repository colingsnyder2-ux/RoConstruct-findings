// roc 2007-03 004b96d0  unit: seg_004b0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b96d0
//
// 004b96d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b96d4  56                   push esi
// 004b96d5  50                   push eax
// 004b96d6  8bf1                 mov esi, ecx
// 004b96d8  ff1540f07700         call dword ptr [0x77f040]
// 004b96de  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b96e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b96e6  51                   push ecx
// 004b96e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b96eb  50                   push eax
// 004b96ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b96f0  52                   push edx
// 004b96f1  50                   push eax
// 004b96f2  51                   push ecx
// 004b96f3  8bce                 mov ecx, esi
// 004b96f5  e856ffffff           call 0x4b9650
// 004b96fa  5e                   pop esi
// 004b96fb  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHQADG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp

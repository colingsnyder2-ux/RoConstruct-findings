// roc 2008-06 004ce800  unit: RBX::Network::PhysicsSender  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce800
//
// 004ce800  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ce804  56                   push esi
// 004ce805  50                   push eax
// 004ce806  8bf1                 mov esi, ecx
// 004ce808  ff15bc2e8000         call dword ptr [0x802ebc]
// 004ce80e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ce812  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ce816  51                   push ecx
// 004ce817  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ce81b  50                   push eax
// 004ce81c  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ce820  52                   push edx
// 004ce821  50                   push eax
// 004ce822  51                   push ecx
// 004ce823  8bce                 mov ecx, esi
// 004ce825  e856ffffff           call 0x4ce780
// 004ce82a  5e                   pop esi
// 004ce82b  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHQADG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp

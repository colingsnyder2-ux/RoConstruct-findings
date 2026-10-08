// roc 2008-06 004ce6b0  unit: RBX::Network::PhysicsSender  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce6b0
//
// 004ce6b0  81ece8050000         sub esp, 0x5e8
// 004ce6b6  b802000000           mov eax, 2
// 004ce6bb  6689442404           mov word ptr [esp + 4], ax
// 004ce6c0  8b8424ec050000       mov eax, dword ptr [esp + 0x5ec]
// 004ce6c7  c7042410000000       mov dword ptr [esp], 0x10
// 004ce6ce  83f8ff               cmp eax, -1
// 004ce6d1  7514                 jne 0x4ce6e7
// 004ce6d3  8b8c24f4050000       mov ecx, dword ptr [esp + 0x5f4]
// 004ce6da  8901                 mov dword ptr [ecx], eax
// 004ce6dc  0bc0                 or eax, eax
// 004ce6de  81c4e8050000         add esp, 0x5e8
// 004ce6e4  c21000               ret 0x10
// 004ce6e7  56                   push esi
// 004ce6e8  8d542404             lea edx, [esp + 4]
// 004ce6ec  52                   push edx
// 004ce6ed  8d4c240c             lea ecx, [esp + 0xc]
// 004ce6f1  51                   push ecx
// 004ce6f2  6a00                 push 0
// 004ce6f4  68d4050000           push 0x5d4
// 004ce6f9  8d542428             lea edx, [esp + 0x28]
// 004ce6fd  52                   push edx
// 004ce6fe  50                   push eax
// 004ce6ff  ff15e82e8000         call dword ptr [0x802ee8]
// 004ce705  8bf0                 mov esi, eax
// 004ce707  85f6                 test esi, esi
// 004ce709  751a                 jne 0x4ce725
// 004ce70b  8b8424f8050000       mov eax, dword ptr [esp + 0x5f8]
// 004ce712  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 004ce718  83c8ff               or eax, 0xffffffff
// 004ce71b  5e                   pop esi
// 004ce71c  81c4e8050000         add esp, 0x5e8
// 004ce722  c21000               ret 0x10
// 004ce725  7e3e                 jle 0x4ce765
// 004ce727  8b4c240a             mov ecx, dword ptr [esp + 0xa]
// 004ce72b  51                   push ecx
// 004ce72c  ff15c42e8000         call dword ptr [0x802ec4]
// 004ce732  8b9424fc050000       mov edx, dword ptr [esp + 0x5fc]
// 004ce739  8b8c24f4050000       mov ecx, dword ptr [esp + 0x5f4]
// 004ce740  52                   push edx
// 004ce741  51                   push ecx
// 004ce742  56                   push esi
// 004ce743  0fb7c0               movzx eax, ax
// 004ce746  8d542424             lea edx, [esp + 0x24]
// 004ce74a  52                   push edx
// 004ce74b  50                   push eax
// 004ce74c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ce750  50                   push eax
// 004ce751  e80a42ffff           call 0x4c2960
// 004ce756  b801000000           mov eax, 1
// 004ce75b  5e                   pop esi
// 004ce75c  81c4e8050000         add esp, 0x5e8
// 004ce762  c21000               ret 0x10
// 004ce765  8b8c24f8050000       mov ecx, dword ptr [esp + 0x5f8]
// 004ce76c  c70100000000         mov dword ptr [ecx], 0
// 004ce772  33c0                 xor eax, eax
// 004ce774  5e                   pop esi
// 004ce775  81c4e8050000         add esp, 0x5e8
// 004ce77b  c21000               ret 0x10
// library rbxgs-raknet/SocketLayer.cpp (function ?RecvFrom@SocketLayer@@QAEHIPAVRakPeer@@PAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp

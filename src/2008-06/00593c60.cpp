// roc 2008-06 00593c60  unit: RBX::Lua::FunctionRef  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593c60
//
// 00593c60  56                   push esi
// 00593c61  8bf1                 mov esi, ecx
// 00593c63  8b4620               mov eax, dword ptr [esi + 0x20]
// 00593c66  85c0                 test eax, eax
// 00593c68  741d                 je 0x593c87
// 00593c6a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00593c6d  85c9                 test ecx, ecx
// 00593c6f  7416                 je 0x593c87
// 00593c71  50                   push eax
// 00593c72  68f0d8ffff           push 0xffffd8f0
// 00593c77  51                   push ecx
// 00593c78  e8f3d40700           call 0x611170
// 00593c7d  83c40c               add esp, 0xc
// 00593c80  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00593c87  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593c8a  85c0                 test eax, eax
// 00593c8c  7420                 je 0x593cae
// 00593c8e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00593c91  51                   push ecx
// 00593c92  68f0d8ffff           push 0xffffd8f0
// 00593c97  50                   push eax
// 00593c98  e8d3d40700           call 0x611170
// 00593c9d  83c40c               add esp, 0xc
// 00593ca0  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00593ca7  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00593cae  5e                   pop esi
// 00593caf  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@FunctionRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

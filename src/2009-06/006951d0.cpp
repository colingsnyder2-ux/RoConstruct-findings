// roc 2009-06 006951d0  unit: RBX::Lua::ThreadRef  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006951d0
//
// 006951d0  56                   push esi
// 006951d1  8bf1                 mov esi, ecx
// 006951d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006951d6  85c0                 test eax, eax
// 006951d8  7420                 je 0x6951fa
// 006951da  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006951dd  51                   push ecx
// 006951de  68f0d8ffff           push 0xffffd8f0
// 006951e3  50                   push eax
// 006951e4  e867550200           call 0x6ba750
// 006951e9  83c40c               add esp, 0xc
// 006951ec  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006951f3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006951fa  5e                   pop esi
// 006951fb  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@ThreadRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

// roc 2008-06 00593bb0  unit: RBX::Lua::ThreadRef  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593bb0
//
// 00593bb0  56                   push esi
// 00593bb1  8bf1                 mov esi, ecx
// 00593bb3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593bb6  85c0                 test eax, eax
// 00593bb8  7420                 je 0x593bda
// 00593bba  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00593bbd  51                   push ecx
// 00593bbe  68f0d8ffff           push 0xffffd8f0
// 00593bc3  50                   push eax
// 00593bc4  e8a7d50700           call 0x611170
// 00593bc9  83c40c               add esp, 0xc
// 00593bcc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00593bd3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00593bda  5e                   pop esi
// 00593bdb  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@ThreadRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

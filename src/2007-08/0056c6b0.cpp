// roc 2007-08 0056c6b0  unit: RBX::Lua::ThreadRef  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c6b0
//
// 0056c6b0  56                   push esi
// 0056c6b1  8bf1                 mov esi, ecx
// 0056c6b3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056c6b6  85c0                 test eax, eax
// 0056c6b8  7420                 je 0x56c6da
// 0056c6ba  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0056c6bd  51                   push ecx
// 0056c6be  68f0d8ffff           push 0xffffd8f0
// 0056c6c3  50                   push eax
// 0056c6c4  e847270500           call 0x5bee10
// 0056c6c9  83c40c               add esp, 0xc
// 0056c6cc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0056c6d3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0056c6da  5e                   pop esi
// 0056c6db  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@ThreadRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

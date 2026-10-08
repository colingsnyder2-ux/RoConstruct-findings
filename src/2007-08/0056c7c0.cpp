// roc 2007-08 0056c7c0  unit: RBX::Lua::FunctionRef  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c7c0
//
// 0056c7c0  56                   push esi
// 0056c7c1  8bf1                 mov esi, ecx
// 0056c7c3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0056c7c6  85c0                 test eax, eax
// 0056c7c8  741d                 je 0x56c7e7
// 0056c7ca  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056c7cd  85c9                 test ecx, ecx
// 0056c7cf  7416                 je 0x56c7e7
// 0056c7d1  50                   push eax
// 0056c7d2  68f0d8ffff           push 0xffffd8f0
// 0056c7d7  51                   push ecx
// 0056c7d8  e833260500           call 0x5bee10
// 0056c7dd  83c40c               add esp, 0xc
// 0056c7e0  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0056c7e7  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056c7ea  85c0                 test eax, eax
// 0056c7ec  7420                 je 0x56c80e
// 0056c7ee  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0056c7f1  51                   push ecx
// 0056c7f2  68f0d8ffff           push 0xffffd8f0
// 0056c7f7  50                   push eax
// 0056c7f8  e813260500           call 0x5bee10
// 0056c7fd  83c40c               add esp, 0xc
// 0056c800  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0056c807  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0056c80e  5e                   pop esi
// 0056c80f  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@FunctionRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp

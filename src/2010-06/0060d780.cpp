// roc 2010-06 0060d780  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d780
//
// 0060d780  6aff                 push -1
// 0060d782  6868a09900           push 0x99a068
// 0060d787  64a100000000         mov eax, dword ptr fs:[0]
// 0060d78d  50                   push eax
// 0060d78e  64892500000000       mov dword ptr fs:[0], esp
// 0060d795  51                   push ecx
// 0060d796  56                   push esi
// 0060d797  8bf1                 mov esi, ecx
// 0060d799  89742404             mov dword ptr [esp + 4], esi
// 0060d79d  8d4e04               lea ecx, [esi + 4]
// 0060d7a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060d7a8  e853cc0a00           call 0x6ba400
// 0060d7ad  f644241801           test byte ptr [esp + 0x18], 1
// 0060d7b2  c7063c0aa000         mov dword ptr [esi], 0xa00a3c
// 0060d7b8  7409                 je 0x60d7c3
// 0060d7ba  56                   push esi
// 0060d7bb  e8daa11900           call 0x7a799a
// 0060d7c0  83c404               add esp, 4
// 0060d7c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060d7c7  8bc6                 mov eax, esi
// 0060d7c9  5e                   pop esi
// 0060d7ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d7d1  83c410               add esp, 0x10
// 0060d7d4  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

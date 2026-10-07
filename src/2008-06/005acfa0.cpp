// roc 2008-06 005acfa0  unit: RBX::Reflection::UTuple::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acfa0
//
// 005acfa0  6aff                 push -1
// 005acfa2  6898987d00           push 0x7d9898
// 005acfa7  64a100000000         mov eax, dword ptr fs:[0]
// 005acfad  50                   push eax
// 005acfae  64892500000000       mov dword ptr fs:[0], esp
// 005acfb5  51                   push ecx
// 005acfb6  56                   push esi
// 005acfb7  8bf1                 mov esi, ecx
// 005acfb9  89742404             mov dword ptr [esp + 4], esi
// 005acfbd  8d4e04               lea ecx, [esi + 4]
// 005acfc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005acfc8  e86306e8ff           call 0x42d630
// 005acfcd  f644241801           test byte ptr [esp + 0x18], 1
// 005acfd2  c7061cba8000         mov dword ptr [esi], 0x80ba1c
// 005acfd8  7409                 je 0x5acfe3
// 005acfda  56                   push esi
// 005acfdb  e89a360f00           call 0x6a067a
// 005acfe0  83c404               add esp, 4
// 005acfe3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acfe7  8bc6                 mov eax, esi
// 005acfe9  5e                   pop esi
// 005acfea  64890d00000000       mov dword ptr fs:[0], ecx
// 005acff1  83c410               add esp, 0x10
// 005acff4  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

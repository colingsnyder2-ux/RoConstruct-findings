// roc 2009-12 006a1ba0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1ba0
//
// 006a1ba0  6aff                 push -1
// 006a1ba2  6888989300           push 0x939888
// 006a1ba7  64a100000000         mov eax, dword ptr fs:[0]
// 006a1bad  50                   push eax
// 006a1bae  64892500000000       mov dword ptr fs:[0], esp
// 006a1bb5  51                   push ecx
// 006a1bb6  56                   push esi
// 006a1bb7  8bf1                 mov esi, ecx
// 006a1bb9  89742404             mov dword ptr [esp + 4], esi
// 006a1bbd  8d4e04               lea ecx, [esi + 4]
// 006a1bc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a1bc8  e873910900           call 0x73ad40
// 006a1bcd  f644241801           test byte ptr [esp + 0x18], 1
// 006a1bd2  c70684fe9900         mov dword ptr [esi], 0x99fe84
// 006a1bd8  7409                 je 0x6a1be3
// 006a1bda  56                   push esi
// 006a1bdb  e87a1c1500           call 0x7f385a
// 006a1be0  83c404               add esp, 4
// 006a1be3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a1be7  8bc6                 mov eax, esi
// 006a1be9  5e                   pop esi
// 006a1bea  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1bf1  83c410               add esp, 0x10
// 006a1bf4  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

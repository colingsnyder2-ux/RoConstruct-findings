// roc 2009-06 005ff510  unit: RBX::Reflection::UTuple::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff510
//
// 005ff510  6aff                 push -1
// 005ff512  68a8688600           push 0x8668a8
// 005ff517  64a100000000         mov eax, dword ptr fs:[0]
// 005ff51d  50                   push eax
// 005ff51e  64892500000000       mov dword ptr fs:[0], esp
// 005ff525  51                   push ecx
// 005ff526  56                   push esi
// 005ff527  8bf1                 mov esi, ecx
// 005ff529  89742404             mov dword ptr [esp + 4], esi
// 005ff52d  8d4e04               lea ecx, [esi + 4]
// 005ff530  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ff538  e88371e2ff           call 0x4266c0
// 005ff53d  f644241801           test byte ptr [esp + 0x18], 1
// 005ff542  c70638d38a00         mov dword ptr [esi], 0x8ad338
// 005ff548  7409                 je 0x5ff553
// 005ff54a  56                   push esi
// 005ff54b  e8e2941100           call 0x718a32
// 005ff550  83c404               add esp, 4
// 005ff553  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff557  8bc6                 mov eax, esi
// 005ff559  5e                   pop esi
// 005ff55a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff561  83c410               add esp, 0x10
// 005ff564  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

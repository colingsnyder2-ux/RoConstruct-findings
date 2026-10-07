// roc 2009-06 00635280  unit: RBX::Lua::VFunctionRef::?$holder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635280
//
// 00635280  6aff                 push -1
// 00635282  68a8688600           push 0x8668a8
// 00635287  64a100000000         mov eax, dword ptr fs:[0]
// 0063528d  50                   push eax
// 0063528e  64892500000000       mov dword ptr fs:[0], esp
// 00635295  51                   push ecx
// 00635296  56                   push esi
// 00635297  8bf1                 mov esi, ecx
// 00635299  89742404             mov dword ptr [esp + 4], esi
// 0063529d  8d4e04               lea ecx, [esi + 4]
// 006352a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006352a8  e873060600           call 0x695920
// 006352ad  f644241801           test byte ptr [esp + 0x18], 1
// 006352b2  c70638d38a00         mov dword ptr [esi], 0x8ad338
// 006352b8  7409                 je 0x6352c3
// 006352ba  56                   push esi
// 006352bb  e872370e00           call 0x718a32
// 006352c0  83c404               add esp, 4
// 006352c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006352c7  8bc6                 mov eax, esi
// 006352c9  5e                   pop esi
// 006352ca  64890d00000000       mov dword ptr fs:[0], ecx
// 006352d1  83c410               add esp, 0x10
// 006352d4  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??_G?$holder@VFunctionRef@Lua@RBX@@@any@boost@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2007-08 00543ed0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543ed0
//
// 00543ed0  56                   push esi
// 00543ed1  8bf1                 mov esi, ecx
// 00543ed3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00543ed6  50                   push eax
// 00543ed7  e886bd0e00           call 0x62fc62
// 00543edc  83c404               add esp, 4
// 00543edf  f644240801           test byte ptr [esp + 8], 1
// 00543ee4  c706b4707800         mov dword ptr [esi], 0x7870b4
// 00543eea  7409                 je 0x543ef5
// 00543eec  56                   push esi
// 00543eed  e870bd0e00           call 0x62fc62
// 00543ef2  83c404               add esp, 4
// 00543ef5  8bc6                 mov eax, esi
// 00543ef7  5e                   pop esi
// 00543ef8  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??_G?$TypedPropertyDescriptor@_N@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

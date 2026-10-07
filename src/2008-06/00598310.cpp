// roc 2008-06 00598310  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598310
//
// 00598310  56                   push esi
// 00598311  8bf1                 mov esi, ecx
// 00598313  8b4618               mov eax, dword ptr [esi + 0x18]
// 00598316  85c0                 test eax, eax
// 00598318  7409                 je 0x598323
// 0059831a  50                   push eax
// 0059831b  e85a831000           call 0x6a067a
// 00598320  83c404               add esp, 4
// 00598323  f644240801           test byte ptr [esp + 8], 1
// 00598328  c70630b78000         mov dword ptr [esi], 0x80b730
// 0059832e  7409                 je 0x598339
// 00598330  56                   push esi
// 00598331  e844831000           call 0x6a067a
// 00598336  83c404               add esp, 4
// 00598339  8bc6                 mov eax, esi
// 0059833b  5e                   pop esi
// 0059833c  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??_G?$TypedPropertyDescriptor@_N@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

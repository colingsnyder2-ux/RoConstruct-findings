// roc 2009-06 00673840  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673840
//
// 00673840  56                   push esi
// 00673841  8bf1                 mov esi, ecx
// 00673843  8b4618               mov eax, dword ptr [esi + 0x18]
// 00673846  50                   push eax
// 00673847  e8e6510a00           call 0x718a32
// 0067384c  83c404               add esp, 4
// 0067384f  f644240801           test byte ptr [esp + 8], 1
// 00673854  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 0067385a  7409                 je 0x673865
// 0067385c  56                   push esi
// 0067385d  e8d0510a00           call 0x718a32
// 00673862  83c404               add esp, 4
// 00673865  8bc6                 mov eax, esi
// 00673867  5e                   pop esi
// 00673868  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??_G?$TypedPropertyDescriptor@_N@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

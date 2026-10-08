// roc 2007-03 00603670  unit: seg_00600000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603670
//
// 00603670  56                   push esi
// 00603671  8bf1                 mov esi, ecx
// 00603673  8b4618               mov eax, dword ptr [esi + 0x18]
// 00603676  50                   push eax
// 00603677  e874aa0100           call 0x61e0f0
// 0060367c  83c404               add esp, 4
// 0060367f  f644240801           test byte ptr [esp + 8], 1
// 00603684  c70664617800         mov dword ptr [esi], 0x786164
// 0060368a  7409                 je 0x603695
// 0060368c  56                   push esi
// 0060368d  e85eaa0100           call 0x61e0f0
// 00603692  83c404               add esp, 4
// 00603695  8bc6                 mov eax, esi
// 00603697  5e                   pop esi
// 00603698  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??_G?$TypedPropertyDescriptor@_N@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

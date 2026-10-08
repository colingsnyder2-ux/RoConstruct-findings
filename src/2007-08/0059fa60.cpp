// roc 2007-08 0059fa60  unit: RBX::VGameSettings::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059fa60
//
// 0059fa60  56                   push esi
// 0059fa61  8bf1                 mov esi, ecx
// 0059fa63  c70684317b00         mov dword ptr [esi], 0x7b3184
// 0059fa69  c746047c317b00       mov dword ptr [esi + 4], 0x7b317c
// 0059fa70  c7461074317b00       mov dword ptr [esi + 0x10], 0x7b3174
// 0059fa77  c7461464317b00       mov dword ptr [esi + 0x14], 0x7b3164
// 0059fa7e  c7462c54317b00       mov dword ptr [esi + 0x2c], 0x7b3154
// 0059fa85  c7464444317b00       mov dword ptr [esi + 0x44], 0x7b3144
// 0059fa8c  c7465c34317b00       mov dword ptr [esi + 0x5c], 0x7b3134
// 0059fa93  c7467424317b00       mov dword ptr [esi + 0x74], 0x7b3124
// 0059fa9a  c7868c00000014317b00 mov dword ptr [esi + 0x8c], 0x7b3114
// 0059faa4  e80708faff           call 0x5402b0
// 0059faa9  f644240801           test byte ptr [esp + 8], 1
// 0059faae  740a                 je 0x59faba
// 0059fab0  56                   push esi
// 0059fab1  ff15c4e67700         call dword ptr [0x77e6c4]
// 0059fab7  83c404               add esp, 4
// 0059faba  8bc6                 mov eax, esi
// 0059fabc  5e                   pop esi
// 0059fabd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

// roc 2007-03 005b3c00  unit: seg_005b0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3c00
//
// 005b3c00  56                   push esi
// 005b3c01  8bf1                 mov esi, ecx
// 005b3c03  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005b3c06  50                   push eax
// 005b3c07  e8e4a40600           call 0x61e0f0
// 005b3c0c  83c404               add esp, 4
// 005b3c0f  f644240801           test byte ptr [esp + 8], 1
// 005b3c14  c70664617800         mov dword ptr [esi], 0x786164
// 005b3c1a  7409                 je 0x5b3c25
// 005b3c1c  56                   push esi
// 005b3c1d  e8cea40600           call 0x61e0f0
// 005b3c22  83c404               add esp, 4
// 005b3c25  8bc6                 mov eax, esi
// 005b3c27  5e                   pop esi
// 005b3c28  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

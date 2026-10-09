// roc 2009-12 006b4790  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4790
//
// 006b4790  56                   push esi
// 006b4791  8bf1                 mov esi, ecx
// 006b4793  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006b4796  50                   push eax
// 006b4797  e8bef01300           call 0x7f385a
// 006b479c  83c404               add esp, 4
// 006b479f  f644240801           test byte ptr [esp + 8], 1
// 006b47a4  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 006b47aa  7409                 je 0x6b47b5
// 006b47ac  56                   push esi
// 006b47ad  e8a8f01300           call 0x7f385a
// 006b47b2  83c404               add esp, 4
// 006b47b5  8bc6                 mov eax, esi
// 006b47b7  5e                   pop esi
// 006b47b8  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

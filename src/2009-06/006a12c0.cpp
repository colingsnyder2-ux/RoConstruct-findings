// roc 2009-06 006a12c0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a12c0
//
// 006a12c0  56                   push esi
// 006a12c1  8bf1                 mov esi, ecx
// 006a12c3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006a12c6  50                   push eax
// 006a12c7  e866770700           call 0x718a32
// 006a12cc  83c404               add esp, 4
// 006a12cf  f644240801           test byte ptr [esp + 8], 1
// 006a12d4  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 006a12da  7409                 je 0x6a12e5
// 006a12dc  56                   push esi
// 006a12dd  e850770700           call 0x718a32
// 006a12e2  83c404               add esp, 4
// 006a12e5  8bc6                 mov eax, esi
// 006a12e7  5e                   pop esi
// 006a12e8  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

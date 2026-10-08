// roc 2007-08 0061b0b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b0b0
//
// 0061b0b0  56                   push esi
// 0061b0b1  8bf1                 mov esi, ecx
// 0061b0b3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061b0b6  50                   push eax
// 0061b0b7  e8a64b0100           call 0x62fc62
// 0061b0bc  83c404               add esp, 4
// 0061b0bf  f644240801           test byte ptr [esp + 8], 1
// 0061b0c4  c706b4707800         mov dword ptr [esi], 0x7870b4
// 0061b0ca  7409                 je 0x61b0d5
// 0061b0cc  56                   push esi
// 0061b0cd  e8904b0100           call 0x62fc62
// 0061b0d2  83c404               add esp, 4
// 0061b0d5  8bc6                 mov eax, esi
// 0061b0d7  5e                   pop esi
// 0061b0d8  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

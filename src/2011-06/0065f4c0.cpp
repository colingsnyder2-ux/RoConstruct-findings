// roc 2011-06 0065f4c0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065f4c0
//
// 0065f4c0  56                   push esi
// 0065f4c1  8bf1                 mov esi, ecx
// 0065f4c3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0065f4c6  85c0                 test eax, eax
// 0065f4c8  7409                 je 0x65f4d3
// 0065f4ca  50                   push eax
// 0065f4cb  e888ab1a00           call 0x80a058
// 0065f4d0  83c404               add esp, 4
// 0065f4d3  f644240801           test byte ptr [esp + 8], 1
// 0065f4d8  c706e0bea500         mov dword ptr [esi], 0xa5bee0
// 0065f4de  7409                 je 0x65f4e9
// 0065f4e0  56                   push esi
// 0065f4e1  e872ab1a00           call 0x80a058
// 0065f4e6  83c404               add esp, 4
// 0065f4e9  8bc6                 mov eax, esi
// 0065f4eb  5e                   pop esi
// 0065f4ec  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

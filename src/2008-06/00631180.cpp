// roc 2008-06 00631180  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631180
//
// 00631180  56                   push esi
// 00631181  8bf1                 mov esi, ecx
// 00631183  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00631186  85c0                 test eax, eax
// 00631188  7409                 je 0x631193
// 0063118a  50                   push eax
// 0063118b  e8eaf40600           call 0x6a067a
// 00631190  83c404               add esp, 4
// 00631193  f644240801           test byte ptr [esp + 8], 1
// 00631198  c70630b78000         mov dword ptr [esi], 0x80b730
// 0063119e  7409                 je 0x6311a9
// 006311a0  56                   push esi
// 006311a1  e8d4f40600           call 0x6a067a
// 006311a6  83c404               add esp, 4
// 006311a9  8bc6                 mov eax, esi
// 006311ab  5e                   pop esi
// 006311ac  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp

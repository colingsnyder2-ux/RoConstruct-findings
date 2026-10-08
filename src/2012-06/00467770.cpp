// roc 2012-06 00467770  unit: RBX::CRenderSettings::W4ResolutionPreset::?$EnumDesc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00467770
//
// 00467770  56                   push esi
// 00467771  8d7104               lea esi, [ecx + 4]
// 00467774  8bce                 mov ecx, esi
// 00467776  e8c5e1ffff           call 0x465940
// 0046777b  8b4604               mov eax, dword ptr [esi + 4]
// 0046777e  50                   push eax
// 0046777f  e890a95100           call 0x982114
// 00467784  83c404               add esp, 4
// 00467787  c7460400000000       mov dword ptr [esi + 4], 0
// 0046778e  5e                   pop esi
// 0046778f  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1SignatureDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp

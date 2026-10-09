// roc 2008-06 005dd4c0  unit: RBX::Message  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd4c0
//
// 005dd4c0  8b442404             mov eax, dword ptr [esp + 4]
// 005dd4c4  89480c               mov dword ptr [eax + 0xc], ecx
// 005dd4c7  89442404             mov dword ptr [esp + 4], eax
// 005dd4cb  e930ffffff           jmp 0x5dd400
// library openrbx-client/App\util\IRenderable.cpp (function ?onAdded@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp

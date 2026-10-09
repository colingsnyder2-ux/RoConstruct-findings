// roc 2009-06 00677d50  unit: RBX::Message  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677d50
//
// 00677d50  8b442404             mov eax, dword ptr [esp + 4]
// 00677d54  89480c               mov dword ptr [eax + 0xc], ecx
// 00677d57  89442404             mov dword ptr [esp + 4], eax
// 00677d5b  e930ffffff           jmp 0x677c90
// library openrbx-client/App\util\IRenderable.cpp (function ?onAdded@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp

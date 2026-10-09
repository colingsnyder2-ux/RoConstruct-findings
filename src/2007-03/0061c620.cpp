// roc 2007-03 0061c620  unit: seg_00610000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061c620
//
// 0061c620  8b442404             mov eax, dword ptr [esp + 4]
// 0061c624  89480c               mov dword ptr [eax + 0xc], ecx
// 0061c627  89442404             mov dword ptr [esp + 4], eax
// 0061c62b  e920ffffff           jmp 0x61c550
// library openrbx-client/App\util\IRenderable.cpp (function ?onAdded@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp

// roc 2007-08 005bd390  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd390
//
// 005bd390  8b442404             mov eax, dword ptr [esp + 4]
// 005bd394  89480c               mov dword ptr [eax + 0xc], ecx
// 005bd397  89442404             mov dword ptr [esp + 4], eax
// 005bd39b  e920ffffff           jmp 0x5bd2c0
// library openrbx-client/App\util\IRenderable.cpp (function ?onAdded@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp

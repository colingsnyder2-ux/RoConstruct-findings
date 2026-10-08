// from server: 100% by auto
// roc 2009-06 004d6090  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d6090
//
// 004d6090  8bc1                 mov eax, ecx
// 004d6092  c700285f8c00         mov dword ptr [eax], 0x8c5f28
// 004d6098  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ??0ios_base@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp

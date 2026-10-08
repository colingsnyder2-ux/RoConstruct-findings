// from server: 100% by auto
// roc 2007-08 00416bd0  unit: VCLuaFunction::?$CComObject  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416bd0
//
// 00416bd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00416bd4  e947fcffff           jmp 0x416820
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

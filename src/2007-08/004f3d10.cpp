// from server: 100% by auto
// roc 2007-08 004f3d10  unit: boost::bad_lexical_cast  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3d10
//
// 004f3d10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f3d14  e96727f8ff           jmp 0x476480
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

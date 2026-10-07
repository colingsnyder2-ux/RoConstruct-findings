// roc 2012-06 0084caa0  unit: RBX::Lua::LuaArguments  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084caa0
//
// 0084caa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084caa4  e9375dd2ff           jmp 0x5727e0
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

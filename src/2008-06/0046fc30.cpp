// roc 2008-06 0046fc30  unit: RBX::LDraw2Lua::LuaWriter  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fc30
//
// 0046fc30  8b442404             mov eax, dword ptr [esp + 4]
// 0046fc34  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046fc38  3bc1                 cmp eax, ecx
// 0046fc3a  7c02                 jl 0x46fc3e
// 0046fc3c  8bc1                 mov eax, ecx
// 0046fc3e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?iMin@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

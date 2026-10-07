// roc 2010-06 00483a70  unit: RBX::LDraw2Lua::LuaWriter  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483a70
//
// 00483a70  8bc1                 mov eax, ecx
// 00483a72  33c9                 xor ecx, ecx
// 00483a74  c7004832a100         mov dword ptr [eax], 0xa13248
// 00483a7a  894810               mov dword ptr [eax + 0x10], ecx
// 00483a7d  89480c               mov dword ptr [eax + 0xc], ecx
// 00483a80  894808               mov dword ptr [eax + 8], ecx
// 00483a83  894804               mov dword ptr [eax + 4], ecx
// 00483a86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

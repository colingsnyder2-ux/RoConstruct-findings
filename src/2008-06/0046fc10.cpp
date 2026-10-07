// roc 2008-06 0046fc10  unit: RBX::LDraw2Lua::LuaWriter  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fc10
//
// 0046fc10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fc14  8b442408             mov eax, dword ptr [esp + 8]
// 0046fc18  3bc8                 cmp ecx, eax
// 0046fc1a  7e0a                 jle 0x46fc26
// 0046fc1c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046fc20  3bc8                 cmp ecx, eax
// 0046fc22  7d02                 jge 0x46fc26
// 0046fc24  8bc1                 mov eax, ecx
// 0046fc26  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?iClamp@G3D@@YAHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

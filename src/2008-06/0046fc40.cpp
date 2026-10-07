// roc 2008-06 0046fc40  unit: RBX::LDraw2Lua::LuaWriter  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046fc40
//
// 0046fc40  8b442404             mov eax, dword ptr [esp + 4]
// 0046fc44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046fc48  3bc1                 cmp eax, ecx
// 0046fc4a  7d02                 jge 0x46fc4e
// 0046fc4c  8bc1                 mov eax, ecx
// 0046fc4e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?iMax@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp

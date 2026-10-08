// roc 2007-08 005b2fb0  unit: RBX::Assembly  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2fb0
//
// 005b2fb0  8b4108               mov eax, dword ptr [ecx + 8]
// 005b2fb3  33c9                 xor ecx, ecx
// 005b2fb5  394828               cmp dword ptr [eax + 0x28], ecx
// 005b2fb8  0f95c1               setne cl
// 005b2fbb  8ac1                 mov al, cl
// 005b2fbd  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getAnchored@Assembly@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

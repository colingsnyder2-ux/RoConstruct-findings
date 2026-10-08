// roc 2007-03 005abce0  unit: seg_005a0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abce0
//
// 005abce0  8b4108               mov eax, dword ptr [ecx + 8]
// 005abce3  33c9                 xor ecx, ecx
// 005abce5  394828               cmp dword ptr [eax + 0x28], ecx
// 005abce8  0f95c1               setne cl
// 005abceb  8ac1                 mov al, cl
// 005abced  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getAnchored@Assembly@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

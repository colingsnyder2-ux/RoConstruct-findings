// roc 2012-06 008289d0  unit: RBX::BallBallContact  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008289d0
//
// 008289d0  53                   push ebx
// 008289d1  56                   push esi
// 008289d2  8b7104               mov esi, dword ptr [ecx + 4]
// 008289d5  33c0                 xor eax, eax
// 008289d7  57                   push edi
// 008289d8  85f6                 test esi, esi
// 008289da  7e16                 jle 0x8289f2
// 008289dc  8b542410             mov edx, dword ptr [esp + 0x10]
// 008289e0  8b39                 mov edi, dword ptr [ecx]
// 008289e2  8b1a                 mov ebx, dword ptr [edx]
// 008289e4  8bd7                 mov edx, edi
// 008289e6  391a                 cmp dword ptr [edx], ebx
// 008289e8  7413                 je 0x8289fd
// 008289ea  40                   inc eax
// 008289eb  83c204               add edx, 4
// 008289ee  3bc6                 cmp eax, esi
// 008289f0  7cf4                 jl 0x8289e6
// 008289f2  8b01                 mov eax, dword ptr [ecx]
// 008289f4  5f                   pop edi
// 008289f5  8d04b0               lea eax, [eax + esi*4]
// 008289f8  5e                   pop esi
// 008289f9  5b                   pop ebx
// 008289fa  c20400               ret 4
// 008289fd  8d0487               lea eax, [edi + eax*4]
// 00828a00  5f                   pop edi
// 00828a01  5e                   pop esi
// 00828a02  5b                   pop ebx
// 00828a03  c20400               ret 4
// library rbxgs/util\IRenderable.cpp (function ?find@?$Array@PAVIRenderable@RBX@@@G3D@@QAEPAPAVIRenderable@RBX@@ABQAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/IRenderable.cpp

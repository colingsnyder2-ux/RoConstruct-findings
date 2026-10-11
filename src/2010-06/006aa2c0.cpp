// roc 2010-06 006aa2c0  unit: VWiniInetRequest_source::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa2c0
//
// 006aa2c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006aa2c4  83ec0c               sub esp, 0xc
// 006aa2c7  85c9                 test ecx, ecx
// 006aa2c9  7718                 ja 0x6aa2e3
// 006aa2cb  33c9                 xor ecx, ecx
// 006aa2cd  8d1489               lea edx, [ecx + ecx*4]
// 006aa2d0  03d2                 add edx, edx
// 006aa2d2  03d2                 add edx, edx
// 006aa2d4  03d2                 add edx, edx
// 006aa2d6  52                   push edx
// 006aa2d7  e8c4d60f00           call 0x7a79a0
// 006aa2dc  83c404               add esp, 4
// 006aa2df  83c40c               add esp, 0xc
// 006aa2e2  c3                   ret 
// 006aa2e3  83c8ff               or eax, 0xffffffff
// 006aa2e6  33d2                 xor edx, edx
// 006aa2e8  f7f1                 div ecx
// 006aa2ea  83f828               cmp eax, 0x28
// 006aa2ed  73de                 jae 0x6aa2cd
// 006aa2ef  8d442410             lea eax, [esp + 0x10]
// 006aa2f3  50                   push eax
// 006aa2f4  8d4c2404             lea ecx, [esp + 4]
// 006aa2f8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006aa300  ff1524a99e00         call dword ptr [0x9ea924]
// 006aa306  68b41ab000           push 0xb01ab4
// 006aa30b  8d4c2404             lea ecx, [esp + 4]
// 006aa30f  51                   push ecx
// 006aa310  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 006aa318  e895e60f00           call 0x7a89b2
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ??$_Allocate@VCluster@Clusterer@Render@RBX@@@std@@YAPAVCluster@Clusterer@Render@RBX@@IPAV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp

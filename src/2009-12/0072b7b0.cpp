// roc 2009-12 0072b7b0  unit: VWiniInetRequest_source::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072b7b0
//
// 0072b7b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072b7b4  83ec0c               sub esp, 0xc
// 0072b7b7  85c9                 test ecx, ecx
// 0072b7b9  7718                 ja 0x72b7d3
// 0072b7bb  33c9                 xor ecx, ecx
// 0072b7bd  8d1489               lea edx, [ecx + ecx*4]
// 0072b7c0  03d2                 add edx, edx
// 0072b7c2  03d2                 add edx, edx
// 0072b7c4  03d2                 add edx, edx
// 0072b7c6  52                   push edx
// 0072b7c7  e894800c00           call 0x7f3860
// 0072b7cc  83c404               add esp, 4
// 0072b7cf  83c40c               add esp, 0xc
// 0072b7d2  c3                   ret 
// 0072b7d3  83c8ff               or eax, 0xffffffff
// 0072b7d6  33d2                 xor edx, edx
// 0072b7d8  f7f1                 div ecx
// 0072b7da  83f828               cmp eax, 0x28
// 0072b7dd  73de                 jae 0x72b7bd
// 0072b7df  8d442410             lea eax, [esp + 0x10]
// 0072b7e3  50                   push eax
// 0072b7e4  8d4c2404             lea ecx, [esp + 4]
// 0072b7e8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072b7f0  ff1548b79800         call dword ptr [0x98b748]
// 0072b7f6  6838efa800           push 0xa8ef38
// 0072b7fb  8d4c2404             lea ecx, [esp + 4]
// 0072b7ff  51                   push ecx
// 0072b800  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0072b808  e86b900c00           call 0x7f4878
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ??$_Allocate@VCluster@Clusterer@Render@RBX@@@std@@YAPAVCluster@Clusterer@Render@RBX@@IPAV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp

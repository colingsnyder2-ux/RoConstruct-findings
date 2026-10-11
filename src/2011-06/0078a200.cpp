// roc 2011-06 0078a200  unit: RBX::Block  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078a200
//
// 0078a200  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078a204  83ec0c               sub esp, 0xc
// 0078a207  85c9                 test ecx, ecx
// 0078a209  7718                 ja 0x78a223
// 0078a20b  33c9                 xor ecx, ecx
// 0078a20d  8d1489               lea edx, [ecx + ecx*4]
// 0078a210  03d2                 add edx, edx
// 0078a212  03d2                 add edx, edx
// 0078a214  03d2                 add edx, edx
// 0078a216  52                   push edx
// 0078a217  e842fe0700           call 0x80a05e
// 0078a21c  83c404               add esp, 4
// 0078a21f  83c40c               add esp, 0xc
// 0078a222  c3                   ret 
// 0078a223  83c8ff               or eax, 0xffffffff
// 0078a226  33d2                 xor edx, edx
// 0078a228  f7f1                 div ecx
// 0078a22a  83f828               cmp eax, 0x28
// 0078a22d  73de                 jae 0x78a20d
// 0078a22f  8d442410             lea eax, [esp + 0x10]
// 0078a233  50                   push eax
// 0078a234  8d4c2404             lea ecx, [esp + 4]
// 0078a238  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0078a240  ff156c0aa400         call dword ptr [0xa40a6c]
// 0078a246  68c472b800           push 0xb872c4
// 0078a24b  8d4c2404             lea ecx, [esp + 4]
// 0078a24f  51                   push ecx
// 0078a250  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0078a258  e84f0e0800           call 0x80b0ac
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ??$_Allocate@VCluster@Clusterer@Render@RBX@@@std@@YAPAVCluster@Clusterer@Render@RBX@@IPAV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp

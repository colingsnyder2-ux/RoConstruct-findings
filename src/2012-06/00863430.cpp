// roc 2012-06 00863430  unit: VWiniInetRequest_source::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00863430
//
// 00863430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00863434  83ec0c               sub esp, 0xc
// 00863437  85c9                 test ecx, ecx
// 00863439  7718                 ja 0x863453
// 0086343b  33c9                 xor ecx, ecx
// 0086343d  8d1489               lea edx, [ecx + ecx*4]
// 00863440  03d2                 add edx, edx
// 00863442  03d2                 add edx, edx
// 00863444  03d2                 add edx, edx
// 00863446  52                   push edx
// 00863447  e8ceec1100           call 0x98211a
// 0086344c  83c404               add esp, 4
// 0086344f  83c40c               add esp, 0xc
// 00863452  c3                   ret 
// 00863453  83c8ff               or eax, 0xffffffff
// 00863456  33d2                 xor edx, edx
// 00863458  f7f1                 div ecx
// 0086345a  83f828               cmp eax, 0x28
// 0086345d  73de                 jae 0x86343d
// 0086345f  8d442410             lea eax, [esp + 0x10]
// 00863463  50                   push eax
// 00863464  8d4c2404             lea ecx, [esp + 4]
// 00863468  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00863470  ff15d029b200         call dword ptr [0xb229d0]
// 00863476  685861cd00           push 0xcd6158
// 0086347b  8d4c2404             lea ecx, [esp + 4]
// 0086347f  51                   push ecx
// 00863480  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 00863488  e8b7fc1100           call 0x983144
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ??$_Allocate@VCluster@Clusterer@Render@RBX@@@std@@YAPAVCluster@Clusterer@Render@RBX@@IPAV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp

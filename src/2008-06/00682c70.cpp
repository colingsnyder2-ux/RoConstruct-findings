// roc 2008-06 00682c70  unit: Ogre::RbxSceneNode  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00682c70
//
// 00682c70  6a18                 push 0x18
// 00682c72  e8a9dc0100           call 0x6a0920
// 00682c77  83c404               add esp, 4
// 00682c7a  85c0                 test eax, eax
// 00682c7c  7406                 je 0x682c84
// 00682c7e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00682c82  8908                 mov dword ptr [eax], ecx
// 00682c84  8d4804               lea ecx, [eax + 4]
// 00682c87  85c9                 test ecx, ecx
// 00682c89  7406                 je 0x682c91
// 00682c8b  8b542408             mov edx, dword ptr [esp + 8]
// 00682c8f  8911                 mov dword ptr [ecx], edx
// 00682c91  8d4808               lea ecx, [eax + 8]
// 00682c94  85c9                 test ecx, ecx
// 00682c96  741c                 je 0x682cb4
// 00682c98  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00682c9c  56                   push esi
// 00682c9d  8b32                 mov esi, dword ptr [edx]
// 00682c9f  8931                 mov dword ptr [ecx], esi
// 00682ca1  8b7204               mov esi, dword ptr [edx + 4]
// 00682ca4  897104               mov dword ptr [ecx + 4], esi
// 00682ca7  8b7208               mov esi, dword ptr [edx + 8]
// 00682caa  897108               mov dword ptr [ecx + 8], esi
// 00682cad  8b520c               mov edx, dword ptr [edx + 0xc]
// 00682cb0  89510c               mov dword ptr [ecx + 0xc], edx
// 00682cb3  5e                   pop esi
// 00682cb4  c20c00               ret 0xc
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ?_Buynode@?$list@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@2@PAU342@0ABUIndexRemap@TangentSpaceCalc@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp

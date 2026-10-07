// roc 2009-06 00495000  unit: Ogre::RbxMaterialAdapter  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00495000
//
// 00495000  6a18                 push 0x18
// 00495002  e8313a2800           call 0x718a38
// 00495007  83c404               add esp, 4
// 0049500a  85c0                 test eax, eax
// 0049500c  7406                 je 0x495014
// 0049500e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00495012  8908                 mov dword ptr [eax], ecx
// 00495014  8d4804               lea ecx, [eax + 4]
// 00495017  85c9                 test ecx, ecx
// 00495019  7406                 je 0x495021
// 0049501b  8b542408             mov edx, dword ptr [esp + 8]
// 0049501f  8911                 mov dword ptr [ecx], edx
// 00495021  8d4808               lea ecx, [eax + 8]
// 00495024  85c9                 test ecx, ecx
// 00495026  741c                 je 0x495044
// 00495028  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049502c  56                   push esi
// 0049502d  8b32                 mov esi, dword ptr [edx]
// 0049502f  8931                 mov dword ptr [ecx], esi
// 00495031  8b7204               mov esi, dword ptr [edx + 4]
// 00495034  897104               mov dword ptr [ecx + 4], esi
// 00495037  8b7208               mov esi, dword ptr [edx + 8]
// 0049503a  897108               mov dword ptr [ecx + 8], esi
// 0049503d  8b520c               mov edx, dword ptr [edx + 0xc]
// 00495040  89510c               mov dword ptr [ecx + 0xc], edx
// 00495043  5e                   pop esi
// 00495044  c20c00               ret 0xc
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ?_Buynode@?$list@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@2@PAU342@0ABUIndexRemap@TangentSpaceCalc@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp

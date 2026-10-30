// roc 2012-06 0086f9c0  unit: RBX::VDebrisService::?$BoundFuncDesc  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086f9c0
//
// 0086f9c0  6a18                 push 0x18
// 0086f9c2  e853271100           call 0x98211a
// 0086f9c7  83c404               add esp, 4
// 0086f9ca  85c0                 test eax, eax
// 0086f9cc  7406                 je 0x86f9d4
// 0086f9ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086f9d2  8908                 mov dword ptr [eax], ecx
// 0086f9d4  8d4804               lea ecx, [eax + 4]
// 0086f9d7  85c9                 test ecx, ecx
// 0086f9d9  7406                 je 0x86f9e1
// 0086f9db  8b542408             mov edx, dword ptr [esp + 8]
// 0086f9df  8911                 mov dword ptr [ecx], edx
// 0086f9e1  8d4808               lea ecx, [eax + 8]
// 0086f9e4  85c9                 test ecx, ecx
// 0086f9e6  741c                 je 0x86fa04
// 0086f9e8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0086f9ec  56                   push esi
// 0086f9ed  8b32                 mov esi, dword ptr [edx]
// 0086f9ef  8931                 mov dword ptr [ecx], esi
// 0086f9f1  8b7204               mov esi, dword ptr [edx + 4]
// 0086f9f4  897104               mov dword ptr [ecx + 4], esi
// 0086f9f7  8b7208               mov esi, dword ptr [edx + 8]
// 0086f9fa  897108               mov dword ptr [ecx + 8], esi
// 0086f9fd  8b520c               mov edx, dword ptr [edx + 0xc]
// 0086fa00  89510c               mov dword ptr [ecx + 0xc], edx
// 0086fa03  5e                   pop esi
// 0086fa04  c20c00               ret 0xc
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ?_Buynode@?$list@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@UIndexRemap@TangentSpaceCalc@Ogre@@V?$allocator@UIndexRemap@TangentSpaceCalc@Ogre@@@std@@@2@PAU342@0ABUIndexRemap@TangentSpaceCalc@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp

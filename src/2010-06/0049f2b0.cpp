// roc 2010-06 0049f2b0  unit: seg_00490000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049f2b0
//
// 0049f2b0  55                   push ebp
// 0049f2b1  8bec                 mov ebp, esp
// 0049f2b3  6aff                 push -1
// 0049f2b5  6848789800           push 0x987848
// 0049f2ba  64a100000000         mov eax, dword ptr fs:[0]
// 0049f2c0  50                   push eax
// 0049f2c1  64892500000000       mov dword ptr fs:[0], esp
// 0049f2c8  83ec3c               sub esp, 0x3c
// 0049f2cb  894dc8               mov dword ptr [ebp - 0x38], ecx
// 0049f2ce  8d45d1               lea eax, [ebp - 0x2f]
// 0049f2d1  8945ec               mov dword ptr [ebp - 0x14], eax
// 0049f2d4  8d4dd2               lea ecx, [ebp - 0x2e]
// 0049f2d7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0049f2da  8d55d3               lea edx, [ebp - 0x2d]
// 0049f2dd  8955dc               mov dword ptr [ebp - 0x24], edx
// 0049f2e0  51                   push ecx
// 0049f2e1  8bc4                 mov eax, esp
// 0049f2e3  8965d8               mov dword ptr [ebp - 0x28], esp
// 0049f2e6  8945d4               mov dword ptr [ebp - 0x2c], eax
// 0049f2e9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049f2ec  0fb611               movzx edx, byte ptr [ecx]
// 0049f2ef  52                   push edx
// 0049f2f0  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0049f2f3  e8b8100000           call 0x4a03b0
// 0049f2f8  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0049f2fb  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0049f2fe  8945c0               mov dword ptr [ebp - 0x40], eax
// 0049f301  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0049f304  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0049f307  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 0049f30a  8955b8               mov dword ptr [ebp - 0x48], edx
// 0049f30d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049f314  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0049f317  e8a4050000           call 0x49f8c0
// 0049f31c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0049f323  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0049f326  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049f329  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f330  8be5                 mov esp, ebp
// 0049f332  5d                   pop ebp
// 0049f333  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@QAE@ABU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@ABV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
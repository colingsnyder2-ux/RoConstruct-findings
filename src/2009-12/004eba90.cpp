// roc 2009-12 004eba90  unit: seg_004e0000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004eba90
//
// 004eba90  55                   push ebp
// 004eba91  8bec                 mov ebp, esp
// 004eba93  6aff                 push -1
// 004eba95  68a84e9300           push 0x934ea8
// 004eba9a  64a100000000         mov eax, dword ptr fs:[0]
// 004ebaa0  50                   push eax
// 004ebaa1  64892500000000       mov dword ptr fs:[0], esp
// 004ebaa8  83ec3c               sub esp, 0x3c
// 004ebaab  894dc8               mov dword ptr [ebp - 0x38], ecx
// 004ebaae  8d45d1               lea eax, [ebp - 0x2f]
// 004ebab1  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ebab4  8d4dd2               lea ecx, [ebp - 0x2e]
// 004ebab7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 004ebaba  8d55d3               lea edx, [ebp - 0x2d]
// 004ebabd  8955dc               mov dword ptr [ebp - 0x24], edx
// 004ebac0  51                   push ecx
// 004ebac1  8bc4                 mov eax, esp
// 004ebac3  8965d8               mov dword ptr [ebp - 0x28], esp
// 004ebac6  8945d4               mov dword ptr [ebp - 0x2c], eax
// 004ebac9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ebacc  0fb611               movzx edx, byte ptr [ecx]
// 004ebacf  52                   push edx
// 004ebad0  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 004ebad3  e8b8100000           call 0x4ecb90
// 004ebad8  8945c4               mov dword ptr [ebp - 0x3c], eax
// 004ebadb  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004ebade  8945c0               mov dword ptr [ebp - 0x40], eax
// 004ebae1  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 004ebae4  894dbc               mov dword ptr [ebp - 0x44], ecx
// 004ebae7  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 004ebaea  8955b8               mov dword ptr [ebp - 0x48], edx
// 004ebaed  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ebaf4  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 004ebaf7  e8a4050000           call 0x4ec0a0
// 004ebafc  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ebb03  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004ebb06  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ebb09  64890d00000000       mov dword ptr fs:[0], ecx
// 004ebb10  8be5                 mov esp, ebp
// 004ebb12  5d                   pop ebp
// 004ebb13  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@QAE@ABU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@ABV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
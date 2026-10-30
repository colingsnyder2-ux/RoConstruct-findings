// roc 2009-12 0091d9a0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091d9a0
//
// 0091d9a0  55                   push ebp
// 0091d9a1  8bec                 mov ebp, esp
// 0091d9a3  6aff                 push -1
// 0091d9a5  68a84e9300           push 0x934ea8
// 0091d9aa  64a100000000         mov eax, dword ptr fs:[0]
// 0091d9b0  50                   push eax
// 0091d9b1  64892500000000       mov dword ptr fs:[0], esp
// 0091d9b8  83ec3c               sub esp, 0x3c
// 0091d9bb  894dc8               mov dword ptr [ebp - 0x38], ecx
// 0091d9be  8d45d1               lea eax, [ebp - 0x2f]
// 0091d9c1  8945ec               mov dword ptr [ebp - 0x14], eax
// 0091d9c4  8d4dd2               lea ecx, [ebp - 0x2e]
// 0091d9c7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0091d9ca  8d55d3               lea edx, [ebp - 0x2d]
// 0091d9cd  8955dc               mov dword ptr [ebp - 0x24], edx
// 0091d9d0  51                   push ecx
// 0091d9d1  8bc4                 mov eax, esp
// 0091d9d3  8965d8               mov dword ptr [ebp - 0x28], esp
// 0091d9d6  8945d4               mov dword ptr [ebp - 0x2c], eax
// 0091d9d9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0091d9dc  0fb611               movzx edx, byte ptr [ecx]
// 0091d9df  52                   push edx
// 0091d9e0  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091d9e3  e8a8f1bcff           call 0x4ecb90
// 0091d9e8  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0091d9eb  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0091d9ee  8945c0               mov dword ptr [ebp - 0x40], eax
// 0091d9f1  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091d9f4  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0091d9f7  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 0091d9fa  8955b8               mov dword ptr [ebp - 0x48], edx
// 0091d9fd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091da04  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091da07  e8d4240000           call 0x91fee0
// 0091da0c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0091da13  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0091da16  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091da19  64890d00000000       mov dword ptr fs:[0], ecx
// 0091da20  8be5                 mov esp, ebp
// 0091da22  5d                   pop ebp
// 0091da23  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@QAE@ABU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@ABV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
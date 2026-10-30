// roc 2009-12 0091d0b0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091d0b0
//
// 0091d0b0  55                   push ebp
// 0091d0b1  8bec                 mov ebp, esp
// 0091d0b3  6aff                 push -1
// 0091d0b5  68a84e9300           push 0x934ea8
// 0091d0ba  64a100000000         mov eax, dword ptr fs:[0]
// 0091d0c0  50                   push eax
// 0091d0c1  64892500000000       mov dword ptr fs:[0], esp
// 0091d0c8  83ec3c               sub esp, 0x3c
// 0091d0cb  894dc8               mov dword ptr [ebp - 0x38], ecx
// 0091d0ce  8d45d1               lea eax, [ebp - 0x2f]
// 0091d0d1  8945ec               mov dword ptr [ebp - 0x14], eax
// 0091d0d4  8d4dd2               lea ecx, [ebp - 0x2e]
// 0091d0d7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0091d0da  8d55d3               lea edx, [ebp - 0x2d]
// 0091d0dd  8955dc               mov dword ptr [ebp - 0x24], edx
// 0091d0e0  51                   push ecx
// 0091d0e1  8bc4                 mov eax, esp
// 0091d0e3  8965d8               mov dword ptr [ebp - 0x28], esp
// 0091d0e6  8945d4               mov dword ptr [ebp - 0x2c], eax
// 0091d0e9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0091d0ec  0fb611               movzx edx, byte ptr [ecx]
// 0091d0ef  52                   push edx
// 0091d0f0  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091d0f3  e898fabcff           call 0x4ecb90
// 0091d0f8  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0091d0fb  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0091d0fe  8945c0               mov dword ptr [ebp - 0x40], eax
// 0091d101  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091d104  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0091d107  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 0091d10a  8955b8               mov dword ptr [ebp - 0x48], edx
// 0091d10d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091d114  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 0091d117  e894210000           call 0x91f2b0
// 0091d11c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0091d123  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0091d126  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091d129  64890d00000000       mov dword ptr fs:[0], ecx
// 0091d130  8be5                 mov esp, ebp
// 0091d132  5d                   pop ebp
// 0091d133  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@@std@@QAE@ABU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@ABV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
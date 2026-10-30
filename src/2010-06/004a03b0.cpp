// roc 2010-06 004a03b0  unit: seg_004a0000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a03b0
//
// 004a03b0  55                   push ebp
// 004a03b1  8bec                 mov ebp, esp
// 004a03b3  6aff                 push -1
// 004a03b5  68a87a9800           push 0x987aa8
// 004a03ba  64a100000000         mov eax, dword ptr fs:[0]
// 004a03c0  50                   push eax
// 004a03c1  64892500000000       mov dword ptr fs:[0], esp
// 004a03c8  83ec34               sub esp, 0x34
// 004a03cb  894dc8               mov dword ptr [ebp - 0x38], ecx
// 004a03ce  8d45cf               lea eax, [ebp - 0x31]
// 004a03d1  8945ec               mov dword ptr [ebp - 0x14], eax
// 004a03d4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a03db  6a00                 push 0
// 004a03dd  6a01                 push 1
// 004a03df  e82c4f4300           call 0x8d5310
// 004a03e4  83c408               add esp, 8
// 004a03e7  8945e0               mov dword ptr [ebp - 0x20], eax
// 004a03ea  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004a03ed  894de4               mov dword ptr [ebp - 0x1c], ecx
// 004a03f0  837de400             cmp dword ptr [ebp - 0x1c], 0
// 004a03f4  7410                 je 0x4a0406
// 004a03f6  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004a03f9  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004a03fc  8902                 mov dword ptr [edx], eax
// 004a03fe  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004a0401  894dc4               mov dword ptr [ebp - 0x3c], ecx
// 004a0404  eb07                 jmp 0x4a040d
// 004a0406  c745c400000000       mov dword ptr [ebp - 0x3c], 0
// 004a040d  8b55c4               mov edx, dword ptr [ebp - 0x3c]
// 004a0410  8955e8               mov dword ptr [ebp - 0x18], edx
// 004a0413  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004a0416  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004a0419  8908                 mov dword ptr [eax], ecx
// 004a041b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004a0422  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 004a0425  8955c0               mov dword ptr [ebp - 0x40], edx
// 004a0428  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004a042b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a042e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0435  8be5                 mov esp, ebp
// 004a0437  5d                   pop ebp
// 004a0438  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@QAE@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
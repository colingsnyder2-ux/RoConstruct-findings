// roc 2009-12 004ecb90  unit: seg_004e0000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ecb90
//
// 004ecb90  55                   push ebp
// 004ecb91  8bec                 mov ebp, esp
// 004ecb93  6aff                 push -1
// 004ecb95  68384f9300           push 0x934f38
// 004ecb9a  64a100000000         mov eax, dword ptr fs:[0]
// 004ecba0  50                   push eax
// 004ecba1  64892500000000       mov dword ptr fs:[0], esp
// 004ecba8  83ec34               sub esp, 0x34
// 004ecbab  894dc8               mov dword ptr [ebp - 0x38], ecx
// 004ecbae  8d45cf               lea eax, [ebp - 0x31]
// 004ecbb1  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ecbb4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ecbbb  6a00                 push 0
// 004ecbbd  6a01                 push 1
// 004ecbbf  e87c3df4ff           call 0x430940
// 004ecbc4  83c408               add esp, 8
// 004ecbc7  8945e0               mov dword ptr [ebp - 0x20], eax
// 004ecbca  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004ecbcd  894de4               mov dword ptr [ebp - 0x1c], ecx
// 004ecbd0  837de400             cmp dword ptr [ebp - 0x1c], 0
// 004ecbd4  7410                 je 0x4ecbe6
// 004ecbd6  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004ecbd9  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004ecbdc  8902                 mov dword ptr [edx], eax
// 004ecbde  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004ecbe1  894dc4               mov dword ptr [ebp - 0x3c], ecx
// 004ecbe4  eb07                 jmp 0x4ecbed
// 004ecbe6  c745c400000000       mov dword ptr [ebp - 0x3c], 0
// 004ecbed  8b55c4               mov edx, dword ptr [ebp - 0x3c]
// 004ecbf0  8955e8               mov dword ptr [ebp - 0x18], edx
// 004ecbf3  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004ecbf6  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004ecbf9  8908                 mov dword ptr [eax], ecx
// 004ecbfb  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004ecc02  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 004ecc05  8955c0               mov dword ptr [ebp - 0x40], edx
// 004ecc08  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 004ecc0b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ecc0e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ecc15  8be5                 mov esp, ebp
// 004ecc17  5d                   pop ebp
// 004ecc18  c20800               ret 8
// copied from an identical function in another client (function ??0?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@2@$0A@@std@@QAE@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVParamCommand@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
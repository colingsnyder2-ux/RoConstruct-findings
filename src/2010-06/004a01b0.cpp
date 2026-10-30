// roc 2010-06 004a01b0  unit: seg_004a0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a01b0
//
// 004a01b0  55                   push ebp
// 004a01b1  8bec                 mov ebp, esp
// 004a01b3  83ec0c               sub esp, 0xc
// 004a01b6  894df4               mov dword ptr [ebp - 0xc], ecx
// 004a01b9  8b4508               mov eax, dword ptr [ebp + 8]
// 004a01bc  8945fc               mov dword ptr [ebp - 4], eax
// 004a01bf  eb06                 jmp 0x4a01c7
// 004a01c1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a01c4  894d08               mov dword ptr [ebp + 8], ecx
// 004a01c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 004a01ca  0fbe422d             movsx eax, byte ptr [edx + 0x2d]
// 004a01ce  85c0                 test eax, eax
// 004a01d0  754a                 jne 0x4a021c
// 004a01d2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004a01d5  8b5108               mov edx, dword ptr [ecx + 8]
// 004a01d8  52                   push edx
// 004a01d9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a01dc  e8cfffffff           call 0x4a01b0
// 004a01e1  8b45fc               mov eax, dword ptr [ebp - 4]
// 004a01e4  8b08                 mov ecx, dword ptr [eax]
// 004a01e6  894dfc               mov dword ptr [ebp - 4], ecx
// 004a01e9  8b5508               mov edx, dword ptr [ebp + 8]
// 004a01ec  83c20c               add edx, 0xc
// 004a01ef  8955f8               mov dword ptr [ebp - 8], edx
// 004a01f2  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004a01f5  ff1500a49e00         call dword ptr [0x9ea400]
// 004a01fb  33c0                 xor eax, eax
// 004a01fd  83e001               and eax, 1
// 004a0200  740c                 je 0x4a020e
// 004a0202  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a0205  51                   push ecx
// 004a0206  e88f773000           call 0x7a799a
// 004a020b  83c404               add esp, 4
// 004a020e  8b5508               mov edx, dword ptr [ebp + 8]
// 004a0211  52                   push edx
// 004a0212  e883773000           call 0x7a799a
// 004a0217  83c404               add esp, 4
// 004a021a  eba5                 jmp 0x4a01c1
// 004a021c  8be5                 mov esp, ebp
// 004a021e  5d                   pop ebp
// 004a021f  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
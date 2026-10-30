// roc 2009-12 004ec990  unit: seg_004e0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ec990
//
// 004ec990  55                   push ebp
// 004ec991  8bec                 mov ebp, esp
// 004ec993  83ec0c               sub esp, 0xc
// 004ec996  894df4               mov dword ptr [ebp - 0xc], ecx
// 004ec999  8b4508               mov eax, dword ptr [ebp + 8]
// 004ec99c  8945fc               mov dword ptr [ebp - 4], eax
// 004ec99f  eb06                 jmp 0x4ec9a7
// 004ec9a1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ec9a4  894d08               mov dword ptr [ebp + 8], ecx
// 004ec9a7  8b55fc               mov edx, dword ptr [ebp - 4]
// 004ec9aa  0fbe422d             movsx eax, byte ptr [edx + 0x2d]
// 004ec9ae  85c0                 test eax, eax
// 004ec9b0  754a                 jne 0x4ec9fc
// 004ec9b2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ec9b5  8b5108               mov edx, dword ptr [ecx + 8]
// 004ec9b8  52                   push edx
// 004ec9b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ec9bc  e8cfffffff           call 0x4ec990
// 004ec9c1  8b45fc               mov eax, dword ptr [ebp - 4]
// 004ec9c4  8b08                 mov ecx, dword ptr [eax]
// 004ec9c6  894dfc               mov dword ptr [ebp - 4], ecx
// 004ec9c9  8b5508               mov edx, dword ptr [ebp + 8]
// 004ec9cc  83c20c               add edx, 0xc
// 004ec9cf  8955f8               mov dword ptr [ebp - 8], edx
// 004ec9d2  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004ec9d5  ff15e4b69800         call dword ptr [0x98b6e4]
// 004ec9db  33c0                 xor eax, eax
// 004ec9dd  83e001               and eax, 1
// 004ec9e0  740c                 je 0x4ec9ee
// 004ec9e2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ec9e5  51                   push ecx
// 004ec9e6  e86f6e3000           call 0x7f385a
// 004ec9eb  83c404               add esp, 4
// 004ec9ee  8b5508               mov edx, dword ptr [ebp + 8]
// 004ec9f1  52                   push edx
// 004ec9f2  e8636e3000           call 0x7f385a
// 004ec9f7  83c404               add esp, 4
// 004ec9fa  eba5                 jmp 0x4ec9a1
// 004ec9fc  8be5                 mov esp, ebp
// 004ec9fe  5d                   pop ebp
// 004ec9ff  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVAnimationState@Ogre@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp
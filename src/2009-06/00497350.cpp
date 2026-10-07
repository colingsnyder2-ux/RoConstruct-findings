// roc 2009-06 00497350  unit: Ogre::TwoDManager  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00497350
//
// 00497350  6aff                 push -1
// 00497352  68ae668500           push 0x8566ae
// 00497357  64a100000000         mov eax, dword ptr fs:[0]
// 0049735d  50                   push eax
// 0049735e  64892500000000       mov dword ptr fs:[0], esp
// 00497365  83ec08               sub esp, 8
// 00497368  53                   push ebx
// 00497369  55                   push ebp
// 0049736a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0049736e  8a4504               mov al, byte ptr [ebp + 4]
// 00497371  56                   push esi
// 00497372  8bf1                 mov esi, ecx
// 00497374  57                   push edi
// 00497375  8d4c2428             lea ecx, [esp + 0x28]
// 00497379  51                   push ecx
// 0049737a  8d4e08               lea ecx, [esi + 8]
// 0049737d  89742418             mov dword ptr [esp + 0x18], esi
// 00497381  884604               mov byte ptr [esi + 4], al
// 00497384  e81708feff           call 0x477ba0
// 00497389  33db                 xor ebx, ebx
// 0049738b  6a04                 push 4
// 0049738d  895c2424             mov dword ptr [esp + 0x24], ebx
// 00497391  8d7e24               lea edi, [esi + 0x24]
// 00497394  e89f162800           call 0x718a38
// 00497399  83c404               add esp, 4
// 0049739c  3bc3                 cmp eax, ebx
// 0049739e  7404                 je 0x4973a4
// 004973a0  8938                 mov dword ptr [eax], edi
// 004973a2  eb02                 jmp 0x4973a6
// 004973a4  33c0                 xor eax, eax
// 004973a6  8907                 mov dword ptr [edi], eax
// 004973a8  895f0c               mov dword ptr [edi + 0xc], ebx
// 004973ab  895f10               mov dword ptr [edi + 0x10], ebx
// 004973ae  895f14               mov dword ptr [edi + 0x14], ebx
// 004973b1  55                   push ebp
// 004973b2  8bce                 mov ecx, esi
// 004973b4  c644242402           mov byte ptr [esp + 0x24], 2
// 004973b9  e852f8ffff           call 0x496c10
// 004973be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004973c2  5f                   pop edi
// 004973c3  8bc6                 mov eax, esi
// 004973c5  5e                   pop esi
// 004973c6  5d                   pop ebp
// 004973c7  5b                   pop ebx
// 004973c8  64890d00000000       mov dword ptr fs:[0], ecx
// 004973cf  83c414               add esp, 0x14
// 004973d2  c20400               ret 4
// library ogre-1.7.0/OgreResourceManager.cpp (function ??0?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$SharedPtr@VResource@Ogre@@@Ogre@@@std@@@2@$0A@@stdext@@@stdext@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreResourceManager.cpp

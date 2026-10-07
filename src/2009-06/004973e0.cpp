// roc 2009-06 004973e0  unit: Ogre::TwoDManager  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004973e0
//
// 004973e0  6aff                 push -1
// 004973e2  68de668500           push 0x8566de
// 004973e7  64a100000000         mov eax, dword ptr fs:[0]
// 004973ed  50                   push eax
// 004973ee  64892500000000       mov dword ptr fs:[0], esp
// 004973f5  83ec10               sub esp, 0x10
// 004973f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 004973fc  8b542424             mov edx, dword ptr [esp + 0x24]
// 00497400  53                   push ebx
// 00497401  55                   push ebp
// 00497402  56                   push esi
// 00497403  57                   push edi
// 00497404  8bf9                 mov edi, ecx
// 00497406  8a08                 mov cl, byte ptr [eax]
// 00497408  884f04               mov byte ptr [edi + 4], cl
// 0049740b  8d5f08               lea ebx, [edi + 8]
// 0049740e  52                   push edx
// 0049740f  8bcb                 mov ecx, ebx
// 00497411  897c2418             mov dword ptr [esp + 0x18], edi
// 00497415  e88607feff           call 0x477ba0
// 0049741a  33ed                 xor ebp, ebp
// 0049741c  6a04                 push 4
// 0049741e  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00497422  8d7724               lea esi, [edi + 0x24]
// 00497425  e80e162800           call 0x718a38
// 0049742a  83c404               add esp, 4
// 0049742d  3bc5                 cmp eax, ebp
// 0049742f  7404                 je 0x497435
// 00497431  8930                 mov dword ptr [eax], esi
// 00497433  eb02                 jmp 0x497437
// 00497435  33c0                 xor eax, eax
// 00497437  8906                 mov dword ptr [esi], eax
// 00497439  896e0c               mov dword ptr [esi + 0xc], ebp
// 0049743c  896e10               mov dword ptr [esi + 0x10], ebp
// 0049743f  896e14               mov dword ptr [esi + 0x14], ebp
// 00497442  d905ace58b00         fld dword ptr [0x8be5ac]
// 00497448  d95f44               fstp dword ptr [edi + 0x44]
// 0049744b  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0049744e  8b1b                 mov ebx, dword ptr [ebx]
// 00497450  c644242802           mov byte ptr [esp + 0x28], 2
// 00497455  3bdd                 cmp ebx, ebp
// 00497457  7404                 je 0x49745d
// 00497459  8b1b                 mov ebx, dword ptr [ebx]
// 0049745b  eb02                 jmp 0x49745f
// 0049745d  33db                 xor ebx, ebx
// 0049745f  8d4c2418             lea ecx, [esp + 0x18]
// 00497463  51                   push ecx
// 00497464  89442420             mov dword ptr [esp + 0x20], eax
// 00497468  8b03                 mov eax, dword ptr [ebx]
// 0049746a  6a09                 push 9
// 0049746c  8bce                 mov ecx, esi
// 0049746e  89442420             mov dword ptr [esp + 0x20], eax
// 00497472  e839faffff           call 0x496eb0
// 00497477  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049747b  c7473c07000000       mov dword ptr [edi + 0x3c], 7
// 00497482  c7474008000000       mov dword ptr [edi + 0x40], 8
// 00497489  8bc7                 mov eax, edi
// 0049748b  5f                   pop edi
// 0049748c  5e                   pop esi
// 0049748d  5d                   pop ebp
// 0049748e  5b                   pop ebx
// 0049748f  64890d00000000       mov dword ptr fs:[0], ecx
// 00497496  83c41c               add esp, 0x1c
// 00497499  c20800               ret 8
// library ogre-1.7.0/OgreMesh.cpp (function ??0?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@QAE@ABV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@1@ABV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp

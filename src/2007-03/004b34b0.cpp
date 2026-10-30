// from server: 100% by auto
// roc 2007-03 004b34b0  unit: seg_004b0000  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b34b0
//
// 004b34b0  83ec60               sub esp, 0x60
// 004b34b3  33c0                 xor eax, eax
// 004b34b5  56                   push esi
// 004b34b6  8b742468             mov esi, dword ptr [esp + 0x68]
// 004b34ba  89442418             mov dword ptr [esp + 0x18], eax
// 004b34be  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b34c2  89442420             mov dword ptr [esp + 0x20], eax
// 004b34c6  8d442424             lea eax, [esp + 0x24]
// 004b34ca  50                   push eax
// 004b34cb  56                   push esi
// 004b34cc  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004b34d4  e8f7f7ffff           call 0x4b2cd0
// 004b34d9  8d4c244c             lea ecx, [esp + 0x4c]
// 004b34dd  51                   push ecx
// 004b34de  8d542440             lea edx, [esp + 0x40]
// 004b34e2  52                   push edx
// 004b34e3  8d442434             lea eax, [esp + 0x34]
// 004b34e7  50                   push eax
// 004b34e8  56                   push esi
// 004b34e9  e8f2d5ffff           call 0x4b0ae0
// 004b34ee  83c418               add esp, 0x18
// 004b34f1  33c0                 xor eax, eax
// 004b34f3  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004b34f8  752c                 jne 0x4b3526
// 004b34fa  83c001               add eax, 1
// 004b34fd  83f804               cmp eax, 4
// 004b3500  72f1                 jb 0x4b34f3
// 004b3502  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004b3506  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b350a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b350e  8908                 mov dword ptr [eax], ecx
// 004b3510  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b3514  895004               mov dword ptr [eax + 4], edx
// 004b3517  8b542420             mov edx, dword ptr [esp + 0x20]
// 004b351b  894808               mov dword ptr [eax + 8], ecx
// 004b351e  89500c               mov dword ptr [eax + 0xc], edx
// 004b3521  5e                   pop esi
// 004b3522  83c460               add esp, 0x60
// 004b3525  c3                   ret 
// 004b3526  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b3529  8b5608               mov edx, dword ptr [esi + 8]
// 004b352c  8b06                 mov eax, dword ptr [esi]
// 004b352e  894c2408             mov dword ptr [esp + 8], ecx
// 004b3532  8d4c2434             lea ecx, [esp + 0x34]
// 004b3536  8954240c             mov dword ptr [esp + 0xc], edx
// 004b353a  89442404             mov dword ptr [esp + 4], eax
// 004b353e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b3541  51                   push ecx
// 004b3542  8d542408             lea edx, [esp + 8]
// 004b3546  52                   push edx
// 004b3547  89442418             mov dword ptr [esp + 0x18], eax
// 004b354b  e890b4ffff           call 0x4ae9e0
// 004b3550  8d44242c             lea eax, [esp + 0x2c]
// 004b3554  50                   push eax
// 004b3555  8d4c2440             lea ecx, [esp + 0x40]
// 004b3559  51                   push ecx
// 004b355a  8d542454             lea edx, [esp + 0x54]
// 004b355e  52                   push edx
// 004b355f  50                   push eax
// 004b3560  e87bd5ffff           call 0x4b0ae0
// 004b3565  83c418               add esp, 0x18
// 004b3568  33c0                 xor eax, eax
// 004b356a  8d9b00000000         lea ebx, [ebx]
// 004b3570  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004b3575  752c                 jne 0x4b35a3
// 004b3577  83c001               add eax, 1
// 004b357a  83f804               cmp eax, 4
// 004b357d  72f1                 jb 0x4b3570
// 004b357f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004b3583  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b3587  8b542408             mov edx, dword ptr [esp + 8]
// 004b358b  8908                 mov dword ptr [eax], ecx
// 004b358d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3591  895004               mov dword ptr [eax + 4], edx
// 004b3594  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b3598  894808               mov dword ptr [eax + 8], ecx
// 004b359b  89500c               mov dword ptr [eax + 0xc], edx
// 004b359e  5e                   pop esi
// 004b359f  83c460               add esp, 0x60
// 004b35a2  c3                   ret 
// 004b35a3  8d442454             lea eax, [esp + 0x54]
// 004b35a7  50                   push eax
// 004b35a8  56                   push esi
// 004b35a9  8d4c241c             lea ecx, [esp + 0x1c]
// 004b35ad  51                   push ecx
// 004b35ae  8d542410             lea edx, [esp + 0x10]
// 004b35b2  52                   push edx
// 004b35b3  8d442444             lea eax, [esp + 0x44]
// 004b35b7  50                   push eax
// 004b35b8  e8e3d7ffff           call 0x4b0da0
// 004b35bd  8d4c2458             lea ecx, [esp + 0x58]
// 004b35c1  51                   push ecx
// 004b35c2  8d54244c             lea edx, [esp + 0x4c]
// 004b35c6  52                   push edx
// 004b35c7  8d442440             lea eax, [esp + 0x40]
// 004b35cb  50                   push eax
// 004b35cc  51                   push ecx
// 004b35cd  e80ed5ffff           call 0x4b0ae0
// 004b35d2  83c424               add esp, 0x24
// 004b35d5  33c0                 xor eax, eax
// 004b35d7  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004b35dc  752c                 jne 0x4b360a
// 004b35de  83c001               add eax, 1
// 004b35e1  83f804               cmp eax, 4
// 004b35e4  72f1                 jb 0x4b35d7
// 004b35e6  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004b35ea  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004b35ee  8b542458             mov edx, dword ptr [esp + 0x58]
// 004b35f2  8908                 mov dword ptr [eax], ecx
// 004b35f4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004b35f8  895004               mov dword ptr [eax + 4], edx
// 004b35fb  8b542460             mov edx, dword ptr [esp + 0x60]
// 004b35ff  894808               mov dword ptr [eax + 8], ecx
// 004b3602  89500c               mov dword ptr [eax + 0xc], edx
// 004b3605  5e                   pop esi
// 004b3606  83c460               add esp, 0x60
// 004b3609  c3                   ret 
// 004b360a  8d542414             lea edx, [esp + 0x14]
// 004b360e  52                   push edx
// 004b360f  56                   push esi
// 004b3610  8d44240c             lea eax, [esp + 0xc]
// 004b3614  50                   push eax
// 004b3615  8d4c2460             lea ecx, [esp + 0x60]
// 004b3619  51                   push ecx
// 004b361a  8d542444             lea edx, [esp + 0x44]
// 004b361e  52                   push edx
// 004b361f  e87cd7ffff           call 0x4b0da0
// 004b3624  8d442438             lea eax, [esp + 0x38]
// 004b3628  50                   push eax
// 004b3629  8d4c244c             lea ecx, [esp + 0x4c]
// 004b362d  51                   push ecx
// 004b362e  8d542460             lea edx, [esp + 0x60]
// 004b3632  52                   push edx
// 004b3633  50                   push eax
// 004b3634  e8a7d4ffff           call 0x4b0ae0
// 004b3639  83c424               add esp, 0x24
// 004b363c  33c0                 xor eax, eax
// 004b363e  8bff                 mov edi, edi
// 004b3640  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004b3645  750d                 jne 0x4b3654
// 004b3647  83c001               add eax, 1
// 004b364a  83f804               cmp eax, 4
// 004b364d  72f1                 jb 0x4b3640
// 004b364f  e9aefeffff           jmp 0x4b3502
// 004b3654  8d4c2404             lea ecx, [esp + 4]
// 004b3658  51                   push ecx
// 004b3659  56                   push esi
// 004b365a  8d54245c             lea edx, [esp + 0x5c]
// 004b365e  52                   push edx
// 004b365f  8d442420             lea eax, [esp + 0x20]
// 004b3663  50                   push eax
// 004b3664  8d4c2444             lea ecx, [esp + 0x44]
// 004b3668  51                   push ecx
// 004b3669  e832d7ffff           call 0x4b0da0
// 004b366e  8d542458             lea edx, [esp + 0x58]
// 004b3672  52                   push edx
// 004b3673  8d44244c             lea eax, [esp + 0x4c]
// 004b3677  50                   push eax
// 004b3678  8d4c2440             lea ecx, [esp + 0x40]
// 004b367c  51                   push ecx
// 004b367d  52                   push edx
// 004b367e  e85dd4ffff           call 0x4b0ae0
// 004b3683  83c424               add esp, 0x24
// 004b3686  33c0                 xor eax, eax
// 004b3688  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004b368d  750d                 jne 0x4b369c
// 004b368f  83c001               add eax, 1
// 004b3692  83f804               cmp eax, 4
// 004b3695  72f1                 jb 0x4b3688
// 004b3697  e9e3feffff           jmp 0x4b357f
// 004b369c  8d442454             lea eax, [esp + 0x54]
// 004b36a0  50                   push eax
// 004b36a1  56                   push esi
// 004b36a2  8d4c241c             lea ecx, [esp + 0x1c]
// 004b36a6  51                   push ecx
// 004b36a7  8d542410             lea edx, [esp + 0x10]
// 004b36ab  52                   push edx
// 004b36ac  8d442444             lea eax, [esp + 0x44]
// 004b36b0  50                   push eax
// 004b36b1  e8ead6ffff           call 0x4b0da0
// 004b36b6  8d4c2438             lea ecx, [esp + 0x38]
// 004b36ba  51                   push ecx
// 004b36bb  8d54244c             lea edx, [esp + 0x4c]
// 004b36bf  52                   push edx
// 004b36c0  8d442460             lea eax, [esp + 0x60]
// 004b36c4  50                   push eax
// 004b36c5  51                   push ecx
// 004b36c6  e815d4ffff           call 0x4b0ae0
// 004b36cb  83c424               add esp, 0x24
// 004b36ce  33c0                 xor eax, eax
// 004b36d0  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004b36d5  750d                 jne 0x4b36e4
// 004b36d7  83c001               add eax, 1
// 004b36da  83f804               cmp eax, 4
// 004b36dd  72f1                 jb 0x4b36d0
// 004b36df  e902ffffff           jmp 0x4b35e6
// 004b36e4  8d542414             lea edx, [esp + 0x14]
// 004b36e8  52                   push edx
// 004b36e9  56                   push esi
// 004b36ea  8d44240c             lea eax, [esp + 0xc]
// 004b36ee  50                   push eax
// 004b36ef  8d4c2460             lea ecx, [esp + 0x60]
// 004b36f3  51                   push ecx
// 004b36f4  8d542444             lea edx, [esp + 0x44]
// 004b36f8  52                   push edx
// 004b36f9  e8a2d6ffff           call 0x4b0da0
// 004b36fe  8d442458             lea eax, [esp + 0x58]
// 004b3702  50                   push eax
// 004b3703  8d4c244c             lea ecx, [esp + 0x4c]
// 004b3707  51                   push ecx
// 004b3708  8d542440             lea edx, [esp + 0x40]
// 004b370c  52                   push edx
// 004b370d  50                   push eax
// 004b370e  e8cdd3ffff           call 0x4b0ae0
// 004b3713  83c424               add esp, 0x24
// 004b3716  33c0                 xor eax, eax
// 004b3718  837c844400           cmp dword ptr [esp + eax*4 + 0x44], 0
// 004b371d  750d                 jne 0x4b372c
// 004b371f  83c001               add eax, 1
// 004b3722  83f804               cmp eax, 4
// 004b3725  72f1                 jb 0x4b3718
// 004b3727  e9d6fdffff           jmp 0x4b3502
// 004b372c  8d4c2404             lea ecx, [esp + 4]
// 004b3730  51                   push ecx
// 004b3731  56                   push esi
// 004b3732  8d54245c             lea edx, [esp + 0x5c]
// 004b3736  52                   push edx
// 004b3737  8d442420             lea eax, [esp + 0x20]
// 004b373b  50                   push eax
// 004b373c  8d4c2444             lea ecx, [esp + 0x44]
// 004b3740  51                   push ecx
// 004b3741  e85ad6ffff           call 0x4b0da0
// 004b3746  8d542438             lea edx, [esp + 0x38]
// 004b374a  52                   push edx
// 004b374b  8d44244c             lea eax, [esp + 0x4c]
// 004b374f  50                   push eax
// 004b3750  8d4c2460             lea ecx, [esp + 0x60]
// 004b3754  51                   push ecx
// 004b3755  52                   push edx
// 004b3756  e885d3ffff           call 0x4b0ae0
// 004b375b  83c424               add esp, 0x24
// 004b375e  33c0                 xor eax, eax
// 004b3760  837c842400           cmp dword ptr [esp + eax*4 + 0x24], 0
// 004b3765  0f8538feffff         jne 0x4b35a3
// 004b376b  83c001               add eax, 1
// 004b376e  83f804               cmp eax, 4
// 004b3771  72ed                 jb 0x4b3760
// 004b3773  e907feffff           jmp 0x4b357f

// from server: 23% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
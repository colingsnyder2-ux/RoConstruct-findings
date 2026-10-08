// roc 2007-03 004e3570  unit: seg_004e0000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3570
//
// 004e3570  6aff                 push -1
// 004e3572  68c4e27400           push 0x74e2c4
// 004e3577  64a100000000         mov eax, dword ptr fs:[0]
// 004e357d  50                   push eax
// 004e357e  83ec08               sub esp, 8
// 004e3581  56                   push esi
// 004e3582  57                   push edi
// 004e3583  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e3588  33c4                 xor eax, esp
// 004e358a  50                   push eax
// 004e358b  8d442414             lea eax, [esp + 0x14]
// 004e358f  64a300000000         mov dword ptr fs:[0], eax
// 004e3595  8bf1                 mov esi, ecx
// 004e3597  8974240c             mov dword ptr [esp + 0xc], esi
// 004e359b  8b4604               mov eax, dword ptr [esi + 4]
// 004e359e  3b4608               cmp eax, dword ptr [esi + 8]
// 004e35a1  8b0e                 mov ecx, dword ptr [esi]
// 004e35a3  7d3d                 jge 0x4e35e2
// 004e35a5  8d0c81               lea ecx, [ecx + eax*4]
// 004e35a8  894c2410             mov dword ptr [esp + 0x10], ecx
// 004e35ac  85c9                 test ecx, ecx
// 004e35ae  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e35b6  7412                 je 0x4e35ca
// 004e35b8  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e35bc  c70100000000         mov dword ptr [ecx], 0
// 004e35c2  8b02                 mov eax, dword ptr [edx]
// 004e35c4  50                   push eax
// 004e35c5  e8c61af9ff           call 0x475090
// 004e35ca  83460401             add dword ptr [esi + 4], 1
// 004e35ce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e35d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004e35d9  59                   pop ecx
// 004e35da  5f                   pop edi
// 004e35db  5e                   pop esi
// 004e35dc  83c414               add esp, 0x14
// 004e35df  c20400               ret 4
// 004e35e2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e35e6  3bf9                 cmp edi, ecx
// 004e35e8  0f8282000000         jb 0x4e3670
// 004e35ee  8d0c81               lea ecx, [ecx + eax*4]
// 004e35f1  3bf9                 cmp edi, ecx
// 004e35f3  737b                 jae 0x4e3670
// 004e35f5  8b3f                 mov edi, dword ptr [edi]
// 004e35f7  85ff                 test edi, edi
// 004e35f9  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004e3601  740e                 je 0x4e3611
// 004e3603  8d4704               lea eax, [edi + 4]
// 004e3606  50                   push eax
// 004e3607  897c2428             mov dword ptr [esp + 0x28], edi
// 004e360b  ff15acd27700         call dword ptr [0x77d2ac]
// 004e3611  8d542424             lea edx, [esp + 0x24]
// 004e3615  52                   push edx
// 004e3616  8bce                 mov ecx, esi
// 004e3618  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e3620  e84bffffff           call 0x4e3570
// 004e3625  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e3629  85c0                 test eax, eax
// 004e362b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004e3633  7459                 je 0x4e368e
// 004e3635  83c004               add eax, 4
// 004e3638  50                   push eax
// 004e3639  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e363f  85c0                 test eax, eax
// 004e3641  754b                 jne 0x4e368e
// 004e3643  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004e3647  e874fdf7ff           call 0x4633c0
// 004e364c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004e3650  85c9                 test ecx, ecx
// 004e3652  743a                 je 0x4e368e
// 004e3654  8b01                 mov eax, dword ptr [ecx]
// 004e3656  8b10                 mov edx, dword ptr [eax]
// 004e3658  6a01                 push 1
// 004e365a  ffd2                 call edx
// 004e365c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e3660  64890d00000000       mov dword ptr fs:[0], ecx
// 004e3667  59                   pop ecx
// 004e3668  5f                   pop edi
// 004e3669  5e                   pop esi
// 004e366a  83c414               add esp, 0x14
// 004e366d  c20400               ret 4
// 004e3670  6a00                 push 0
// 004e3672  83c001               add eax, 1
// 004e3675  50                   push eax
// 004e3676  8bce                 mov ecx, esi
// 004e3678  e813fbffff           call 0x4e3190
// 004e367d  8b07                 mov eax, dword ptr [edi]
// 004e367f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e3682  8b16                 mov edx, dword ptr [esi]
// 004e3684  50                   push eax
// 004e3685  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004e3689  e8021af9ff           call 0x475090
// 004e368e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e3692  64890d00000000       mov dword ptr fs:[0], ecx
// 004e3699  59                   pop ecx
// 004e369a  5f                   pop edi
// 004e369b  5e                   pop esi
// 004e369c  83c414               add esp, 0x14
// 004e369f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp

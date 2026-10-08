// roc 2007-08 005dfac0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dfac0
//
// 005dfac0  51                   push ecx
// 005dfac1  53                   push ebx
// 005dfac2  55                   push ebp
// 005dfac3  56                   push esi
// 005dfac4  57                   push edi
// 005dfac5  8bf1                 mov esi, ecx
// 005dfac7  33ed                 xor ebp, ebp
// 005dfac9  8da42400000000       lea esp, [esp]
// 005dfad0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005dfad3  85c9                 test ecx, ecx
// 005dfad5  740c                 je 0x5dfae3
// 005dfad7  8b4610               mov eax, dword ptr [esi + 0x10]
// 005dfada  2bc1                 sub eax, ecx
// 005dfadc  c1f802               sar eax, 2
// 005dfadf  3be8                 cmp ebp, eax
// 005dfae1  720a                 jb 0x5dfaed
// 005dfae3  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 005dfae9  ffd7                 call edi
// 005dfaeb  eb06                 jmp 0x5dfaf3
// 005dfaed  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 005dfaf3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005dfaf6  8d1cad00000000       lea ebx, [ebp*4]
// 005dfafd  833c0300             cmp dword ptr [ebx + eax], 0
// 005dfb01  0f8493000000         je 0x5dfb9a
// 005dfb07  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005dfb0a  85c9                 test ecx, ecx
// 005dfb0c  740c                 je 0x5dfb1a
// 005dfb0e  8b4610               mov eax, dword ptr [esi + 0x10]
// 005dfb11  2bc1                 sub eax, ecx
// 005dfb13  c1f802               sar eax, 2
// 005dfb16  3be8                 cmp ebp, eax
// 005dfb18  7202                 jb 0x5dfb1c
// 005dfb1a  ffd7                 call edi
// 005dfb1c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005dfb1f  833c0b00             cmp dword ptr [ebx + ecx], 0
// 005dfb23  7475                 je 0x5dfb9a
// 005dfb25  85c9                 test ecx, ecx
// 005dfb27  740c                 je 0x5dfb35
// 005dfb29  8b4610               mov eax, dword ptr [esi + 0x10]
// 005dfb2c  2bc1                 sub eax, ecx
// 005dfb2e  c1f802               sar eax, 2
// 005dfb31  3be8                 cmp ebp, eax
// 005dfb33  7202                 jb 0x5dfb37
// 005dfb35  ffd7                 call edi
// 005dfb37  8b560c               mov edx, dword ptr [esi + 0xc]
// 005dfb3a  8b0413               mov eax, dword ptr [ebx + edx]
// 005dfb3d  8bca                 mov ecx, edx
// 005dfb3f  85c9                 test ecx, ecx
// 005dfb41  89442410             mov dword ptr [esp + 0x10], eax
// 005dfb45  740c                 je 0x5dfb53
// 005dfb47  8b4610               mov eax, dword ptr [esi + 0x10]
// 005dfb4a  2bc1                 sub eax, ecx
// 005dfb4c  c1f802               sar eax, 2
// 005dfb4f  3be8                 cmp ebp, eax
// 005dfb51  7202                 jb 0x5dfb55
// 005dfb53  ffd7                 call edi
// 005dfb55  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005dfb58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005dfb5b  03fb                 add edi, ebx
// 005dfb5d  85c9                 test ecx, ecx
// 005dfb5f  740c                 je 0x5dfb6d
// 005dfb61  8b4610               mov eax, dword ptr [esi + 0x10]
// 005dfb64  2bc1                 sub eax, ecx
// 005dfb66  c1f802               sar eax, 2
// 005dfb69  3be8                 cmp ebp, eax
// 005dfb6b  7206                 jb 0x5dfb73
// 005dfb6d  ff15d8e67700         call dword ptr [0x77e6d8]
// 005dfb73  8b0f                 mov ecx, dword ptr [edi]
// 005dfb75  8b4104               mov eax, dword ptr [ecx + 4]
// 005dfb78  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dfb7c  8b560c               mov edx, dword ptr [esi + 0xc]
// 005dfb7f  51                   push ecx
// 005dfb80  890413               mov dword ptr [ebx + edx], eax
// 005dfb83  e8da000500           call 0x62fc62
// 005dfb88  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 005dfb8e  83c404               add esp, 4
// 005dfb91  83461cff             add dword ptr [esi + 0x1c], -1
// 005dfb95  e96dffffff           jmp 0x5dfb07
// 005dfb9a  83c501               add ebp, 1
// 005dfb9d  81fd00000100         cmp ebp, 0x10000
// 005dfba3  0f8c27ffffff         jl 0x5dfad0
// 005dfba9  33ff                 xor edi, edi
// 005dfbab  397e18               cmp dword ptr [esi + 0x18], edi
// 005dfbae  7417                 je 0x5dfbc7
// 005dfbb0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dfbb3  8b5004               mov edx, dword ptr [eax + 4]
// 005dfbb6  50                   push eax
// 005dfbb7  895618               mov dword ptr [esi + 0x18], edx
// 005dfbba  e8a3000500           call 0x62fc62
// 005dfbbf  83c404               add esp, 4
// 005dfbc2  397e18               cmp dword ptr [esi + 0x18], edi
// 005dfbc5  75e9                 jne 0x5dfbb0
// 005dfbc7  8b460c               mov eax, dword ptr [esi + 0xc]
// 005dfbca  3bc7                 cmp eax, edi
// 005dfbcc  7409                 je 0x5dfbd7
// 005dfbce  50                   push eax
// 005dfbcf  e88e000500           call 0x62fc62
// 005dfbd4  83c404               add esp, 4
// 005dfbd7  897e0c               mov dword ptr [esi + 0xc], edi
// 005dfbda  897e10               mov dword ptr [esi + 0x10], edi
// 005dfbdd  897e14               mov dword ptr [esi + 0x14], edi
// 005dfbe0  5f                   pop edi
// 005dfbe1  5e                   pop esi
// 005dfbe2  5d                   pop ebp
// 005dfbe3  5b                   pop ebx
// 005dfbe4  59                   pop ecx
// 005dfbe5  c3                   ret 
// library openrbx-client/App\v8world\SpatialHash.cpp (function ??1SpatialHash@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp

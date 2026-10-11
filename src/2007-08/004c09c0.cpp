// from server: 100% by auto
// roc 2007-08 004c09c0  unit: RakPeer  size: 710 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c09c0
//
// 004c09c0  55                   push ebp
// 004c09c1  8d6c24b0             lea ebp, [esp - 0x50]
// 004c09c5  81ec20010000         sub esp, 0x120
// 004c09cb  56                   push esi
// 004c09cc  8b7564               mov esi, dword ptr [ebp + 0x64]
// 004c09cf  8b06                 mov eax, dword ptr [esi]
// 004c09d1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c09d4  8b5608               mov edx, dword ptr [esi + 8]
// 004c09d7  894500               mov dword ptr [ebp], eax
// 004c09da  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c09dd  89450c               mov dword ptr [ebp + 0xc], eax
// 004c09e0  33c0                 xor eax, eax
// 004c09e2  894d04               mov dword ptr [ebp + 4], ecx
// 004c09e5  57                   push edi
// 004c09e6  895508               mov dword ptr [ebp + 8], edx
// 004c09e9  894510               mov dword ptr [ebp + 0x10], eax
// 004c09ec  894514               mov dword ptr [ebp + 0x14], eax
// 004c09ef  894518               mov dword ptr [ebp + 0x18], eax
// 004c09f2  89451c               mov dword ptr [ebp + 0x1c], eax
// 004c09f5  33c9                 xor ecx, ecx
// 004c09f7  8b448d00             mov eax, dword ptr [ebp + ecx*4]
// 004c09fb  85c0                 test eax, eax
// 004c09fd  8d50ff               lea edx, [eax - 1]
// 004c0a00  89548d00             mov dword ptr [ebp + ecx*4], edx
// 004c0a04  7508                 jne 0x4c0a0e
// 004c0a06  83c101               add ecx, 1
// 004c0a09  83f908               cmp ecx, 8
// 004c0a0c  72e9                 jb 0x4c09f7
// 004c0a0e  8b7d60               mov edi, dword ptr [ebp + 0x60]
// 004c0a11  53                   push ebx
// 004c0a12  8d4500               lea eax, [ebp]
// 004c0a15  50                   push eax
// 004c0a16  8bc8                 mov ecx, eax
// 004c0a18  51                   push ecx
// 004c0a19  57                   push edi
// 004c0a1a  e851a9ffff           call 0x4bb370
// 004c0a1f  8b5500               mov edx, dword ptr [ebp]
// 004c0a22  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004c0a25  8b4504               mov eax, dword ptr [ebp + 4]
// 004c0a28  8b5d5c               mov ebx, dword ptr [ebp + 0x5c]
// 004c0a2b  895540               mov dword ptr [ebp + 0x40], edx
// 004c0a2e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004c0a31  894d48               mov dword ptr [ebp + 0x48], ecx
// 004c0a34  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c0a37  894544               mov dword ptr [ebp + 0x44], eax
// 004c0a3a  8b06                 mov eax, dword ptr [esi]
// 004c0a3c  89554c               mov dword ptr [ebp + 0x4c], edx
// 004c0a3f  8b5608               mov edx, dword ptr [esi + 8]
// 004c0a42  898d74ffffff         mov dword ptr [ebp - 0x8c], ecx
// 004c0a48  898570ffffff         mov dword ptr [ebp - 0x90], eax
// 004c0a4e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c0a51  8d8d30ffffff         lea ecx, [ebp - 0xd0]
// 004c0a57  899578ffffff         mov dword ptr [ebp - 0x88], edx
// 004c0a5d  51                   push ecx
// 004c0a5e  8d9570ffffff         lea edx, [ebp - 0x90]
// 004c0a64  89857cffffff         mov dword ptr [ebp - 0x84], eax
// 004c0a6a  33c0                 xor eax, eax
// 004c0a6c  52                   push edx
// 004c0a6d  53                   push ebx
// 004c0a6e  894580               mov dword ptr [ebp - 0x80], eax
// 004c0a71  894584               mov dword ptr [ebp - 0x7c], eax
// 004c0a74  894588               mov dword ptr [ebp - 0x78], eax
// 004c0a77  89458c               mov dword ptr [ebp - 0x74], eax
// 004c0a7a  e8f1a8ffff           call 0x4bb370
// 004c0a7f  8b8d34ffffff         mov ecx, dword ptr [ebp - 0xcc]
// 004c0a85  8b8530ffffff         mov eax, dword ptr [ebp - 0xd0]
// 004c0a8b  8b9538ffffff         mov edx, dword ptr [ebp - 0xc8]
// 004c0a91  894d24               mov dword ptr [ebp + 0x24], ecx
// 004c0a94  8d4d30               lea ecx, [ebp + 0x30]
// 004c0a97  51                   push ecx
// 004c0a98  894520               mov dword ptr [ebp + 0x20], eax
// 004c0a9b  8b853cffffff         mov eax, dword ptr [ebp - 0xc4]
// 004c0aa1  895528               mov dword ptr [ebp + 0x28], edx
// 004c0aa4  56                   push esi
// 004c0aa5  8d5540               lea edx, [ebp + 0x40]
// 004c0aa8  89452c               mov dword ptr [ebp + 0x2c], eax
// 004c0aab  52                   push edx
// 004c0aac  8d4520               lea eax, [ebp + 0x20]
// 004c0aaf  50                   push eax
// 004c0ab0  e80bd6ffff           call 0x4be0c0
// 004c0ab5  8b7568               mov esi, dword ptr [ebp + 0x68]
// 004c0ab8  8b0e                 mov ecx, dword ptr [esi]
// 004c0aba  8b4608               mov eax, dword ptr [esi + 8]
// 004c0abd  8b5604               mov edx, dword ptr [esi + 4]
// 004c0ac0  83c428               add esp, 0x28
// 004c0ac3  894de0               mov dword ptr [ebp - 0x20], ecx
// 004c0ac6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c0ac9  8945e8               mov dword ptr [ebp - 0x18], eax
// 004c0acc  33c0                 xor eax, eax
// 004c0ace  8955e4               mov dword ptr [ebp - 0x1c], edx
// 004c0ad1  894dec               mov dword ptr [ebp - 0x14], ecx
// 004c0ad4  8945f0               mov dword ptr [ebp - 0x10], eax
// 004c0ad7  8945f4               mov dword ptr [ebp - 0xc], eax
// 004c0ada  8945f8               mov dword ptr [ebp - 8], eax
// 004c0add  8945fc               mov dword ptr [ebp - 4], eax
// 004c0ae0  8b4c85e0             mov ecx, dword ptr [ebp + eax*4 - 0x20]
// 004c0ae4  85c9                 test ecx, ecx
// 004c0ae6  8d51ff               lea edx, [ecx - 1]
// 004c0ae9  895485e0             mov dword ptr [ebp + eax*4 - 0x20], edx
// 004c0aed  7508                 jne 0x4c0af7
// 004c0aef  83c001               add eax, 1
// 004c0af2  83f808               cmp eax, 8
// 004c0af5  72e9                 jb 0x4c0ae0
// 004c0af7  8d45e0               lea eax, [ebp - 0x20]
// 004c0afa  50                   push eax
// 004c0afb  8bc8                 mov ecx, eax
// 004c0afd  51                   push ecx
// 004c0afe  57                   push edi
// 004c0aff  e86ca8ffff           call 0x4bb370
// 004c0b04  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004c0b07  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004c0b0a  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 004c0b0d  895520               mov dword ptr [ebp + 0x20], edx
// 004c0b10  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004c0b13  894d28               mov dword ptr [ebp + 0x28], ecx
// 004c0b16  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c0b19  894524               mov dword ptr [ebp + 0x24], eax
// 004c0b1c  8b06                 mov eax, dword ptr [esi]
// 004c0b1e  89552c               mov dword ptr [ebp + 0x2c], edx
// 004c0b21  8b5608               mov edx, dword ptr [esi + 8]
// 004c0b24  894d94               mov dword ptr [ebp - 0x6c], ecx
// 004c0b27  894590               mov dword ptr [ebp - 0x70], eax
// 004c0b2a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c0b2d  8d8d50ffffff         lea ecx, [ebp - 0xb0]
// 004c0b33  895598               mov dword ptr [ebp - 0x68], edx
// 004c0b36  51                   push ecx
// 004c0b37  8d5590               lea edx, [ebp - 0x70]
// 004c0b3a  89459c               mov dword ptr [ebp - 0x64], eax
// 004c0b3d  33c0                 xor eax, eax
// 004c0b3f  52                   push edx
// 004c0b40  53                   push ebx
// 004c0b41  8945a0               mov dword ptr [ebp - 0x60], eax
// 004c0b44  8945a4               mov dword ptr [ebp - 0x5c], eax
// 004c0b47  8945a8               mov dword ptr [ebp - 0x58], eax
// 004c0b4a  8945ac               mov dword ptr [ebp - 0x54], eax
// 004c0b4d  e81ea8ffff           call 0x4bb370
// 004c0b52  8b8d54ffffff         mov ecx, dword ptr [ebp - 0xac]
// 004c0b58  8b8550ffffff         mov eax, dword ptr [ebp - 0xb0]
// 004c0b5e  8b9558ffffff         mov edx, dword ptr [ebp - 0xa8]
// 004c0b64  894d44               mov dword ptr [ebp + 0x44], ecx
// 004c0b67  8d4dd0               lea ecx, [ebp - 0x30]
// 004c0b6a  51                   push ecx
// 004c0b6b  894540               mov dword ptr [ebp + 0x40], eax
// 004c0b6e  8b855cffffff         mov eax, dword ptr [ebp - 0xa4]
// 004c0b74  895548               mov dword ptr [ebp + 0x48], edx
// 004c0b77  56                   push esi
// 004c0b78  8d5520               lea edx, [ebp + 0x20]
// 004c0b7b  89454c               mov dword ptr [ebp + 0x4c], eax
// 004c0b7e  52                   push edx
// 004c0b7f  8d4540               lea eax, [ebp + 0x40]
// 004c0b82  50                   push eax
// 004c0b83  e838d5ffff           call 0x4be0c0
// 004c0b88  83c428               add esp, 0x28
// 004c0b8b  33c0                 xor eax, eax
// 004c0b8d  5b                   pop ebx
// 004c0b8e  8bff                 mov edi, edi
// 004c0b90  8b4c05dc             mov ecx, dword ptr [ebp + eax - 0x24]
// 004c0b94  8b54053c             mov edx, dword ptr [ebp + eax + 0x3c]
// 004c0b98  3bca                 cmp ecx, edx
// 004c0b9a  0f87d1000000         ja 0x4c0c71
// 004c0ba0  7208                 jb 0x4c0baa
// 004c0ba2  83e804               sub eax, 4
// 004c0ba5  83f8f4               cmp eax, -0xc
// 004c0ba8  7de6                 jge 0x4c0b90
// 004c0baa  8d4530               lea eax, [ebp + 0x30]
// 004c0bad  50                   push eax
// 004c0bae  8d4dd0               lea ecx, [ebp - 0x30]
// 004c0bb1  51                   push ecx
// 004c0bb2  e8c98cffff           call 0x4b9880
// 004c0bb7  8d55d0               lea edx, [ebp - 0x30]
// 004c0bba  56                   push esi
// 004c0bbb  52                   push edx
// 004c0bbc  e81f8dffff           call 0x4b98e0
// 004c0bc1  83c410               add esp, 0x10
// 004c0bc4  8b7558               mov esi, dword ptr [ebp + 0x58]
// 004c0bc7  8b456c               mov eax, dword ptr [ebp + 0x6c]
// 004c0bca  56                   push esi
// 004c0bcb  50                   push eax
// 004c0bcc  8d4dd0               lea ecx, [ebp - 0x30]
// 004c0bcf  51                   push ecx
// 004c0bd0  e8fba1ffff           call 0x4badd0
// 004c0bd5  56                   push esi
// 004c0bd6  8d5590               lea edx, [ebp - 0x70]
// 004c0bd9  52                   push edx
// 004c0bda  56                   push esi
// 004c0bdb  e890a7ffff           call 0x4bb370
// 004c0be0  8d8570ffffff         lea eax, [ebp - 0x90]
// 004c0be6  50                   push eax
// 004c0be7  56                   push esi
// 004c0be8  e8b3aaffff           call 0x4bb6a0
// 004c0bed  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 004c0bf0  8b5534               mov edx, dword ptr [ebp + 0x34]
// 004c0bf3  8b4538               mov eax, dword ptr [ebp + 0x38]
// 004c0bf6  83c420               add esp, 0x20
// 004c0bf9  894db0               mov dword ptr [ebp - 0x50], ecx
// 004c0bfc  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 004c0bff  8955b4               mov dword ptr [ebp - 0x4c], edx
// 004c0c02  8945b8               mov dword ptr [ebp - 0x48], eax
// 004c0c05  33c0                 xor eax, eax
// 004c0c07  8d55b0               lea edx, [ebp - 0x50]
// 004c0c0a  894dbc               mov dword ptr [ebp - 0x44], ecx
// 004c0c0d  8945c0               mov dword ptr [ebp - 0x40], eax
// 004c0c10  8945c4               mov dword ptr [ebp - 0x3c], eax
// 004c0c13  8945c8               mov dword ptr [ebp - 0x38], eax
// 004c0c16  8945cc               mov dword ptr [ebp - 0x34], eax
// 004c0c19  895568               mov dword ptr [ebp + 0x68], edx
// 004c0c1c  c7456401000000       mov dword ptr [ebp + 0x64], 1
// 004c0c23  8b7568               mov esi, dword ptr [ebp + 0x68]
// 004c0c26  8b7d58               mov edi, dword ptr [ebp + 0x58]
// 004c0c29  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 004c0c2c  8b06                 mov eax, dword ptr [esi]
// 004c0c2e  33d2                 xor edx, edx
// 004c0c30  0107                 add dword ptr [edi], eax
// 004c0c32  8b4604               mov eax, dword ptr [esi + 4]
// 004c0c35  114704               adc dword ptr [edi + 4], eax
// 004c0c38  8b4608               mov eax, dword ptr [esi + 8]
// 004c0c3b  114708               adc dword ptr [edi + 8], eax
// 004c0c3e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c0c41  11470c               adc dword ptr [edi + 0xc], eax
// 004c0c44  e322                 jecxz 0x4c0c68
// 004c0c46  42                   inc edx
// 004c0c47  42                   inc edx
// 004c0c48  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004c0c4b  1104d7               adc dword ptr [edi + edx*8], eax
// 004c0c4e  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004c0c52  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004c0c56  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004c0c5a  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004c0c5e  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004c0c62  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004c0c66  e2de                 loop 0x4c0c46
// 004c0c68  5f                   pop edi
// 004c0c69  5e                   pop esi
// 004c0c6a  83c550               add ebp, 0x50
// 004c0c6d  8be5                 mov esp, ebp
// 004c0c6f  5d                   pop ebp
// 004c0c70  c3                   ret 
// 004c0c71  8d4d30               lea ecx, [ebp + 0x30]
// 004c0c74  51                   push ecx
// 004c0c75  8d55d0               lea edx, [ebp - 0x30]
// 004c0c78  52                   push edx
// 004c0c79  e8028cffff           call 0x4b9880
// 004c0c7e  83c408               add esp, 8
// 004c0c81  e93effffff           jmp 0x4c0bc4

// from server: 20% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReplicaManager.cpp
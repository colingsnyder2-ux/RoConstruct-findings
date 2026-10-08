// from server: 100% by auto
// roc 2010-06 0048d770  unit: G3D::PBVTextureFormat::?$Table  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048d770
//
// 0048d770  6aff                 push -1
// 0048d772  68c6659800           push 0x9865c6
// 0048d777  64a100000000         mov eax, dword ptr fs:[0]
// 0048d77d  50                   push eax
// 0048d77e  64892500000000       mov dword ptr fs:[0], esp
// 0048d785  51                   push ecx
// 0048d786  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048d78a  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0048d78e  53                   push ebx
// 0048d78f  55                   push ebp
// 0048d790  56                   push esi
// 0048d791  57                   push edi
// 0048d792  8bf9                 mov edi, ecx
// 0048d794  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0048d797  7205                 jb 0x48d79e
// 0048d799  8b4004               mov eax, dword ptr [eax + 4]
// 0048d79c  eb03                 jmp 0x48d7a1
// 0048d79e  83c004               add eax, 4
// 0048d7a1  51                   push ecx
// 0048d7a2  50                   push eax
// 0048d7a3  e8589f0c00           call 0x557700
// 0048d7a8  33d2                 xor edx, edx
// 0048d7aa  8be8                 mov ebp, eax
// 0048d7ac  f7770c               div dword ptr [edi + 0xc]
// 0048d7af  8b4708               mov eax, dword ptr [edi + 8]
// 0048d7b2  83c408               add esp, 8
// 0048d7b5  8bda                 mov ebx, edx
// 0048d7b7  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0048d7ba  85f6                 test esi, esi
// 0048d7bc  7548                 jne 0x48d806
// 0048d7be  6a28                 push 0x28
// 0048d7c0  e8dbd30700           call 0x50aba0
// 0048d7c5  8bf0                 mov esi, eax
// 0048d7c7  83c404               add esp, 4
// 0048d7ca  89742410             mov dword ptr [esp + 0x10], esi
// 0048d7ce  33c0                 xor eax, eax
// 0048d7d0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0048d7d4  3bf0                 cmp esi, eax
// 0048d7d6  0f840f010000         je 0x48d8eb
// 0048d7dc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048d7e0  0fb611               movzx edx, byte ptr [ecx]
// 0048d7e3  50                   push eax
// 0048d7e4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048d7e8  55                   push ebp
// 0048d7e9  52                   push edx
// 0048d7ea  83ec1c               sub esp, 0x1c
// 0048d7ed  8bcc                 mov ecx, esp
// 0048d7ef  89642450             mov dword ptr [esp + 0x50], esp
// 0048d7f3  50                   push eax
// 0048d7f4  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048d7fa  8bce                 mov ecx, esi
// 0048d7fc  e8eff6ffff           call 0x48cef0
// 0048d801  e9e5000000           jmp 0x48d8eb
// 0048d806  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048d80e  b301                 mov bl, 1
// 0048d810  84db                 test bl, bl
// 0048d812  7408                 je 0x48d81c
// 0048d814  3b2e                 cmp ebp, dword ptr [esi]
// 0048d816  7504                 jne 0x48d81c
// 0048d818  b301                 mov bl, 1
// 0048d81a  eb02                 jmp 0x48d81e
// 0048d81c  32db                 xor bl, bl
// 0048d81e  3b2e                 cmp ebp, dword ptr [esi]
// 0048d820  751a                 jne 0x48d83c
// 0048d822  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048d826  52                   push edx
// 0048d827  8d4604               lea eax, [esi + 4]
// 0048d82a  50                   push eax
// 0048d82b  ff158ca49e00         call dword ptr [0x9ea48c]
// 0048d831  83c408               add esp, 8
// 0048d834  84c0                 test al, al
// 0048d836  0f858f000000         jne 0x48d8cb
// 0048d83c  8b7624               mov esi, dword ptr [esi + 0x24]
// 0048d83f  ff442410             inc dword ptr [esp + 0x10]
// 0048d843  85f6                 test esi, esi
// 0048d845  75c9                 jne 0x48d810
// 0048d847  33c0                 xor eax, eax
// 0048d849  84db                 test bl, bl
// 0048d84b  0f94c0               sete al
// 0048d84e  33c9                 xor ecx, ecx
// 0048d850  837c241005           cmp dword ptr [esp + 0x10], 5
// 0048d855  0f9fc1               setg cl
// 0048d858  85c1                 test ecx, eax
// 0048d85a  741d                 je 0x48d879
// 0048d85c  8b4704               mov eax, dword ptr [edi + 4]
// 0048d85f  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0048d862  8d1480               lea edx, [eax + eax*4]
// 0048d865  03d2                 add edx, edx
// 0048d867  03d2                 add edx, edx
// 0048d869  3bca                 cmp ecx, edx
// 0048d86b  7d0c                 jge 0x48d879
// 0048d86d  8d440901             lea eax, [ecx + ecx + 1]
// 0048d871  50                   push eax
// 0048d872  8bcf                 mov ecx, edi
// 0048d874  e887f1ffff           call 0x48ca00
// 0048d879  33d2                 xor edx, edx
// 0048d87b  8bc5                 mov eax, ebp
// 0048d87d  f7770c               div dword ptr [edi + 0xc]
// 0048d880  6a28                 push 0x28
// 0048d882  8bda                 mov ebx, edx
// 0048d884  e817d30700           call 0x50aba0
// 0048d889  8bf0                 mov esi, eax
// 0048d88b  83c404               add esp, 4
// 0048d88e  89742410             mov dword ptr [esp + 0x10], esi
// 0048d892  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0048d89a  85f6                 test esi, esi
// 0048d89c  744b                 je 0x48d8e9
// 0048d89e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048d8a1  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 0048d8a4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048d8a8  0fb608               movzx ecx, byte ptr [eax]
// 0048d8ab  52                   push edx
// 0048d8ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048d8b0  55                   push ebp
// 0048d8b1  51                   push ecx
// 0048d8b2  83ec1c               sub esp, 0x1c
// 0048d8b5  8bcc                 mov ecx, esp
// 0048d8b7  89642450             mov dword ptr [esp + 0x50], esp
// 0048d8bb  52                   push edx
// 0048d8bc  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048d8c2  8bce                 mov ecx, esi
// 0048d8c4  e827f6ffff           call 0x48cef0
// 0048d8c9  eb20                 jmp 0x48d8eb
// 0048d8cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0048d8cf  8a11                 mov dl, byte ptr [ecx]
// 0048d8d1  885620               mov byte ptr [esi + 0x20], dl
// 0048d8d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048d8d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d8df  5f                   pop edi
// 0048d8e0  5e                   pop esi
// 0048d8e1  5d                   pop ebp
// 0048d8e2  5b                   pop ebx
// 0048d8e3  83c410               add esp, 0x10
// 0048d8e6  c20800               ret 8
// 0048d8e9  33c0                 xor eax, eax
// 0048d8eb  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048d8ee  890499               mov dword ptr [ecx + ebx*4], eax
// 0048d8f1  ff4704               inc dword ptr [edi + 4]
// 0048d8f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048d8f8  5f                   pop edi
// 0048d8f9  5e                   pop esi
// 0048d8fa  5d                   pop ebp
// 0048d8fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d902  5b                   pop ebx
// 0048d903  83c410               add esp, 0x10
// 0048d906  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp

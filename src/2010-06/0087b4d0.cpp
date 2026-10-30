// roc 2010-06 0087b4d0  unit: VCEdit::?$CXTMaskEditT  size: 718 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087b4d0
//
// 0087b4d0  53                   push ebx
// 0087b4d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0087b4d5  56                   push esi
// 0087b4d6  57                   push edi
// 0087b4d7  8bf1                 mov esi, ecx
// 0087b4d9  85db                 test ebx, ebx
// 0087b4db  0f8cc4000000         jl 0x87b5a5
// 0087b4e1  8d7e70               lea edi, [esi + 0x70]
// 0087b4e4  8bcf                 mov ecx, edi
// 0087b4e6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b4ec  3bd8                 cmp ebx, eax
// 0087b4ee  0f8db1000000         jge 0x87b5a5
// 0087b4f4  53                   push ebx
// 0087b4f5  8bcf                 mov ecx, edi
// 0087b4f7  ff15bcc79e00         call dword ptr [0x9ec7bc]
// 0087b4fd  0fbec0               movsx eax, al
// 0087b500  83c0dd               add eax, -0x23
// 0087b503  83f841               cmp eax, 0x41
// 0087b506  0f8799000000         ja 0x87b5a5
// 0087b50c  0fb6805cb78700       movzx eax, byte ptr [eax + 0x87b75c]
// 0087b513  ff248524b78700       jmp dword ptr [eax*4 + 0x87b724]
// 0087b51a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087b51e  0fbe11               movsx edx, byte ptr [ecx]
// 0087b521  52                   push edx
// 0087b522  ff1540a99e00         call dword ptr [0x9ea940]
// 0087b528  83c404               add esp, 4
// 0087b52b  5f                   pop edi
// 0087b52c  5e                   pop esi
// 0087b52d  5b                   pop ebx
// 0087b52e  c20800               ret 8
// 0087b531  8b742410             mov esi, dword ptr [esp + 0x10]
// 0087b535  0fbe06               movsx eax, byte ptr [esi]
// 0087b538  50                   push eax
// 0087b539  ff1540a99e00         call dword ptr [0x9ea940]
// 0087b53f  83c404               add esp, 4
// 0087b542  85c0                 test eax, eax
// 0087b544  0f85ad010000         jne 0x87b6f7
// 0087b54a  0fbe0e               movsx ecx, byte ptr [esi]
// 0087b54d  51                   push ecx
// 0087b54e  ff1544a99e00         call dword ptr [0x9ea944]
// 0087b554  83c404               add esp, 4
// 0087b557  85c0                 test eax, eax
// 0087b559  0f8598010000         jne 0x87b6f7
// 0087b55f  5f                   pop edi
// 0087b560  5e                   pop esi
// 0087b561  5b                   pop ebx
// 0087b562  c20800               ret 8
// 0087b565  8b742410             mov esi, dword ptr [esp + 0x10]
// 0087b569  0fbe16               movsx edx, byte ptr [esi]
// 0087b56c  52                   push edx
// 0087b56d  ff1540a99e00         call dword ptr [0x9ea940]
// 0087b573  83c404               add esp, 4
// 0087b576  85c0                 test eax, eax
// 0087b578  0f8579010000         jne 0x87b6f7
// 0087b57e  0fbe06               movsx eax, byte ptr [esi]
// 0087b581  50                   push eax
// 0087b582  ff1544a99e00         call dword ptr [0x9ea944]
// 0087b588  83c404               add esp, 4
// 0087b58b  85c0                 test eax, eax
// 0087b58d  0f8564010000         jne 0x87b6f7
// 0087b593  8a06                 mov al, byte ptr [esi]
// 0087b595  3c2d                 cmp al, 0x2d
// 0087b597  0f845a010000         je 0x87b6f7
// 0087b59d  3c2b                 cmp al, 0x2b
// 0087b59f  0f8452010000         je 0x87b6f7
// 0087b5a5  5f                   pop edi
// 0087b5a6  5e                   pop esi
// 0087b5a7  33c0                 xor eax, eax
// 0087b5a9  5b                   pop ebx
// 0087b5aa  c20800               ret 8
// 0087b5ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 0087b5b1  0fbe0e               movsx ecx, byte ptr [esi]
// 0087b5b4  51                   push ecx
// 0087b5b5  ff1540a99e00         call dword ptr [0x9ea940]
// 0087b5bb  83c404               add esp, 4
// 0087b5be  85c0                 test eax, eax
// 0087b5c0  0f8531010000         jne 0x87b6f7
// 0087b5c6  0fbe16               movsx edx, byte ptr [esi]
// 0087b5c9  52                   push edx
// 0087b5ca  ff1544a99e00         call dword ptr [0x9ea944]
// 0087b5d0  83c404               add esp, 4
// 0087b5d3  85c0                 test eax, eax
// 0087b5d5  0f851c010000         jne 0x87b6f7
// 0087b5db  8a06                 mov al, byte ptr [esi]
// 0087b5dd  3c2d                 cmp al, 0x2d
// 0087b5df  0f8412010000         je 0x87b6f7
// 0087b5e5  3c2b                 cmp al, 0x2b
// 0087b5e7  0f840a010000         je 0x87b6f7
// 0087b5ed  3c2e                 cmp al, 0x2e
// 0087b5ef  0f8402010000         je 0x87b6f7
// 0087b5f5  3c2c                 cmp al, 0x2c
// 0087b5f7  eba6                 jmp 0x87b59f
// 0087b5f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087b5fd  0fb611               movzx edx, byte ptr [ecx]
// 0087b600  8b06                 mov eax, dword ptr [esi]
// 0087b602  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0087b608  52                   push edx
// 0087b609  8bce                 mov ecx, esi
// 0087b60b  ffd0                 call eax
// 0087b60d  5f                   pop edi
// 0087b60e  5e                   pop esi
// 0087b60f  5b                   pop ebx
// 0087b610  c20800               ret 8
// 0087b613  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087b617  0fb607               movzx eax, byte ptr [edi]
// 0087b61a  8b16                 mov edx, dword ptr [esi]
// 0087b61c  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0087b622  50                   push eax
// 0087b623  8bce                 mov ecx, esi
// 0087b625  ffd2                 call edx
// 0087b627  85c0                 test eax, eax
// 0087b629  0f85c8000000         jne 0x87b6f7
// 0087b62f  0fbe07               movsx eax, byte ptr [edi]
// 0087b632  50                   push eax
// 0087b633  e916ffffff           jmp 0x87b54e
// 0087b638  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087b63c  0fbe0f               movsx ecx, byte ptr [edi]
// 0087b63f  51                   push ecx
// 0087b640  ff1548a99e00         call dword ptr [0x9ea948]
// 0087b646  83c404               add esp, 4
// 0087b649  85c0                 test eax, eax
// 0087b64b  0f85a6000000         jne 0x87b6f7
// 0087b651  0fb607               movzx eax, byte ptr [edi]
// 0087b654  8b16                 mov edx, dword ptr [esi]
// 0087b656  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0087b65c  50                   push eax
// 0087b65d  8bce                 mov ecx, esi
// 0087b65f  ffd2                 call edx
// 0087b661  e9f1feffff           jmp 0x87b557
// 0087b666  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087b66a  0fbe07               movsx eax, byte ptr [edi]
// 0087b66d  50                   push eax
// 0087b66e  ff1548a99e00         call dword ptr [0x9ea948]
// 0087b674  83c404               add esp, 4
// 0087b677  85c0                 test eax, eax
// 0087b679  757c                 jne 0x87b6f7
// 0087b67b  eb9a                 jmp 0x87b617
// 0087b67d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087b681  0fb608               movzx ecx, byte ptr [eax]
// 0087b684  8b16                 mov edx, dword ptr [esi]
// 0087b686  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0087b68c  51                   push ecx
// 0087b68d  8bce                 mov ecx, esi
// 0087b68f  ffd2                 call edx
// 0087b691  5f                   pop edi
// 0087b692  5e                   pop esi
// 0087b693  5b                   pop ebx
// 0087b694  c20800               ret 8
// 0087b697  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087b69b  0fbe08               movsx ecx, byte ptr [eax]
// 0087b69e  51                   push ecx
// 0087b69f  ff15fca89e00         call dword ptr [0x9ea8fc]
// 0087b6a5  83c404               add esp, 4
// 0087b6a8  5f                   pop edi
// 0087b6a9  5e                   pop esi
// 0087b6aa  5b                   pop ebx
// 0087b6ab  c20800               ret 8
// 0087b6ae  8b742410             mov esi, dword ptr [esp + 0x10]
// 0087b6b2  0fbe16               movsx edx, byte ptr [esi]
// 0087b6b5  52                   push edx
// 0087b6b6  ff15fca89e00         call dword ptr [0x9ea8fc]
// 0087b6bc  83c404               add esp, 4
// 0087b6bf  85c0                 test eax, eax
// 0087b6c1  7534                 jne 0x87b6f7
// 0087b6c3  0fbe06               movsx eax, byte ptr [esi]
// 0087b6c6  50                   push eax
// 0087b6c7  e982feffff           jmp 0x87b54e
// 0087b6cc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087b6d0  0fb607               movzx eax, byte ptr [edi]
// 0087b6d3  8b16                 mov edx, dword ptr [esi]
// 0087b6d5  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0087b6db  50                   push eax
// 0087b6dc  8bce                 mov ecx, esi
// 0087b6de  ffd2                 call edx
// 0087b6e0  85c0                 test eax, eax
// 0087b6e2  0f84bdfeffff         je 0x87b5a5
// 0087b6e8  6a01                 push 1
// 0087b6ea  0fb607               movzx eax, byte ptr [edi]
// 0087b6ed  50                   push eax
// 0087b6ee  8bce                 mov ecx, esi
// 0087b6f0  e8ebf6ffff           call 0x87ade0
// 0087b6f5  8807                 mov byte ptr [edi], al
// 0087b6f7  5f                   pop edi
// 0087b6f8  5e                   pop esi
// 0087b6f9  b801000000           mov eax, 1
// 0087b6fe  5b                   pop ebx
// 0087b6ff  c20800               ret 8
// 0087b702  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087b706  0fb607               movzx eax, byte ptr [edi]
// 0087b709  8b16                 mov edx, dword ptr [esi]
// 0087b70b  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0087b711  50                   push eax
// 0087b712  8bce                 mov ecx, esi
// 0087b714  ffd2                 call edx
// 0087b716  85c0                 test eax, eax
// 0087b718  0f8487feffff         je 0x87b5a5
// 0087b71e  6a00                 push 0
// 0087b720  ebc8                 jmp 0x87b6ea
// 0087b722  8bff                 mov edi, edi
// 0087b724  65b587               mov ch, 0x87
// 0087b727  007db6               add byte ptr [ebp - 0x4a], bh
// 0087b72a  8700                 xchg dword ptr [eax], eax
// 0087b72c  1ab5870031b5         sbb dh, byte ptr [ebp - 0x4aceff79]
// 0087b732  8700                 xchg dword ptr [eax], eax
// 0087b734  02b78700ccb6         add dh, byte ptr [edi - 0x4933ff79]
// 0087b73a  8700                 xchg dword ptr [eax], eax
// 0087b73c  13b6870038b6         adc esi, dword ptr [esi - 0x49c7ff79]
// 0087b742  8700                 xchg dword ptr [eax], eax
// 0087b744  97                   xchg edi, eax
// 0087b745  b687                 mov dh, 0x87
// 0087b747  00f9                 add cl, bh
// 0087b749  b587                 mov ch, 0x87
// 0087b74b  00aeb6870066         add byte ptr [esi + 0x660087b6], ch
// 0087b751  b687                 mov dh, 0x87
// 0087b753  00adb58700a5         add byte ptr [ebp - 0x5aff784b], ch
// 0087b759  b587                 mov ch, 0x87
// 0087b75b  0000                 add byte ptr [eax], al
// 0087b75d  0d0d010d0d           or eax, 0xd0d010d
// 0087b762  0d0d0d0d0d           or eax, 0xd0d0d0d
// 0087b767  0d0d020d0d           or eax, 0xd0d020d
// 0087b76c  0d0d0d0d0d           or eax, 0xd0d0d0d
// 0087b771  0d030d0d04           or eax, 0x40d0d03
// 0087b776  0d05060d07           or eax, 0x70d0605
// 0087b77b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 0087b780  0d080d0d0d           or eax, 0xd0d0d08
// 0087b785  090d0d0d0d0d         or dword ptr [0xd0d0d0d], ecx
// 0087b78b  0d0d0d0d0d           or eax, 0xd0d0d0d
// 0087b790  0d0a0d0d0d           or eax, 0xd0d0d0a
// 0087b795  0d0d0d0d0d           or eax, 0xd0d0d0d
// copied from an identical function in another client (function ?ProcessMask@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp
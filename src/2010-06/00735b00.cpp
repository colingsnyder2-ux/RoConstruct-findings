// roc 2010-06 00735b00  unit: seg_00730000  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735b00
//
// 00735b00  56                   push esi
// 00735b01  57                   push edi
// 00735b02  53                   push ebx
// 00735b03  8bf0                 mov esi, eax
// 00735b05  ff1544a79e00         call dword ptr [0x9ea744]
// 00735b0b  83c09f               add eax, -0x61
// 00735b0e  83c404               add esp, 4
// 00735b11  83f819               cmp eax, 0x19
// 00735b14  0f87b0000000         ja 0x735bca
// 00735b1a  0fb680005c7300       movzx eax, byte ptr [eax + 0x735c00]
// 00735b21  8b3d04aa9e00         mov edi, dword ptr [0x9eaa04]
// 00735b27  ff2485d45b7300       jmp dword ptr [eax*4 + 0x735bd4]
// 00735b2e  56                   push esi
// 00735b2f  ff15f0a79e00         call dword ptr [0x9ea7f0]
// 00735b35  83c404               add esp, 4
// 00735b38  8bf0                 mov esi, eax
// 00735b3a  eb75                 jmp 0x735bb1
// 00735b3c  56                   push esi
// 00735b3d  ff1500a89e00         call dword ptr [0x9ea800]
// 00735b43  83c404               add esp, 4
// 00735b46  8bf0                 mov esi, eax
// 00735b48  eb67                 jmp 0x735bb1
// 00735b4a  56                   push esi
// 00735b4b  ff15eca79e00         call dword ptr [0x9ea7ec]
// 00735b51  83c404               add esp, 4
// 00735b54  8bf0                 mov esi, eax
// 00735b56  eb59                 jmp 0x735bb1
// 00735b58  56                   push esi
// 00735b59  ffd7                 call edi
// 00735b5b  83c404               add esp, 4
// 00735b5e  8bf0                 mov esi, eax
// 00735b60  eb4f                 jmp 0x735bb1
// 00735b62  56                   push esi
// 00735b63  ff153ca79e00         call dword ptr [0x9ea73c]
// 00735b69  83c404               add esp, 4
// 00735b6c  8bf0                 mov esi, eax
// 00735b6e  eb41                 jmp 0x735bb1
// 00735b70  56                   push esi
// 00735b71  ff1540a79e00         call dword ptr [0x9ea740]
// 00735b77  83c404               add esp, 4
// 00735b7a  8bf0                 mov esi, eax
// 00735b7c  eb33                 jmp 0x735bb1
// 00735b7e  56                   push esi
// 00735b7f  ff1528a89e00         call dword ptr [0x9ea828]
// 00735b85  83c404               add esp, 4
// 00735b88  8bf0                 mov esi, eax
// 00735b8a  eb25                 jmp 0x735bb1
// 00735b8c  56                   push esi
// 00735b8d  ff1500a99e00         call dword ptr [0x9ea900]
// 00735b93  83c404               add esp, 4
// 00735b96  8bf0                 mov esi, eax
// 00735b98  eb17                 jmp 0x735bb1
// 00735b9a  56                   push esi
// 00735b9b  ff15fca89e00         call dword ptr [0x9ea8fc]
// 00735ba1  83c404               add esp, 4
// 00735ba4  8bf0                 mov esi, eax
// 00735ba6  eb09                 jmp 0x735bb1
// 00735ba8  33c9                 xor ecx, ecx
// 00735baa  85f6                 test esi, esi
// 00735bac  0f94c1               sete cl
// 00735baf  8bf1                 mov esi, ecx
// 00735bb1  53                   push ebx
// 00735bb2  ffd7                 call edi
// 00735bb4  83c404               add esp, 4
// 00735bb7  85c0                 test eax, eax
// 00735bb9  7405                 je 0x735bc0
// 00735bbb  5f                   pop edi
// 00735bbc  8bc6                 mov eax, esi
// 00735bbe  5e                   pop esi
// 00735bbf  c3                   ret 
// 00735bc0  33c0                 xor eax, eax
// 00735bc2  85f6                 test esi, esi
// 00735bc4  5f                   pop edi
// 00735bc5  0f94c0               sete al
// 00735bc8  5e                   pop esi
// 00735bc9  c3                   ret 
// 00735bca  33c0                 xor eax, eax
// 00735bcc  3bde                 cmp ebx, esi
// 00735bce  5f                   pop edi
// 00735bcf  0f94c0               sete al
// 00735bd2  5e                   pop esi
// 00735bd3  c3                   ret 
// 00735bd4  2e5b                 pop ebx
// 00735bd6  7300                 jae 0x735bd8
// 00735bd8  3c5b                 cmp al, 0x5b
// 00735bda  7300                 jae 0x735bdc
// 00735bdc  4a                   dec edx
// 00735bdd  5b                   pop ebx
// 00735bde  7300                 jae 0x735be0
// 00735be0  58                   pop eax
// 00735be1  5b                   pop ebx
// 00735be2  7300                 jae 0x735be4
// 00735be4  625b73               bound ebx, qword ptr [ebx + 0x73]
// 00735be7  00705b               add byte ptr [eax + 0x5b], dh
// 00735bea  7300                 jae 0x735bec
// 00735bec  7e5b                 jle 0x735c49
// 00735bee  7300                 jae 0x735bf0
// 00735bf0  8c5b73               mov word ptr [ebx + 0x73], ds
// 00735bf3  009a5b7300a8         add byte ptr [edx - 0x57ff8ca5], bl
// 00735bf9  5b                   pop ebx
// 00735bfa  7300                 jae 0x735bfc
// 00735bfc  ca5b73               retf 0x735b
// 00735bff  0000                 add byte ptr [eax], al
// 00735c01  0a01                 or al, byte ptr [ecx]
// 00735c03  020a                 add cl, byte ptr [edx]
// 00735c05  0a0a                 or cl, byte ptr [edx]
// 00735c07  0a0a                 or cl, byte ptr [edx]
// 00735c09  0a0a                 or cl, byte ptr [edx]
// 00735c0b  030a                 add ecx, dword ptr [edx]
// 00735c0d  0a0a                 or cl, byte ptr [edx]
// 00735c0f  040a                 add al, 0xa
// 00735c11  0a050a060a07         or al, byte ptr [0x70a060a]
// 00735c17  080a                 or byte ptr [edx], cl
// copied from an identical function in another client (function _match_class)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll lstrlib.c
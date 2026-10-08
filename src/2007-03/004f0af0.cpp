// roc 2007-03 004f0af0  unit: seg_004f0000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0af0
//
// 004f0af0  51                   push ecx
// 004f0af1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f0af5  53                   push ebx
// 004f0af6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f0afa  8bc1                 mov eax, ecx
// 004f0afc  2bc3                 sub eax, ebx
// 004f0afe  55                   push ebp
// 004f0aff  56                   push esi
// 004f0b00  c1f802               sar eax, 2
// 004f0b03  57                   push edi
// 004f0b04  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f0b08  99                   cdq 
// 004f0b09  2bc2                 sub eax, edx
// 004f0b0b  57                   push edi
// 004f0b0c  d1f8                 sar eax, 1
// 004f0b0e  83c1fc               add ecx, -4
// 004f0b11  51                   push ecx
// 004f0b12  8d3483               lea esi, [ebx + eax*4]
// 004f0b15  56                   push esi
// 004f0b16  53                   push ebx
// 004f0b17  e8e4feffff           call 0x4f0a00
// 004f0b1c  83c410               add esp, 0x10
// 004f0b1f  3bde                 cmp ebx, esi
// 004f0b21  8d6e04               lea ebp, [esi + 4]
// 004f0b24  7327                 jae 0x4f0b4d
// 004f0b26  8d7efc               lea edi, [esi - 4]
// 004f0b29  56                   push esi
// 004f0b2a  57                   push edi
// 004f0b2b  ff54242c             call dword ptr [esp + 0x2c]
// 004f0b2f  83c408               add esp, 8
// 004f0b32  84c0                 test al, al
// 004f0b34  7513                 jne 0x4f0b49
// 004f0b36  57                   push edi
// 004f0b37  56                   push esi
// 004f0b38  ff54242c             call dword ptr [esp + 0x2c]
// 004f0b3c  83c408               add esp, 8
// 004f0b3f  84c0                 test al, al
// 004f0b41  7506                 jne 0x4f0b49
// 004f0b43  8bf7                 mov esi, edi
// 004f0b45  3bde                 cmp ebx, esi
// 004f0b47  72dd                 jb 0x4f0b26
// 004f0b49  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f0b4d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004f0b51  3beb                 cmp ebp, ebx
// 004f0b53  731d                 jae 0x4f0b72
// 004f0b55  56                   push esi
// 004f0b56  55                   push ebp
// 004f0b57  ffd7                 call edi
// 004f0b59  83c408               add esp, 8
// 004f0b5c  84c0                 test al, al
// 004f0b5e  7512                 jne 0x4f0b72
// 004f0b60  55                   push ebp
// 004f0b61  56                   push esi
// 004f0b62  ffd7                 call edi
// 004f0b64  83c408               add esp, 8
// 004f0b67  84c0                 test al, al
// 004f0b69  7507                 jne 0x4f0b72
// 004f0b6b  83c504               add ebp, 4
// 004f0b6e  3beb                 cmp ebp, ebx
// 004f0b70  72e3                 jb 0x4f0b55
// 004f0b72  8bde                 mov ebx, esi
// 004f0b74  8bfd                 mov edi, ebp
// 004f0b76  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f0b7a  8d9b00000000         lea ebx, [ebx]
// 004f0b80  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004f0b84  7330                 jae 0x4f0bb6
// 004f0b86  57                   push edi
// 004f0b87  56                   push esi
// 004f0b88  ff54242c             call dword ptr [esp + 0x2c]
// 004f0b8c  83c408               add esp, 8
// 004f0b8f  84c0                 test al, al
// 004f0b91  751a                 jne 0x4f0bad
// 004f0b93  56                   push esi
// 004f0b94  57                   push edi
// 004f0b95  ff54242c             call dword ptr [esp + 0x2c]
// 004f0b99  83c408               add esp, 8
// 004f0b9c  84c0                 test al, al
// 004f0b9e  7516                 jne 0x4f0bb6
// 004f0ba0  8b17                 mov edx, dword ptr [edi]
// 004f0ba2  8bc5                 mov eax, ebp
// 004f0ba4  8b08                 mov ecx, dword ptr [eax]
// 004f0ba6  8910                 mov dword ptr [eax], edx
// 004f0ba8  83c504               add ebp, 4
// 004f0bab  890f                 mov dword ptr [edi], ecx
// 004f0bad  83c704               add edi, 4
// 004f0bb0  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004f0bb4  72d0                 jb 0x4f0b86
// 004f0bb6  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 004f0bba  7646                 jbe 0x4f0c02
// 004f0bbc  83c3fc               add ebx, -4
// 004f0bbf  90                   nop 
// 004f0bc0  56                   push esi
// 004f0bc1  53                   push ebx
// 004f0bc2  ff54242c             call dword ptr [esp + 0x2c]
// 004f0bc6  83c408               add esp, 8
// 004f0bc9  84c0                 test al, al
// 004f0bcb  7519                 jne 0x4f0be6
// 004f0bcd  53                   push ebx
// 004f0bce  56                   push esi
// 004f0bcf  ff54242c             call dword ptr [esp + 0x2c]
// 004f0bd3  83c408               add esp, 8
// 004f0bd6  84c0                 test al, al
// 004f0bd8  7520                 jne 0x4f0bfa
// 004f0bda  8b0b                 mov ecx, dword ptr [ebx]
// 004f0bdc  8b46fc               mov eax, dword ptr [esi - 4]
// 004f0bdf  83ee04               sub esi, 4
// 004f0be2  890e                 mov dword ptr [esi], ecx
// 004f0be4  8903                 mov dword ptr [ebx], eax
// 004f0be6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f0bea  83e804               sub eax, 4
// 004f0bed  83eb04               sub ebx, 4
// 004f0bf0  3944241c             cmp dword ptr [esp + 0x1c], eax
// 004f0bf4  89442410             mov dword ptr [esp + 0x10], eax
// 004f0bf8  72c6                 jb 0x4f0bc0
// 004f0bfa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f0bfe  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 004f0c02  7532                 jne 0x4f0c36
// 004f0c04  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004f0c08  746a                 je 0x4f0c74
// 004f0c0a  3bef                 cmp ebp, edi
// 004f0c0c  740a                 je 0x4f0c18
// 004f0c0e  8b5500               mov edx, dword ptr [ebp]
// 004f0c11  8b06                 mov eax, dword ptr [esi]
// 004f0c13  8916                 mov dword ptr [esi], edx
// 004f0c15  894500               mov dword ptr [ebp], eax
// 004f0c18  8bc7                 mov eax, edi
// 004f0c1a  8b18                 mov ebx, dword ptr [eax]
// 004f0c1c  8bce                 mov ecx, esi
// 004f0c1e  8b11                 mov edx, dword ptr [ecx]
// 004f0c20  8919                 mov dword ptr [ecx], ebx
// 004f0c22  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f0c26  83c504               add ebp, 4
// 004f0c29  83c604               add esi, 4
// 004f0c2c  83c704               add edi, 4
// 004f0c2f  8910                 mov dword ptr [eax], edx
// 004f0c31  e94affffff           jmp 0x4f0b80
// 004f0c36  83eb04               sub ebx, 4
// 004f0c39  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004f0c3d  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f0c41  7521                 jne 0x4f0c64
// 004f0c43  83ee04               sub esi, 4
// 004f0c46  3bde                 cmp ebx, esi
// 004f0c48  7408                 je 0x4f0c52
// 004f0c4a  8b0e                 mov ecx, dword ptr [esi]
// 004f0c4c  8b03                 mov eax, dword ptr [ebx]
// 004f0c4e  890b                 mov dword ptr [ebx], ecx
// 004f0c50  8906                 mov dword ptr [esi], eax
// 004f0c52  8b55fc               mov edx, dword ptr [ebp - 4]
// 004f0c55  8b06                 mov eax, dword ptr [esi]
// 004f0c57  83ed04               sub ebp, 4
// 004f0c5a  8916                 mov dword ptr [esi], edx
// 004f0c5c  894500               mov dword ptr [ebp], eax
// 004f0c5f  e91cffffff           jmp 0x4f0b80
// 004f0c64  8b07                 mov eax, dword ptr [edi]
// 004f0c66  8b0b                 mov ecx, dword ptr [ebx]
// 004f0c68  890f                 mov dword ptr [edi], ecx
// 004f0c6a  8903                 mov dword ptr [ebx], eax
// 004f0c6c  83c704               add edi, 4
// 004f0c6f  e90cffffff           jmp 0x4f0b80
// 004f0c74  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f0c78  5f                   pop edi
// 004f0c79  8930                 mov dword ptr [eax], esi
// 004f0c7b  5e                   pop esi
// 004f0c7c  896804               mov dword ptr [eax + 4], ebp
// 004f0c7f  5d                   pop ebp
// 004f0c80  5b                   pop ebx
// 004f0c81  59                   pop ecx
// 004f0c82  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp

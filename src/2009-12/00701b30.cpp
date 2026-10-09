// roc 2009-12 00701b30  unit: RBX::Assembly  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701b30
//
// 00701b30  51                   push ecx
// 00701b31  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00701b35  53                   push ebx
// 00701b36  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00701b3a  55                   push ebp
// 00701b3b  56                   push esi
// 00701b3c  57                   push edi
// 00701b3d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00701b41  8bc1                 mov eax, ecx
// 00701b43  2bc7                 sub eax, edi
// 00701b45  c1f802               sar eax, 2
// 00701b48  99                   cdq 
// 00701b49  2bc2                 sub eax, edx
// 00701b4b  53                   push ebx
// 00701b4c  d1f8                 sar eax, 1
// 00701b4e  83c1fc               add ecx, -4
// 00701b51  51                   push ecx
// 00701b52  8d3487               lea esi, [edi + eax*4]
// 00701b55  56                   push esi
// 00701b56  57                   push edi
// 00701b57  e854fcffff           call 0x7017b0
// 00701b5c  83c410               add esp, 0x10
// 00701b5f  8d6e04               lea ebp, [esi + 4]
// 00701b62  3bfe                 cmp edi, esi
// 00701b64  7327                 jae 0x701b8d
// 00701b66  8b06                 mov eax, dword ptr [esi]
// 00701b68  8b4efc               mov ecx, dword ptr [esi - 4]
// 00701b6b  50                   push eax
// 00701b6c  51                   push ecx
// 00701b6d  ffd3                 call ebx
// 00701b6f  83c408               add esp, 8
// 00701b72  84c0                 test al, al
// 00701b74  7517                 jne 0x701b8d
// 00701b76  8b56fc               mov edx, dword ptr [esi - 4]
// 00701b79  8b06                 mov eax, dword ptr [esi]
// 00701b7b  52                   push edx
// 00701b7c  50                   push eax
// 00701b7d  ffd3                 call ebx
// 00701b7f  83c408               add esp, 8
// 00701b82  84c0                 test al, al
// 00701b84  7507                 jne 0x701b8d
// 00701b86  83c6fc               add esi, -4
// 00701b89  3bfe                 cmp edi, esi
// 00701b8b  72d9                 jb 0x701b66
// 00701b8d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00701b91  3bef                 cmp ebp, edi
// 00701b93  7327                 jae 0x701bbc
// 00701b95  8b0e                 mov ecx, dword ptr [esi]
// 00701b97  8b5500               mov edx, dword ptr [ebp]
// 00701b9a  51                   push ecx
// 00701b9b  52                   push edx
// 00701b9c  ffd3                 call ebx
// 00701b9e  83c408               add esp, 8
// 00701ba1  84c0                 test al, al
// 00701ba3  7517                 jne 0x701bbc
// 00701ba5  8b4500               mov eax, dword ptr [ebp]
// 00701ba8  8b0e                 mov ecx, dword ptr [esi]
// 00701baa  50                   push eax
// 00701bab  51                   push ecx
// 00701bac  ffd3                 call ebx
// 00701bae  83c408               add esp, 8
// 00701bb1  84c0                 test al, al
// 00701bb3  7507                 jne 0x701bbc
// 00701bb5  83c504               add ebp, 4
// 00701bb8  3bef                 cmp ebp, edi
// 00701bba  72d9                 jb 0x701b95
// 00701bbc  8bde                 mov ebx, esi
// 00701bbe  8bfd                 mov edi, ebp
// 00701bc0  895c2410             mov dword ptr [esp + 0x10], ebx
// 00701bc4  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00701bc8  7342                 jae 0x701c0c
// 00701bca  8d9b00000000         lea ebx, [ebx]
// 00701bd0  8b17                 mov edx, dword ptr [edi]
// 00701bd2  8b06                 mov eax, dword ptr [esi]
// 00701bd4  52                   push edx
// 00701bd5  50                   push eax
// 00701bd6  ff54242c             call dword ptr [esp + 0x2c]
// 00701bda  83c408               add esp, 8
// 00701bdd  84c0                 test al, al
// 00701bdf  7522                 jne 0x701c03
// 00701be1  8b0e                 mov ecx, dword ptr [esi]
// 00701be3  8b17                 mov edx, dword ptr [edi]
// 00701be5  51                   push ecx
// 00701be6  52                   push edx
// 00701be7  ff54242c             call dword ptr [esp + 0x2c]
// 00701beb  83c408               add esp, 8
// 00701bee  84c0                 test al, al
// 00701bf0  751a                 jne 0x701c0c
// 00701bf2  8bc5                 mov eax, ebp
// 00701bf4  83c504               add ebp, 4
// 00701bf7  3bc7                 cmp eax, edi
// 00701bf9  7408                 je 0x701c03
// 00701bfb  8b17                 mov edx, dword ptr [edi]
// 00701bfd  8b08                 mov ecx, dword ptr [eax]
// 00701bff  8910                 mov dword ptr [eax], edx
// 00701c01  890f                 mov dword ptr [edi], ecx
// 00701c03  83c704               add edi, 4
// 00701c06  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00701c0a  72c4                 jb 0x701bd0
// 00701c0c  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00701c10  7650                 jbe 0x701c62
// 00701c12  83c3fc               add ebx, -4
// 00701c15  8b06                 mov eax, dword ptr [esi]
// 00701c17  8b0b                 mov ecx, dword ptr [ebx]
// 00701c19  50                   push eax
// 00701c1a  51                   push ecx
// 00701c1b  ff54242c             call dword ptr [esp + 0x2c]
// 00701c1f  83c408               add esp, 8
// 00701c22  84c0                 test al, al
// 00701c24  7520                 jne 0x701c46
// 00701c26  8b13                 mov edx, dword ptr [ebx]
// 00701c28  8b06                 mov eax, dword ptr [esi]
// 00701c2a  52                   push edx
// 00701c2b  50                   push eax
// 00701c2c  ff54242c             call dword ptr [esp + 0x2c]
// 00701c30  83c408               add esp, 8
// 00701c33  84c0                 test al, al
// 00701c35  7523                 jne 0x701c5a
// 00701c37  83ee04               sub esi, 4
// 00701c3a  3bf3                 cmp esi, ebx
// 00701c3c  7408                 je 0x701c46
// 00701c3e  8b0b                 mov ecx, dword ptr [ebx]
// 00701c40  8b06                 mov eax, dword ptr [esi]
// 00701c42  890e                 mov dword ptr [esi], ecx
// 00701c44  8903                 mov dword ptr [ebx], eax
// 00701c46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00701c4a  83e804               sub eax, 4
// 00701c4d  83eb04               sub ebx, 4
// 00701c50  89442410             mov dword ptr [esp + 0x10], eax
// 00701c54  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00701c58  72bb                 jb 0x701c15
// 00701c5a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00701c5e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00701c62  7542                 jne 0x701ca6
// 00701c64  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00701c68  0f8482000000         je 0x701cf0
// 00701c6e  3bef                 cmp ebp, edi
// 00701c70  740e                 je 0x701c80
// 00701c72  3bf5                 cmp esi, ebp
// 00701c74  740a                 je 0x701c80
// 00701c76  8b5500               mov edx, dword ptr [ebp]
// 00701c79  8b06                 mov eax, dword ptr [esi]
// 00701c7b  8916                 mov dword ptr [esi], edx
// 00701c7d  894500               mov dword ptr [ebp], eax
// 00701c80  8bc7                 mov eax, edi
// 00701c82  8bce                 mov ecx, esi
// 00701c84  83c504               add ebp, 4
// 00701c87  83c604               add esi, 4
// 00701c8a  83c704               add edi, 4
// 00701c8d  3bc8                 cmp ecx, eax
// 00701c8f  0f842fffffff         je 0x701bc4
// 00701c95  8b18                 mov ebx, dword ptr [eax]
// 00701c97  8b11                 mov edx, dword ptr [ecx]
// 00701c99  8919                 mov dword ptr [ecx], ebx
// 00701c9b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00701c9f  8910                 mov dword ptr [eax], edx
// 00701ca1  e91effffff           jmp 0x701bc4
// 00701ca6  83eb04               sub ebx, 4
// 00701ca9  895c2410             mov dword ptr [esp + 0x10], ebx
// 00701cad  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00701cb1  7529                 jne 0x701cdc
// 00701cb3  83ee04               sub esi, 4
// 00701cb6  3bde                 cmp ebx, esi
// 00701cb8  7408                 je 0x701cc2
// 00701cba  8b0e                 mov ecx, dword ptr [esi]
// 00701cbc  8b03                 mov eax, dword ptr [ebx]
// 00701cbe  890b                 mov dword ptr [ebx], ecx
// 00701cc0  8906                 mov dword ptr [esi], eax
// 00701cc2  83ed04               sub ebp, 4
// 00701cc5  3bf5                 cmp esi, ebp
// 00701cc7  0f84f7feffff         je 0x701bc4
// 00701ccd  8b5500               mov edx, dword ptr [ebp]
// 00701cd0  8b06                 mov eax, dword ptr [esi]
// 00701cd2  8916                 mov dword ptr [esi], edx
// 00701cd4  894500               mov dword ptr [ebp], eax
// 00701cd7  e9e8feffff           jmp 0x701bc4
// 00701cdc  3bfb                 cmp edi, ebx
// 00701cde  7408                 je 0x701ce8
// 00701ce0  8b0b                 mov ecx, dword ptr [ebx]
// 00701ce2  8b07                 mov eax, dword ptr [edi]
// 00701ce4  890f                 mov dword ptr [edi], ecx
// 00701ce6  8903                 mov dword ptr [ebx], eax
// 00701ce8  83c704               add edi, 4
// 00701ceb  e9d4feffff           jmp 0x701bc4
// 00701cf0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00701cf4  5f                   pop edi
// 00701cf5  8930                 mov dword ptr [eax], esi
// 00701cf7  5e                   pop esi
// 00701cf8  896804               mov dword ptr [eax + 4], ebp
// 00701cfb  5d                   pop ebp
// 00701cfc  5b                   pop ebx
// 00701cfd  59                   pop ecx
// 00701cfe  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

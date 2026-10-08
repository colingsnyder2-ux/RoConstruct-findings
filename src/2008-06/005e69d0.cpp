// roc 2008-06 005e69d0  unit: RBX::Clump  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e69d0
//
// 005e69d0  51                   push ecx
// 005e69d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e69d5  53                   push ebx
// 005e69d6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e69da  55                   push ebp
// 005e69db  56                   push esi
// 005e69dc  57                   push edi
// 005e69dd  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e69e1  8bc1                 mov eax, ecx
// 005e69e3  2bc7                 sub eax, edi
// 005e69e5  c1f802               sar eax, 2
// 005e69e8  99                   cdq 
// 005e69e9  2bc2                 sub eax, edx
// 005e69eb  53                   push ebx
// 005e69ec  d1f8                 sar eax, 1
// 005e69ee  83c1fc               add ecx, -4
// 005e69f1  51                   push ecx
// 005e69f2  8d3487               lea esi, [edi + eax*4]
// 005e69f5  56                   push esi
// 005e69f6  57                   push edi
// 005e69f7  e834feffff           call 0x5e6830
// 005e69fc  83c410               add esp, 0x10
// 005e69ff  8d6e04               lea ebp, [esi + 4]
// 005e6a02  3bfe                 cmp edi, esi
// 005e6a04  7327                 jae 0x5e6a2d
// 005e6a06  8b06                 mov eax, dword ptr [esi]
// 005e6a08  8b4efc               mov ecx, dword ptr [esi - 4]
// 005e6a0b  50                   push eax
// 005e6a0c  51                   push ecx
// 005e6a0d  ffd3                 call ebx
// 005e6a0f  83c408               add esp, 8
// 005e6a12  84c0                 test al, al
// 005e6a14  7517                 jne 0x5e6a2d
// 005e6a16  8b56fc               mov edx, dword ptr [esi - 4]
// 005e6a19  8b06                 mov eax, dword ptr [esi]
// 005e6a1b  52                   push edx
// 005e6a1c  50                   push eax
// 005e6a1d  ffd3                 call ebx
// 005e6a1f  83c408               add esp, 8
// 005e6a22  84c0                 test al, al
// 005e6a24  7507                 jne 0x5e6a2d
// 005e6a26  83c6fc               add esi, -4
// 005e6a29  3bfe                 cmp edi, esi
// 005e6a2b  72d9                 jb 0x5e6a06
// 005e6a2d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e6a31  3bef                 cmp ebp, edi
// 005e6a33  7327                 jae 0x5e6a5c
// 005e6a35  8b0e                 mov ecx, dword ptr [esi]
// 005e6a37  8b5500               mov edx, dword ptr [ebp]
// 005e6a3a  51                   push ecx
// 005e6a3b  52                   push edx
// 005e6a3c  ffd3                 call ebx
// 005e6a3e  83c408               add esp, 8
// 005e6a41  84c0                 test al, al
// 005e6a43  7517                 jne 0x5e6a5c
// 005e6a45  8b4500               mov eax, dword ptr [ebp]
// 005e6a48  8b0e                 mov ecx, dword ptr [esi]
// 005e6a4a  50                   push eax
// 005e6a4b  51                   push ecx
// 005e6a4c  ffd3                 call ebx
// 005e6a4e  83c408               add esp, 8
// 005e6a51  84c0                 test al, al
// 005e6a53  7507                 jne 0x5e6a5c
// 005e6a55  83c504               add ebp, 4
// 005e6a58  3bef                 cmp ebp, edi
// 005e6a5a  72d9                 jb 0x5e6a35
// 005e6a5c  8bde                 mov ebx, esi
// 005e6a5e  8bfd                 mov edi, ebp
// 005e6a60  895c2410             mov dword ptr [esp + 0x10], ebx
// 005e6a64  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e6a68  7342                 jae 0x5e6aac
// 005e6a6a  8d9b00000000         lea ebx, [ebx]
// 005e6a70  8b17                 mov edx, dword ptr [edi]
// 005e6a72  8b06                 mov eax, dword ptr [esi]
// 005e6a74  52                   push edx
// 005e6a75  50                   push eax
// 005e6a76  ff54242c             call dword ptr [esp + 0x2c]
// 005e6a7a  83c408               add esp, 8
// 005e6a7d  84c0                 test al, al
// 005e6a7f  7522                 jne 0x5e6aa3
// 005e6a81  8b0e                 mov ecx, dword ptr [esi]
// 005e6a83  8b17                 mov edx, dword ptr [edi]
// 005e6a85  51                   push ecx
// 005e6a86  52                   push edx
// 005e6a87  ff54242c             call dword ptr [esp + 0x2c]
// 005e6a8b  83c408               add esp, 8
// 005e6a8e  84c0                 test al, al
// 005e6a90  751a                 jne 0x5e6aac
// 005e6a92  8bc5                 mov eax, ebp
// 005e6a94  83c504               add ebp, 4
// 005e6a97  3bc7                 cmp eax, edi
// 005e6a99  7408                 je 0x5e6aa3
// 005e6a9b  8b17                 mov edx, dword ptr [edi]
// 005e6a9d  8b08                 mov ecx, dword ptr [eax]
// 005e6a9f  8910                 mov dword ptr [eax], edx
// 005e6aa1  890f                 mov dword ptr [edi], ecx
// 005e6aa3  83c704               add edi, 4
// 005e6aa6  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e6aaa  72c4                 jb 0x5e6a70
// 005e6aac  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005e6ab0  7650                 jbe 0x5e6b02
// 005e6ab2  83c3fc               add ebx, -4
// 005e6ab5  8b06                 mov eax, dword ptr [esi]
// 005e6ab7  8b0b                 mov ecx, dword ptr [ebx]
// 005e6ab9  50                   push eax
// 005e6aba  51                   push ecx
// 005e6abb  ff54242c             call dword ptr [esp + 0x2c]
// 005e6abf  83c408               add esp, 8
// 005e6ac2  84c0                 test al, al
// 005e6ac4  7520                 jne 0x5e6ae6
// 005e6ac6  8b13                 mov edx, dword ptr [ebx]
// 005e6ac8  8b06                 mov eax, dword ptr [esi]
// 005e6aca  52                   push edx
// 005e6acb  50                   push eax
// 005e6acc  ff54242c             call dword ptr [esp + 0x2c]
// 005e6ad0  83c408               add esp, 8
// 005e6ad3  84c0                 test al, al
// 005e6ad5  7523                 jne 0x5e6afa
// 005e6ad7  83ee04               sub esi, 4
// 005e6ada  3bf3                 cmp esi, ebx
// 005e6adc  7408                 je 0x5e6ae6
// 005e6ade  8b0b                 mov ecx, dword ptr [ebx]
// 005e6ae0  8b06                 mov eax, dword ptr [esi]
// 005e6ae2  890e                 mov dword ptr [esi], ecx
// 005e6ae4  8903                 mov dword ptr [ebx], eax
// 005e6ae6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e6aea  83e804               sub eax, 4
// 005e6aed  83eb04               sub ebx, 4
// 005e6af0  89442410             mov dword ptr [esp + 0x10], eax
// 005e6af4  3944241c             cmp dword ptr [esp + 0x1c], eax
// 005e6af8  72bb                 jb 0x5e6ab5
// 005e6afa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e6afe  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 005e6b02  7542                 jne 0x5e6b46
// 005e6b04  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e6b08  0f8482000000         je 0x5e6b90
// 005e6b0e  3bef                 cmp ebp, edi
// 005e6b10  740e                 je 0x5e6b20
// 005e6b12  3bf5                 cmp esi, ebp
// 005e6b14  740a                 je 0x5e6b20
// 005e6b16  8b5500               mov edx, dword ptr [ebp]
// 005e6b19  8b06                 mov eax, dword ptr [esi]
// 005e6b1b  8916                 mov dword ptr [esi], edx
// 005e6b1d  894500               mov dword ptr [ebp], eax
// 005e6b20  8bc7                 mov eax, edi
// 005e6b22  8bce                 mov ecx, esi
// 005e6b24  83c504               add ebp, 4
// 005e6b27  83c604               add esi, 4
// 005e6b2a  83c704               add edi, 4
// 005e6b2d  3bc8                 cmp ecx, eax
// 005e6b2f  0f842fffffff         je 0x5e6a64
// 005e6b35  8b18                 mov ebx, dword ptr [eax]
// 005e6b37  8b11                 mov edx, dword ptr [ecx]
// 005e6b39  8919                 mov dword ptr [ecx], ebx
// 005e6b3b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e6b3f  8910                 mov dword ptr [eax], edx
// 005e6b41  e91effffff           jmp 0x5e6a64
// 005e6b46  83eb04               sub ebx, 4
// 005e6b49  895c2410             mov dword ptr [esp + 0x10], ebx
// 005e6b4d  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005e6b51  7529                 jne 0x5e6b7c
// 005e6b53  83ee04               sub esi, 4
// 005e6b56  3bde                 cmp ebx, esi
// 005e6b58  7408                 je 0x5e6b62
// 005e6b5a  8b0e                 mov ecx, dword ptr [esi]
// 005e6b5c  8b03                 mov eax, dword ptr [ebx]
// 005e6b5e  890b                 mov dword ptr [ebx], ecx
// 005e6b60  8906                 mov dword ptr [esi], eax
// 005e6b62  83ed04               sub ebp, 4
// 005e6b65  3bf5                 cmp esi, ebp
// 005e6b67  0f84f7feffff         je 0x5e6a64
// 005e6b6d  8b5500               mov edx, dword ptr [ebp]
// 005e6b70  8b06                 mov eax, dword ptr [esi]
// 005e6b72  8916                 mov dword ptr [esi], edx
// 005e6b74  894500               mov dword ptr [ebp], eax
// 005e6b77  e9e8feffff           jmp 0x5e6a64
// 005e6b7c  3bfb                 cmp edi, ebx
// 005e6b7e  7408                 je 0x5e6b88
// 005e6b80  8b0b                 mov ecx, dword ptr [ebx]
// 005e6b82  8b07                 mov eax, dword ptr [edi]
// 005e6b84  890f                 mov dword ptr [edi], ecx
// 005e6b86  8903                 mov dword ptr [ebx], eax
// 005e6b88  83c704               add edi, 4
// 005e6b8b  e9d4feffff           jmp 0x5e6a64
// 005e6b90  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e6b94  5f                   pop edi
// 005e6b95  8930                 mov dword ptr [eax], esi
// 005e6b97  5e                   pop esi
// 005e6b98  896804               mov dword ptr [eax + 4], ebp
// 005e6b9b  5d                   pop ebp
// 005e6b9c  5b                   pop ebx
// 005e6b9d  59                   pop ecx
// 005e6b9e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

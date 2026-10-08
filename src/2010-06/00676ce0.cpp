// roc 2010-06 00676ce0  unit: RBX::Assembly  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676ce0
//
// 00676ce0  51                   push ecx
// 00676ce1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00676ce5  53                   push ebx
// 00676ce6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00676cea  55                   push ebp
// 00676ceb  56                   push esi
// 00676cec  57                   push edi
// 00676ced  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00676cf1  8bc1                 mov eax, ecx
// 00676cf3  2bc7                 sub eax, edi
// 00676cf5  c1f802               sar eax, 2
// 00676cf8  99                   cdq 
// 00676cf9  2bc2                 sub eax, edx
// 00676cfb  53                   push ebx
// 00676cfc  d1f8                 sar eax, 1
// 00676cfe  83c1fc               add ecx, -4
// 00676d01  51                   push ecx
// 00676d02  8d3487               lea esi, [edi + eax*4]
// 00676d05  56                   push esi
// 00676d06  57                   push edi
// 00676d07  e854fcffff           call 0x676960
// 00676d0c  83c410               add esp, 0x10
// 00676d0f  8d6e04               lea ebp, [esi + 4]
// 00676d12  3bfe                 cmp edi, esi
// 00676d14  7327                 jae 0x676d3d
// 00676d16  8b06                 mov eax, dword ptr [esi]
// 00676d18  8b4efc               mov ecx, dword ptr [esi - 4]
// 00676d1b  50                   push eax
// 00676d1c  51                   push ecx
// 00676d1d  ffd3                 call ebx
// 00676d1f  83c408               add esp, 8
// 00676d22  84c0                 test al, al
// 00676d24  7517                 jne 0x676d3d
// 00676d26  8b56fc               mov edx, dword ptr [esi - 4]
// 00676d29  8b06                 mov eax, dword ptr [esi]
// 00676d2b  52                   push edx
// 00676d2c  50                   push eax
// 00676d2d  ffd3                 call ebx
// 00676d2f  83c408               add esp, 8
// 00676d32  84c0                 test al, al
// 00676d34  7507                 jne 0x676d3d
// 00676d36  83c6fc               add esi, -4
// 00676d39  3bfe                 cmp edi, esi
// 00676d3b  72d9                 jb 0x676d16
// 00676d3d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00676d41  3bef                 cmp ebp, edi
// 00676d43  7327                 jae 0x676d6c
// 00676d45  8b0e                 mov ecx, dword ptr [esi]
// 00676d47  8b5500               mov edx, dword ptr [ebp]
// 00676d4a  51                   push ecx
// 00676d4b  52                   push edx
// 00676d4c  ffd3                 call ebx
// 00676d4e  83c408               add esp, 8
// 00676d51  84c0                 test al, al
// 00676d53  7517                 jne 0x676d6c
// 00676d55  8b4500               mov eax, dword ptr [ebp]
// 00676d58  8b0e                 mov ecx, dword ptr [esi]
// 00676d5a  50                   push eax
// 00676d5b  51                   push ecx
// 00676d5c  ffd3                 call ebx
// 00676d5e  83c408               add esp, 8
// 00676d61  84c0                 test al, al
// 00676d63  7507                 jne 0x676d6c
// 00676d65  83c504               add ebp, 4
// 00676d68  3bef                 cmp ebp, edi
// 00676d6a  72d9                 jb 0x676d45
// 00676d6c  8bde                 mov ebx, esi
// 00676d6e  8bfd                 mov edi, ebp
// 00676d70  895c2410             mov dword ptr [esp + 0x10], ebx
// 00676d74  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676d78  7342                 jae 0x676dbc
// 00676d7a  8d9b00000000         lea ebx, [ebx]
// 00676d80  8b17                 mov edx, dword ptr [edi]
// 00676d82  8b06                 mov eax, dword ptr [esi]
// 00676d84  52                   push edx
// 00676d85  50                   push eax
// 00676d86  ff54242c             call dword ptr [esp + 0x2c]
// 00676d8a  83c408               add esp, 8
// 00676d8d  84c0                 test al, al
// 00676d8f  7522                 jne 0x676db3
// 00676d91  8b0e                 mov ecx, dword ptr [esi]
// 00676d93  8b17                 mov edx, dword ptr [edi]
// 00676d95  51                   push ecx
// 00676d96  52                   push edx
// 00676d97  ff54242c             call dword ptr [esp + 0x2c]
// 00676d9b  83c408               add esp, 8
// 00676d9e  84c0                 test al, al
// 00676da0  751a                 jne 0x676dbc
// 00676da2  8bc5                 mov eax, ebp
// 00676da4  83c504               add ebp, 4
// 00676da7  3bc7                 cmp eax, edi
// 00676da9  7408                 je 0x676db3
// 00676dab  8b17                 mov edx, dword ptr [edi]
// 00676dad  8b08                 mov ecx, dword ptr [eax]
// 00676daf  8910                 mov dword ptr [eax], edx
// 00676db1  890f                 mov dword ptr [edi], ecx
// 00676db3  83c704               add edi, 4
// 00676db6  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676dba  72c4                 jb 0x676d80
// 00676dbc  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00676dc0  7650                 jbe 0x676e12
// 00676dc2  83c3fc               add ebx, -4
// 00676dc5  8b06                 mov eax, dword ptr [esi]
// 00676dc7  8b0b                 mov ecx, dword ptr [ebx]
// 00676dc9  50                   push eax
// 00676dca  51                   push ecx
// 00676dcb  ff54242c             call dword ptr [esp + 0x2c]
// 00676dcf  83c408               add esp, 8
// 00676dd2  84c0                 test al, al
// 00676dd4  7520                 jne 0x676df6
// 00676dd6  8b13                 mov edx, dword ptr [ebx]
// 00676dd8  8b06                 mov eax, dword ptr [esi]
// 00676dda  52                   push edx
// 00676ddb  50                   push eax
// 00676ddc  ff54242c             call dword ptr [esp + 0x2c]
// 00676de0  83c408               add esp, 8
// 00676de3  84c0                 test al, al
// 00676de5  7523                 jne 0x676e0a
// 00676de7  83ee04               sub esi, 4
// 00676dea  3bf3                 cmp esi, ebx
// 00676dec  7408                 je 0x676df6
// 00676dee  8b0b                 mov ecx, dword ptr [ebx]
// 00676df0  8b06                 mov eax, dword ptr [esi]
// 00676df2  890e                 mov dword ptr [esi], ecx
// 00676df4  8903                 mov dword ptr [ebx], eax
// 00676df6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00676dfa  83e804               sub eax, 4
// 00676dfd  83eb04               sub ebx, 4
// 00676e00  89442410             mov dword ptr [esp + 0x10], eax
// 00676e04  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00676e08  72bb                 jb 0x676dc5
// 00676e0a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00676e0e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00676e12  7542                 jne 0x676e56
// 00676e14  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676e18  0f8482000000         je 0x676ea0
// 00676e1e  3bef                 cmp ebp, edi
// 00676e20  740e                 je 0x676e30
// 00676e22  3bf5                 cmp esi, ebp
// 00676e24  740a                 je 0x676e30
// 00676e26  8b5500               mov edx, dword ptr [ebp]
// 00676e29  8b06                 mov eax, dword ptr [esi]
// 00676e2b  8916                 mov dword ptr [esi], edx
// 00676e2d  894500               mov dword ptr [ebp], eax
// 00676e30  8bc7                 mov eax, edi
// 00676e32  8bce                 mov ecx, esi
// 00676e34  83c504               add ebp, 4
// 00676e37  83c604               add esi, 4
// 00676e3a  83c704               add edi, 4
// 00676e3d  3bc8                 cmp ecx, eax
// 00676e3f  0f842fffffff         je 0x676d74
// 00676e45  8b18                 mov ebx, dword ptr [eax]
// 00676e47  8b11                 mov edx, dword ptr [ecx]
// 00676e49  8919                 mov dword ptr [ecx], ebx
// 00676e4b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00676e4f  8910                 mov dword ptr [eax], edx
// 00676e51  e91effffff           jmp 0x676d74
// 00676e56  83eb04               sub ebx, 4
// 00676e59  895c2410             mov dword ptr [esp + 0x10], ebx
// 00676e5d  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00676e61  7529                 jne 0x676e8c
// 00676e63  83ee04               sub esi, 4
// 00676e66  3bde                 cmp ebx, esi
// 00676e68  7408                 je 0x676e72
// 00676e6a  8b0e                 mov ecx, dword ptr [esi]
// 00676e6c  8b03                 mov eax, dword ptr [ebx]
// 00676e6e  890b                 mov dword ptr [ebx], ecx
// 00676e70  8906                 mov dword ptr [esi], eax
// 00676e72  83ed04               sub ebp, 4
// 00676e75  3bf5                 cmp esi, ebp
// 00676e77  0f84f7feffff         je 0x676d74
// 00676e7d  8b5500               mov edx, dword ptr [ebp]
// 00676e80  8b06                 mov eax, dword ptr [esi]
// 00676e82  8916                 mov dword ptr [esi], edx
// 00676e84  894500               mov dword ptr [ebp], eax
// 00676e87  e9e8feffff           jmp 0x676d74
// 00676e8c  3bfb                 cmp edi, ebx
// 00676e8e  7408                 je 0x676e98
// 00676e90  8b0b                 mov ecx, dword ptr [ebx]
// 00676e92  8b07                 mov eax, dword ptr [edi]
// 00676e94  890f                 mov dword ptr [edi], ecx
// 00676e96  8903                 mov dword ptr [ebx], eax
// 00676e98  83c704               add edi, 4
// 00676e9b  e9d4feffff           jmp 0x676d74
// 00676ea0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00676ea4  5f                   pop edi
// 00676ea5  8930                 mov dword ptr [eax], esi
// 00676ea7  5e                   pop esi
// 00676ea8  896804               mov dword ptr [eax + 4], ebp
// 00676eab  5d                   pop ebp
// 00676eac  5b                   pop ebx
// 00676ead  59                   pop ecx
// 00676eae  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

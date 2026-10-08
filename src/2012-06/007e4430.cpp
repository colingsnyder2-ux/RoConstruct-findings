// roc 2012-06 007e4430  unit: RBX::Assembly  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e4430
//
// 007e4430  51                   push ecx
// 007e4431  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e4435  53                   push ebx
// 007e4436  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007e443a  55                   push ebp
// 007e443b  56                   push esi
// 007e443c  57                   push edi
// 007e443d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007e4441  8bc1                 mov eax, ecx
// 007e4443  2bc7                 sub eax, edi
// 007e4445  c1f802               sar eax, 2
// 007e4448  99                   cdq 
// 007e4449  2bc2                 sub eax, edx
// 007e444b  53                   push ebx
// 007e444c  d1f8                 sar eax, 1
// 007e444e  83c1fc               add ecx, -4
// 007e4451  51                   push ecx
// 007e4452  8d3487               lea esi, [edi + eax*4]
// 007e4455  56                   push esi
// 007e4456  57                   push edi
// 007e4457  e864fcffff           call 0x7e40c0
// 007e445c  83c410               add esp, 0x10
// 007e445f  8d6e04               lea ebp, [esi + 4]
// 007e4462  3bfe                 cmp edi, esi
// 007e4464  7327                 jae 0x7e448d
// 007e4466  8b06                 mov eax, dword ptr [esi]
// 007e4468  8b4efc               mov ecx, dword ptr [esi - 4]
// 007e446b  50                   push eax
// 007e446c  51                   push ecx
// 007e446d  ffd3                 call ebx
// 007e446f  83c408               add esp, 8
// 007e4472  84c0                 test al, al
// 007e4474  7517                 jne 0x7e448d
// 007e4476  8b56fc               mov edx, dword ptr [esi - 4]
// 007e4479  8b06                 mov eax, dword ptr [esi]
// 007e447b  52                   push edx
// 007e447c  50                   push eax
// 007e447d  ffd3                 call ebx
// 007e447f  83c408               add esp, 8
// 007e4482  84c0                 test al, al
// 007e4484  7507                 jne 0x7e448d
// 007e4486  83c6fc               add esi, -4
// 007e4489  3bfe                 cmp edi, esi
// 007e448b  72d9                 jb 0x7e4466
// 007e448d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007e4491  3bef                 cmp ebp, edi
// 007e4493  7327                 jae 0x7e44bc
// 007e4495  8b0e                 mov ecx, dword ptr [esi]
// 007e4497  8b5500               mov edx, dword ptr [ebp]
// 007e449a  51                   push ecx
// 007e449b  52                   push edx
// 007e449c  ffd3                 call ebx
// 007e449e  83c408               add esp, 8
// 007e44a1  84c0                 test al, al
// 007e44a3  7517                 jne 0x7e44bc
// 007e44a5  8b4500               mov eax, dword ptr [ebp]
// 007e44a8  8b0e                 mov ecx, dword ptr [esi]
// 007e44aa  50                   push eax
// 007e44ab  51                   push ecx
// 007e44ac  ffd3                 call ebx
// 007e44ae  83c408               add esp, 8
// 007e44b1  84c0                 test al, al
// 007e44b3  7507                 jne 0x7e44bc
// 007e44b5  83c504               add ebp, 4
// 007e44b8  3bef                 cmp ebp, edi
// 007e44ba  72d9                 jb 0x7e4495
// 007e44bc  8bde                 mov ebx, esi
// 007e44be  8bfd                 mov edi, ebp
// 007e44c0  895c2410             mov dword ptr [esp + 0x10], ebx
// 007e44c4  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 007e44c8  7342                 jae 0x7e450c
// 007e44ca  8d9b00000000         lea ebx, [ebx]
// 007e44d0  8b17                 mov edx, dword ptr [edi]
// 007e44d2  8b06                 mov eax, dword ptr [esi]
// 007e44d4  52                   push edx
// 007e44d5  50                   push eax
// 007e44d6  ff54242c             call dword ptr [esp + 0x2c]
// 007e44da  83c408               add esp, 8
// 007e44dd  84c0                 test al, al
// 007e44df  7522                 jne 0x7e4503
// 007e44e1  8b0e                 mov ecx, dword ptr [esi]
// 007e44e3  8b17                 mov edx, dword ptr [edi]
// 007e44e5  51                   push ecx
// 007e44e6  52                   push edx
// 007e44e7  ff54242c             call dword ptr [esp + 0x2c]
// 007e44eb  83c408               add esp, 8
// 007e44ee  84c0                 test al, al
// 007e44f0  751a                 jne 0x7e450c
// 007e44f2  8bc5                 mov eax, ebp
// 007e44f4  83c504               add ebp, 4
// 007e44f7  3bc7                 cmp eax, edi
// 007e44f9  7408                 je 0x7e4503
// 007e44fb  8b17                 mov edx, dword ptr [edi]
// 007e44fd  8b08                 mov ecx, dword ptr [eax]
// 007e44ff  8910                 mov dword ptr [eax], edx
// 007e4501  890f                 mov dword ptr [edi], ecx
// 007e4503  83c704               add edi, 4
// 007e4506  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 007e450a  72c4                 jb 0x7e44d0
// 007e450c  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 007e4510  7650                 jbe 0x7e4562
// 007e4512  83c3fc               add ebx, -4
// 007e4515  8b06                 mov eax, dword ptr [esi]
// 007e4517  8b0b                 mov ecx, dword ptr [ebx]
// 007e4519  50                   push eax
// 007e451a  51                   push ecx
// 007e451b  ff54242c             call dword ptr [esp + 0x2c]
// 007e451f  83c408               add esp, 8
// 007e4522  84c0                 test al, al
// 007e4524  7520                 jne 0x7e4546
// 007e4526  8b13                 mov edx, dword ptr [ebx]
// 007e4528  8b06                 mov eax, dword ptr [esi]
// 007e452a  52                   push edx
// 007e452b  50                   push eax
// 007e452c  ff54242c             call dword ptr [esp + 0x2c]
// 007e4530  83c408               add esp, 8
// 007e4533  84c0                 test al, al
// 007e4535  7523                 jne 0x7e455a
// 007e4537  83ee04               sub esi, 4
// 007e453a  3bf3                 cmp esi, ebx
// 007e453c  7408                 je 0x7e4546
// 007e453e  8b0b                 mov ecx, dword ptr [ebx]
// 007e4540  8b06                 mov eax, dword ptr [esi]
// 007e4542  890e                 mov dword ptr [esi], ecx
// 007e4544  8903                 mov dword ptr [ebx], eax
// 007e4546  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e454a  83e804               sub eax, 4
// 007e454d  83eb04               sub ebx, 4
// 007e4550  89442410             mov dword ptr [esp + 0x10], eax
// 007e4554  3944241c             cmp dword ptr [esp + 0x1c], eax
// 007e4558  72bb                 jb 0x7e4515
// 007e455a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e455e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 007e4562  7542                 jne 0x7e45a6
// 007e4564  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 007e4568  0f8482000000         je 0x7e45f0
// 007e456e  3bef                 cmp ebp, edi
// 007e4570  740e                 je 0x7e4580
// 007e4572  3bf5                 cmp esi, ebp
// 007e4574  740a                 je 0x7e4580
// 007e4576  8b5500               mov edx, dword ptr [ebp]
// 007e4579  8b06                 mov eax, dword ptr [esi]
// 007e457b  8916                 mov dword ptr [esi], edx
// 007e457d  894500               mov dword ptr [ebp], eax
// 007e4580  8bc7                 mov eax, edi
// 007e4582  8bce                 mov ecx, esi
// 007e4584  83c504               add ebp, 4
// 007e4587  83c604               add esi, 4
// 007e458a  83c704               add edi, 4
// 007e458d  3bc8                 cmp ecx, eax
// 007e458f  0f842fffffff         je 0x7e44c4
// 007e4595  8b18                 mov ebx, dword ptr [eax]
// 007e4597  8b11                 mov edx, dword ptr [ecx]
// 007e4599  8919                 mov dword ptr [ecx], ebx
// 007e459b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e459f  8910                 mov dword ptr [eax], edx
// 007e45a1  e91effffff           jmp 0x7e44c4
// 007e45a6  83eb04               sub ebx, 4
// 007e45a9  895c2410             mov dword ptr [esp + 0x10], ebx
// 007e45ad  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 007e45b1  7529                 jne 0x7e45dc
// 007e45b3  83ee04               sub esi, 4
// 007e45b6  3bde                 cmp ebx, esi
// 007e45b8  7408                 je 0x7e45c2
// 007e45ba  8b0e                 mov ecx, dword ptr [esi]
// 007e45bc  8b03                 mov eax, dword ptr [ebx]
// 007e45be  890b                 mov dword ptr [ebx], ecx
// 007e45c0  8906                 mov dword ptr [esi], eax
// 007e45c2  83ed04               sub ebp, 4
// 007e45c5  3bf5                 cmp esi, ebp
// 007e45c7  0f84f7feffff         je 0x7e44c4
// 007e45cd  8b5500               mov edx, dword ptr [ebp]
// 007e45d0  8b06                 mov eax, dword ptr [esi]
// 007e45d2  8916                 mov dword ptr [esi], edx
// 007e45d4  894500               mov dword ptr [ebp], eax
// 007e45d7  e9e8feffff           jmp 0x7e44c4
// 007e45dc  3bfb                 cmp edi, ebx
// 007e45de  7408                 je 0x7e45e8
// 007e45e0  8b0b                 mov ecx, dword ptr [ebx]
// 007e45e2  8b07                 mov eax, dword ptr [edi]
// 007e45e4  890f                 mov dword ptr [edi], ecx
// 007e45e6  8903                 mov dword ptr [ebx], eax
// 007e45e8  83c704               add edi, 4
// 007e45eb  e9d4feffff           jmp 0x7e44c4
// 007e45f0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e45f4  5f                   pop edi
// 007e45f5  8930                 mov dword ptr [eax], esi
// 007e45f7  5e                   pop esi
// 007e45f8  896804               mov dword ptr [eax + 4], ebp
// 007e45fb  5d                   pop ebp
// 007e45fc  5b                   pop ebx
// 007e45fd  59                   pop ecx
// 007e45fe  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

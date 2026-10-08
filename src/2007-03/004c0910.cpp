// roc 2007-03 004c0910  unit: seg_004c0000  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0910
//
// 004c0910  83ec18               sub esp, 0x18
// 004c0913  55                   push ebp
// 004c0914  57                   push edi
// 004c0915  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004c0919  85ff                 test edi, edi
// 004c091b  894c240c             mov dword ptr [esp + 0xc], ecx
// 004c091f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004c0927  66c744241471d9       mov word ptr [esp + 0x14], 0xd971
// 004c092e  66c74424166dce       mov word ptr [esp + 0x16], 0xce6d
// 004c0935  66c7442418bf58       mov word ptr [esp + 0x18], 0x58bf
// 004c093c  0f8472010000         je 0x4c0ab4
// 004c0942  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004c0946  83fd10               cmp ebp, 0x10
// 004c0949  0f8c65010000         jl 0x4c0ab4
// 004c094f  8bc5                 mov eax, ebp
// 004c0951  250f000080           and eax, 0x8000000f
// 004c0956  7905                 jns 0x4c095d
// 004c0958  48                   dec eax
// 004c0959  83c8f0               or eax, 0xfffffff0
// 004c095c  40                   inc eax
// 004c095d  0f8551010000         jne 0x4c0ab4
// 004c0963  8d45f0               lea eax, [ebp - 0x10]
// 004c0966  83f810               cmp eax, 0x10
// 004c0969  53                   push ebx
// 004c096a  56                   push esi
// 004c096b  0f8cb5000000         jl 0x4c0a26
// 004c0971  bd10000000           mov ebp, 0x10
// 004c0976  2bef                 sub ebp, edi
// 004c0978  c1e804               shr eax, 4
// 004c097b  8d7710               lea esi, [edi + 0x10]
// 004c097e  c744242cefffffff     mov dword ptr [esp + 0x2c], 0xffffffef
// 004c0986  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c098a  89442410             mov dword ptr [esp + 0x10], eax
// 004c098e  eb04                 jmp 0x4c0994
// 004c0990  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c0994  56                   push esi
// 004c0995  6a10                 push 0x10
// 004c0997  8d8120010000         lea eax, [ecx + 0x120]
// 004c099d  56                   push esi
// 004c099e  50                   push eax
// 004c099f  8d8140020000         lea eax, [ecx + 0x240]
// 004c09a5  50                   push eax
// 004c09a6  e875110000           call 0x4c1b20
// 004c09ab  83c414               add esp, 0x14
// 004c09ae  33c9                 xor ecx, ecx
// 004c09b0  03ee                 add ebp, esi
// 004c09b2  8d442ff1             lea eax, [edi + ebp - 0xf]
// 004c09b6  8b542430             mov edx, dword ptr [esp + 0x30]
// 004c09ba  3bea                 cmp ebp, edx
// 004c09bc  7509                 jne 0x4c09c7
// 004c09be  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004c09c2  8a1c03               mov bl, byte ptr [ebx + eax]
// 004c09c5  eb04                 jmp 0x4c09cb
// 004c09c7  8a5c0e10             mov bl, byte ptr [esi + ecx + 0x10]
// 004c09cb  3058ff               xor byte ptr [eax - 1], bl
// 004c09ce  3bea                 cmp ebp, edx
// 004c09d0  7506                 jne 0x4c09d8
// 004c09d2  8a5c3901             mov bl, byte ptr [ecx + edi + 1]
// 004c09d6  eb04                 jmp 0x4c09dc
// 004c09d8  8a5c0e11             mov bl, byte ptr [esi + ecx + 0x11]
// 004c09dc  3018                 xor byte ptr [eax], bl
// 004c09de  3bea                 cmp ebp, edx
// 004c09e0  7506                 jne 0x4c09e8
// 004c09e2  8a5c3902             mov bl, byte ptr [ecx + edi + 2]
// 004c09e6  eb04                 jmp 0x4c09ec
// 004c09e8  8a5c0e12             mov bl, byte ptr [esi + ecx + 0x12]
// 004c09ec  305801               xor byte ptr [eax + 1], bl
// 004c09ef  3bea                 cmp ebp, edx
// 004c09f1  7506                 jne 0x4c09f9
// 004c09f3  8a543903             mov dl, byte ptr [ecx + edi + 3]
// 004c09f7  eb04                 jmp 0x4c09fd
// 004c09f9  8a540e13             mov dl, byte ptr [esi + ecx + 0x13]
// 004c09fd  305002               xor byte ptr [eax + 2], dl
// 004c0a00  83c104               add ecx, 4
// 004c0a03  83c004               add eax, 4
// 004c0a06  83f910               cmp ecx, 0x10
// 004c0a09  72ab                 jb 0x4c09b6
// 004c0a0b  836c242c10           sub dword ptr [esp + 0x2c], 0x10
// 004c0a10  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c0a14  83c610               add esi, 0x10
// 004c0a17  836c241001           sub dword ptr [esp + 0x10], 1
// 004c0a1c  0f856effffff         jne 0x4c0990
// 004c0a22  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004c0a26  57                   push edi
// 004c0a27  6a10                 push 0x10
// 004c0a29  8d8120010000         lea eax, [ecx + 0x120]
// 004c0a2f  57                   push edi
// 004c0a30  50                   push eax
// 004c0a31  81c140020000         add ecx, 0x240
// 004c0a37  51                   push ecx
// 004c0a38  e8e3100000           call 0x4c1b20
// 004c0a3d  8a4705               mov al, byte ptr [edi + 5]
// 004c0a40  8b1f                 mov ebx, dword ptr [edi]
// 004c0a42  240f                 and al, 0xf
// 004c0a44  0fb6f0               movzx esi, al
// 004c0a47  2bee                 sub ebp, esi
// 004c0a49  8d45fa               lea eax, [ebp - 6]
// 004c0a4c  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 004c0a50  83c414               add esp, 0x14
// 004c0a53  8d4c3002             lea ecx, [eax + esi + 2]
// 004c0a57  51                   push ecx
// 004c0a58  8d5704               lea edx, [edi + 4]
// 004c0a5b  52                   push edx
// 004c0a5c  8d4c2424             lea ecx, [esp + 0x24]
// 004c0a60  894500               mov dword ptr [ebp], eax
// 004c0a63  e808140000           call 0x4c1e70
// 004c0a68  3b5c2424             cmp ebx, dword ptr [esp + 0x24]
// 004c0a6c  740c                 je 0x4c0a7a
// 004c0a6e  5e                   pop esi
// 004c0a6f  5b                   pop ebx
// 004c0a70  5f                   pop edi
// 004c0a71  32c0                 xor al, al
// 004c0a73  5d                   pop ebp
// 004c0a74  83c418               add esp, 0x18
// 004c0a77  c21000               ret 0x10
// 004c0a7a  8b4d00               mov ecx, dword ptr [ebp]
// 004c0a7d  8b442434             mov eax, dword ptr [esp + 0x34]
// 004c0a81  3bf8                 cmp edi, eax
// 004c0a83  51                   push ecx
// 004c0a84  8d543e06             lea edx, [esi + edi + 6]
// 004c0a88  52                   push edx
// 004c0a89  50                   push eax
// 004c0a8a  7514                 jne 0x4c0aa0
// 004c0a8c  e8d1eb1500           call 0x61f662
// 004c0a91  83c40c               add esp, 0xc
// 004c0a94  5e                   pop esi
// 004c0a95  5b                   pop ebx
// 004c0a96  5f                   pop edi
// 004c0a97  b001                 mov al, 1
// 004c0a99  5d                   pop ebp
// 004c0a9a  83c418               add esp, 0x18
// 004c0a9d  c21000               ret 0x10
// 004c0aa0  e83de71500           call 0x61f1e2
// 004c0aa5  83c40c               add esp, 0xc
// 004c0aa8  5e                   pop esi
// 004c0aa9  5b                   pop ebx
// 004c0aaa  5f                   pop edi
// 004c0aab  b001                 mov al, 1
// 004c0aad  5d                   pop ebp
// 004c0aae  83c418               add esp, 0x18
// 004c0ab1  c21000               ret 0x10
// 004c0ab4  5f                   pop edi
// 004c0ab5  32c0                 xor al, al
// 004c0ab7  5d                   pop ebp
// 004c0ab8  83c418               add esp, 0x18
// 004c0abb  c21000               ret 0x10
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?Decrypt@DataBlockEncryptor@@QAE_NPAEH0PAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp

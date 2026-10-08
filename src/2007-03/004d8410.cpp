// roc 2007-03 004d8410  unit: seg_004d0000  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d8410
//
// 004d8410  6aff                 push -1
// 004d8412  687bdd7400           push 0x74dd7b
// 004d8417  64a100000000         mov eax, dword ptr fs:[0]
// 004d841d  50                   push eax
// 004d841e  64892500000000       mov dword ptr fs:[0], esp
// 004d8425  83ec3c               sub esp, 0x3c
// 004d8428  53                   push ebx
// 004d8429  56                   push esi
// 004d842a  8bf1                 mov esi, ecx
// 004d842c  57                   push edi
// 004d842d  89742414             mov dword ptr [esp + 0x14], esi
// 004d8431  e87a170100           call 0x4e9bb0
// 004d8436  33ff                 xor edi, edi
// 004d8438  6a1c                 push 0x1c
// 004d843a  897c2454             mov dword ptr [esp + 0x54], edi
// 004d843e  c70610ea7900         mov dword ptr [esi], 0x79ea10
// 004d8444  e8bf5c1400           call 0x61e108
// 004d8449  83c404               add esp, 4
// 004d844c  3bc7                 cmp eax, edi
// 004d844e  7424                 je 0x4d8474
// 004d8450  c700946d7900         mov dword ptr [eax], 0x796d94
// 004d8456  897804               mov dword ptr [eax + 4], edi
// 004d8459  897808               mov dword ptr [eax + 8], edi
// 004d845c  c7004ce97900         mov dword ptr [eax], 0x79e94c
// 004d8462  897810               mov dword ptr [eax + 0x10], edi
// 004d8465  897814               mov dword ptr [eax + 0x14], edi
// 004d8468  89780c               mov dword ptr [eax + 0xc], edi
// 004d846b  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004d8472  eb02                 jmp 0x4d8476
// 004d8474  33c0                 xor eax, eax
// 004d8476  3bc7                 cmp eax, edi
// 004d8478  897c2410             mov dword ptr [esp + 0x10], edi
// 004d847c  740e                 je 0x4d848c
// 004d847e  89442410             mov dword ptr [esp + 0x10], eax
// 004d8482  83c004               add eax, 4
// 004d8485  50                   push eax
// 004d8486  ff15acd27700         call dword ptr [0x77d2ac]
// 004d848c  8d442410             lea eax, [esp + 0x10]
// 004d8490  b303                 mov bl, 3
// 004d8492  50                   push eax
// 004d8493  8d4e0c               lea ecx, [esi + 0xc]
// 004d8496  885c2454             mov byte ptr [esp + 0x54], bl
// 004d849a  e8f187ffff           call 0x4d0c90
// 004d849f  8b442458             mov eax, dword ptr [esp + 0x58]
// 004d84a3  d900                 fld dword ptr [eax]
// 004d84a5  8d4c2410             lea ecx, [esp + 0x10]
// 004d84a9  d95c2418             fstp dword ptr [esp + 0x18]
// 004d84ad  d94004               fld dword ptr [eax + 4]
// 004d84b0  d95c241c             fstp dword ptr [esp + 0x1c]
// 004d84b4  d94008               fld dword ptr [eax + 8]
// 004d84b7  33c0                 xor eax, eax
// 004d84b9  50                   push eax
// 004d84ba  d95c2424             fstp dword ptr [esp + 0x24]
// 004d84be  d944241c             fld dword ptr [esp + 0x1c]
// 004d84c2  83ec0c               sub esp, 0xc
// 004d84c5  8bc4                 mov eax, esp
// 004d84c7  d918                 fstp dword ptr [eax]
// 004d84c9  89642468             mov dword ptr [esp + 0x68], esp
// 004d84cd  d944242c             fld dword ptr [esp + 0x2c]
// 004d84d1  51                   push ecx
// 004d84d2  d95804               fstp dword ptr [eax + 4]
// 004d84d5  8d4c2438             lea ecx, [esp + 0x38]
// 004d84d9  d9442434             fld dword ptr [esp + 0x34]
// 004d84dd  d95808               fstp dword ptr [eax + 8]
// 004d84e0  e84ba20000           call 0x4e2730
// 004d84e5  d905a8e97900         fld dword ptr [0x79e9a8]
// 004d84eb  c7442424d0e97900     mov dword ptr [esp + 0x24], 0x79e9d0
// 004d84f3  d95c2444             fstp dword ptr [esp + 0x44]
// 004d84f7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d84fb  6a01                 push 1
// 004d84fd  52                   push edx
// 004d84fe  8d4c242c             lea ecx, [esp + 0x2c]
// 004d8502  c644245804           mov byte ptr [esp + 0x58], 4
// 004d8507  e844a10000           call 0x4e2650
// 004d850c  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d8510  3bc7                 cmp eax, edi
// 004d8512  885c2450             mov byte ptr [esp + 0x50], bl
// 004d8516  8b1da8d27700         mov ebx, dword ptr [0x77d2a8]
// 004d851c  7427                 je 0x4d8545
// 004d851e  83c004               add eax, 4
// 004d8521  50                   push eax
// 004d8522  ffd3                 call ebx
// 004d8524  85c0                 test eax, eax
// 004d8526  7519                 jne 0x4d8541
// 004d8528  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d852c  e88faef8ff           call 0x4633c0
// 004d8531  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d8535  3bcf                 cmp ecx, edi
// 004d8537  7408                 je 0x4d8541
// 004d8539  8b01                 mov eax, dword ptr [ecx]
// 004d853b  8b10                 mov edx, dword ptr [eax]
// 004d853d  6a01                 push 1
// 004d853f  ffd2                 call edx
// 004d8541  897c2438             mov dword ptr [esp + 0x38], edi
// 004d8545  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d8549  3bc7                 cmp eax, edi
// 004d854b  c644245000           mov byte ptr [esp + 0x50], 0
// 004d8550  7423                 je 0x4d8575
// 004d8552  83c004               add eax, 4
// 004d8555  50                   push eax
// 004d8556  ffd3                 call ebx
// 004d8558  85c0                 test eax, eax
// 004d855a  7519                 jne 0x4d8575
// 004d855c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d8560  e85baef8ff           call 0x4633c0
// 004d8565  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d8569  3bcf                 cmp ecx, edi
// 004d856b  7408                 je 0x4d8575
// 004d856d  8b01                 mov eax, dword ptr [ecx]
// 004d856f  8b10                 mov edx, dword ptr [eax]
// 004d8571  6a01                 push 1
// 004d8573  ffd2                 call edx
// 004d8575  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004d8579  5f                   pop edi
// 004d857a  8bc6                 mov eax, esi
// 004d857c  5e                   pop esi
// 004d857d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8584  5b                   pop ebx
// 004d8585  83c448               add esp, 0x48
// 004d8588  c20800               ret 8
// library rbxgs-view/WedgeMesh.cpp (function ??0WedgeMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp

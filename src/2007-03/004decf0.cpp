// roc 2007-03 004decf0  unit: seg_004d0000  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004decf0
//
// 004decf0  6aff                 push -1
// 004decf2  68fbdf7400           push 0x74dffb
// 004decf7  64a100000000         mov eax, dword ptr fs:[0]
// 004decfd  50                   push eax
// 004decfe  64892500000000       mov dword ptr fs:[0], esp
// 004ded05  83ec34               sub esp, 0x34
// 004ded08  53                   push ebx
// 004ded09  56                   push esi
// 004ded0a  8bf1                 mov esi, ecx
// 004ded0c  57                   push edi
// 004ded0d  89742414             mov dword ptr [esp + 0x14], esi
// 004ded11  e89aae0000           call 0x4e9bb0
// 004ded16  33ff                 xor edi, edi
// 004ded18  6a1c                 push 0x1c
// 004ded1a  897c244c             mov dword ptr [esp + 0x4c], edi
// 004ded1e  c706b4ea7900         mov dword ptr [esi], 0x79eab4
// 004ded24  e8dff31300           call 0x61e108
// 004ded29  83c404               add esp, 4
// 004ded2c  3bc7                 cmp eax, edi
// 004ded2e  7424                 je 0x4ded54
// 004ded30  c700946d7900         mov dword ptr [eax], 0x796d94
// 004ded36  897804               mov dword ptr [eax + 4], edi
// 004ded39  897808               mov dword ptr [eax + 8], edi
// 004ded3c  c7004ce97900         mov dword ptr [eax], 0x79e94c
// 004ded42  897810               mov dword ptr [eax + 0x10], edi
// 004ded45  897814               mov dword ptr [eax + 0x14], edi
// 004ded48  89780c               mov dword ptr [eax + 0xc], edi
// 004ded4b  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004ded52  eb02                 jmp 0x4ded56
// 004ded54  33c0                 xor eax, eax
// 004ded56  3bc7                 cmp eax, edi
// 004ded58  897c2410             mov dword ptr [esp + 0x10], edi
// 004ded5c  740e                 je 0x4ded6c
// 004ded5e  89442410             mov dword ptr [esp + 0x10], eax
// 004ded62  83c004               add eax, 4
// 004ded65  50                   push eax
// 004ded66  ff15acd27700         call dword ptr [0x77d2ac]
// 004ded6c  8d442410             lea eax, [esp + 0x10]
// 004ded70  b303                 mov bl, 3
// 004ded72  50                   push eax
// 004ded73  8d4e0c               lea ecx, [esi + 0xc]
// 004ded76  885c244c             mov byte ptr [esp + 0x4c], bl
// 004ded7a  e8111fffff           call 0x4d0c90
// 004ded7f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004ded83  d901                 fld dword ptr [ecx]
// 004ded85  6a0c                 push 0xc
// 004ded87  33c0                 xor eax, eax
// 004ded89  50                   push eax
// 004ded8a  83ec0c               sub esp, 0xc
// 004ded8d  8bc4                 mov eax, esp
// 004ded8f  d918                 fstp dword ptr [eax]
// 004ded91  8964242c             mov dword ptr [esp + 0x2c], esp
// 004ded95  d94104               fld dword ptr [ecx + 4]
// 004ded98  d95804               fstp dword ptr [eax + 4]
// 004ded9b  d94108               fld dword ptr [ecx + 8]
// 004ded9e  8d4c2424             lea ecx, [esp + 0x24]
// 004deda2  51                   push ecx
// 004deda3  d95808               fstp dword ptr [eax + 8]
// 004deda6  8d4c2434             lea ecx, [esp + 0x34]
// 004dedaa  e8a1fbffff           call 0x4de950
// 004dedaf  8b542454             mov edx, dword ptr [esp + 0x54]
// 004dedb3  6a01                 push 1
// 004dedb5  52                   push edx
// 004dedb6  8d4c2424             lea ecx, [esp + 0x24]
// 004dedba  c644245004           mov byte ptr [esp + 0x50], 4
// 004dedbf  e88c380000           call 0x4e2650
// 004dedc4  8b442430             mov eax, dword ptr [esp + 0x30]
// 004dedc8  3bc7                 cmp eax, edi
// 004dedca  885c2448             mov byte ptr [esp + 0x48], bl
// 004dedce  8b1da8d27700         mov ebx, dword ptr [0x77d2a8]
// 004dedd4  7427                 je 0x4dedfd
// 004dedd6  83c004               add eax, 4
// 004dedd9  50                   push eax
// 004dedda  ffd3                 call ebx
// 004deddc  85c0                 test eax, eax
// 004dedde  7519                 jne 0x4dedf9
// 004dede0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004dede4  e8d745f8ff           call 0x4633c0
// 004dede9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004deded  3bcf                 cmp ecx, edi
// 004dedef  7408                 je 0x4dedf9
// 004dedf1  8b01                 mov eax, dword ptr [ecx]
// 004dedf3  8b10                 mov edx, dword ptr [eax]
// 004dedf5  6a01                 push 1
// 004dedf7  ffd2                 call edx
// 004dedf9  897c2430             mov dword ptr [esp + 0x30], edi
// 004dedfd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dee01  3bc7                 cmp eax, edi
// 004dee03  c644244800           mov byte ptr [esp + 0x48], 0
// 004dee08  7423                 je 0x4dee2d
// 004dee0a  83c004               add eax, 4
// 004dee0d  50                   push eax
// 004dee0e  ffd3                 call ebx
// 004dee10  85c0                 test eax, eax
// 004dee12  7519                 jne 0x4dee2d
// 004dee14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dee18  e8a345f8ff           call 0x4633c0
// 004dee1d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004dee21  3bcf                 cmp ecx, edi
// 004dee23  7408                 je 0x4dee2d
// 004dee25  8b01                 mov eax, dword ptr [ecx]
// 004dee27  8b10                 mov edx, dword ptr [eax]
// 004dee29  6a01                 push 1
// 004dee2b  ffd2                 call edx
// 004dee2d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004dee31  5f                   pop edi
// 004dee32  8bc6                 mov eax, esi
// 004dee34  5e                   pop esi
// 004dee35  64890d00000000       mov dword ptr fs:[0], ecx
// 004dee3c  5b                   pop ebx
// 004dee3d  83c440               add esp, 0x40
// 004dee40  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderAlongXMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp

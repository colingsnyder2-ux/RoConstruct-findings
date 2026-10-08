// roc 2007-08 004eb1f0  unit: CylinderBuilder  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb1f0
//
// 004eb1f0  6aff                 push -1
// 004eb1f2  687bd17400           push 0x74d17b
// 004eb1f7  64a100000000         mov eax, dword ptr fs:[0]
// 004eb1fd  50                   push eax
// 004eb1fe  64892500000000       mov dword ptr fs:[0], esp
// 004eb205  83ec34               sub esp, 0x34
// 004eb208  53                   push ebx
// 004eb209  56                   push esi
// 004eb20a  8bf1                 mov esi, ecx
// 004eb20c  57                   push edi
// 004eb20d  89742414             mov dword ptr [esp + 0x14], esi
// 004eb211  e86aaf0000           call 0x4f6180
// 004eb216  33ff                 xor edi, edi
// 004eb218  6a1c                 push 0x1c
// 004eb21a  897c244c             mov dword ptr [esp + 0x4c], edi
// 004eb21e  c7066cf47900         mov dword ptr [esi], 0x79f46c
// 004eb224  e8cd4c1400           call 0x62fef6
// 004eb229  83c404               add esp, 4
// 004eb22c  3bc7                 cmp eax, edi
// 004eb22e  7424                 je 0x4eb254
// 004eb230  c70084797900         mov dword ptr [eax], 0x797984
// 004eb236  897804               mov dword ptr [eax + 4], edi
// 004eb239  897808               mov dword ptr [eax + 8], edi
// 004eb23c  c70004f37900         mov dword ptr [eax], 0x79f304
// 004eb242  897810               mov dword ptr [eax + 0x10], edi
// 004eb245  897814               mov dword ptr [eax + 0x14], edi
// 004eb248  89780c               mov dword ptr [eax + 0xc], edi
// 004eb24b  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004eb252  eb02                 jmp 0x4eb256
// 004eb254  33c0                 xor eax, eax
// 004eb256  3bc7                 cmp eax, edi
// 004eb258  897c2410             mov dword ptr [esp + 0x10], edi
// 004eb25c  740e                 je 0x4eb26c
// 004eb25e  89442410             mov dword ptr [esp + 0x10], eax
// 004eb262  83c004               add eax, 4
// 004eb265  50                   push eax
// 004eb266  ff15ecd27700         call dword ptr [0x77d2ec]
// 004eb26c  8d442410             lea eax, [esp + 0x10]
// 004eb270  b303                 mov bl, 3
// 004eb272  50                   push eax
// 004eb273  8d4e0c               lea ecx, [esi + 0xc]
// 004eb276  885c244c             mov byte ptr [esp + 0x4c], bl
// 004eb27a  e8d11fffff           call 0x4dd250
// 004eb27f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004eb283  d901                 fld dword ptr [ecx]
// 004eb285  6a0c                 push 0xc
// 004eb287  33c0                 xor eax, eax
// 004eb289  50                   push eax
// 004eb28a  83ec0c               sub esp, 0xc
// 004eb28d  8bc4                 mov eax, esp
// 004eb28f  d918                 fstp dword ptr [eax]
// 004eb291  8964242c             mov dword ptr [esp + 0x2c], esp
// 004eb295  d94104               fld dword ptr [ecx + 4]
// 004eb298  d95804               fstp dword ptr [eax + 4]
// 004eb29b  d94108               fld dword ptr [ecx + 8]
// 004eb29e  8d4c2424             lea ecx, [esp + 0x24]
// 004eb2a2  51                   push ecx
// 004eb2a3  d95808               fstp dword ptr [eax + 8]
// 004eb2a6  8d4c2434             lea ecx, [esp + 0x34]
// 004eb2aa  e8d1faffff           call 0x4ead80
// 004eb2af  8b542454             mov edx, dword ptr [esp + 0x54]
// 004eb2b3  6a01                 push 1
// 004eb2b5  52                   push edx
// 004eb2b6  8d4c2424             lea ecx, [esp + 0x24]
// 004eb2ba  c644245004           mov byte ptr [esp + 0x50], 4
// 004eb2bf  e85c390000           call 0x4eec20
// 004eb2c4  8b442430             mov eax, dword ptr [esp + 0x30]
// 004eb2c8  3bc7                 cmp eax, edi
// 004eb2ca  885c2448             mov byte ptr [esp + 0x48], bl
// 004eb2ce  8b1de8d27700         mov ebx, dword ptr [0x77d2e8]
// 004eb2d4  7427                 je 0x4eb2fd
// 004eb2d6  83c004               add eax, 4
// 004eb2d9  50                   push eax
// 004eb2da  ffd3                 call ebx
// 004eb2dc  85c0                 test eax, eax
// 004eb2de  7519                 jne 0x4eb2f9
// 004eb2e0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004eb2e4  e8e7caf6ff           call 0x457dd0
// 004eb2e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004eb2ed  3bcf                 cmp ecx, edi
// 004eb2ef  7408                 je 0x4eb2f9
// 004eb2f1  8b01                 mov eax, dword ptr [ecx]
// 004eb2f3  8b10                 mov edx, dword ptr [eax]
// 004eb2f5  6a01                 push 1
// 004eb2f7  ffd2                 call edx
// 004eb2f9  897c2430             mov dword ptr [esp + 0x30], edi
// 004eb2fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004eb301  3bc7                 cmp eax, edi
// 004eb303  c644244800           mov byte ptr [esp + 0x48], 0
// 004eb308  7423                 je 0x4eb32d
// 004eb30a  83c004               add eax, 4
// 004eb30d  50                   push eax
// 004eb30e  ffd3                 call ebx
// 004eb310  85c0                 test eax, eax
// 004eb312  7519                 jne 0x4eb32d
// 004eb314  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eb318  e8b3caf6ff           call 0x457dd0
// 004eb31d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eb321  3bcf                 cmp ecx, edi
// 004eb323  7408                 je 0x4eb32d
// 004eb325  8b01                 mov eax, dword ptr [ecx]
// 004eb327  8b10                 mov edx, dword ptr [eax]
// 004eb329  6a01                 push 1
// 004eb32b  ffd2                 call edx
// 004eb32d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004eb331  5f                   pop edi
// 004eb332  8bc6                 mov eax, esi
// 004eb334  5e                   pop esi
// 004eb335  64890d00000000       mov dword ptr fs:[0], ecx
// 004eb33c  5b                   pop ebx
// 004eb33d  83c440               add esp, 0x40
// 004eb340  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderAlongXMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp

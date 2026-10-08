// roc 2007-03 004d51f0  unit: seg_004d0000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d51f0
//
// 004d51f0  6aff                 push -1
// 004d51f2  685bdc7400           push 0x74dc5b
// 004d51f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d51fd  50                   push eax
// 004d51fe  64892500000000       mov dword ptr fs:[0], esp
// 004d5205  83ec38               sub esp, 0x38
// 004d5208  53                   push ebx
// 004d5209  56                   push esi
// 004d520a  8bf1                 mov esi, ecx
// 004d520c  57                   push edi
// 004d520d  89742414             mov dword ptr [esp + 0x14], esi
// 004d5211  e89a490100           call 0x4e9bb0
// 004d5216  33ff                 xor edi, edi
// 004d5218  6a1c                 push 0x1c
// 004d521a  897c2450             mov dword ptr [esp + 0x50], edi
// 004d521e  c7069ce97900         mov dword ptr [esi], 0x79e99c
// 004d5224  e8df8e1400           call 0x61e108
// 004d5229  83c404               add esp, 4
// 004d522c  3bc7                 cmp eax, edi
// 004d522e  7424                 je 0x4d5254
// 004d5230  c700946d7900         mov dword ptr [eax], 0x796d94
// 004d5236  897804               mov dword ptr [eax + 4], edi
// 004d5239  897808               mov dword ptr [eax + 8], edi
// 004d523c  c7004ce97900         mov dword ptr [eax], 0x79e94c
// 004d5242  897810               mov dword ptr [eax + 0x10], edi
// 004d5245  897814               mov dword ptr [eax + 0x14], edi
// 004d5248  89780c               mov dword ptr [eax + 0xc], edi
// 004d524b  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004d5252  eb02                 jmp 0x4d5256
// 004d5254  33c0                 xor eax, eax
// 004d5256  3bc7                 cmp eax, edi
// 004d5258  897c2410             mov dword ptr [esp + 0x10], edi
// 004d525c  740e                 je 0x4d526c
// 004d525e  89442410             mov dword ptr [esp + 0x10], eax
// 004d5262  83c004               add eax, 4
// 004d5265  50                   push eax
// 004d5266  ff15acd27700         call dword ptr [0x77d2ac]
// 004d526c  8d442410             lea eax, [esp + 0x10]
// 004d5270  b303                 mov bl, 3
// 004d5272  50                   push eax
// 004d5273  8d4e0c               lea ecx, [esi + 0xc]
// 004d5276  885c2450             mov byte ptr [esp + 0x50], bl
// 004d527a  e811baffff           call 0x4d0c90
// 004d527f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d5283  d901                 fld dword ptr [ecx]
// 004d5285  33c0                 xor eax, eax
// 004d5287  50                   push eax
// 004d5288  83ec0c               sub esp, 0xc
// 004d528b  8bc4                 mov eax, esp
// 004d528d  d918                 fstp dword ptr [eax]
// 004d528f  89642428             mov dword ptr [esp + 0x28], esp
// 004d5293  d94104               fld dword ptr [ecx + 4]
// 004d5296  d95804               fstp dword ptr [eax + 4]
// 004d5299  d94108               fld dword ptr [ecx + 8]
// 004d529c  8d4c2420             lea ecx, [esp + 0x20]
// 004d52a0  51                   push ecx
// 004d52a1  d95808               fstp dword ptr [eax + 8]
// 004d52a4  8d4c2430             lea ecx, [esp + 0x30]
// 004d52a8  e863cfffff           call 0x4d2210
// 004d52ad  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d52b1  6a01                 push 1
// 004d52b3  52                   push edx
// 004d52b4  8d4c2424             lea ecx, [esp + 0x24]
// 004d52b8  c644245404           mov byte ptr [esp + 0x54], 4
// 004d52bd  e88ed30000           call 0x4e2650
// 004d52c2  8b442430             mov eax, dword ptr [esp + 0x30]
// 004d52c6  3bc7                 cmp eax, edi
// 004d52c8  885c244c             mov byte ptr [esp + 0x4c], bl
// 004d52cc  8b1da8d27700         mov ebx, dword ptr [0x77d2a8]
// 004d52d2  7427                 je 0x4d52fb
// 004d52d4  83c004               add eax, 4
// 004d52d7  50                   push eax
// 004d52d8  ffd3                 call ebx
// 004d52da  85c0                 test eax, eax
// 004d52dc  7519                 jne 0x4d52f7
// 004d52de  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d52e2  e8d9e0f8ff           call 0x4633c0
// 004d52e7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d52eb  3bcf                 cmp ecx, edi
// 004d52ed  7408                 je 0x4d52f7
// 004d52ef  8b01                 mov eax, dword ptr [ecx]
// 004d52f1  8b10                 mov edx, dword ptr [eax]
// 004d52f3  6a01                 push 1
// 004d52f5  ffd2                 call edx
// 004d52f7  897c2430             mov dword ptr [esp + 0x30], edi
// 004d52fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d52ff  3bc7                 cmp eax, edi
// 004d5301  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004d5306  7423                 je 0x4d532b
// 004d5308  83c004               add eax, 4
// 004d530b  50                   push eax
// 004d530c  ffd3                 call ebx
// 004d530e  85c0                 test eax, eax
// 004d5310  7519                 jne 0x4d532b
// 004d5312  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5316  e8a5e0f8ff           call 0x4633c0
// 004d531b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d531f  3bcf                 cmp ecx, edi
// 004d5321  7408                 je 0x4d532b
// 004d5323  8b01                 mov eax, dword ptr [ecx]
// 004d5325  8b10                 mov edx, dword ptr [eax]
// 004d5327  6a01                 push 1
// 004d5329  ffd2                 call edx
// 004d532b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d532f  5f                   pop edi
// 004d5330  8bc6                 mov eax, esi
// 004d5332  5e                   pop esi
// 004d5333  64890d00000000       mov dword ptr fs:[0], ecx
// 004d533a  5b                   pop ebx
// 004d533b  83c444               add esp, 0x44
// 004d533e  c20800               ret 8
// library rbxgs-view/PBBMesh.cpp (function ??0PBBMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp

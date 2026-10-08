// roc 2007-08 005e3290  unit: RBX::IMovingManager  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3290
//
// 005e3290  6aff                 push -1
// 005e3292  6843ab7500           push 0x75ab43
// 005e3297  64a100000000         mov eax, dword ptr fs:[0]
// 005e329d  50                   push eax
// 005e329e  64892500000000       mov dword ptr fs:[0], esp
// 005e32a5  51                   push ecx
// 005e32a6  53                   push ebx
// 005e32a7  55                   push ebp
// 005e32a8  56                   push esi
// 005e32a9  57                   push edi
// 005e32aa  685ce08a00           push 0x8ae05c
// 005e32af  8bf1                 mov esi, ecx
// 005e32b1  68b0cf7b00           push 0x7bcfb0
// 005e32b6  89742418             mov dword ptr [esp + 0x18], esi
// 005e32ba  e8a140faff           call 0x587360
// 005e32bf  8d6e28               lea ebp, [esi + 0x28]
// 005e32c2  33ff                 xor edi, edi
// 005e32c4  8bcd                 mov ecx, ebp
// 005e32c6  897c241c             mov dword ptr [esp + 0x1c], edi
// 005e32ca  c7062c857b00         mov dword ptr [esi], 0x7b852c
// 005e32d0  e8db02faff           call 0x5835b0
// 005e32d5  894504               mov dword ptr [ebp + 4], eax
// 005e32d8  bb01000000           mov ebx, 1
// 005e32dd  885815               mov byte ptr [eax + 0x15], bl
// 005e32e0  8b4504               mov eax, dword ptr [ebp + 4]
// 005e32e3  894004               mov dword ptr [eax + 4], eax
// 005e32e6  8b4504               mov eax, dword ptr [ebp + 4]
// 005e32e9  8900                 mov dword ptr [eax], eax
// 005e32eb  8b4504               mov eax, dword ptr [ebp + 4]
// 005e32ee  894008               mov dword ptr [eax + 8], eax
// 005e32f1  897d08               mov dword ptr [ebp + 8], edi
// 005e32f4  8d6e34               lea ebp, [esi + 0x34]
// 005e32f7  8bcd                 mov ecx, ebp
// 005e32f9  885c241c             mov byte ptr [esp + 0x1c], bl
// 005e32fd  e8ae02faff           call 0x5835b0
// 005e3302  894504               mov dword ptr [ebp + 4], eax
// 005e3305  885815               mov byte ptr [eax + 0x15], bl
// 005e3308  8b4504               mov eax, dword ptr [ebp + 4]
// 005e330b  894004               mov dword ptr [eax + 4], eax
// 005e330e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3311  8900                 mov dword ptr [eax], eax
// 005e3313  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3316  894008               mov dword ptr [eax + 8], eax
// 005e3319  897d08               mov dword ptr [ebp + 8], edi
// 005e331c  897e44               mov dword ptr [esi + 0x44], edi
// 005e331f  897e48               mov dword ptr [esi + 0x48], edi
// 005e3322  897e4c               mov dword ptr [esi + 0x4c], edi
// 005e3325  8d6e50               lea ebp, [esi + 0x50]
// 005e3328  8bcd                 mov ecx, ebp
// 005e332a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e332f  e85c65f9ff           call 0x579890
// 005e3334  894504               mov dword ptr [ebp + 4], eax
// 005e3337  88582d               mov byte ptr [eax + 0x2d], bl
// 005e333a  8b4504               mov eax, dword ptr [ebp + 4]
// 005e333d  894004               mov dword ptr [eax + 4], eax
// 005e3340  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3343  8900                 mov dword ptr [eax], eax
// 005e3345  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3348  894008               mov dword ptr [eax + 8], eax
// 005e334b  897d08               mov dword ptr [ebp + 8], edi
// 005e334e  8d6e5c               lea ebp, [esi + 0x5c]
// 005e3351  8bcd                 mov ecx, ebp
// 005e3353  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005e3358  e83365f9ff           call 0x579890
// 005e335d  894504               mov dword ptr [ebp + 4], eax
// 005e3360  88582d               mov byte ptr [eax + 0x2d], bl
// 005e3363  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3366  894004               mov dword ptr [eax + 4], eax
// 005e3369  8b4504               mov eax, dword ptr [ebp + 4]
// 005e336c  8900                 mov dword ptr [eax], eax
// 005e336e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3371  894008               mov dword ptr [eax + 8], eax
// 005e3374  897d08               mov dword ptr [ebp + 8], edi
// 005e3377  897e6c               mov dword ptr [esi + 0x6c], edi
// 005e337a  897e70               mov dword ptr [esi + 0x70], edi
// 005e337d  897e74               mov dword ptr [esi + 0x74], edi
// 005e3380  897e7c               mov dword ptr [esi + 0x7c], edi
// 005e3383  89be80000000         mov dword ptr [esi + 0x80], edi
// 005e3389  89be84000000         mov dword ptr [esi + 0x84], edi
// 005e338f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005e3395  89be90000000         mov dword ptr [esi + 0x90], edi
// 005e339b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005e33a1  68a8cf7b00           push 0x7bcfa8
// 005e33a6  57                   push edi
// 005e33a7  8bce                 mov ecx, esi
// 005e33a9  c644242408           mov byte ptr [esp + 0x24], 8
// 005e33ae  e8adfcffff           call 0x5e3060
// 005e33b3  689ccf7b00           push 0x7bcf9c
// 005e33b8  53                   push ebx
// 005e33b9  8bce                 mov ecx, esi
// 005e33bb  e8a0fcffff           call 0x5e3060
// 005e33c0  6890cf7b00           push 0x7bcf90
// 005e33c5  6a02                 push 2
// 005e33c7  8bce                 mov ecx, esi
// 005e33c9  e892fcffff           call 0x5e3060
// 005e33ce  6888cf7b00           push 0x7bcf88
// 005e33d3  6a03                 push 3
// 005e33d5  8bce                 mov ecx, esi
// 005e33d7  e884fcffff           call 0x5e3060
// 005e33dc  6880cf7b00           push 0x7bcf80
// 005e33e1  6a04                 push 4
// 005e33e3  8bce                 mov ecx, esi
// 005e33e5  e876fcffff           call 0x5e3060
// 005e33ea  6878cf7b00           push 0x7bcf78
// 005e33ef  6a06                 push 6
// 005e33f1  8bce                 mov ecx, esi
// 005e33f3  e868fcffff           call 0x5e3060
// 005e33f8  6870cf7b00           push 0x7bcf70
// 005e33fd  6a07                 push 7
// 005e33ff  8bce                 mov ecx, esi
// 005e3401  e85afcffff           call 0x5e3060
// 005e3406  6868cf7b00           push 0x7bcf68
// 005e340b  6a08                 push 8
// 005e340d  8bce                 mov ecx, esi
// 005e340f  e84cfcffff           call 0x5e3060
// 005e3414  6860cf7b00           push 0x7bcf60
// 005e3419  6a09                 push 9
// 005e341b  8bce                 mov ecx, esi
// 005e341d  e83efcffff           call 0x5e3060
// 005e3422  6858cf7b00           push 0x7bcf58
// 005e3427  6a0a                 push 0xa
// 005e3429  8bce                 mov ecx, esi
// 005e342b  e830fcffff           call 0x5e3060
// 005e3430  6850cf7b00           push 0x7bcf50
// 005e3435  6a0b                 push 0xb
// 005e3437  8bce                 mov ecx, esi
// 005e3439  e822fcffff           call 0x5e3060
// 005e343e  6844cf7b00           push 0x7bcf44
// 005e3443  6a0c                 push 0xc
// 005e3445  8bce                 mov ecx, esi
// 005e3447  e814fcffff           call 0x5e3060
// 005e344c  6840cf7b00           push 0x7bcf40
// 005e3451  6a0d                 push 0xd
// 005e3453  8bce                 mov ecx, esi
// 005e3455  e806fcffff           call 0x5e3060
// 005e345a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e345e  5f                   pop edi
// 005e345f  8bc6                 mov eax, esi
// 005e3461  5e                   pop esi
// 005e3462  5d                   pop ebp
// 005e3463  5b                   pop ebx
// 005e3464  64890d00000000       mov dword ptr fs:[0], ecx
// 005e346b  83c410               add esp, 0x10
// 005e346e  c3                   ret 
// library openrbx-client/App\v8world\Controller.cpp (function ??0?$EnumDesc@W4InputType@Controller@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Controller.cpp

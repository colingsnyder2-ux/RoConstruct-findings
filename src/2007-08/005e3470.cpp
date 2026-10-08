// roc 2007-08 005e3470  unit: RBX::IMovingManager  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3470
//
// 005e3470  6aff                 push -1
// 005e3472  6843ab7500           push 0x75ab43
// 005e3477  64a100000000         mov eax, dword ptr fs:[0]
// 005e347d  50                   push eax
// 005e347e  64892500000000       mov dword ptr fs:[0], esp
// 005e3485  51                   push ecx
// 005e3486  53                   push ebx
// 005e3487  55                   push ebp
// 005e3488  56                   push esi
// 005e3489  57                   push edi
// 005e348a  6884e08a00           push 0x8ae084
// 005e348f  8bf1                 mov esi, ecx
// 005e3491  6804d07b00           push 0x7bd004
// 005e3496  89742418             mov dword ptr [esp + 0x18], esi
// 005e349a  e8c13efaff           call 0x587360
// 005e349f  8d6e28               lea ebp, [esi + 0x28]
// 005e34a2  33ff                 xor edi, edi
// 005e34a4  8bcd                 mov ecx, ebp
// 005e34a6  897c241c             mov dword ptr [esp + 0x1c], edi
// 005e34aa  c706c48e7b00         mov dword ptr [esi], 0x7b8ec4
// 005e34b0  e8fb00faff           call 0x5835b0
// 005e34b5  894504               mov dword ptr [ebp + 4], eax
// 005e34b8  bb01000000           mov ebx, 1
// 005e34bd  885815               mov byte ptr [eax + 0x15], bl
// 005e34c0  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34c3  894004               mov dword ptr [eax + 4], eax
// 005e34c6  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34c9  8900                 mov dword ptr [eax], eax
// 005e34cb  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34ce  894008               mov dword ptr [eax + 8], eax
// 005e34d1  897d08               mov dword ptr [ebp + 8], edi
// 005e34d4  8d6e34               lea ebp, [esi + 0x34]
// 005e34d7  8bcd                 mov ecx, ebp
// 005e34d9  885c241c             mov byte ptr [esp + 0x1c], bl
// 005e34dd  e8ce00faff           call 0x5835b0
// 005e34e2  894504               mov dword ptr [ebp + 4], eax
// 005e34e5  885815               mov byte ptr [eax + 0x15], bl
// 005e34e8  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34eb  894004               mov dword ptr [eax + 4], eax
// 005e34ee  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34f1  8900                 mov dword ptr [eax], eax
// 005e34f3  8b4504               mov eax, dword ptr [ebp + 4]
// 005e34f6  894008               mov dword ptr [eax + 8], eax
// 005e34f9  897d08               mov dword ptr [ebp + 8], edi
// 005e34fc  897e44               mov dword ptr [esi + 0x44], edi
// 005e34ff  897e48               mov dword ptr [esi + 0x48], edi
// 005e3502  897e4c               mov dword ptr [esi + 0x4c], edi
// 005e3505  8d6e50               lea ebp, [esi + 0x50]
// 005e3508  8bcd                 mov ecx, ebp
// 005e350a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e350f  e87c63f9ff           call 0x579890
// 005e3514  894504               mov dword ptr [ebp + 4], eax
// 005e3517  88582d               mov byte ptr [eax + 0x2d], bl
// 005e351a  8b4504               mov eax, dword ptr [ebp + 4]
// 005e351d  894004               mov dword ptr [eax + 4], eax
// 005e3520  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3523  8900                 mov dword ptr [eax], eax
// 005e3525  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3528  894008               mov dword ptr [eax + 8], eax
// 005e352b  897d08               mov dword ptr [ebp + 8], edi
// 005e352e  8d6e5c               lea ebp, [esi + 0x5c]
// 005e3531  8bcd                 mov ecx, ebp
// 005e3533  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005e3538  e85363f9ff           call 0x579890
// 005e353d  894504               mov dword ptr [ebp + 4], eax
// 005e3540  88582d               mov byte ptr [eax + 0x2d], bl
// 005e3543  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3546  894004               mov dword ptr [eax + 4], eax
// 005e3549  8b4504               mov eax, dword ptr [ebp + 4]
// 005e354c  8900                 mov dword ptr [eax], eax
// 005e354e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3551  894008               mov dword ptr [eax + 8], eax
// 005e3554  897d08               mov dword ptr [ebp + 8], edi
// 005e3557  897e6c               mov dword ptr [esi + 0x6c], edi
// 005e355a  897e70               mov dword ptr [esi + 0x70], edi
// 005e355d  897e74               mov dword ptr [esi + 0x74], edi
// 005e3560  897e7c               mov dword ptr [esi + 0x7c], edi
// 005e3563  89be80000000         mov dword ptr [esi + 0x80], edi
// 005e3569  89be84000000         mov dword ptr [esi + 0x84], edi
// 005e356f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005e3575  89be90000000         mov dword ptr [esi + 0x90], edi
// 005e357b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005e3581  68fccf7b00           push 0x7bcffc
// 005e3586  6a07                 push 7
// 005e3588  8bce                 mov ecx, esi
// 005e358a  c644242408           mov byte ptr [esp + 0x24], 8
// 005e358f  e8ccfaffff           call 0x5e3060
// 005e3594  68eccf7b00           push 0x7bcfec
// 005e3599  53                   push ebx
// 005e359a  8bce                 mov ecx, esi
// 005e359c  e8bffaffff           call 0x5e3060
// 005e35a1  68dccf7b00           push 0x7bcfdc
// 005e35a6  6a02                 push 2
// 005e35a8  8bce                 mov ecx, esi
// 005e35aa  e8b1faffff           call 0x5e3060
// 005e35af  68d4cf7b00           push 0x7bcfd4
// 005e35b4  6a03                 push 3
// 005e35b6  8bce                 mov ecx, esi
// 005e35b8  e8a3faffff           call 0x5e3060
// 005e35bd  68cccf7b00           push 0x7bcfcc
// 005e35c2  6a04                 push 4
// 005e35c4  8bce                 mov ecx, esi
// 005e35c6  e895faffff           call 0x5e3060
// 005e35cb  68c4cf7b00           push 0x7bcfc4
// 005e35d0  6a05                 push 5
// 005e35d2  8bce                 mov ecx, esi
// 005e35d4  e887faffff           call 0x5e3060
// 005e35d9  68bccf7b00           push 0x7bcfbc
// 005e35de  6a06                 push 6
// 005e35e0  8bce                 mov ecx, esi
// 005e35e2  e879faffff           call 0x5e3060
// 005e35e7  6860fd7800           push 0x78fd60
// 005e35ec  57                   push edi
// 005e35ed  8bce                 mov ecx, esi
// 005e35ef  e86cfaffff           call 0x5e3060
// 005e35f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e35f8  5f                   pop edi
// 005e35f9  8bc6                 mov eax, esi
// 005e35fb  5e                   pop esi
// 005e35fc  5d                   pop ebp
// 005e35fd  5b                   pop ebx
// 005e35fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3605  83c410               add esp, 0x10
// 005e3608  c3                   ret 
// library openrbx-client/App\v8world\Controller.cpp (function ??0?$EnumDesc@W4ControllerType@Controller@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Controller.cpp

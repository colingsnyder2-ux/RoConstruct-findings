// roc 2007-08 005e3610  unit: RBX::IMovingManager  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3610
//
// 005e3610  6aff                 push -1
// 005e3612  6843ab7500           push 0x75ab43
// 005e3617  64a100000000         mov eax, dword ptr fs:[0]
// 005e361d  50                   push eax
// 005e361e  64892500000000       mov dword ptr fs:[0], esp
// 005e3625  51                   push ecx
// 005e3626  53                   push ebx
// 005e3627  55                   push ebp
// 005e3628  56                   push esi
// 005e3629  57                   push edi
// 005e362a  68b8e08a00           push 0x8ae0b8
// 005e362f  8bf1                 mov esi, ecx
// 005e3631  6828d07b00           push 0x7bd028
// 005e3636  89742418             mov dword ptr [esp + 0x18], esi
// 005e363a  e8213dfaff           call 0x587360
// 005e363f  8d6e28               lea ebp, [esi + 0x28]
// 005e3642  33ff                 xor edi, edi
// 005e3644  8bcd                 mov ecx, ebp
// 005e3646  897c241c             mov dword ptr [esp + 0x1c], edi
// 005e364a  c7064cac7a00         mov dword ptr [esi], 0x7aac4c
// 005e3650  e85bfff9ff           call 0x5835b0
// 005e3655  894504               mov dword ptr [ebp + 4], eax
// 005e3658  bb01000000           mov ebx, 1
// 005e365d  885815               mov byte ptr [eax + 0x15], bl
// 005e3660  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3663  894004               mov dword ptr [eax + 4], eax
// 005e3666  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3669  8900                 mov dword ptr [eax], eax
// 005e366b  8b4504               mov eax, dword ptr [ebp + 4]
// 005e366e  894008               mov dword ptr [eax + 8], eax
// 005e3671  897d08               mov dword ptr [ebp + 8], edi
// 005e3674  8d6e34               lea ebp, [esi + 0x34]
// 005e3677  8bcd                 mov ecx, ebp
// 005e3679  885c241c             mov byte ptr [esp + 0x1c], bl
// 005e367d  e82efff9ff           call 0x5835b0
// 005e3682  894504               mov dword ptr [ebp + 4], eax
// 005e3685  885815               mov byte ptr [eax + 0x15], bl
// 005e3688  8b4504               mov eax, dword ptr [ebp + 4]
// 005e368b  894004               mov dword ptr [eax + 4], eax
// 005e368e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3691  8900                 mov dword ptr [eax], eax
// 005e3693  8b4504               mov eax, dword ptr [ebp + 4]
// 005e3696  894008               mov dword ptr [eax + 8], eax
// 005e3699  897d08               mov dword ptr [ebp + 8], edi
// 005e369c  897e44               mov dword ptr [esi + 0x44], edi
// 005e369f  897e48               mov dword ptr [esi + 0x48], edi
// 005e36a2  897e4c               mov dword ptr [esi + 0x4c], edi
// 005e36a5  8d6e50               lea ebp, [esi + 0x50]
// 005e36a8  8bcd                 mov ecx, ebp
// 005e36aa  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e36af  e8dc61f9ff           call 0x579890
// 005e36b4  894504               mov dword ptr [ebp + 4], eax
// 005e36b7  88582d               mov byte ptr [eax + 0x2d], bl
// 005e36ba  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36bd  894004               mov dword ptr [eax + 4], eax
// 005e36c0  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36c3  8900                 mov dword ptr [eax], eax
// 005e36c5  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36c8  894008               mov dword ptr [eax + 8], eax
// 005e36cb  897d08               mov dword ptr [ebp + 8], edi
// 005e36ce  8d6e5c               lea ebp, [esi + 0x5c]
// 005e36d1  8bcd                 mov ecx, ebp
// 005e36d3  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005e36d8  e8b361f9ff           call 0x579890
// 005e36dd  894504               mov dword ptr [ebp + 4], eax
// 005e36e0  88582d               mov byte ptr [eax + 0x2d], bl
// 005e36e3  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36e6  894004               mov dword ptr [eax + 4], eax
// 005e36e9  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36ec  8900                 mov dword ptr [eax], eax
// 005e36ee  8b4504               mov eax, dword ptr [ebp + 4]
// 005e36f1  894008               mov dword ptr [eax + 8], eax
// 005e36f4  897d08               mov dword ptr [ebp + 8], edi
// 005e36f7  897e6c               mov dword ptr [esi + 0x6c], edi
// 005e36fa  897e70               mov dword ptr [esi + 0x70], edi
// 005e36fd  897e74               mov dword ptr [esi + 0x74], edi
// 005e3700  897e7c               mov dword ptr [esi + 0x7c], edi
// 005e3703  89be80000000         mov dword ptr [esi + 0x80], edi
// 005e3709  89be84000000         mov dword ptr [esi + 0x84], edi
// 005e370f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005e3715  89be90000000         mov dword ptr [esi + 0x90], edi
// 005e371b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005e3721  6820d07b00           push 0x7bd020
// 005e3726  57                   push edi
// 005e3727  8bce                 mov ecx, esi
// 005e3729  c644242408           mov byte ptr [esp + 0x24], 8
// 005e372e  e82df9ffff           call 0x5e3060
// 005e3733  6818ac7a00           push 0x7aac18
// 005e3738  53                   push ebx
// 005e3739  8bce                 mov ecx, esi
// 005e373b  e820f9ffff           call 0x5e3060
// 005e3740  680cb27a00           push 0x7ab20c
// 005e3745  6a02                 push 2
// 005e3747  8bce                 mov ecx, esi
// 005e3749  e812f9ffff           call 0x5e3060
// 005e374e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e3752  5f                   pop edi
// 005e3753  8bc6                 mov eax, esi
// 005e3755  5e                   pop esi
// 005e3756  5d                   pop ebp
// 005e3757  5b                   pop ebx
// 005e3758  64890d00000000       mov dword ptr fs:[0], ecx
// 005e375f  83c410               add esp, 0x10
// 005e3762  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??0?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp

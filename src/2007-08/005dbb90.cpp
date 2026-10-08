// roc 2007-08 005dbb90  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dbb90
//
// 005dbb90  6aff                 push -1
// 005dbb92  6843ab7500           push 0x75ab43
// 005dbb97  64a100000000         mov eax, dword ptr fs:[0]
// 005dbb9d  50                   push eax
// 005dbb9e  64892500000000       mov dword ptr fs:[0], esp
// 005dbba5  51                   push ecx
// 005dbba6  53                   push ebx
// 005dbba7  55                   push ebp
// 005dbba8  56                   push esi
// 005dbba9  57                   push edi
// 005dbbaa  6824dc8a00           push 0x8adc24
// 005dbbaf  8bf1                 mov esi, ecx
// 005dbbb1  68acc47b00           push 0x7bc4ac
// 005dbbb6  89742418             mov dword ptr [esp + 0x18], esi
// 005dbbba  e8a1b7faff           call 0x587360
// 005dbbbf  8d6e28               lea ebp, [esi + 0x28]
// 005dbbc2  33ff                 xor edi, edi
// 005dbbc4  8bcd                 mov ecx, ebp
// 005dbbc6  897c241c             mov dword ptr [esp + 0x1c], edi
// 005dbbca  c70690c47b00         mov dword ptr [esi], 0x7bc490
// 005dbbd0  e8db79faff           call 0x5835b0
// 005dbbd5  894504               mov dword ptr [ebp + 4], eax
// 005dbbd8  bb01000000           mov ebx, 1
// 005dbbdd  885815               mov byte ptr [eax + 0x15], bl
// 005dbbe0  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbbe3  894004               mov dword ptr [eax + 4], eax
// 005dbbe6  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbbe9  8900                 mov dword ptr [eax], eax
// 005dbbeb  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbbee  894008               mov dword ptr [eax + 8], eax
// 005dbbf1  897d08               mov dword ptr [ebp + 8], edi
// 005dbbf4  8d6e34               lea ebp, [esi + 0x34]
// 005dbbf7  8bcd                 mov ecx, ebp
// 005dbbf9  885c241c             mov byte ptr [esp + 0x1c], bl
// 005dbbfd  e8ae79faff           call 0x5835b0
// 005dbc02  894504               mov dword ptr [ebp + 4], eax
// 005dbc05  885815               mov byte ptr [eax + 0x15], bl
// 005dbc08  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc0b  894004               mov dword ptr [eax + 4], eax
// 005dbc0e  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc11  8900                 mov dword ptr [eax], eax
// 005dbc13  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc16  894008               mov dword ptr [eax + 8], eax
// 005dbc19  897d08               mov dword ptr [ebp + 8], edi
// 005dbc1c  897e44               mov dword ptr [esi + 0x44], edi
// 005dbc1f  897e48               mov dword ptr [esi + 0x48], edi
// 005dbc22  897e4c               mov dword ptr [esi + 0x4c], edi
// 005dbc25  8d6e50               lea ebp, [esi + 0x50]
// 005dbc28  8bcd                 mov ecx, ebp
// 005dbc2a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dbc2f  e85cdcf9ff           call 0x579890
// 005dbc34  894504               mov dword ptr [ebp + 4], eax
// 005dbc37  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbc3a  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc3d  894004               mov dword ptr [eax + 4], eax
// 005dbc40  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc43  8900                 mov dword ptr [eax], eax
// 005dbc45  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc48  894008               mov dword ptr [eax + 8], eax
// 005dbc4b  897d08               mov dword ptr [ebp + 8], edi
// 005dbc4e  8d6e5c               lea ebp, [esi + 0x5c]
// 005dbc51  8bcd                 mov ecx, ebp
// 005dbc53  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005dbc58  e833dcf9ff           call 0x579890
// 005dbc5d  894504               mov dword ptr [ebp + 4], eax
// 005dbc60  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbc63  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc66  894004               mov dword ptr [eax + 4], eax
// 005dbc69  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc6c  8900                 mov dword ptr [eax], eax
// 005dbc6e  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbc71  894008               mov dword ptr [eax + 8], eax
// 005dbc74  897d08               mov dword ptr [ebp + 8], edi
// 005dbc77  897e6c               mov dword ptr [esi + 0x6c], edi
// 005dbc7a  897e70               mov dword ptr [esi + 0x70], edi
// 005dbc7d  897e74               mov dword ptr [esi + 0x74], edi
// 005dbc80  897e7c               mov dword ptr [esi + 0x7c], edi
// 005dbc83  89be80000000         mov dword ptr [esi + 0x80], edi
// 005dbc89  89be84000000         mov dword ptr [esi + 0x84], edi
// 005dbc8f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005dbc95  89be90000000         mov dword ptr [esi + 0x90], edi
// 005dbc9b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005dbca1  68b87c7900           push 0x797cb8
// 005dbca6  57                   push edi
// 005dbca7  8bce                 mov ecx, esi
// 005dbca9  c644242408           mov byte ptr [esp + 0x24], 8
// 005dbcae  e8ad730000           call 0x5e3060
// 005dbcb3  68a4c47b00           push 0x7bc4a4
// 005dbcb8  53                   push ebx
// 005dbcb9  8bce                 mov ecx, esi
// 005dbcbb  e8a0730000           call 0x5e3060
// 005dbcc0  68b0a07a00           push 0x7aa0b0
// 005dbcc5  6a02                 push 2
// 005dbcc7  8bce                 mov ecx, esi
// 005dbcc9  e892730000           call 0x5e3060
// 005dbcce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dbcd2  5f                   pop edi
// 005dbcd3  8bc6                 mov eax, esi
// 005dbcd5  5e                   pop esi
// 005dbcd6  5d                   pop ebp
// 005dbcd7  5b                   pop ebx
// 005dbcd8  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbcdf  83c410               add esp, 0x10
// 005dbce2  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ??0?$EnumDesc@W4TopBottom@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp

// roc 2007-08 005dbe90  unit: RBX::Feature::W4LeftRight::?$EnumDesc  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dbe90
//
// 005dbe90  6aff                 push -1
// 005dbe92  6843ab7500           push 0x75ab43
// 005dbe97  64a100000000         mov eax, dword ptr fs:[0]
// 005dbe9d  50                   push eax
// 005dbe9e  64892500000000       mov dword ptr fs:[0], esp
// 005dbea5  51                   push ecx
// 005dbea6  53                   push ebx
// 005dbea7  55                   push ebp
// 005dbea8  56                   push esi
// 005dbea9  57                   push edi
// 005dbeaa  6874dc8a00           push 0x8adc74
// 005dbeaf  8bf1                 mov esi, ecx
// 005dbeb1  68d4c47b00           push 0x7bc4d4
// 005dbeb6  89742418             mov dword ptr [esp + 0x18], esi
// 005dbeba  e8a1b4faff           call 0x587360
// 005dbebf  8d6e28               lea ebp, [esi + 0x28]
// 005dbec2  33ff                 xor edi, edi
// 005dbec4  8bcd                 mov ecx, ebp
// 005dbec6  897c241c             mov dword ptr [esp + 0x1c], edi
// 005dbeca  c706a0c47b00         mov dword ptr [esi], 0x7bc4a0
// 005dbed0  e8db76faff           call 0x5835b0
// 005dbed5  894504               mov dword ptr [ebp + 4], eax
// 005dbed8  bb01000000           mov ebx, 1
// 005dbedd  885815               mov byte ptr [eax + 0x15], bl
// 005dbee0  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbee3  894004               mov dword ptr [eax + 4], eax
// 005dbee6  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbee9  8900                 mov dword ptr [eax], eax
// 005dbeeb  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbeee  894008               mov dword ptr [eax + 8], eax
// 005dbef1  897d08               mov dword ptr [ebp + 8], edi
// 005dbef4  8d6e34               lea ebp, [esi + 0x34]
// 005dbef7  8bcd                 mov ecx, ebp
// 005dbef9  885c241c             mov byte ptr [esp + 0x1c], bl
// 005dbefd  e8ae76faff           call 0x5835b0
// 005dbf02  894504               mov dword ptr [ebp + 4], eax
// 005dbf05  885815               mov byte ptr [eax + 0x15], bl
// 005dbf08  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf0b  894004               mov dword ptr [eax + 4], eax
// 005dbf0e  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf11  8900                 mov dword ptr [eax], eax
// 005dbf13  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf16  894008               mov dword ptr [eax + 8], eax
// 005dbf19  897d08               mov dword ptr [ebp + 8], edi
// 005dbf1c  897e44               mov dword ptr [esi + 0x44], edi
// 005dbf1f  897e48               mov dword ptr [esi + 0x48], edi
// 005dbf22  897e4c               mov dword ptr [esi + 0x4c], edi
// 005dbf25  8d6e50               lea ebp, [esi + 0x50]
// 005dbf28  8bcd                 mov ecx, ebp
// 005dbf2a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dbf2f  e85cd9f9ff           call 0x579890
// 005dbf34  894504               mov dword ptr [ebp + 4], eax
// 005dbf37  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbf3a  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf3d  894004               mov dword ptr [eax + 4], eax
// 005dbf40  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf43  8900                 mov dword ptr [eax], eax
// 005dbf45  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf48  894008               mov dword ptr [eax + 8], eax
// 005dbf4b  897d08               mov dword ptr [ebp + 8], edi
// 005dbf4e  8d6e5c               lea ebp, [esi + 0x5c]
// 005dbf51  8bcd                 mov ecx, ebp
// 005dbf53  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005dbf58  e833d9f9ff           call 0x579890
// 005dbf5d  894504               mov dword ptr [ebp + 4], eax
// 005dbf60  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbf63  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf66  894004               mov dword ptr [eax + 4], eax
// 005dbf69  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf6c  8900                 mov dword ptr [eax], eax
// 005dbf6e  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbf71  894008               mov dword ptr [eax + 8], eax
// 005dbf74  897d08               mov dword ptr [ebp + 8], edi
// 005dbf77  897e6c               mov dword ptr [esi + 0x6c], edi
// 005dbf7a  897e70               mov dword ptr [esi + 0x70], edi
// 005dbf7d  897e74               mov dword ptr [esi + 0x74], edi
// 005dbf80  897e7c               mov dword ptr [esi + 0x7c], edi
// 005dbf83  89be80000000         mov dword ptr [esi + 0x80], edi
// 005dbf89  89be84000000         mov dword ptr [esi + 0x84], edi
// 005dbf8f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005dbf95  89be90000000         mov dword ptr [esi + 0x90], edi
// 005dbf9b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005dbfa1  68ccc47b00           push 0x7bc4cc
// 005dbfa6  57                   push edi
// 005dbfa7  8bce                 mov ecx, esi
// 005dbfa9  c644242408           mov byte ptr [esp + 0x24], 8
// 005dbfae  e8ad700000           call 0x5e3060
// 005dbfb3  68c4c47b00           push 0x7bc4c4
// 005dbfb8  53                   push ebx
// 005dbfb9  8bce                 mov ecx, esi
// 005dbfbb  e8a0700000           call 0x5e3060
// 005dbfc0  68a4c47b00           push 0x7bc4a4
// 005dbfc5  6a02                 push 2
// 005dbfc7  8bce                 mov ecx, esi
// 005dbfc9  e892700000           call 0x5e3060
// 005dbfce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dbfd2  5f                   pop edi
// 005dbfd3  8bc6                 mov eax, esi
// 005dbfd5  5e                   pop esi
// 005dbfd6  5d                   pop ebp
// 005dbfd7  5b                   pop ebx
// 005dbfd8  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbfdf  83c410               add esp, 0x10
// 005dbfe2  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ??0?$EnumDesc@W4InOut@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp

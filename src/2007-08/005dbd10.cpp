// roc 2007-08 005dbd10  unit: RBX::Feature::W4TopBottom::?$EnumDesc  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dbd10
//
// 005dbd10  6aff                 push -1
// 005dbd12  6843ab7500           push 0x75ab43
// 005dbd17  64a100000000         mov eax, dword ptr fs:[0]
// 005dbd1d  50                   push eax
// 005dbd1e  64892500000000       mov dword ptr fs:[0], esp
// 005dbd25  51                   push ecx
// 005dbd26  53                   push ebx
// 005dbd27  55                   push ebp
// 005dbd28  56                   push esi
// 005dbd29  57                   push edi
// 005dbd2a  684cdc8a00           push 0x8adc4c
// 005dbd2f  8bf1                 mov esi, ecx
// 005dbd31  68b8c47b00           push 0x7bc4b8
// 005dbd36  89742418             mov dword ptr [esp + 0x18], esi
// 005dbd3a  e821b6faff           call 0x587360
// 005dbd3f  8d6e28               lea ebp, [esi + 0x28]
// 005dbd42  33ff                 xor edi, edi
// 005dbd44  8bcd                 mov ecx, ebp
// 005dbd46  897c241c             mov dword ptr [esp + 0x1c], edi
// 005dbd4a  c70698c47b00         mov dword ptr [esi], 0x7bc498
// 005dbd50  e85b78faff           call 0x5835b0
// 005dbd55  894504               mov dword ptr [ebp + 4], eax
// 005dbd58  bb01000000           mov ebx, 1
// 005dbd5d  885815               mov byte ptr [eax + 0x15], bl
// 005dbd60  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd63  894004               mov dword ptr [eax + 4], eax
// 005dbd66  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd69  8900                 mov dword ptr [eax], eax
// 005dbd6b  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd6e  894008               mov dword ptr [eax + 8], eax
// 005dbd71  897d08               mov dword ptr [ebp + 8], edi
// 005dbd74  8d6e34               lea ebp, [esi + 0x34]
// 005dbd77  8bcd                 mov ecx, ebp
// 005dbd79  885c241c             mov byte ptr [esp + 0x1c], bl
// 005dbd7d  e82e78faff           call 0x5835b0
// 005dbd82  894504               mov dword ptr [ebp + 4], eax
// 005dbd85  885815               mov byte ptr [eax + 0x15], bl
// 005dbd88  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd8b  894004               mov dword ptr [eax + 4], eax
// 005dbd8e  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd91  8900                 mov dword ptr [eax], eax
// 005dbd93  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbd96  894008               mov dword ptr [eax + 8], eax
// 005dbd99  897d08               mov dword ptr [ebp + 8], edi
// 005dbd9c  897e44               mov dword ptr [esi + 0x44], edi
// 005dbd9f  897e48               mov dword ptr [esi + 0x48], edi
// 005dbda2  897e4c               mov dword ptr [esi + 0x4c], edi
// 005dbda5  8d6e50               lea ebp, [esi + 0x50]
// 005dbda8  8bcd                 mov ecx, ebp
// 005dbdaa  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dbdaf  e8dcdaf9ff           call 0x579890
// 005dbdb4  894504               mov dword ptr [ebp + 4], eax
// 005dbdb7  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbdba  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbdbd  894004               mov dword ptr [eax + 4], eax
// 005dbdc0  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbdc3  8900                 mov dword ptr [eax], eax
// 005dbdc5  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbdc8  894008               mov dword ptr [eax + 8], eax
// 005dbdcb  897d08               mov dword ptr [ebp + 8], edi
// 005dbdce  8d6e5c               lea ebp, [esi + 0x5c]
// 005dbdd1  8bcd                 mov ecx, ebp
// 005dbdd3  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005dbdd8  e8b3daf9ff           call 0x579890
// 005dbddd  894504               mov dword ptr [ebp + 4], eax
// 005dbde0  88582d               mov byte ptr [eax + 0x2d], bl
// 005dbde3  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbde6  894004               mov dword ptr [eax + 4], eax
// 005dbde9  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbdec  8900                 mov dword ptr [eax], eax
// 005dbdee  8b4504               mov eax, dword ptr [ebp + 4]
// 005dbdf1  894008               mov dword ptr [eax + 8], eax
// 005dbdf4  897d08               mov dword ptr [ebp + 8], edi
// 005dbdf7  897e6c               mov dword ptr [esi + 0x6c], edi
// 005dbdfa  897e70               mov dword ptr [esi + 0x70], edi
// 005dbdfd  897e74               mov dword ptr [esi + 0x74], edi
// 005dbe00  897e7c               mov dword ptr [esi + 0x7c], edi
// 005dbe03  89be80000000         mov dword ptr [esi + 0x80], edi
// 005dbe09  89be84000000         mov dword ptr [esi + 0x84], edi
// 005dbe0f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005dbe15  89be90000000         mov dword ptr [esi + 0x90], edi
// 005dbe1b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005dbe21  68b07c7900           push 0x797cb0
// 005dbe26  57                   push edi
// 005dbe27  8bce                 mov ecx, esi
// 005dbe29  c644242408           mov byte ptr [esp + 0x24], 8
// 005dbe2e  e82d720000           call 0x5e3060
// 005dbe33  68a4c47b00           push 0x7bc4a4
// 005dbe38  53                   push ebx
// 005dbe39  8bce                 mov ecx, esi
// 005dbe3b  e820720000           call 0x5e3060
// 005dbe40  6898a07a00           push 0x7aa098
// 005dbe45  6a02                 push 2
// 005dbe47  8bce                 mov ecx, esi
// 005dbe49  e812720000           call 0x5e3060
// 005dbe4e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dbe52  5f                   pop edi
// 005dbe53  8bc6                 mov eax, esi
// 005dbe55  5e                   pop esi
// 005dbe56  5d                   pop ebp
// 005dbe57  5b                   pop ebx
// 005dbe58  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbe5f  83c410               add esp, 0x10
// 005dbe62  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ??0?$EnumDesc@W4LeftRight@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp

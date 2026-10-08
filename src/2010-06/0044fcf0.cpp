// roc 2010-06 0044fcf0  unit: CRobloxModule  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044fcf0
//
// 0044fcf0  6aff                 push -1
// 0044fcf2  68d11a9800           push 0x981ad1
// 0044fcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044fcfd  50                   push eax
// 0044fcfe  64892500000000       mov dword ptr fs:[0], esp
// 0044fd05  83ec0c               sub esp, 0xc
// 0044fd08  56                   push esi
// 0044fd09  57                   push edi
// 0044fd0a  c744240800000000     mov dword ptr [esp + 8], 0
// 0044fd12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0044fd16  83ec08               sub esp, 8
// 0044fd19  8bc4                 mov eax, esp
// 0044fd1b  89642414             mov dword ptr [esp + 0x14], esp
// 0044fd1f  8908                 mov dword ptr [eax], ecx
// 0044fd21  8b542438             mov edx, dword ptr [esp + 0x38]
// 0044fd25  895004               mov dword ptr [eax + 4], edx
// 0044fd28  8b442438             mov eax, dword ptr [esp + 0x38]
// 0044fd2c  be01000000           mov esi, 1
// 0044fd31  89742424             mov dword ptr [esp + 0x24], esi
// 0044fd35  85c0                 test eax, eax
// 0044fd37  7409                 je 0x44fd42
// 0044fd39  83c004               add eax, 4
// 0044fd3c  8bce                 mov ecx, esi
// 0044fd3e  f00fc108             lock xadd dword ptr [eax], ecx
// 0044fd42  8d4c2414             lea ecx, [esp + 0x14]
// 0044fd46  e805e11700           call 0x5cde50
// 0044fd4b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0044fd4f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044fd53  8917                 mov dword ptr [edi], edx
// 0044fd55  8b08                 mov ecx, dword ptr [eax]
// 0044fd57  894f04               mov dword ptr [edi + 4], ecx
// 0044fd5a  8b4004               mov eax, dword ptr [eax + 4]
// 0044fd5d  894708               mov dword ptr [edi + 8], eax
// 0044fd60  85c0                 test eax, eax
// 0044fd62  7409                 je 0x44fd6d
// 0044fd64  83c004               add eax, 4
// 0044fd67  8bd6                 mov edx, esi
// 0044fd69  f00fc110             lock xadd dword ptr [eax], edx
// 0044fd6d  89742408             mov dword ptr [esp + 8], esi
// 0044fd71  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044fd75  85f6                 test esi, esi
// 0044fd77  742a                 je 0x44fda3
// 0044fd79  8d4604               lea eax, [esi + 4]
// 0044fd7c  83c9ff               or ecx, 0xffffffff
// 0044fd7f  f00fc108             lock xadd dword ptr [eax], ecx
// 0044fd83  751e                 jne 0x44fda3
// 0044fd85  8b16                 mov edx, dword ptr [esi]
// 0044fd87  8b4204               mov eax, dword ptr [edx + 4]
// 0044fd8a  8bce                 mov ecx, esi
// 0044fd8c  ffd0                 call eax
// 0044fd8e  8d4e08               lea ecx, [esi + 8]
// 0044fd91  83caff               or edx, 0xffffffff
// 0044fd94  f00fc111             lock xadd dword ptr [ecx], edx
// 0044fd98  7509                 jne 0x44fda3
// 0044fd9a  8b06                 mov eax, dword ptr [esi]
// 0044fd9c  8b5008               mov edx, dword ptr [eax + 8]
// 0044fd9f  8bce                 mov ecx, esi
// 0044fda1  ffd2                 call edx
// 0044fda3  8b742430             mov esi, dword ptr [esp + 0x30]
// 0044fda7  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0044fdac  85f6                 test esi, esi
// 0044fdae  742a                 je 0x44fdda
// 0044fdb0  8d4604               lea eax, [esi + 4]
// 0044fdb3  83c9ff               or ecx, 0xffffffff
// 0044fdb6  f00fc108             lock xadd dword ptr [eax], ecx
// 0044fdba  751e                 jne 0x44fdda
// 0044fdbc  8b16                 mov edx, dword ptr [esi]
// 0044fdbe  8b4204               mov eax, dword ptr [edx + 4]
// 0044fdc1  8bce                 mov ecx, esi
// 0044fdc3  ffd0                 call eax
// 0044fdc5  8d4e08               lea ecx, [esi + 8]
// 0044fdc8  83caff               or edx, 0xffffffff
// 0044fdcb  f00fc111             lock xadd dword ptr [ecx], edx
// 0044fdcf  7509                 jne 0x44fdda
// 0044fdd1  8b06                 mov eax, dword ptr [esi]
// 0044fdd3  8b5008               mov edx, dword ptr [eax + 8]
// 0044fdd6  8bce                 mov ecx, esi
// 0044fdd8  ffd2                 call edx
// 0044fdda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044fdde  8bc7                 mov eax, edi
// 0044fde0  5f                   pop edi
// 0044fde1  64890d00000000       mov dword ptr fs:[0], ecx
// 0044fde8  5e                   pop esi
// 0044fde9  83c418               add esp, 0x18
// 0044fdec  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp

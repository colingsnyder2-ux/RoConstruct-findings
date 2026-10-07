// roc 2007-08 00574530  unit: RBX::PartInstance  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574530
//
// 00574530  55                   push ebp
// 00574531  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00574535  56                   push esi
// 00574536  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057453a  3bf5                 cmp esi, ebp
// 0057453c  7443                 je 0x574581
// 0057453e  53                   push ebx
// 0057453f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00574543  57                   push edi
// 00574544  8b03                 mov eax, dword ptr [ebx]
// 00574546  8906                 mov dword ptr [esi], eax
// 00574548  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057454b  85ff                 test edi, edi
// 0057454d  740c                 je 0x57455b
// 0057454f  8d4f08               lea ecx, [edi + 8]
// 00574552  ba01000000           mov edx, 1
// 00574557  f00fc111             lock xadd dword ptr [ecx], edx
// 0057455b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057455e  85c9                 test ecx, ecx
// 00574560  7413                 je 0x574575
// 00574562  8d4108               lea eax, [ecx + 8]
// 00574565  83caff               or edx, 0xffffffff
// 00574568  f00fc110             lock xadd dword ptr [eax], edx
// 0057456c  7507                 jne 0x574575
// 0057456e  8b01                 mov eax, dword ptr [ecx]
// 00574570  8b5008               mov edx, dword ptr [eax + 8]
// 00574573  ffd2                 call edx
// 00574575  897e04               mov dword ptr [esi + 4], edi
// 00574578  83c608               add esi, 8
// 0057457b  3bf5                 cmp esi, ebp
// 0057457d  75c5                 jne 0x574544
// 0057457f  5f                   pop edi
// 00574580  5b                   pop ebx
// 00574581  5e                   pop esi
// 00574582  5d                   pop ebp
// 00574583  c3                   ret 
// library templates-boost-1_34_1/vector_wp.cpp (function ??$_Fill@PAV?$weak_ptr@UT@@@boost@@V12@@std@@YAXPAV?$weak_ptr@UT@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp

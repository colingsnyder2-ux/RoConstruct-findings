// roc 2007-03 005d9040  unit: seg_005d0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9040
//
// 005d9040  55                   push ebp
// 005d9041  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005d9045  57                   push edi
// 005d9046  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005d904a  3bfd                 cmp edi, ebp
// 005d904c  744b                 je 0x5d9099
// 005d904e  53                   push ebx
// 005d904f  56                   push esi
// 005d9050  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d9054  8b07                 mov eax, dword ptr [edi]
// 005d9056  8906                 mov dword ptr [esi], eax
// 005d9058  8b5f04               mov ebx, dword ptr [edi + 4]
// 005d905b  85db                 test ebx, ebx
// 005d905d  740c                 je 0x5d906b
// 005d905f  8d4b08               lea ecx, [ebx + 8]
// 005d9062  ba01000000           mov edx, 1
// 005d9067  f00fc111             lock xadd dword ptr [ecx], edx
// 005d906b  8b4e04               mov ecx, dword ptr [esi + 4]
// 005d906e  85c9                 test ecx, ecx
// 005d9070  7413                 je 0x5d9085
// 005d9072  8d4108               lea eax, [ecx + 8]
// 005d9075  83caff               or edx, 0xffffffff
// 005d9078  f00fc110             lock xadd dword ptr [eax], edx
// 005d907c  7507                 jne 0x5d9085
// 005d907e  8b01                 mov eax, dword ptr [ecx]
// 005d9080  8b5008               mov edx, dword ptr [eax + 8]
// 005d9083  ffd2                 call edx
// 005d9085  895e04               mov dword ptr [esi + 4], ebx
// 005d9088  83c708               add edi, 8
// 005d908b  83c608               add esi, 8
// 005d908e  3bfd                 cmp edi, ebp
// 005d9090  75c2                 jne 0x5d9054
// 005d9092  8bc6                 mov eax, esi
// 005d9094  5e                   pop esi
// 005d9095  5b                   pop ebx
// 005d9096  5f                   pop edi
// 005d9097  5d                   pop ebp
// 005d9098  c3                   ret 
// 005d9099  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d909d  5f                   pop edi
// 005d909e  5d                   pop ebp
// 005d909f  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ??$_Copy_opt@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp

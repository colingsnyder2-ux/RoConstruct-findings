// roc 2007-03 00539120  unit: seg_00530000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539120
//
// 00539120  57                   push edi
// 00539121  8b7c2408             mov edi, dword ptr [esp + 8]
// 00539125  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 00539129  7464                 je 0x53918f
// 0053912b  53                   push ebx
// 0053912c  55                   push ebp
// 0053912d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00539131  56                   push esi
// 00539132  8b4500               mov eax, dword ptr [ebp]
// 00539135  8907                 mov dword ptr [edi], eax
// 00539137  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0053913a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0053913d  7444                 je 0x539183
// 0053913f  85db                 test ebx, ebx
// 00539141  740c                 je 0x53914f
// 00539143  8d4b04               lea ecx, [ebx + 4]
// 00539146  ba01000000           mov edx, 1
// 0053914b  f00fc111             lock xadd dword ptr [ecx], edx
// 0053914f  8b7704               mov esi, dword ptr [edi + 4]
// 00539152  85f6                 test esi, esi
// 00539154  742a                 je 0x539180
// 00539156  8d4604               lea eax, [esi + 4]
// 00539159  83c9ff               or ecx, 0xffffffff
// 0053915c  f00fc108             lock xadd dword ptr [eax], ecx
// 00539160  751e                 jne 0x539180
// 00539162  8b16                 mov edx, dword ptr [esi]
// 00539164  8b4204               mov eax, dword ptr [edx + 4]
// 00539167  8bce                 mov ecx, esi
// 00539169  ffd0                 call eax
// 0053916b  8d4e08               lea ecx, [esi + 8]
// 0053916e  83caff               or edx, 0xffffffff
// 00539171  f00fc111             lock xadd dword ptr [ecx], edx
// 00539175  7509                 jne 0x539180
// 00539177  8b06                 mov eax, dword ptr [esi]
// 00539179  8b5008               mov edx, dword ptr [eax + 8]
// 0053917c  8bce                 mov ecx, esi
// 0053917e  ffd2                 call edx
// 00539180  895f04               mov dword ptr [edi + 4], ebx
// 00539183  83c708               add edi, 8
// 00539186  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0053918a  75a6                 jne 0x539132
// 0053918c  5e                   pop esi
// 0053918d  5d                   pop ebp
// 0053918e  5b                   pop ebx
// 0053918f  5f                   pop edi
// 00539190  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$_Fill@PAV?$shared_ptr@VInstance@RBX@@@boost@@V12@@std@@YAXPAV?$shared_ptr@VInstance@RBX@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

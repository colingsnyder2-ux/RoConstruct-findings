// roc 2007-03 005578c0  unit: seg_00550000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005578c0
//
// 005578c0  6aff                 push -1
// 005578c2  68a8417500           push 0x7541a8
// 005578c7  64a100000000         mov eax, dword ptr fs:[0]
// 005578cd  50                   push eax
// 005578ce  64892500000000       mov dword ptr fs:[0], esp
// 005578d5  51                   push ecx
// 005578d6  56                   push esi
// 005578d7  57                   push edi
// 005578d8  8bf9                 mov edi, ecx
// 005578da  897c2408             mov dword ptr [esp + 8], edi
// 005578de  8b7708               mov esi, dword ptr [edi + 8]
// 005578e1  85f6                 test esi, esi
// 005578e3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005578eb  741a                 je 0x557907
// 005578ed  807e0400             cmp byte ptr [esi + 4], 0
// 005578f1  740b                 je 0x5578fe
// 005578f3  8b0e                 mov ecx, dword ptr [esi]
// 005578f5  e8a6f11c00           call 0x726aa0
// 005578fa  c6460400             mov byte ptr [esi + 4], 0
// 005578fe  56                   push esi
// 005578ff  e8ec670c00           call 0x61e0f0
// 00557904  83c404               add esp, 4
// 00557907  8b7704               mov esi, dword ptr [edi + 4]
// 0055790a  85f6                 test esi, esi
// 0055790c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00557914  742a                 je 0x557940
// 00557916  8d4604               lea eax, [esi + 4]
// 00557919  83c9ff               or ecx, 0xffffffff
// 0055791c  f00fc108             lock xadd dword ptr [eax], ecx
// 00557920  751e                 jne 0x557940
// 00557922  8b16                 mov edx, dword ptr [esi]
// 00557924  8b4204               mov eax, dword ptr [edx + 4]
// 00557927  8bce                 mov ecx, esi
// 00557929  ffd0                 call eax
// 0055792b  8d4e08               lea ecx, [esi + 8]
// 0055792e  83caff               or edx, 0xffffffff
// 00557931  f00fc111             lock xadd dword ptr [ecx], edx
// 00557935  7509                 jne 0x557940
// 00557937  8b06                 mov eax, dword ptr [esi]
// 00557939  8b5008               mov edx, dword ptr [eax + 8]
// 0055793c  8bce                 mov ecx, esi
// 0055793e  ffd2                 call edx
// 00557940  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00557944  5f                   pop edi
// 00557945  5e                   pop esi
// 00557946  64890d00000000       mov dword ptr fs:[0], ecx
// 0055794d  83c410               add esp, 0x10
// 00557950  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1Lock@DataModel@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp

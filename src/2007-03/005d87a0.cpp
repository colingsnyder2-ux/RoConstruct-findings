// roc 2007-03 005d87a0  unit: seg_005d0000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d87a0
//
// 005d87a0  6aff                 push -1
// 005d87a2  683bb87500           push 0x75b83b
// 005d87a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d87ad  50                   push eax
// 005d87ae  64892500000000       mov dword ptr fs:[0], esp
// 005d87b5  51                   push ecx
// 005d87b6  56                   push esi
// 005d87b7  57                   push edi
// 005d87b8  8bf9                 mov edi, ecx
// 005d87ba  897c2408             mov dword ptr [esp + 8], edi
// 005d87be  8b7710               mov esi, dword ptr [edi + 0x10]
// 005d87c1  85f6                 test esi, esi
// 005d87c3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d87cb  742a                 je 0x5d87f7
// 005d87cd  8d4604               lea eax, [esi + 4]
// 005d87d0  83c9ff               or ecx, 0xffffffff
// 005d87d3  f00fc108             lock xadd dword ptr [eax], ecx
// 005d87d7  751e                 jne 0x5d87f7
// 005d87d9  8b16                 mov edx, dword ptr [esi]
// 005d87db  8b4204               mov eax, dword ptr [edx + 4]
// 005d87de  8bce                 mov ecx, esi
// 005d87e0  ffd0                 call eax
// 005d87e2  8d4e08               lea ecx, [esi + 8]
// 005d87e5  83caff               or edx, 0xffffffff
// 005d87e8  f00fc111             lock xadd dword ptr [ecx], edx
// 005d87ec  7509                 jne 0x5d87f7
// 005d87ee  8b06                 mov eax, dword ptr [esi]
// 005d87f0  8b5008               mov edx, dword ptr [eax + 8]
// 005d87f3  8bce                 mov ecx, esi
// 005d87f5  ffd2                 call edx
// 005d87f7  8b7708               mov esi, dword ptr [edi + 8]
// 005d87fa  85f6                 test esi, esi
// 005d87fc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d8804  742a                 je 0x5d8830
// 005d8806  8d4604               lea eax, [esi + 4]
// 005d8809  83c9ff               or ecx, 0xffffffff
// 005d880c  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8810  751e                 jne 0x5d8830
// 005d8812  8b16                 mov edx, dword ptr [esi]
// 005d8814  8b4204               mov eax, dword ptr [edx + 4]
// 005d8817  8bce                 mov ecx, esi
// 005d8819  ffd0                 call eax
// 005d881b  8d4e08               lea ecx, [esi + 8]
// 005d881e  83caff               or edx, 0xffffffff
// 005d8821  f00fc111             lock xadd dword ptr [ecx], edx
// 005d8825  7509                 jne 0x5d8830
// 005d8827  8b06                 mov eax, dword ptr [esi]
// 005d8829  8b5008               mov edx, dword ptr [eax + 8]
// 005d882c  8bce                 mov ecx, esi
// 005d882e  ffd2                 call edx
// 005d8830  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8834  5f                   pop edi
// 005d8835  5e                   pop esi
// 005d8836  64890d00000000       mov dword ptr fs:[0], ecx
// 005d883d  83c410               add esp, 0x10
// 005d8840  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??1PartByLocalCharacter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp

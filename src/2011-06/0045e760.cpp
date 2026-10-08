// roc 2011-06 0045e760  unit: VCRoblox3D::?$CComObject  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045e760
//
// 0045e760  6aff                 push -1
// 0045e762  68c1249d00           push 0x9d24c1
// 0045e767  64a100000000         mov eax, dword ptr fs:[0]
// 0045e76d  50                   push eax
// 0045e76e  64892500000000       mov dword ptr fs:[0], esp
// 0045e775  83ec0c               sub esp, 0xc
// 0045e778  56                   push esi
// 0045e779  57                   push edi
// 0045e77a  c744240800000000     mov dword ptr [esp + 8], 0
// 0045e782  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0045e786  83ec08               sub esp, 8
// 0045e789  8bc4                 mov eax, esp
// 0045e78b  89642414             mov dword ptr [esp + 0x14], esp
// 0045e78f  8908                 mov dword ptr [eax], ecx
// 0045e791  8b542438             mov edx, dword ptr [esp + 0x38]
// 0045e795  895004               mov dword ptr [eax + 4], edx
// 0045e798  8b442438             mov eax, dword ptr [esp + 0x38]
// 0045e79c  be01000000           mov esi, 1
// 0045e7a1  89742424             mov dword ptr [esp + 0x24], esi
// 0045e7a5  85c0                 test eax, eax
// 0045e7a7  7409                 je 0x45e7b2
// 0045e7a9  83c004               add eax, 4
// 0045e7ac  8bce                 mov ecx, esi
// 0045e7ae  f00fc108             lock xadd dword ptr [eax], ecx
// 0045e7b2  8d4c2414             lea ecx, [esp + 0x14]
// 0045e7b6  e8c5f02300           call 0x69d880
// 0045e7bb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045e7bf  8b542428             mov edx, dword ptr [esp + 0x28]
// 0045e7c3  8917                 mov dword ptr [edi], edx
// 0045e7c5  8b08                 mov ecx, dword ptr [eax]
// 0045e7c7  894f04               mov dword ptr [edi + 4], ecx
// 0045e7ca  8b4004               mov eax, dword ptr [eax + 4]
// 0045e7cd  894708               mov dword ptr [edi + 8], eax
// 0045e7d0  85c0                 test eax, eax
// 0045e7d2  7409                 je 0x45e7dd
// 0045e7d4  83c004               add eax, 4
// 0045e7d7  8bd6                 mov edx, esi
// 0045e7d9  f00fc110             lock xadd dword ptr [eax], edx
// 0045e7dd  89742408             mov dword ptr [esp + 8], esi
// 0045e7e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0045e7e5  85f6                 test esi, esi
// 0045e7e7  742a                 je 0x45e813
// 0045e7e9  8d4604               lea eax, [esi + 4]
// 0045e7ec  83c9ff               or ecx, 0xffffffff
// 0045e7ef  f00fc108             lock xadd dword ptr [eax], ecx
// 0045e7f3  751e                 jne 0x45e813
// 0045e7f5  8b16                 mov edx, dword ptr [esi]
// 0045e7f7  8b4204               mov eax, dword ptr [edx + 4]
// 0045e7fa  8bce                 mov ecx, esi
// 0045e7fc  ffd0                 call eax
// 0045e7fe  8d4e08               lea ecx, [esi + 8]
// 0045e801  83caff               or edx, 0xffffffff
// 0045e804  f00fc111             lock xadd dword ptr [ecx], edx
// 0045e808  7509                 jne 0x45e813
// 0045e80a  8b06                 mov eax, dword ptr [esi]
// 0045e80c  8b5008               mov edx, dword ptr [eax + 8]
// 0045e80f  8bce                 mov ecx, esi
// 0045e811  ffd2                 call edx
// 0045e813  8b742430             mov esi, dword ptr [esp + 0x30]
// 0045e817  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0045e81c  85f6                 test esi, esi
// 0045e81e  742a                 je 0x45e84a
// 0045e820  8d4604               lea eax, [esi + 4]
// 0045e823  83c9ff               or ecx, 0xffffffff
// 0045e826  f00fc108             lock xadd dword ptr [eax], ecx
// 0045e82a  751e                 jne 0x45e84a
// 0045e82c  8b16                 mov edx, dword ptr [esi]
// 0045e82e  8b4204               mov eax, dword ptr [edx + 4]
// 0045e831  8bce                 mov ecx, esi
// 0045e833  ffd0                 call eax
// 0045e835  8d4e08               lea ecx, [esi + 8]
// 0045e838  83caff               or edx, 0xffffffff
// 0045e83b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045e83f  7509                 jne 0x45e84a
// 0045e841  8b06                 mov eax, dword ptr [esi]
// 0045e843  8b5008               mov edx, dword ptr [eax + 8]
// 0045e846  8bce                 mov ecx, esi
// 0045e848  ffd2                 call edx
// 0045e84a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045e84e  8bc7                 mov eax, edi
// 0045e850  5f                   pop edi
// 0045e851  64890d00000000       mov dword ptr fs:[0], ecx
// 0045e858  5e                   pop esi
// 0045e859  83c418               add esp, 0x18
// 0045e85c  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp

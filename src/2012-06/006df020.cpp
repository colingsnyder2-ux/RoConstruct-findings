// roc 2012-06 006df020  unit: RBX::VFunctionalTest::?$FactoryProduct::Creator  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006df020
//
// 006df020  6aff                 push -1
// 006df022  68b10fab00           push 0xab0fb1
// 006df027  64a100000000         mov eax, dword ptr fs:[0]
// 006df02d  50                   push eax
// 006df02e  64892500000000       mov dword ptr fs:[0], esp
// 006df035  83ec0c               sub esp, 0xc
// 006df038  56                   push esi
// 006df039  57                   push edi
// 006df03a  c744240800000000     mov dword ptr [esp + 8], 0
// 006df042  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006df046  83ec08               sub esp, 8
// 006df049  8bc4                 mov eax, esp
// 006df04b  89642414             mov dword ptr [esp + 0x14], esp
// 006df04f  8908                 mov dword ptr [eax], ecx
// 006df051  8b542438             mov edx, dword ptr [esp + 0x38]
// 006df055  895004               mov dword ptr [eax + 4], edx
// 006df058  8b442438             mov eax, dword ptr [esp + 0x38]
// 006df05c  be01000000           mov esi, 1
// 006df061  89742424             mov dword ptr [esp + 0x24], esi
// 006df065  85c0                 test eax, eax
// 006df067  7409                 je 0x6df072
// 006df069  83c004               add eax, 4
// 006df06c  8bce                 mov ecx, esi
// 006df06e  f00fc108             lock xadd dword ptr [eax], ecx
// 006df072  8d4c2414             lea ecx, [esp + 0x14]
// 006df076  e8a5af2900           call 0x97a020
// 006df07b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006df07f  8b542428             mov edx, dword ptr [esp + 0x28]
// 006df083  8917                 mov dword ptr [edi], edx
// 006df085  8b08                 mov ecx, dword ptr [eax]
// 006df087  894f04               mov dword ptr [edi + 4], ecx
// 006df08a  8b4004               mov eax, dword ptr [eax + 4]
// 006df08d  894708               mov dword ptr [edi + 8], eax
// 006df090  85c0                 test eax, eax
// 006df092  7409                 je 0x6df09d
// 006df094  83c004               add eax, 4
// 006df097  8bd6                 mov edx, esi
// 006df099  f00fc110             lock xadd dword ptr [eax], edx
// 006df09d  89742408             mov dword ptr [esp + 8], esi
// 006df0a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 006df0a5  85f6                 test esi, esi
// 006df0a7  742a                 je 0x6df0d3
// 006df0a9  8d4604               lea eax, [esi + 4]
// 006df0ac  83c9ff               or ecx, 0xffffffff
// 006df0af  f00fc108             lock xadd dword ptr [eax], ecx
// 006df0b3  751e                 jne 0x6df0d3
// 006df0b5  8b16                 mov edx, dword ptr [esi]
// 006df0b7  8b4204               mov eax, dword ptr [edx + 4]
// 006df0ba  8bce                 mov ecx, esi
// 006df0bc  ffd0                 call eax
// 006df0be  8d4e08               lea ecx, [esi + 8]
// 006df0c1  83caff               or edx, 0xffffffff
// 006df0c4  f00fc111             lock xadd dword ptr [ecx], edx
// 006df0c8  7509                 jne 0x6df0d3
// 006df0ca  8b06                 mov eax, dword ptr [esi]
// 006df0cc  8b5008               mov edx, dword ptr [eax + 8]
// 006df0cf  8bce                 mov ecx, esi
// 006df0d1  ffd2                 call edx
// 006df0d3  8b742430             mov esi, dword ptr [esp + 0x30]
// 006df0d7  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006df0dc  85f6                 test esi, esi
// 006df0de  742a                 je 0x6df10a
// 006df0e0  8d4604               lea eax, [esi + 4]
// 006df0e3  83c9ff               or ecx, 0xffffffff
// 006df0e6  f00fc108             lock xadd dword ptr [eax], ecx
// 006df0ea  751e                 jne 0x6df10a
// 006df0ec  8b16                 mov edx, dword ptr [esi]
// 006df0ee  8b4204               mov eax, dword ptr [edx + 4]
// 006df0f1  8bce                 mov ecx, esi
// 006df0f3  ffd0                 call eax
// 006df0f5  8d4e08               lea ecx, [esi + 8]
// 006df0f8  83caff               or edx, 0xffffffff
// 006df0fb  f00fc111             lock xadd dword ptr [ecx], edx
// 006df0ff  7509                 jne 0x6df10a
// 006df101  8b06                 mov eax, dword ptr [esi]
// 006df103  8b5008               mov edx, dword ptr [eax + 8]
// 006df106  8bce                 mov ecx, esi
// 006df108  ffd2                 call edx
// 006df10a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006df10e  8bc7                 mov eax, edi
// 006df110  5f                   pop edi
// 006df111  64890d00000000       mov dword ptr fs:[0], ecx
// 006df118  5e                   pop esi
// 006df119  83c418               add esp, 0x18
// 006df11c  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp

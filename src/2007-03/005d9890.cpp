// roc 2007-03 005d9890  unit: seg_005d0000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9890
//
// 005d9890  6aff                 push -1
// 005d9892  6868b97500           push 0x75b968
// 005d9897  64a100000000         mov eax, dword ptr fs:[0]
// 005d989d  50                   push eax
// 005d989e  64892500000000       mov dword ptr fs:[0], esp
// 005d98a5  83ec0c               sub esp, 0xc
// 005d98a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d98ac  56                   push esi
// 005d98ad  57                   push edi
// 005d98ae  8bf1                 mov esi, ecx
// 005d98b0  50                   push eax
// 005d98b1  8d4c2410             lea ecx, [esp + 0x10]
// 005d98b5  51                   push ecx
// 005d98b6  89742410             mov dword ptr [esp + 0x10], esi
// 005d98ba  e8f135fbff           call 0x58ceb0
// 005d98bf  8b10                 mov edx, dword ptr [eax]
// 005d98c1  8916                 mov dword ptr [esi], edx
// 005d98c3  8b4004               mov eax, dword ptr [eax + 4]
// 005d98c6  83c408               add esp, 8
// 005d98c9  85c0                 test eax, eax
// 005d98cb  894604               mov dword ptr [esi + 4], eax
// 005d98ce  740c                 je 0x5d98dc
// 005d98d0  83c008               add eax, 8
// 005d98d3  b901000000           mov ecx, 1
// 005d98d8  f00fc108             lock xadd dword ptr [eax], ecx
// 005d98dc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d98e0  85ff                 test edi, edi
// 005d98e2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005d98ea  742a                 je 0x5d9916
// 005d98ec  8d5704               lea edx, [edi + 4]
// 005d98ef  83c8ff               or eax, 0xffffffff
// 005d98f2  f00fc102             lock xadd dword ptr [edx], eax
// 005d98f6  751e                 jne 0x5d9916
// 005d98f8  8b17                 mov edx, dword ptr [edi]
// 005d98fa  8b4204               mov eax, dword ptr [edx + 4]
// 005d98fd  8bcf                 mov ecx, edi
// 005d98ff  ffd0                 call eax
// 005d9901  8d4f08               lea ecx, [edi + 8]
// 005d9904  83caff               or edx, 0xffffffff
// 005d9907  f00fc111             lock xadd dword ptr [ecx], edx
// 005d990b  7509                 jne 0x5d9916
// 005d990d  8b07                 mov eax, dword ptr [edi]
// 005d990f  8b5008               mov edx, dword ptr [eax + 8]
// 005d9912  8bcf                 mov ecx, edi
// 005d9914  ffd2                 call edx
// 005d9916  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d991a  50                   push eax
// 005d991b  8d4e08               lea ecx, [esi + 8]
// 005d991e  e8adfdffff           call 0x5d96d0
// 005d9923  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d9927  89461c               mov dword ptr [esi + 0x1c], eax
// 005d992a  c6461801             mov byte ptr [esi + 0x18], 1
// 005d992e  8b8884020000         mov ecx, dword ptr [eax + 0x284]
// 005d9934  8b5130               mov edx, dword ptr [ecx + 0x30]
// 005d9937  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d993b  895620               mov dword ptr [esi + 0x20], edx
// 005d993e  5f                   pop edi
// 005d993f  8bc6                 mov eax, esi
// 005d9941  5e                   pop esi
// 005d9942  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9949  83c418               add esp, 0x18
// 005d994c  c20c00               ret 0xc
// library rbxgs/tool\MegaDragger.cpp (function ??0MegaDragger@RBX@@QAE@PAVPartInstance@1@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@PAVRootInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp

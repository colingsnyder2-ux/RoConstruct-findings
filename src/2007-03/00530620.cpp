// roc 2007-03 00530620  unit: seg_00530000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530620
//
// 00530620  6aff                 push -1
// 00530622  68d9147500           push 0x7514d9
// 00530627  64a100000000         mov eax, dword ptr fs:[0]
// 0053062d  50                   push eax
// 0053062e  64892500000000       mov dword ptr fs:[0], esp
// 00530635  83ec18               sub esp, 0x18
// 00530638  55                   push ebp
// 00530639  56                   push esi
// 0053063a  57                   push edi
// 0053063b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00530643  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00530647  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0053064b  83ec08               sub esp, 8
// 0053064e  85ed                 test ebp, ebp
// 00530650  8bc4                 mov eax, esp
// 00530652  8908                 mov dword ptr [eax], ecx
// 00530654  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0053065c  89642418             mov dword ptr [esp + 0x18], esp
// 00530660  896804               mov dword ptr [eax + 4], ebp
// 00530663  740c                 je 0x530671
// 00530665  8d5504               lea edx, [ebp + 4]
// 00530668  b801000000           mov eax, 1
// 0053066d  f00fc102             lock xadd dword ptr [edx], eax
// 00530671  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00530675  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00530679  83ec08               sub esp, 8
// 0053067c  85ff                 test edi, edi
// 0053067e  8bc4                 mov eax, esp
// 00530680  8908                 mov dword ptr [eax], ecx
// 00530682  89642420             mov dword ptr [esp + 0x20], esp
// 00530686  897804               mov dword ptr [eax + 4], edi
// 00530689  740c                 je 0x530697
// 0053068b  8d5704               lea edx, [edi + 4]
// 0053068e  b801000000           mov eax, 1
// 00530693  f00fc102             lock xadd dword ptr [edx], eax
// 00530697  8d4c2424             lea ecx, [esp + 0x24]
// 0053069b  e8b0d7ffff           call 0x52de50
// 005306a0  8b742434             mov esi, dword ptr [esp + 0x34]
// 005306a4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005306a8  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005306ac  890e                 mov dword ptr [esi], ecx
// 005306ae  895604               mov dword ptr [esi + 4], edx
// 005306b1  8b08                 mov ecx, dword ptr [eax]
// 005306b3  894e08               mov dword ptr [esi + 8], ecx
// 005306b6  8b4804               mov ecx, dword ptr [eax + 4]
// 005306b9  85c9                 test ecx, ecx
// 005306bb  894e0c               mov dword ptr [esi + 0xc], ecx
// 005306be  740c                 je 0x5306cc
// 005306c0  83c104               add ecx, 4
// 005306c3  ba01000000           mov edx, 1
// 005306c8  f00fc111             lock xadd dword ptr [ecx], edx
// 005306cc  8b4808               mov ecx, dword ptr [eax + 8]
// 005306cf  894e10               mov dword ptr [esi + 0x10], ecx
// 005306d2  8b400c               mov eax, dword ptr [eax + 0xc]
// 005306d5  85c0                 test eax, eax
// 005306d7  894614               mov dword ptr [esi + 0x14], eax
// 005306da  740c                 je 0x5306e8
// 005306dc  83c004               add eax, 4
// 005306df  ba01000000           mov edx, 1
// 005306e4  f00fc110             lock xadd dword ptr [eax], edx
// 005306e8  8d4c2414             lea ecx, [esp + 0x14]
// 005306ec  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005306f4  e897faffff           call 0x530190
// 005306f9  85ff                 test edi, edi
// 005306fb  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00530700  742a                 je 0x53072c
// 00530702  8d4704               lea eax, [edi + 4]
// 00530705  83c9ff               or ecx, 0xffffffff
// 00530708  f00fc108             lock xadd dword ptr [eax], ecx
// 0053070c  751e                 jne 0x53072c
// 0053070e  8b17                 mov edx, dword ptr [edi]
// 00530710  8b4204               mov eax, dword ptr [edx + 4]
// 00530713  8bcf                 mov ecx, edi
// 00530715  ffd0                 call eax
// 00530717  8d4f08               lea ecx, [edi + 8]
// 0053071a  83caff               or edx, 0xffffffff
// 0053071d  f00fc111             lock xadd dword ptr [ecx], edx
// 00530721  7509                 jne 0x53072c
// 00530723  8b07                 mov eax, dword ptr [edi]
// 00530725  8b5008               mov edx, dword ptr [eax + 8]
// 00530728  8bcf                 mov ecx, edi
// 0053072a  ffd2                 call edx
// 0053072c  85ed                 test ebp, ebp
// 0053072e  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00530733  742c                 je 0x530761
// 00530735  8d4504               lea eax, [ebp + 4]
// 00530738  83c9ff               or ecx, 0xffffffff
// 0053073b  f00fc108             lock xadd dword ptr [eax], ecx
// 0053073f  7520                 jne 0x530761
// 00530741  8b5500               mov edx, dword ptr [ebp]
// 00530744  8b4204               mov eax, dword ptr [edx + 4]
// 00530747  8bcd                 mov ecx, ebp
// 00530749  ffd0                 call eax
// 0053074b  8d4d08               lea ecx, [ebp + 8]
// 0053074e  83caff               or edx, 0xffffffff
// 00530751  f00fc111             lock xadd dword ptr [ecx], edx
// 00530755  750a                 jne 0x530761
// 00530757  8b4500               mov eax, dword ptr [ebp]
// 0053075a  8b5008               mov edx, dword ptr [eax + 8]
// 0053075d  8bcd                 mov ecx, ebp
// 0053075f  ffd2                 call edx
// 00530761  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00530765  5f                   pop edi
// 00530766  8bc6                 mov eax, esi
// 00530768  5e                   pop esi
// 00530769  64890d00000000       mov dword ptr fs:[0], ecx
// 00530770  5d                   pop ebp
// 00530771  83c424               add esp, 0x24
// 00530774  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??$bind@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@V?$shared_ptr@VRunService@RBX@@@4@V34@@boost@@YA?AV?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@0@P8RunService@RBX@@AEXV?$shared_ptr@VDataModel@RBX@@@0@@ZV?$shared_ptr@VRunService@RBX@@@0@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp

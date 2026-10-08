// roc 2008-06 00555470  unit: RBX::VRunService::?$FactoryProduct  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555470
//
// 00555470  6aff                 push -1
// 00555472  68b9dd7c00           push 0x7cddb9
// 00555477  64a100000000         mov eax, dword ptr fs:[0]
// 0055547d  50                   push eax
// 0055547e  64892500000000       mov dword ptr fs:[0], esp
// 00555485  83ec18               sub esp, 0x18
// 00555488  56                   push esi
// 00555489  57                   push edi
// 0055548a  c744240800000000     mov dword ptr [esp + 8], 0
// 00555492  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00555496  83ec08               sub esp, 8
// 00555499  8bc4                 mov eax, esp
// 0055549b  8908                 mov dword ptr [eax], ecx
// 0055549d  8b542450             mov edx, dword ptr [esp + 0x50]
// 005554a1  895004               mov dword ptr [eax + 4], edx
// 005554a4  8b442450             mov eax, dword ptr [esp + 0x50]
// 005554a8  c744243002000000     mov dword ptr [esp + 0x30], 2
// 005554b0  89642414             mov dword ptr [esp + 0x14], esp
// 005554b4  85c0                 test eax, eax
// 005554b6  740c                 je 0x5554c4
// 005554b8  83c004               add eax, 4
// 005554bb  b901000000           mov ecx, 1
// 005554c0  f00fc108             lock xadd dword ptr [eax], ecx
// 005554c4  8b542444             mov edx, dword ptr [esp + 0x44]
// 005554c8  83ec08               sub esp, 8
// 005554cb  8bc4                 mov eax, esp
// 005554cd  8910                 mov dword ptr [eax], edx
// 005554cf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005554d3  894804               mov dword ptr [eax + 4], ecx
// 005554d6  8b442450             mov eax, dword ptr [esp + 0x50]
// 005554da  8964241c             mov dword ptr [esp + 0x1c], esp
// 005554de  85c0                 test eax, eax
// 005554e0  740c                 je 0x5554ee
// 005554e2  83c004               add eax, 4
// 005554e5  ba01000000           mov edx, 1
// 005554ea  f00fc110             lock xadd dword ptr [eax], edx
// 005554ee  8d4c2420             lea ecx, [esp + 0x20]
// 005554f2  e87968f3ff           call 0x48bd70
// 005554f7  8b742430             mov esi, dword ptr [esp + 0x30]
// 005554fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005554ff  8b542438             mov edx, dword ptr [esp + 0x38]
// 00555503  890e                 mov dword ptr [esi], ecx
// 00555505  895604               mov dword ptr [esi + 4], edx
// 00555508  8b08                 mov ecx, dword ptr [eax]
// 0055550a  894e08               mov dword ptr [esi + 8], ecx
// 0055550d  8b4804               mov ecx, dword ptr [eax + 4]
// 00555510  894e0c               mov dword ptr [esi + 0xc], ecx
// 00555513  85c9                 test ecx, ecx
// 00555515  740c                 je 0x555523
// 00555517  83c104               add ecx, 4
// 0055551a  ba01000000           mov edx, 1
// 0055551f  f00fc111             lock xadd dword ptr [ecx], edx
// 00555523  8b4808               mov ecx, dword ptr [eax + 8]
// 00555526  894e10               mov dword ptr [esi + 0x10], ecx
// 00555529  8b400c               mov eax, dword ptr [eax + 0xc]
// 0055552c  894614               mov dword ptr [esi + 0x14], eax
// 0055552f  85c0                 test eax, eax
// 00555531  740c                 je 0x55553f
// 00555533  83c004               add eax, 4
// 00555536  ba01000000           mov edx, 1
// 0055553b  f00fc110             lock xadd dword ptr [eax], edx
// 0055553f  8d4c2410             lea ecx, [esp + 0x10]
// 00555543  c744240801000000     mov dword ptr [esp + 8], 1
// 0055554b  e810d7ecff           call 0x422c60
// 00555550  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00555554  c644242801           mov byte ptr [esp + 0x28], 1
// 00555559  85ff                 test edi, edi
// 0055555b  742a                 je 0x555587
// 0055555d  8d4704               lea eax, [edi + 4]
// 00555560  83c9ff               or ecx, 0xffffffff
// 00555563  f00fc108             lock xadd dword ptr [eax], ecx
// 00555567  751e                 jne 0x555587
// 00555569  8b17                 mov edx, dword ptr [edi]
// 0055556b  8b4204               mov eax, dword ptr [edx + 4]
// 0055556e  8bcf                 mov ecx, edi
// 00555570  ffd0                 call eax
// 00555572  8d4f08               lea ecx, [edi + 8]
// 00555575  83caff               or edx, 0xffffffff
// 00555578  f00fc111             lock xadd dword ptr [ecx], edx
// 0055557c  7509                 jne 0x555587
// 0055557e  8b07                 mov eax, dword ptr [edi]
// 00555580  8b5008               mov edx, dword ptr [eax + 8]
// 00555583  8bcf                 mov ecx, edi
// 00555585  ffd2                 call edx
// 00555587  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0055558b  c644242800           mov byte ptr [esp + 0x28], 0
// 00555590  85ff                 test edi, edi
// 00555592  742a                 je 0x5555be
// 00555594  8d4704               lea eax, [edi + 4]
// 00555597  83c9ff               or ecx, 0xffffffff
// 0055559a  f00fc108             lock xadd dword ptr [eax], ecx
// 0055559e  751e                 jne 0x5555be
// 005555a0  8b17                 mov edx, dword ptr [edi]
// 005555a2  8b4204               mov eax, dword ptr [edx + 4]
// 005555a5  8bcf                 mov ecx, edi
// 005555a7  ffd0                 call eax
// 005555a9  8d4f08               lea ecx, [edi + 8]
// 005555ac  83caff               or edx, 0xffffffff
// 005555af  f00fc111             lock xadd dword ptr [ecx], edx
// 005555b3  7509                 jne 0x5555be
// 005555b5  8b07                 mov eax, dword ptr [edi]
// 005555b7  8b5008               mov edx, dword ptr [eax + 8]
// 005555ba  8bcf                 mov ecx, edi
// 005555bc  ffd2                 call edx
// 005555be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005555c2  5f                   pop edi
// 005555c3  8bc6                 mov eax, esi
// 005555c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005555cc  5e                   pop esi
// 005555cd  83c424               add esp, 0x24
// 005555d0  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??$bind@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@V?$shared_ptr@VRunService@RBX@@@4@V34@@boost@@YA?AV?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@0@P8RunService@RBX@@AEXV?$shared_ptr@VDataModel@RBX@@@0@@ZV?$shared_ptr@VRunService@RBX@@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp

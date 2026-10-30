// roc 2007-08 00551310  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551310
//
// 00551310  64a100000000         mov eax, dword ptr fs:[0]
// 00551316  6aff                 push -1
// 00551318  68982a7500           push 0x752a98
// 0055131d  50                   push eax
// 0055131e  64892500000000       mov dword ptr fs:[0], esp
// 00551325  83ec60               sub esp, 0x60
// 00551328  56                   push esi
// 00551329  8bf1                 mov esi, ecx
// 0055132b  f6461c02             test byte ptr [esi + 0x1c], 2
// 0055132f  0f84c1000000         je 0x5513f6
// 00551335  53                   push ebx
// 00551336  57                   push edi
// 00551337  8d4c2414             lea ecx, [esp + 0x14]
// 0055133b  ff1518e57700         call dword ptr [0x77e518]
// 00551341  33c0                 xor eax, eax
// 00551343  88442450             mov byte ptr [esp + 0x50], al
// 00551347  88442455             mov byte ptr [esp + 0x55], al
// 0055134b  89442458             mov dword ptr [esp + 0x58], eax
// 0055134f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00551353  89442460             mov dword ptr [esp + 0x60], eax
// 00551357  89442464             mov dword ptr [esp + 0x64], eax
// 0055135b  c744246810000000     mov dword ptr [esp + 0x68], 0x10
// 00551363  c74424143c797a00     mov dword ptr [esp + 0x14], 0x7a793c
// 0055136b  f6461c01             test byte ptr [esi + 0x1c], 1
// 0055136f  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00551375  89442474             mov dword ptr [esp + 0x74], eax
// 00551379  7534                 jne 0x5513af
// 0055137b  6aff                 push -1
// 0055137d  6aff                 push -1
// 0055137f  8d442417             lea eax, [esp + 0x17]
// 00551383  50                   push eax
// 00551384  8d4c2420             lea ecx, [esp + 0x20]
// 00551388  e8e3a7ffff           call 0x54bb70
// 0055138d  8b4604               mov eax, dword ptr [esi + 4]
// 00551390  8b7804               mov edi, dword ptr [eax + 4]
// 00551393  3bf8                 cmp edi, eax
// 00551395  7502                 jne 0x551399
// 00551397  ffd3                 call ebx
// 00551399  3b7e04               cmp edi, dword ptr [esi + 4]
// 0055139c  7502                 jne 0x5513a0
// 0055139e  ffd3                 call ebx
// 005513a0  8b4f08               mov ecx, dword ptr [edi + 8]
// 005513a3  8b11                 mov edx, dword ptr [ecx]
// 005513a5  8b5238               mov edx, dword ptr [edx + 0x38]
// 005513a8  8d442414             lea eax, [esp + 0x14]
// 005513ac  50                   push eax
// 005513ad  ffd2                 call edx
// 005513af  8b4604               mov eax, dword ptr [esi + 4]
// 005513b2  8b38                 mov edi, dword ptr [eax]
// 005513b4  3bf8                 cmp edi, eax
// 005513b6  7502                 jne 0x5513ba
// 005513b8  ffd3                 call ebx
// 005513ba  8b4f08               mov ecx, dword ptr [edi + 8]
// 005513bd  ff1504e67700         call dword ptr [0x77e604]
// 005513c3  8b4604               mov eax, dword ptr [esi + 4]
// 005513c6  8b10                 mov edx, dword ptr [eax]
// 005513c8  b902000000           mov ecx, 2
// 005513cd  51                   push ecx
// 005513ce  50                   push eax
// 005513cf  56                   push esi
// 005513d0  52                   push edx
// 005513d1  8d442420             lea eax, [esp + 0x20]
// 005513d5  56                   push esi
// 005513d6  50                   push eax
// 005513d7  e834c6ffff           call 0x54da10
// 005513dc  83661cfd             and dword ptr [esi + 0x1c], 0xfffffffd
// 005513e0  83c418               add esp, 0x18
// 005513e3  8d4c2414             lea ecx, [esp + 0x14]
// 005513e7  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 005513ef  e86cb3ffff           call 0x54c760
// 005513f4  5f                   pop edi
// 005513f5  5b                   pop ebx
// 005513f6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005513fa  5e                   pop esi
// 005513fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00551402  83c46c               add esp, 0x6c
// 00551405  c3                   ret 
// copied from an identical function in another client (function ?close@chain_impl@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp
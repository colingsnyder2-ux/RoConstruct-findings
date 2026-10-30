// roc 2007-08 00551410  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551410
//
// 00551410  6aff                 push -1
// 00551412  64a100000000         mov eax, dword ptr fs:[0]
// 00551418  68b82a7500           push 0x752ab8
// 0055141d  50                   push eax
// 0055141e  64892500000000       mov dword ptr fs:[0], esp
// 00551425  83ec6c               sub esp, 0x6c
// 00551428  53                   push ebx
// 00551429  55                   push ebp
// 0055142a  56                   push esi
// 0055142b  8bf1                 mov esi, ecx
// 0055142d  f6461c02             test byte ptr [esi + 0x1c], 2
// 00551431  57                   push edi
// 00551432  0f84e5000000         je 0x55151d
// 00551438  8d4c2424             lea ecx, [esp + 0x24]
// 0055143c  ff1518e57700         call dword ptr [0x77e518]
// 00551442  33db                 xor ebx, ebx
// 00551444  885c2460             mov byte ptr [esp + 0x60], bl
// 00551448  885c2465             mov byte ptr [esp + 0x65], bl
// 0055144c  895c2468             mov dword ptr [esp + 0x68], ebx
// 00551450  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00551454  895c2470             mov dword ptr [esp + 0x70], ebx
// 00551458  895c2474             mov dword ptr [esp + 0x74], ebx
// 0055145c  c744247810000000     mov dword ptr [esp + 0x78], 0x10
// 00551464  c74424249c797a00     mov dword ptr [esp + 0x24], 0x7a799c
// 0055146c  f6461c01             test byte ptr [esi + 0x1c], 1
// 00551470  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00551476  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0055147d  7534                 jne 0x5514b3
// 0055147f  6aff                 push -1
// 00551481  6aff                 push -1
// 00551483  8d44241b             lea eax, [esp + 0x1b]
// 00551487  50                   push eax
// 00551488  8d4c2430             lea ecx, [esp + 0x30]
// 0055148c  e89fa7ffff           call 0x54bc30
// 00551491  8b4604               mov eax, dword ptr [esi + 4]
// 00551494  8b7804               mov edi, dword ptr [eax + 4]
// 00551497  3bf8                 cmp edi, eax
// 00551499  7502                 jne 0x55149d
// 0055149b  ffd5                 call ebp
// 0055149d  3b7e04               cmp edi, dword ptr [esi + 4]
// 005514a0  7502                 jne 0x5514a4
// 005514a2  ffd5                 call ebp
// 005514a4  8b4f08               mov ecx, dword ptr [edi + 8]
// 005514a7  8b11                 mov edx, dword ptr [ecx]
// 005514a9  8b5238               mov edx, dword ptr [edx + 0x38]
// 005514ac  8d442424             lea eax, [esp + 0x24]
// 005514b0  50                   push eax
// 005514b1  ffd2                 call edx
// 005514b3  8b4604               mov eax, dword ptr [esi + 4]
// 005514b6  8b38                 mov edi, dword ptr [eax]
// 005514b8  3bf8                 cmp edi, eax
// 005514ba  7502                 jne 0x5514be
// 005514bc  ffd5                 call ebp
// 005514be  8b4f08               mov ecx, dword ptr [edi + 8]
// 005514c1  ff1504e67700         call dword ptr [0x77e604]
// 005514c7  8b4604               mov eax, dword ptr [esi + 4]
// 005514ca  8b10                 mov edx, dword ptr [eax]
// 005514cc  b901000000           mov ecx, 1
// 005514d1  51                   push ecx
// 005514d2  89442424             mov dword ptr [esp + 0x24], eax
// 005514d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005514da  83ec0c               sub esp, 0xc
// 005514dd  8bc4                 mov eax, esp
// 005514df  33ff                 xor edi, edi
// 005514e1  8938                 mov dword ptr [eax], edi
// 005514e3  897004               mov dword ptr [eax + 4], esi
// 005514e6  895008               mov dword ptr [eax + 8], edx
// 005514e9  83ec0c               sub esp, 0xc
// 005514ec  8bc4                 mov eax, esp
// 005514ee  8918                 mov dword ptr [eax], ebx
// 005514f0  8d542430             lea edx, [esp + 0x30]
// 005514f4  8bee                 mov ebp, esi
// 005514f6  896804               mov dword ptr [eax + 4], ebp
// 005514f9  52                   push edx
// 005514fa  894808               mov dword ptr [eax + 8], ecx
// 005514fd  e8ceecffff           call 0x5501d0
// 00551502  83661cfd             and dword ptr [esi + 0x1c], 0xfffffffd
// 00551506  83c420               add esp, 0x20
// 00551509  8d4c2424             lea ecx, [esp + 0x24]
// 0055150d  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 00551518  e8c3b2ffff           call 0x54c7e0
// 0055151d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00551521  5f                   pop edi
// 00551522  5e                   pop esi
// 00551523  5d                   pop ebp
// 00551524  64890d00000000       mov dword ptr fs:[0], ecx
// 0055152b  5b                   pop ebx
// 0055152c  83c478               add esp, 0x78
// 0055152f  c3                   ret 
// copied from an identical function in another client (function ?close@chain_impl@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_ad9867ec1f020831.cpp
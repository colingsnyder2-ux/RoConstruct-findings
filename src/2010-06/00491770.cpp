// roc 2010-06 00491770  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491770
//
// 00491770  53                   push ebx
// 00491771  55                   push ebp
// 00491772  56                   push esi
// 00491773  8bf1                 mov esi, ecx
// 00491775  ff4678               inc dword ptr [esi + 0x78]
// 00491778  b808000000           mov eax, 8
// 0049177d  57                   push edi
// 0049177e  39442414             cmp dword ptr [esp + 0x14], eax
// 00491782  750a                 jne 0x49178e
// 00491784  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 0049178a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0049178e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00491792  3bd0                 cmp edx, eax
// 00491794  750a                 jne 0x4917a0
// 00491796  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 0049179c  89542418             mov dword ptr [esp + 0x18], edx
// 004917a0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004917a4  3bf8                 cmp edi, eax
// 004917a6  7506                 jne 0x4917ae
// 004917a8  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 004917ae  39442420             cmp dword ptr [esp + 0x20], eax
// 004917b2  750a                 jne 0x4917be
// 004917b4  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 004917ba  894c2420             mov dword ptr [esp + 0x20], ecx
// 004917be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004917c2  3bd8                 cmp ebx, eax
// 004917c4  750c                 jne 0x4917d2
// 004917c6  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 004917cc  894c2424             mov dword ptr [esp + 0x24], ecx
// 004917d0  8bd9                 mov ebx, ecx
// 004917d2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004917d6  3be8                 cmp ebp, eax
// 004917d8  7506                 jne 0x4917e0
// 004917da  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 004917e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 004917e4  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 004917ea  7541                 jne 0x49182d
// 004917ec  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 004917f2  7539                 jne 0x49182d
// 004917f4  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 004917fa  7531                 jne 0x49182d
// 004917fc  e84fabffff           call 0x48c350
// 00491801  84c0                 test al, al
// 00491803  0f84ae010000         je 0x4919b7
// 00491809  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049180d  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 00491813  7514                 jne 0x491829
// 00491815  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 0049181b  750c                 jne 0x491829
// 0049181d  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 00491823  0f848e010000         je 0x4919b7
// 00491829  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049182d  803dbf38c00000       cmp byte ptr [0xc038bf], 0
// 00491834  7466                 je 0x49189c
// 00491836  6805040000           push 0x405
// 0049183b  ff15803ac000         call dword ptr [0xc03a80]
// 00491841  55                   push ebp
// 00491842  8bce                 mov ecx, esi
// 00491844  e8a7feffff           call 0x4916f0
// 00491849  50                   push eax
// 0049184a  53                   push ebx
// 0049184b  e8a0feffff           call 0x4916f0
// 00491850  8b542424             mov edx, dword ptr [esp + 0x24]
// 00491854  50                   push eax
// 00491855  52                   push edx
// 00491856  e895feffff           call 0x4916f0
// 0049185b  8b1d9cab9e00         mov ebx, dword ptr [0x9eab9c]
// 00491861  50                   push eax
// 00491862  ffd3                 call ebx
// 00491864  6804040000           push 0x404
// 00491869  ff15803ac000         call dword ptr [0xc03a80]
// 0049186f  57                   push edi
// 00491870  8bce                 mov ecx, esi
// 00491872  e879feffff           call 0x4916f0
// 00491877  50                   push eax
// 00491878  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049187c  50                   push eax
// 0049187d  e86efeffff           call 0x4916f0
// 00491882  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00491886  50                   push eax
// 00491887  51                   push ecx
// 00491888  8bce                 mov ecx, esi
// 0049188a  e861feffff           call 0x4916f0
// 0049188f  50                   push eax
// 00491890  ffd3                 call ebx
// 00491892  83467004             add dword ptr [esi + 0x70], 4
// 00491896  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0049189a  eb7e                 jmp 0x49191a
// 0049189c  803dc038c00000       cmp byte ptr [0xc038c0], 0
// 004918a3  57                   push edi
// 004918a4  8bce                 mov ecx, esi
// 004918a6  744f                 je 0x4918f7
// 004918a8  83467002             add dword ptr [esi + 0x70], 2
// 004918ac  e83ffeffff           call 0x4916f0
// 004918b1  50                   push eax
// 004918b2  52                   push edx
// 004918b3  e838feffff           call 0x4916f0
// 004918b8  8b542418             mov edx, dword ptr [esp + 0x18]
// 004918bc  50                   push eax
// 004918bd  52                   push edx
// 004918be  e82dfeffff           call 0x4916f0
// 004918c3  50                   push eax
// 004918c4  6804040000           push 0x404
// 004918c9  ff15d03bc000         call dword ptr [0xc03bd0]
// 004918cf  55                   push ebp
// 004918d0  8bce                 mov ecx, esi
// 004918d2  e819feffff           call 0x4916f0
// 004918d7  50                   push eax
// 004918d8  53                   push ebx
// 004918d9  e812feffff           call 0x4916f0
// 004918de  50                   push eax
// 004918df  8b442428             mov eax, dword ptr [esp + 0x28]
// 004918e3  50                   push eax
// 004918e4  e807feffff           call 0x4916f0
// 004918e9  50                   push eax
// 004918ea  6805040000           push 0x405
// 004918ef  ff15d03bc000         call dword ptr [0xc03bd0]
// 004918f5  eb23                 jmp 0x49191a
// 004918f7  e8f4fdffff           call 0x4916f0
// 004918fc  50                   push eax
// 004918fd  52                   push edx
// 004918fe  e8edfdffff           call 0x4916f0
// 00491903  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00491907  50                   push eax
// 00491908  51                   push ecx
// 00491909  8bce                 mov ecx, esi
// 0049190b  e8e0fdffff           call 0x4916f0
// 00491910  50                   push eax
// 00491911  ff159cab9e00         call dword ptr [0x9eab9c]
// 00491917  ff4670               inc dword ptr [esi + 0x70]
// 0049191a  b802000000           mov eax, 2
// 0049191f  39442414             cmp dword ptr [esp + 0x14], eax
// 00491923  7539                 jne 0x49195e
// 00491925  3bf8                 cmp edi, eax
// 00491927  7535                 jne 0x49195e
// 00491929  39442418             cmp dword ptr [esp + 0x18], eax
// 0049192d  752f                 jne 0x49195e
// 0049192f  e81caaffff           call 0x48c350
// 00491934  84c0                 test al, al
// 00491936  7410                 je 0x491948
// 00491938  837c242002           cmp dword ptr [esp + 0x20], 2
// 0049193d  751f                 jne 0x49195e
// 0049193f  83fd02               cmp ebp, 2
// 00491942  751a                 jne 0x49195e
// 00491944  3bdd                 cmp ebx, ebp
// 00491946  7516                 jne 0x49195e
// 00491948  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 0049194f  7536                 jne 0x491987
// 00491951  68900b0000           push 0xb90
// 00491956  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 0049195c  eb29                 jmp 0x491987
// 0049195e  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 00491965  7520                 jne 0x491987
// 00491967  68900b0000           push 0xb90
// 0049196c  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00491972  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 00491978  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 0049197e  52                   push edx
// 0049197f  50                   push eax
// 00491980  8bce                 mov ecx, esi
// 00491982  e8e9faffff           call 0x491470
// 00491987  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049198b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049198f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00491993  898e28040000         mov dword ptr [esi + 0x428], ecx
// 00491999  89962c040000         mov dword ptr [esi + 0x42c], edx
// 0049199f  89be30040000         mov dword ptr [esi + 0x430], edi
// 004919a5  898634040000         mov dword ptr [esi + 0x434], eax
// 004919ab  899e38040000         mov dword ptr [esi + 0x438], ebx
// 004919b1  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 004919b7  5f                   pop edi
// 004919b8  5e                   pop esi
// 004919b9  5d                   pop ebp
// 004919ba  5b                   pop ebx
// 004919bb  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

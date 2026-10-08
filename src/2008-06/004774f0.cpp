// roc 2008-06 004774f0  unit: G3D::VARArea  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004774f0
//
// 004774f0  6aff                 push -1
// 004774f2  64a100000000         mov eax, dword ptr fs:[0]
// 004774f8  6837497c00           push 0x7c4937
// 004774fd  50                   push eax
// 004774fe  64892500000000       mov dword ptr fs:[0], esp
// 00477505  83ec1c               sub esp, 0x1c
// 00477508  53                   push ebx
// 00477509  55                   push ebp
// 0047750a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0047750e  56                   push esi
// 0047750f  8bf1                 mov esi, ecx
// 00477511  b801000000           mov eax, 1
// 00477516  014678               add dword ptr [esi + 0x78], eax
// 00477519  57                   push edi
// 0047751a  83fd07               cmp ebp, 7
// 0047751d  7506                 jne 0x477525
// 0047751f  8bae40040000         mov ebp, dword ptr [esi + 0x440]
// 00477525  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00477529  83ff07               cmp edi, 7
// 0047752c  7506                 jne 0x477534
// 0047752e  8bbe44040000         mov edi, dword ptr [esi + 0x444]
// 00477534  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00477538  83fb05               cmp ebx, 5
// 0047753b  7506                 jne 0x477543
// 0047753d  8b9e48040000         mov ebx, dword ptr [esi + 0x448]
// 00477543  39be44040000         cmp dword ptr [esi + 0x444], edi
// 00477549  7514                 jne 0x47755f
// 0047754b  39ae40040000         cmp dword ptr [esi + 0x440], ebp
// 00477551  750c                 jne 0x47755f
// 00477553  399e48040000         cmp dword ptr [esi + 0x448], ebx
// 00477559  0f84ca000000         je 0x477629
// 0047755f  014670               add dword ptr [esi + 0x70], eax
// 00477562  83ff03               cmp edi, 3
// 00477565  751d                 jne 0x477584
// 00477567  83fd02               cmp ebp, 2
// 0047756a  7518                 jne 0x477584
// 0047756c  3bdd                 cmp ebx, ebp
// 0047756e  7404                 je 0x477574
// 00477570  3bdf                 cmp ebx, edi
// 00477572  7510                 jne 0x477584
// 00477574  68e20b0000           push 0xbe2
// 00477579  ff1558298000         call dword ptr [0x802958]
// 0047757f  e993000000           jmp 0x477617
// 00477584  68e20b0000           push 0xbe2
// 00477589  ff1550298000         call dword ptr [0x802950]
// 0047758f  8bc7                 mov eax, edi
// 00477591  e80af2ffff           call 0x4767a0
// 00477596  50                   push eax
// 00477597  8bc5                 mov eax, ebp
// 00477599  e802f2ffff           call 0x4767a0
// 0047759e  50                   push eax
// 0047759f  ff15982a8000         call dword ptr [0x802a98]
// 004775a5  f60538f0960001       test byte ptr [0x96f038], 1
// 004775ac  754c                 jne 0x4775fa
// 004775ae  830d38f0960001       or dword ptr [0x96f038], 1
// 004775b5  6880e48100           push 0x81e480
// 004775ba  8d4c2414             lea ecx, [esp + 0x14]
// 004775be  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004775c6  ff1558248000         call dword ptr [0x802458]
// 004775cc  8d442410             lea eax, [esp + 0x10]
// 004775d0  50                   push eax
// 004775d1  c644243801           mov byte ptr [esp + 0x38], 1
// 004775d6  e8859affff           call 0x471060
// 004775db  83c404               add esp, 4
// 004775de  8d4c2410             lea ecx, [esp + 0x10]
// 004775e2  a234f09600           mov byte ptr [0x96f034], al
// 004775e7  c644243400           mov byte ptr [esp + 0x34], 0
// 004775ec  ff1568248000         call dword ptr [0x802468]
// 004775f2  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004775fa  803d34f0960000       cmp byte ptr [0x96f034], 0
// 00477601  7414                 je 0x477617
// 00477603  8b0d0cf89600         mov ecx, dword ptr [0x96f80c]
// 00477609  85c9                 test ecx, ecx
// 0047760b  740a                 je 0x477617
// 0047760d  8bc3                 mov eax, ebx
// 0047760f  e88cfeffff           call 0x4774a0
// 00477614  50                   push eax
// 00477615  ffd1                 call ecx
// 00477617  89be44040000         mov dword ptr [esi + 0x444], edi
// 0047761d  89ae40040000         mov dword ptr [esi + 0x440], ebp
// 00477623  899e48040000         mov dword ptr [esi + 0x448], ebx
// 00477629  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0047762d  5f                   pop edi
// 0047762e  5e                   pop esi
// 0047762f  5d                   pop ebp
// 00477630  5b                   pop ebx
// 00477631  64890d00000000       mov dword ptr fs:[0], ecx
// 00477638  83c428               add esp, 0x28
// 0047763b  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setBlendFunc@RenderDevice@G3D@@QAEXW4BlendFunc@12@0W4BlendEq@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

// roc 2008-06 0047c3e0  unit: seg_00470000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047c3e0
//
// 0047c3e0  64a100000000         mov eax, dword ptr fs:[0]
// 0047c3e6  6aff                 push -1
// 0047c3e8  68544d7c00           push 0x7c4d54
// 0047c3ed  50                   push eax
// 0047c3ee  64892500000000       mov dword ptr fs:[0], esp
// 0047c3f5  83ec38               sub esp, 0x38
// 0047c3f8  53                   push ebx
// 0047c3f9  56                   push esi
// 0047c3fa  57                   push edi
// 0047c3fb  8bf1                 mov esi, ecx
// 0047c3fd  83cfff               or edi, 0xffffffff
// 0047c400  837e0800             cmp dword ptr [esi + 8], 0
// 0047c404  7432                 je 0x47c438
// 0047c406  68d0e88100           push 0x81e8d0
// 0047c40b  8d4c2410             lea ecx, [esp + 0x10]
// 0047c40f  ff1558248000         call dword ptr [0x802458]
// 0047c415  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c418  8d44240c             lea eax, [esp + 0xc]
// 0047c41c  50                   push eax
// 0047c41d  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0047c425  e8c6da0800           call 0x509ef0
// 0047c42a  8d4c240c             lea ecx, [esp + 0xc]
// 0047c42e  897c244c             mov dword ptr [esp + 0x4c], edi
// 0047c432  ff1568248000         call dword ptr [0x802468]
// 0047c438  837e0800             cmp dword ptr [esi + 8], 0
// 0047c43c  bb01000000           mov ebx, 1
// 0047c441  742e                 je 0x47c471
// 0047c443  68bce88100           push 0x81e8bc
// 0047c448  8d4c2410             lea ecx, [esp + 0x10]
// 0047c44c  ff1558248000         call dword ptr [0x802458]
// 0047c452  8d4c240c             lea ecx, [esp + 0xc]
// 0047c456  51                   push ecx
// 0047c457  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c45a  895c2450             mov dword ptr [esp + 0x50], ebx
// 0047c45e  e88dda0800           call 0x509ef0
// 0047c463  8d4c240c             lea ecx, [esp + 0xc]
// 0047c467  897c244c             mov dword ptr [esp + 0x4c], edi
// 0047c46b  ff1568248000         call dword ptr [0x802468]
// 0047c471  d9e8                 fld1 
// 0047c473  83ec10               sub esp, 0x10
// 0047c476  dd542408             fst qword ptr [esp + 8]
// 0047c47a  8bce                 mov ecx, esi
// 0047c47c  dd1c24               fstp qword ptr [esp]
// 0047c47f  e83cfbffff           call 0x47bfc0
// 0047c484  837e0800             cmp dword ptr [esi + 8], 0
// 0047c488  7432                 je 0x47c4bc
// 0047c48a  68a4e88100           push 0x81e8a4
// 0047c48f  8d4c2410             lea ecx, [esp + 0x10]
// 0047c493  ff1558248000         call dword ptr [0x802458]
// 0047c499  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c49c  8d54240c             lea edx, [esp + 0xc]
// 0047c4a0  52                   push edx
// 0047c4a1  c744245002000000     mov dword ptr [esp + 0x50], 2
// 0047c4a9  e842da0800           call 0x509ef0
// 0047c4ae  8d4c240c             lea ecx, [esp + 0xc]
// 0047c4b2  897c244c             mov dword ptr [esp + 0x4c], edi
// 0047c4b6  ff1568248000         call dword ptr [0x802468]
// 0047c4bc  807e0400             cmp byte ptr [esi + 4], 0
// 0047c4c0  744e                 je 0x47c510
// 0047c4c2  837e0800             cmp dword ptr [esi + 8], 0
// 0047c4c6  7432                 je 0x47c4fa
// 0047c4c8  6890e88100           push 0x81e890
// 0047c4cd  8d4c242c             lea ecx, [esp + 0x2c]
// 0047c4d1  ff1558248000         call dword ptr [0x802458]
// 0047c4d7  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c4da  8d442428             lea eax, [esp + 0x28]
// 0047c4de  50                   push eax
// 0047c4df  c744245003000000     mov dword ptr [esp + 0x50], 3
// 0047c4e7  e804da0800           call 0x509ef0
// 0047c4ec  8d4c2428             lea ecx, [esp + 0x28]
// 0047c4f0  897c244c             mov dword ptr [esp + 0x4c], edi
// 0047c4f4  ff1568248000         call dword ptr [0x802468]
// 0047c4fa  e8419effff           call 0x476340
// 0047c4ff  8b0e                 mov ecx, dword ptr [esi]
// 0047c501  85c9                 test ecx, ecx
// 0047c503  740b                 je 0x47c510
// 0047c505  8b11                 mov edx, dword ptr [ecx]
// 0047c507  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0047c50d  53                   push ebx
// 0047c50e  ffd0                 call eax
// 0047c510  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0047c514  889e99080000         mov byte ptr [esi + 0x899], bl
// 0047c51a  5f                   pop edi
// 0047c51b  5e                   pop esi
// 0047c51c  5b                   pop ebx
// 0047c51d  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c524  83c444               add esp, 0x44
// 0047c527  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?cleanup@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

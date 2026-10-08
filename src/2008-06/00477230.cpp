// roc 2008-06 00477230  unit: G3D::VARArea  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477230
//
// 00477230  53                   push ebx
// 00477231  55                   push ebp
// 00477232  56                   push esi
// 00477233  8bf1                 mov esi, ecx
// 00477235  ff4678               inc dword ptr [esi + 0x78]
// 00477238  b808000000           mov eax, 8
// 0047723d  57                   push edi
// 0047723e  39442414             cmp dword ptr [esp + 0x14], eax
// 00477242  750a                 jne 0x47724e
// 00477244  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 0047724a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0047724e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00477252  3bd0                 cmp edx, eax
// 00477254  750a                 jne 0x477260
// 00477256  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 0047725c  89542418             mov dword ptr [esp + 0x18], edx
// 00477260  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00477264  3bf8                 cmp edi, eax
// 00477266  7506                 jne 0x47726e
// 00477268  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 0047726e  39442420             cmp dword ptr [esp + 0x20], eax
// 00477272  750a                 jne 0x47727e
// 00477274  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 0047727a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0047727e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00477282  3bd8                 cmp ebx, eax
// 00477284  750c                 jne 0x477292
// 00477286  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 0047728c  894c2424             mov dword ptr [esp + 0x24], ecx
// 00477290  8bd9                 mov ebx, ecx
// 00477292  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00477296  3be8                 cmp ebp, eax
// 00477298  7506                 jne 0x4772a0
// 0047729a  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 004772a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 004772a4  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 004772aa  7541                 jne 0x4772ed
// 004772ac  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 004772b2  7539                 jne 0x4772ed
// 004772b4  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 004772ba  7531                 jne 0x4772ed
// 004772bc  e80f8dffff           call 0x46ffd0
// 004772c1  84c0                 test al, al
// 004772c3  0f84ae010000         je 0x477477
// 004772c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004772cd  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 004772d3  7514                 jne 0x4772e9
// 004772d5  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 004772db  750c                 jne 0x4772e9
// 004772dd  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 004772e3  0f848e010000         je 0x477477
// 004772e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004772ed  803d83ee960000       cmp byte ptr [0x96ee83], 0
// 004772f4  7466                 je 0x47735c
// 004772f6  6805040000           push 0x405
// 004772fb  ff15e0f89600         call dword ptr [0x96f8e0]
// 00477301  55                   push ebp
// 00477302  8bce                 mov ecx, esi
// 00477304  e8a7feffff           call 0x4771b0
// 00477309  50                   push eax
// 0047730a  53                   push ebx
// 0047730b  e8a0feffff           call 0x4771b0
// 00477310  8b542424             mov edx, dword ptr [esp + 0x24]
// 00477314  50                   push eax
// 00477315  52                   push edx
// 00477316  e895feffff           call 0x4771b0
// 0047731b  8b1d9c2a8000         mov ebx, dword ptr [0x802a9c]
// 00477321  50                   push eax
// 00477322  ffd3                 call ebx
// 00477324  6804040000           push 0x404
// 00477329  ff15e0f89600         call dword ptr [0x96f8e0]
// 0047732f  57                   push edi
// 00477330  8bce                 mov ecx, esi
// 00477332  e879feffff           call 0x4771b0
// 00477337  50                   push eax
// 00477338  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047733c  50                   push eax
// 0047733d  e86efeffff           call 0x4771b0
// 00477342  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00477346  50                   push eax
// 00477347  51                   push ecx
// 00477348  8bce                 mov ecx, esi
// 0047734a  e861feffff           call 0x4771b0
// 0047734f  50                   push eax
// 00477350  ffd3                 call ebx
// 00477352  83467004             add dword ptr [esi + 0x70], 4
// 00477356  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0047735a  eb7e                 jmp 0x4773da
// 0047735c  803d84ee960000       cmp byte ptr [0x96ee84], 0
// 00477363  57                   push edi
// 00477364  8bce                 mov ecx, esi
// 00477366  744f                 je 0x4773b7
// 00477368  83467002             add dword ptr [esi + 0x70], 2
// 0047736c  e83ffeffff           call 0x4771b0
// 00477371  50                   push eax
// 00477372  52                   push edx
// 00477373  e838feffff           call 0x4771b0
// 00477378  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047737c  50                   push eax
// 0047737d  52                   push edx
// 0047737e  e82dfeffff           call 0x4771b0
// 00477383  50                   push eax
// 00477384  6804040000           push 0x404
// 00477389  ff1530fa9600         call dword ptr [0x96fa30]
// 0047738f  55                   push ebp
// 00477390  8bce                 mov ecx, esi
// 00477392  e819feffff           call 0x4771b0
// 00477397  50                   push eax
// 00477398  53                   push ebx
// 00477399  e812feffff           call 0x4771b0
// 0047739e  50                   push eax
// 0047739f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004773a3  50                   push eax
// 004773a4  e807feffff           call 0x4771b0
// 004773a9  50                   push eax
// 004773aa  6805040000           push 0x405
// 004773af  ff1530fa9600         call dword ptr [0x96fa30]
// 004773b5  eb23                 jmp 0x4773da
// 004773b7  e8f4fdffff           call 0x4771b0
// 004773bc  50                   push eax
// 004773bd  52                   push edx
// 004773be  e8edfdffff           call 0x4771b0
// 004773c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004773c7  50                   push eax
// 004773c8  51                   push ecx
// 004773c9  8bce                 mov ecx, esi
// 004773cb  e8e0fdffff           call 0x4771b0
// 004773d0  50                   push eax
// 004773d1  ff159c2a8000         call dword ptr [0x802a9c]
// 004773d7  ff4670               inc dword ptr [esi + 0x70]
// 004773da  b802000000           mov eax, 2
// 004773df  39442414             cmp dword ptr [esp + 0x14], eax
// 004773e3  7539                 jne 0x47741e
// 004773e5  3bf8                 cmp edi, eax
// 004773e7  7535                 jne 0x47741e
// 004773e9  39442418             cmp dword ptr [esp + 0x18], eax
// 004773ed  752f                 jne 0x47741e
// 004773ef  e8dc8bffff           call 0x46ffd0
// 004773f4  84c0                 test al, al
// 004773f6  7410                 je 0x477408
// 004773f8  837c242002           cmp dword ptr [esp + 0x20], 2
// 004773fd  751f                 jne 0x47741e
// 004773ff  83fd02               cmp ebp, 2
// 00477402  751a                 jne 0x47741e
// 00477404  3bdd                 cmp ebx, ebp
// 00477406  7516                 jne 0x47741e
// 00477408  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 0047740f  7536                 jne 0x477447
// 00477411  68900b0000           push 0xb90
// 00477416  ff1558298000         call dword ptr [0x802958]
// 0047741c  eb29                 jmp 0x477447
// 0047741e  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 00477425  7520                 jne 0x477447
// 00477427  68900b0000           push 0xb90
// 0047742c  ff1550298000         call dword ptr [0x802950]
// 00477432  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 00477438  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 0047743e  52                   push edx
// 0047743f  50                   push eax
// 00477440  8bce                 mov ecx, esi
// 00477442  e8e9faffff           call 0x476f30
// 00477447  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047744b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047744f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00477453  898e28040000         mov dword ptr [esi + 0x428], ecx
// 00477459  89962c040000         mov dword ptr [esi + 0x42c], edx
// 0047745f  89be30040000         mov dword ptr [esi + 0x430], edi
// 00477465  898634040000         mov dword ptr [esi + 0x434], eax
// 0047746b  899e38040000         mov dword ptr [esi + 0x438], ebx
// 00477471  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 00477477  5f                   pop edi
// 00477478  5e                   pop esi
// 00477479  5d                   pop ebp
// 0047747a  5b                   pop ebx
// 0047747b  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

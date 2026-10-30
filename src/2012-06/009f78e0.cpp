// roc 2012-06 009f78e0  unit: CXTCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f78e0
//
// 009f78e0  6aff                 push -1
// 009f78e2  687826ae00           push 0xae2678
// 009f78e7  64a100000000         mov eax, dword ptr fs:[0]
// 009f78ed  50                   push eax
// 009f78ee  81ec84000000         sub esp, 0x84
// 009f78f4  53                   push ebx
// 009f78f5  56                   push esi
// 009f78f6  57                   push edi
// 009f78f7  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f78fc  33c4                 xor eax, esp
// 009f78fe  50                   push eax
// 009f78ff  8d842494000000       lea eax, [esp + 0x94]
// 009f7906  64a300000000         mov dword ptr fs:[0], eax
// 009f790c  8bf1                 mov esi, ecx
// 009f790e  8dbed0000000         lea edi, [esi + 0xd0]
// 009f7914  8bcf                 mov ecx, edi
// 009f7916  ff156046b200         call dword ptr [0xb24660]
// 009f791c  84c0                 test al, al
// 009f791e  742d                 je 0x9f794d
// 009f7920  8d4c244c             lea ecx, [esp + 0x4c]
// 009f7924  e8d7d7fdff           call 0x9d5100
// 009f7929  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 009f7930  8b10                 mov edx, dword ptr [eax]
// 009f7932  8911                 mov dword ptr [ecx], edx
// 009f7934  8b5004               mov edx, dword ptr [eax + 4]
// 009f7937  895104               mov dword ptr [ecx + 4], edx
// 009f793a  8b5008               mov edx, dword ptr [eax + 8]
// 009f793d  8b400c               mov eax, dword ptr [eax + 0xc]
// 009f7940  895108               mov dword ptr [ecx + 8], edx
// 009f7943  89410c               mov dword ptr [ecx + 0xc], eax
// 009f7946  8bc1                 mov eax, ecx
// 009f7948  e9e3000000           jmp 0x9f7a30
// 009f794d  56                   push esi
// 009f794e  8d4c2414             lea ecx, [esp + 0x14]
// 009f7952  e849d8fdff           call 0x9d51a0
// 009f7957  6a00                 push 0
// 009f7959  8d4c2424             lea ecx, [esp + 0x24]
// 009f795d  e83a1c0a00           call 0xa9959c
// 009f7962  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f7965  6a00                 push 0
// 009f7967  6a00                 push 0
// 009f7969  6a31                 push 0x31
// 009f796b  51                   push ecx
// 009f796c  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 009f7977  ff15043cb200         call dword ptr [0xb23c04]
// 009f797d  50                   push eax
// 009f797e  e86bb2f8ff           call 0x982bee
// 009f7983  50                   push eax
// 009f7984  8d542424             lea edx, [esp + 0x24]
// 009f7988  52                   push edx
// 009f7989  8d4c2444             lea ecx, [esp + 0x44]
// 009f798d  e89edbfdff           call 0x9d5530
// 009f7992  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009f7996  8d44245c             lea eax, [esp + 0x5c]
// 009f799a  50                   push eax
// 009f799b  51                   push ecx
// 009f799c  ff15a420b200         call dword ptr [0xb220a4]
// 009f79a2  8bcf                 mov ecx, edi
// 009f79a4  ff155846b200         call dword ptr [0xb24658]
// 009f79aa  8bcf                 mov ecx, edi
// 009f79ac  8bd8                 mov ebx, eax
// 009f79ae  ff159847b200         call dword ptr [0xb24798]
// 009f79b4  8d542434             lea edx, [esp + 0x34]
// 009f79b8  52                   push edx
// 009f79b9  53                   push ebx
// 009f79ba  50                   push eax
// 009f79bb  8b442434             mov eax, dword ptr [esp + 0x34]
// 009f79bf  50                   push eax
// 009f79c0  ff154021b200         call dword ptr [0xb22140]
// 009f79c6  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 009f79ca  8b542434             mov edx, dword ptr [esp + 0x34]
// 009f79ce  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 009f79d4  8b442418             mov eax, dword ptr [esp + 0x18]
// 009f79d8  8d540a0c             lea edx, [edx + ecx + 0xc]
// 009f79dc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009f79e0  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 009f79e4  f7df                 neg edi
// 009f79e6  1bff                 sbb edi, edi
// 009f79e8  83e712               and edi, 0x12
// 009f79eb  2bc7                 sub eax, edi
// 009f79ed  2b442410             sub eax, dword ptr [esp + 0x10]
// 009f79f1  3bd0                 cmp edx, eax
// 009f79f3  7e02                 jle 0x9f79f7
// 009f79f5  8bd0                 mov edx, eax
// 009f79f7  8b766c               mov esi, dword ptr [esi + 0x6c]
// 009f79fa  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 009f7a01  2bce                 sub ecx, esi
// 009f7a03  8d0416               lea eax, [esi + edx]
// 009f7a06  894f0c               mov dword ptr [edi + 0xc], ecx
// 009f7a09  8d4c243c             lea ecx, [esp + 0x3c]
// 009f7a0d  8937                 mov dword ptr [edi], esi
// 009f7a0f  897704               mov dword ptr [edi + 4], esi
// 009f7a12  894708               mov dword ptr [edi + 8], eax
// 009f7a15  e896dbfdff           call 0x9d55b0
// 009f7a1a  8d4c2420             lea ecx, [esp + 0x20]
// 009f7a1e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 009f7a29  e8681b0a00           call 0xa99596
// 009f7a2e  8bc7                 mov eax, edi
// 009f7a30  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 009f7a37  64890d00000000       mov dword ptr fs:[0], ecx
// 009f7a3e  59                   pop ecx
// 009f7a3f  5f                   pop edi
// 009f7a40  5e                   pop esi
// 009f7a41  5b                   pop ebx
// 009f7a42  81c490000000         add esp, 0x90
// 009f7a48  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp
// roc 2007-03 004e41c0  unit: seg_004e0000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e41c0
//
// 004e41c0  83ec0c               sub esp, 0xc
// 004e41c3  53                   push ebx
// 004e41c4  8bd9                 mov ebx, ecx
// 004e41c6  8b4304               mov eax, dword ptr [ebx + 4]
// 004e41c9  8b4804               mov ecx, dword ptr [eax + 4]
// 004e41cc  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004e41d0  55                   push ebp
// 004e41d1  56                   push esi
// 004e41d2  8be8                 mov ebp, eax
// 004e41d4  b001                 mov al, 1
// 004e41d6  57                   push edi
// 004e41d7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004e41db  88442410             mov byte ptr [esp + 0x10], al
// 004e41df  756d                 jne 0x4e424e
// 004e41e1  8b7708               mov esi, dword ptr [edi + 8]
// 004e41e4  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004e41e7  3bf0                 cmp esi, eax
// 004e41e9  8be9                 mov ebp, ecx
// 004e41eb  7304                 jae 0x4e41f1
// 004e41ed  b001                 mov al, 1
// 004e41ef  eb48                 jmp 0x4e4239
// 004e41f1  7604                 jbe 0x4e41f7
// 004e41f3  32c0                 xor al, al
// 004e41f5  eb42                 jmp 0x4e4239
// 004e41f7  8a07                 mov al, byte ptr [edi]
// 004e41f9  8a510c               mov dl, byte ptr [ecx + 0xc]
// 004e41fc  3ac2                 cmp al, dl
// 004e41fe  7304                 jae 0x4e4204
// 004e4200  b001                 mov al, 1
// 004e4202  eb35                 jmp 0x4e4239
// 004e4204  7604                 jbe 0x4e420a
// 004e4206  32c0                 xor al, al
// 004e4208  eb2f                 jmp 0x4e4239
// 004e420a  d94704               fld dword ptr [edi + 4]
// 004e420d  d94110               fld dword ptr [ecx + 0x10]
// 004e4210  ded9                 fcompp 
// 004e4212  dfe0                 fnstsw ax
// 004e4214  f6c441               test ah, 0x41
// 004e4217  7504                 jne 0x4e421d
// 004e4219  b001                 mov al, 1
// 004e421b  eb1c                 jmp 0x4e4239
// 004e421d  d94704               fld dword ptr [edi + 4]
// 004e4220  d94110               fld dword ptr [ecx + 0x10]
// 004e4223  ded9                 fcompp 
// 004e4225  dfe0                 fnstsw ax
// 004e4227  f6c405               test ah, 5
// 004e422a  7a04                 jp 0x4e4230
// 004e422c  32c0                 xor al, al
// 004e422e  eb09                 jmp 0x4e4239
// 004e4230  8a4701               mov al, byte ptr [edi + 1]
// 004e4233  3a410d               cmp al, byte ptr [ecx + 0xd]
// 004e4236  0f92c0               setb al
// 004e4239  84c0                 test al, al
// 004e423b  88442410             mov byte ptr [esp + 0x10], al
// 004e423f  7404                 je 0x4e4245
// 004e4241  8b09                 mov ecx, dword ptr [ecx]
// 004e4243  eb03                 jmp 0x4e4248
// 004e4245  8b4908               mov ecx, dword ptr [ecx + 8]
// 004e4248  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004e424c  7496                 je 0x4e41e4
// 004e424e  84c0                 test al, al
// 004e4250  8bf5                 mov esi, ebp
// 004e4252  89742418             mov dword ptr [esp + 0x18], esi
// 004e4256  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e425a  7442                 je 0x4e429e
// 004e425c  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004e425f  3b29                 cmp ebp, dword ptr [ecx]
// 004e4261  752e                 jne 0x4e4291
// 004e4263  57                   push edi
// 004e4264  55                   push ebp
// 004e4265  6a01                 push 1
// 004e4267  8d542420             lea edx, [esp + 0x20]
// 004e426b  52                   push edx
// 004e426c  8bcb                 mov ecx, ebx
// 004e426e  e8ddfaffff           call 0x4e3d50
// 004e4273  5f                   pop edi
// 004e4274  8bc8                 mov ecx, eax
// 004e4276  8b11                 mov edx, dword ptr [ecx]
// 004e4278  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e427c  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e427f  5e                   pop esi
// 004e4280  5d                   pop ebp
// 004e4281  894804               mov dword ptr [eax + 4], ecx
// 004e4284  c6400801             mov byte ptr [eax + 8], 1
// 004e4288  8910                 mov dword ptr [eax], edx
// 004e428a  5b                   pop ebx
// 004e428b  83c40c               add esp, 0xc
// 004e428e  c20800               ret 8
// 004e4291  8d4c2414             lea ecx, [esp + 0x14]
// 004e4295  e8d6151100           call 0x5f5870
// 004e429a  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e429e  57                   push edi
// 004e429f  8d4e0c               lea ecx, [esi + 0xc]
// 004e42a2  e8e9ebffff           call 0x4e2e90
// 004e42a7  84c0                 test al, al
// 004e42a9  7431                 je 0x4e42dc
// 004e42ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e42af  57                   push edi
// 004e42b0  55                   push ebp
// 004e42b1  52                   push edx
// 004e42b2  8d442420             lea eax, [esp + 0x20]
// 004e42b6  50                   push eax
// 004e42b7  8bcb                 mov ecx, ebx
// 004e42b9  e892faffff           call 0x4e3d50
// 004e42be  5f                   pop edi
// 004e42bf  8bc8                 mov ecx, eax
// 004e42c1  8b11                 mov edx, dword ptr [ecx]
// 004e42c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e42c7  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e42ca  5e                   pop esi
// 004e42cb  5d                   pop ebp
// 004e42cc  894804               mov dword ptr [eax + 4], ecx
// 004e42cf  c6400801             mov byte ptr [eax + 8], 1
// 004e42d3  8910                 mov dword ptr [eax], edx
// 004e42d5  5b                   pop ebx
// 004e42d6  83c40c               add esp, 0xc
// 004e42d9  c20800               ret 8
// 004e42dc  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e42e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e42e4  5f                   pop edi
// 004e42e5  897004               mov dword ptr [eax + 4], esi
// 004e42e8  5e                   pop esi
// 004e42e9  5d                   pop ebp
// 004e42ea  c6400800             mov byte ptr [eax + 8], 0
// 004e42ee  8910                 mov dword ptr [eax], edx
// 004e42f0  5b                   pop ebx
// 004e42f1  83c40c               add esp, 0xc
// 004e42f4  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

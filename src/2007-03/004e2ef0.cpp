// roc 2007-03 004e2ef0  unit: seg_004e0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2ef0
//
// 004e2ef0  8b4104               mov eax, dword ptr [ecx + 4]
// 004e2ef3  8b4804               mov ecx, dword ptr [eax + 4]
// 004e2ef6  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004e2efa  53                   push ebx
// 004e2efb  8bd8                 mov ebx, eax
// 004e2efd  7556                 jne 0x4e2f55
// 004e2eff  56                   push esi
// 004e2f00  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e2f04  57                   push edi
// 004e2f05  8b7e08               mov edi, dword ptr [esi + 8]
// 004e2f08  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004e2f0b  3bc7                 cmp eax, edi
// 004e2f0d  7233                 jb 0x4e2f42
// 004e2f0f  7736                 ja 0x4e2f47
// 004e2f11  8a410c               mov al, byte ptr [ecx + 0xc]
// 004e2f14  8a16                 mov dl, byte ptr [esi]
// 004e2f16  3ac2                 cmp al, dl
// 004e2f18  7228                 jb 0x4e2f42
// 004e2f1a  772b                 ja 0x4e2f47
// 004e2f1c  d94110               fld dword ptr [ecx + 0x10]
// 004e2f1f  d94604               fld dword ptr [esi + 4]
// 004e2f22  ded9                 fcompp 
// 004e2f24  dfe0                 fnstsw ax
// 004e2f26  f6c441               test ah, 0x41
// 004e2f29  7417                 je 0x4e2f42
// 004e2f2b  d94110               fld dword ptr [ecx + 0x10]
// 004e2f2e  d94604               fld dword ptr [esi + 4]
// 004e2f31  ded9                 fcompp 
// 004e2f33  dfe0                 fnstsw ax
// 004e2f35  f6c405               test ah, 5
// 004e2f38  7b0d                 jnp 0x4e2f47
// 004e2f3a  8a410d               mov al, byte ptr [ecx + 0xd]
// 004e2f3d  3a4601               cmp al, byte ptr [esi + 1]
// 004e2f40  7305                 jae 0x4e2f47
// 004e2f42  8b4908               mov ecx, dword ptr [ecx + 8]
// 004e2f45  eb04                 jmp 0x4e2f4b
// 004e2f47  8bd9                 mov ebx, ecx
// 004e2f49  8b09                 mov ecx, dword ptr [ecx]
// 004e2f4b  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004e2f4f  74b7                 je 0x4e2f08
// 004e2f51  5f                   pop edi
// 004e2f52  8bc3                 mov eax, ebx
// 004e2f54  5e                   pop esi
// 004e2f55  5b                   pop ebx
// 004e2f56  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

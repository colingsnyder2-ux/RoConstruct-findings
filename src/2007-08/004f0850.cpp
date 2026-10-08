// roc 2007-08 004f0850  unit: RBX::Render::AggregatingSceneManager  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0850
//
// 004f0850  83ec0c               sub esp, 0xc
// 004f0853  53                   push ebx
// 004f0854  8bd9                 mov ebx, ecx
// 004f0856  8b4304               mov eax, dword ptr [ebx + 4]
// 004f0859  8b4804               mov ecx, dword ptr [eax + 4]
// 004f085c  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004f0860  55                   push ebp
// 004f0861  56                   push esi
// 004f0862  8be8                 mov ebp, eax
// 004f0864  b001                 mov al, 1
// 004f0866  57                   push edi
// 004f0867  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f086b  88442410             mov byte ptr [esp + 0x10], al
// 004f086f  756d                 jne 0x4f08de
// 004f0871  8b7708               mov esi, dword ptr [edi + 8]
// 004f0874  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004f0877  3bf0                 cmp esi, eax
// 004f0879  8be9                 mov ebp, ecx
// 004f087b  7304                 jae 0x4f0881
// 004f087d  b001                 mov al, 1
// 004f087f  eb48                 jmp 0x4f08c9
// 004f0881  7604                 jbe 0x4f0887
// 004f0883  32c0                 xor al, al
// 004f0885  eb42                 jmp 0x4f08c9
// 004f0887  8a07                 mov al, byte ptr [edi]
// 004f0889  8a510c               mov dl, byte ptr [ecx + 0xc]
// 004f088c  3ac2                 cmp al, dl
// 004f088e  7304                 jae 0x4f0894
// 004f0890  b001                 mov al, 1
// 004f0892  eb35                 jmp 0x4f08c9
// 004f0894  7604                 jbe 0x4f089a
// 004f0896  32c0                 xor al, al
// 004f0898  eb2f                 jmp 0x4f08c9
// 004f089a  d94704               fld dword ptr [edi + 4]
// 004f089d  d94110               fld dword ptr [ecx + 0x10]
// 004f08a0  ded9                 fcompp 
// 004f08a2  dfe0                 fnstsw ax
// 004f08a4  f6c441               test ah, 0x41
// 004f08a7  7504                 jne 0x4f08ad
// 004f08a9  b001                 mov al, 1
// 004f08ab  eb1c                 jmp 0x4f08c9
// 004f08ad  d94704               fld dword ptr [edi + 4]
// 004f08b0  d94110               fld dword ptr [ecx + 0x10]
// 004f08b3  ded9                 fcompp 
// 004f08b5  dfe0                 fnstsw ax
// 004f08b7  f6c405               test ah, 5
// 004f08ba  7a04                 jp 0x4f08c0
// 004f08bc  32c0                 xor al, al
// 004f08be  eb09                 jmp 0x4f08c9
// 004f08c0  8a4701               mov al, byte ptr [edi + 1]
// 004f08c3  3a410d               cmp al, byte ptr [ecx + 0xd]
// 004f08c6  0f92c0               setb al
// 004f08c9  84c0                 test al, al
// 004f08cb  88442410             mov byte ptr [esp + 0x10], al
// 004f08cf  7404                 je 0x4f08d5
// 004f08d1  8b09                 mov ecx, dword ptr [ecx]
// 004f08d3  eb03                 jmp 0x4f08d8
// 004f08d5  8b4908               mov ecx, dword ptr [ecx + 8]
// 004f08d8  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004f08dc  7496                 je 0x4f0874
// 004f08de  84c0                 test al, al
// 004f08e0  8bf5                 mov esi, ebp
// 004f08e2  89742418             mov dword ptr [esp + 0x18], esi
// 004f08e6  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f08ea  7442                 je 0x4f092e
// 004f08ec  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004f08ef  3b29                 cmp ebp, dword ptr [ecx]
// 004f08f1  752e                 jne 0x4f0921
// 004f08f3  57                   push edi
// 004f08f4  55                   push ebp
// 004f08f5  6a01                 push 1
// 004f08f7  8d542420             lea edx, [esp + 0x20]
// 004f08fb  52                   push edx
// 004f08fc  8bcb                 mov ecx, ebx
// 004f08fe  e8ddfaffff           call 0x4f03e0
// 004f0903  5f                   pop edi
// 004f0904  8bc8                 mov ecx, eax
// 004f0906  8b11                 mov edx, dword ptr [ecx]
// 004f0908  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f090c  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f090f  5e                   pop esi
// 004f0910  5d                   pop ebp
// 004f0911  894804               mov dword ptr [eax + 4], ecx
// 004f0914  c6400801             mov byte ptr [eax + 8], 1
// 004f0918  8910                 mov dword ptr [eax], edx
// 004f091a  5b                   pop ebx
// 004f091b  83c40c               add esp, 0xc
// 004f091e  c20800               ret 8
// 004f0921  8d4c2414             lea ecx, [esp + 0x14]
// 004f0925  e816c11100           call 0x60ca40
// 004f092a  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f092e  57                   push edi
// 004f092f  8d4e0c               lea ecx, [esi + 0xc]
// 004f0932  e869ebffff           call 0x4ef4a0
// 004f0937  84c0                 test al, al
// 004f0939  7431                 je 0x4f096c
// 004f093b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f093f  57                   push edi
// 004f0940  55                   push ebp
// 004f0941  52                   push edx
// 004f0942  8d442420             lea eax, [esp + 0x20]
// 004f0946  50                   push eax
// 004f0947  8bcb                 mov ecx, ebx
// 004f0949  e892faffff           call 0x4f03e0
// 004f094e  5f                   pop edi
// 004f094f  8bc8                 mov ecx, eax
// 004f0951  8b11                 mov edx, dword ptr [ecx]
// 004f0953  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f0957  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f095a  5e                   pop esi
// 004f095b  5d                   pop ebp
// 004f095c  894804               mov dword ptr [eax + 4], ecx
// 004f095f  c6400801             mov byte ptr [eax + 8], 1
// 004f0963  8910                 mov dword ptr [eax], edx
// 004f0965  5b                   pop ebx
// 004f0966  83c40c               add esp, 0xc
// 004f0969  c20800               ret 8
// 004f096c  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f0970  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f0974  5f                   pop edi
// 004f0975  897004               mov dword ptr [eax + 4], esi
// 004f0978  5e                   pop esi
// 004f0979  5d                   pop ebp
// 004f097a  c6400800             mov byte ptr [eax + 8], 0
// 004f097e  8910                 mov dword ptr [eax], edx
// 004f0980  5b                   pop ebx
// 004f0981  83c40c               add esp, 0xc
// 004f0984  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

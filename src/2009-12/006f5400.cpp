// roc 2009-12 006f5400  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f5400
//
// 006f5400  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006f5403  8b4204               mov eax, dword ptr [edx + 4]
// 006f5406  80781500             cmp byte ptr [eax + 0x15], 0
// 006f540a  53                   push ebx
// 006f540b  55                   push ebp
// 006f540c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006f5410  56                   push esi
// 006f5411  8bda                 mov ebx, edx
// 006f5413  752e                 jne 0x6f5443
// 006f5415  57                   push edi
// 006f5416  8b7d04               mov edi, dword ptr [ebp + 4]
// 006f5419  8da42400000000       lea esp, [esp]
// 006f5420  8b7010               mov esi, dword ptr [eax + 0x10]
// 006f5423  3bf7                 cmp esi, edi
// 006f5425  7305                 jae 0x6f542c
// 006f5427  8b4008               mov eax, dword ptr [eax + 8]
// 006f542a  eb10                 jmp 0x6f543c
// 006f542c  807a1500             cmp byte ptr [edx + 0x15], 0
// 006f5430  7406                 je 0x6f5438
// 006f5432  3bfe                 cmp edi, esi
// 006f5434  7302                 jae 0x6f5438
// 006f5436  8bd0                 mov edx, eax
// 006f5438  8bd8                 mov ebx, eax
// 006f543a  8b00                 mov eax, dword ptr [eax]
// 006f543c  80781500             cmp byte ptr [eax + 0x15], 0
// 006f5440  74de                 je 0x6f5420
// 006f5442  5f                   pop edi
// 006f5443  807a1500             cmp byte ptr [edx + 0x15], 0
// 006f5447  7408                 je 0x6f5451
// 006f5449  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006f544c  8b4004               mov eax, dword ptr [eax + 4]
// 006f544f  eb02                 jmp 0x6f5453
// 006f5451  8b02                 mov eax, dword ptr [edx]
// 006f5453  80781500             cmp byte ptr [eax + 0x15], 0
// 006f5457  751b                 jne 0x6f5474
// 006f5459  8b7504               mov esi, dword ptr [ebp + 4]
// 006f545c  8d642400             lea esp, [esp]
// 006f5460  3b7010               cmp esi, dword ptr [eax + 0x10]
// 006f5463  7306                 jae 0x6f546b
// 006f5465  8bd0                 mov edx, eax
// 006f5467  8b00                 mov eax, dword ptr [eax]
// 006f5469  eb03                 jmp 0x6f546e
// 006f546b  8b4008               mov eax, dword ptr [eax + 8]
// 006f546e  80781500             cmp byte ptr [eax + 0x15], 0
// 006f5472  74ec                 je 0x6f5460
// 006f5474  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f5478  8b09                 mov ecx, dword ptr [ecx]
// 006f547a  5e                   pop esi
// 006f547b  5d                   pop ebp
// 006f547c  895804               mov dword ptr [eax + 4], ebx
// 006f547f  8908                 mov dword ptr [eax], ecx
// 006f5481  894808               mov dword ptr [eax + 8], ecx
// 006f5484  89500c               mov dword ptr [eax + 0xc], edx
// 006f5487  5b                   pop ebx
// 006f5488  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

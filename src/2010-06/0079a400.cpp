// roc 2010-06 0079a400  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079a400
//
// 0079a400  83ec0c               sub esp, 0xc
// 0079a403  53                   push ebx
// 0079a404  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0079a408  55                   push ebp
// 0079a409  56                   push esi
// 0079a40a  57                   push edi
// 0079a40b  8bf9                 mov edi, ecx
// 0079a40d  8b7718               mov esi, dword ptr [edi + 0x18]
// 0079a410  8b4604               mov eax, dword ptr [esi + 4]
// 0079a413  80781500             cmp byte ptr [eax + 0x15], 0
// 0079a417  b101                 mov cl, 1
// 0079a419  884c2410             mov byte ptr [esp + 0x10], cl
// 0079a41d  7520                 jne 0x79a43f
// 0079a41f  8b5304               mov edx, dword ptr [ebx + 4]
// 0079a422  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0079a425  8bf0                 mov esi, eax
// 0079a427  0f92c1               setb cl
// 0079a42a  884c2410             mov byte ptr [esp + 0x10], cl
// 0079a42e  84c9                 test cl, cl
// 0079a430  7404                 je 0x79a436
// 0079a432  8b00                 mov eax, dword ptr [eax]
// 0079a434  eb03                 jmp 0x79a439
// 0079a436  8b4008               mov eax, dword ptr [eax + 8]
// 0079a439  80781500             cmp byte ptr [eax + 0x15], 0
// 0079a43d  74e3                 je 0x79a422
// 0079a43f  8b17                 mov edx, dword ptr [edi]
// 0079a441  8bee                 mov ebp, esi
// 0079a443  896c2418             mov dword ptr [esp + 0x18], ebp
// 0079a447  89542414             mov dword ptr [esp + 0x14], edx
// 0079a44b  84c9                 test cl, cl
// 0079a44d  7452                 je 0x79a4a1
// 0079a44f  8b4718               mov eax, dword ptr [edi + 0x18]
// 0079a452  8b28                 mov ebp, dword ptr [eax]
// 0079a454  85d2                 test edx, edx
// 0079a456  7404                 je 0x79a45c
// 0079a458  3bd2                 cmp edx, edx
// 0079a45a  7406                 je 0x79a462
// 0079a45c  ff150ca99e00         call dword ptr [0x9ea90c]
// 0079a462  8d4c2414             lea ecx, [esp + 0x14]
// 0079a466  3bf5                 cmp esi, ebp
// 0079a468  752a                 jne 0x79a494
// 0079a46a  53                   push ebx
// 0079a46b  56                   push esi
// 0079a46c  6a01                 push 1
// 0079a46e  51                   push ecx
// 0079a46f  8bcf                 mov ecx, edi
// 0079a471  e8bafcffff           call 0x79a130
// 0079a476  5f                   pop edi
// 0079a477  8bc8                 mov ecx, eax
// 0079a479  8b11                 mov edx, dword ptr [ecx]
// 0079a47b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079a47f  8b4904               mov ecx, dword ptr [ecx + 4]
// 0079a482  5e                   pop esi
// 0079a483  5d                   pop ebp
// 0079a484  894804               mov dword ptr [eax + 4], ecx
// 0079a487  c6400801             mov byte ptr [eax + 8], 1
// 0079a48b  8910                 mov dword ptr [eax], edx
// 0079a48d  5b                   pop ebx
// 0079a48e  83c40c               add esp, 0xc
// 0079a491  c20800               ret 8
// 0079a494  e8a7f7f6ff           call 0x709c40
// 0079a499  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0079a49d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079a4a1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0079a4a4  3b4304               cmp eax, dword ptr [ebx + 4]
// 0079a4a7  7331                 jae 0x79a4da
// 0079a4a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079a4ad  53                   push ebx
// 0079a4ae  56                   push esi
// 0079a4af  51                   push ecx
// 0079a4b0  8d542420             lea edx, [esp + 0x20]
// 0079a4b4  52                   push edx
// 0079a4b5  8bcf                 mov ecx, edi
// 0079a4b7  e874fcffff           call 0x79a130
// 0079a4bc  5f                   pop edi
// 0079a4bd  8bc8                 mov ecx, eax
// 0079a4bf  8b11                 mov edx, dword ptr [ecx]
// 0079a4c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079a4c5  8b4904               mov ecx, dword ptr [ecx + 4]
// 0079a4c8  5e                   pop esi
// 0079a4c9  5d                   pop ebp
// 0079a4ca  894804               mov dword ptr [eax + 4], ecx
// 0079a4cd  c6400801             mov byte ptr [eax + 8], 1
// 0079a4d1  8910                 mov dword ptr [eax], edx
// 0079a4d3  5b                   pop ebx
// 0079a4d4  83c40c               add esp, 0xc
// 0079a4d7  c20800               ret 8
// 0079a4da  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079a4de  5f                   pop edi
// 0079a4df  5e                   pop esi
// 0079a4e0  896804               mov dword ptr [eax + 4], ebp
// 0079a4e3  5d                   pop ebp
// 0079a4e4  c6400800             mov byte ptr [eax + 8], 0
// 0079a4e8  8910                 mov dword ptr [eax], edx
// 0079a4ea  5b                   pop ebx
// 0079a4eb  83c40c               add esp, 0xc
// 0079a4ee  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

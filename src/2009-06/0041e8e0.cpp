// roc 2009-06 0041e8e0  unit: CSelectionTreeCtrl  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041e8e0
//
// 0041e8e0  83ec0c               sub esp, 0xc
// 0041e8e3  53                   push ebx
// 0041e8e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0041e8e8  55                   push ebp
// 0041e8e9  56                   push esi
// 0041e8ea  57                   push edi
// 0041e8eb  8bf9                 mov edi, ecx
// 0041e8ed  8b7718               mov esi, dword ptr [edi + 0x18]
// 0041e8f0  8b4604               mov eax, dword ptr [esi + 4]
// 0041e8f3  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e8f7  b101                 mov cl, 1
// 0041e8f9  884c2410             mov byte ptr [esp + 0x10], cl
// 0041e8fd  7520                 jne 0x41e91f
// 0041e8ff  8b5304               mov edx, dword ptr [ebx + 4]
// 0041e902  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0041e905  8bf0                 mov esi, eax
// 0041e907  0f92c1               setb cl
// 0041e90a  884c2410             mov byte ptr [esp + 0x10], cl
// 0041e90e  84c9                 test cl, cl
// 0041e910  7404                 je 0x41e916
// 0041e912  8b00                 mov eax, dword ptr [eax]
// 0041e914  eb03                 jmp 0x41e919
// 0041e916  8b4008               mov eax, dword ptr [eax + 8]
// 0041e919  80781500             cmp byte ptr [eax + 0x15], 0
// 0041e91d  74e3                 je 0x41e902
// 0041e91f  8b17                 mov edx, dword ptr [edi]
// 0041e921  8bee                 mov ebp, esi
// 0041e923  896c2418             mov dword ptr [esp + 0x18], ebp
// 0041e927  89542414             mov dword ptr [esp + 0x14], edx
// 0041e92b  84c9                 test cl, cl
// 0041e92d  7452                 je 0x41e981
// 0041e92f  8b4718               mov eax, dword ptr [edi + 0x18]
// 0041e932  8b28                 mov ebp, dword ptr [eax]
// 0041e934  85d2                 test edx, edx
// 0041e936  7404                 je 0x41e93c
// 0041e938  3bd2                 cmp edx, edx
// 0041e93a  7406                 je 0x41e942
// 0041e93c  ff15ace98900         call dword ptr [0x89e9ac]
// 0041e942  8d4c2414             lea ecx, [esp + 0x14]
// 0041e946  3bf5                 cmp esi, ebp
// 0041e948  752a                 jne 0x41e974
// 0041e94a  53                   push ebx
// 0041e94b  56                   push esi
// 0041e94c  6a01                 push 1
// 0041e94e  51                   push ecx
// 0041e94f  8bcf                 mov ecx, edi
// 0041e951  e8cafcffff           call 0x41e620
// 0041e956  5f                   pop edi
// 0041e957  8bc8                 mov ecx, eax
// 0041e959  8b11                 mov edx, dword ptr [ecx]
// 0041e95b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041e95f  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041e962  5e                   pop esi
// 0041e963  5d                   pop ebp
// 0041e964  894804               mov dword ptr [eax + 4], ecx
// 0041e967  c6400801             mov byte ptr [eax + 8], 1
// 0041e96b  8910                 mov dword ptr [eax], edx
// 0041e96d  5b                   pop ebx
// 0041e96e  83c40c               add esp, 0xc
// 0041e971  c20800               ret 8
// 0041e974  e877712800           call 0x6a5af0
// 0041e979  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0041e97d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041e981  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0041e984  3b4304               cmp eax, dword ptr [ebx + 4]
// 0041e987  7331                 jae 0x41e9ba
// 0041e989  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041e98d  53                   push ebx
// 0041e98e  56                   push esi
// 0041e98f  51                   push ecx
// 0041e990  8d542420             lea edx, [esp + 0x20]
// 0041e994  52                   push edx
// 0041e995  8bcf                 mov ecx, edi
// 0041e997  e884fcffff           call 0x41e620
// 0041e99c  5f                   pop edi
// 0041e99d  8bc8                 mov ecx, eax
// 0041e99f  8b11                 mov edx, dword ptr [ecx]
// 0041e9a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041e9a5  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041e9a8  5e                   pop esi
// 0041e9a9  5d                   pop ebp
// 0041e9aa  894804               mov dword ptr [eax + 4], ecx
// 0041e9ad  c6400801             mov byte ptr [eax + 8], 1
// 0041e9b1  8910                 mov dword ptr [eax], edx
// 0041e9b3  5b                   pop ebx
// 0041e9b4  83c40c               add esp, 0xc
// 0041e9b7  c20800               ret 8
// 0041e9ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 0041e9be  5f                   pop edi
// 0041e9bf  5e                   pop esi
// 0041e9c0  896804               mov dword ptr [eax + 4], ebp
// 0041e9c3  5d                   pop ebp
// 0041e9c4  c6400800             mov byte ptr [eax + 8], 0
// 0041e9c8  8910                 mov dword ptr [eax], edx
// 0041e9ca  5b                   pop ebx
// 0041e9cb  83c40c               add esp, 0xc
// 0041e9ce  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

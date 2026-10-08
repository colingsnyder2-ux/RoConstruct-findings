// roc 2007-08 004a9720  unit: RBX::VInstance::?$NonFactoryProduct  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9720
//
// 004a9720  83ec0c               sub esp, 0xc
// 004a9723  55                   push ebp
// 004a9724  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004a9728  56                   push esi
// 004a9729  57                   push edi
// 004a972a  8bf9                 mov edi, ecx
// 004a972c  8b7704               mov esi, dword ptr [edi + 4]
// 004a972f  8b4604               mov eax, dword ptr [esi + 4]
// 004a9732  80781500             cmp byte ptr [eax + 0x15], 0
// 004a9736  b101                 mov cl, 1
// 004a9738  884c240c             mov byte ptr [esp + 0xc], cl
// 004a973c  7520                 jne 0x4a975e
// 004a973e  8b5504               mov edx, dword ptr [ebp + 4]
// 004a9741  3b5010               cmp edx, dword ptr [eax + 0x10]
// 004a9744  8bf0                 mov esi, eax
// 004a9746  0f92c1               setb cl
// 004a9749  84c9                 test cl, cl
// 004a974b  884c240c             mov byte ptr [esp + 0xc], cl
// 004a974f  7404                 je 0x4a9755
// 004a9751  8b00                 mov eax, dword ptr [eax]
// 004a9753  eb03                 jmp 0x4a9758
// 004a9755  8b4008               mov eax, dword ptr [eax + 8]
// 004a9758  80781500             cmp byte ptr [eax + 0x15], 0
// 004a975c  74e3                 je 0x4a9741
// 004a975e  84c9                 test cl, cl
// 004a9760  8bd6                 mov edx, esi
// 004a9762  89542414             mov dword ptr [esp + 0x14], edx
// 004a9766  897c2410             mov dword ptr [esp + 0x10], edi
// 004a976a  743d                 je 0x4a97a9
// 004a976c  8b4704               mov eax, dword ptr [edi + 4]
// 004a976f  3b30                 cmp esi, dword ptr [eax]
// 004a9771  8d4c2410             lea ecx, [esp + 0x10]
// 004a9775  7529                 jne 0x4a97a0
// 004a9777  55                   push ebp
// 004a9778  56                   push esi
// 004a9779  6a01                 push 1
// 004a977b  51                   push ecx
// 004a977c  8bcf                 mov ecx, edi
// 004a977e  e8bdf1ffff           call 0x4a8940
// 004a9783  8bc8                 mov ecx, eax
// 004a9785  8b11                 mov edx, dword ptr [ecx]
// 004a9787  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a978b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a978e  5f                   pop edi
// 004a978f  5e                   pop esi
// 004a9790  8910                 mov dword ptr [eax], edx
// 004a9792  894804               mov dword ptr [eax + 4], ecx
// 004a9795  c6400801             mov byte ptr [eax + 8], 1
// 004a9799  5d                   pop ebp
// 004a979a  83c40c               add esp, 0xc
// 004a979d  c20800               ret 8
// 004a97a0  e88b5a0400           call 0x4ef230
// 004a97a5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a97a9  8b4210               mov eax, dword ptr [edx + 0x10]
// 004a97ac  3b4504               cmp eax, dword ptr [ebp + 4]
// 004a97af  730e                 jae 0x4a97bf
// 004a97b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a97b5  55                   push ebp
// 004a97b6  56                   push esi
// 004a97b7  51                   push ecx
// 004a97b8  8d54241c             lea edx, [esp + 0x1c]
// 004a97bc  52                   push edx
// 004a97bd  ebbd                 jmp 0x4a977c
// 004a97bf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a97c3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a97c7  5f                   pop edi
// 004a97c8  5e                   pop esi
// 004a97c9  8908                 mov dword ptr [eax], ecx
// 004a97cb  895004               mov dword ptr [eax + 4], edx
// 004a97ce  c6400800             mov byte ptr [eax + 8], 0
// 004a97d2  5d                   pop ebp
// 004a97d3  83c40c               add esp, 0xc
// 004a97d6  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

// roc 2007-08 00421640  unit: CSelectionTreeCtrl  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421640
//
// 00421640  83ec0c               sub esp, 0xc
// 00421643  55                   push ebp
// 00421644  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00421648  56                   push esi
// 00421649  57                   push edi
// 0042164a  8bf9                 mov edi, ecx
// 0042164c  8b7704               mov esi, dword ptr [edi + 4]
// 0042164f  8b4604               mov eax, dword ptr [esi + 4]
// 00421652  80781500             cmp byte ptr [eax + 0x15], 0
// 00421656  b101                 mov cl, 1
// 00421658  884c240c             mov byte ptr [esp + 0xc], cl
// 0042165c  7520                 jne 0x42167e
// 0042165e  8b5504               mov edx, dword ptr [ebp + 4]
// 00421661  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00421664  8bf0                 mov esi, eax
// 00421666  0f92c1               setb cl
// 00421669  84c9                 test cl, cl
// 0042166b  884c240c             mov byte ptr [esp + 0xc], cl
// 0042166f  7404                 je 0x421675
// 00421671  8b00                 mov eax, dword ptr [eax]
// 00421673  eb03                 jmp 0x421678
// 00421675  8b4008               mov eax, dword ptr [eax + 8]
// 00421678  80781500             cmp byte ptr [eax + 0x15], 0
// 0042167c  74e3                 je 0x421661
// 0042167e  84c9                 test cl, cl
// 00421680  8bd6                 mov edx, esi
// 00421682  89542414             mov dword ptr [esp + 0x14], edx
// 00421686  897c2410             mov dword ptr [esp + 0x10], edi
// 0042168a  743d                 je 0x4216c9
// 0042168c  8b4704               mov eax, dword ptr [edi + 4]
// 0042168f  3b30                 cmp esi, dword ptr [eax]
// 00421691  8d4c2410             lea ecx, [esp + 0x10]
// 00421695  7529                 jne 0x4216c0
// 00421697  55                   push ebp
// 00421698  56                   push esi
// 00421699  6a01                 push 1
// 0042169b  51                   push ecx
// 0042169c  8bcf                 mov ecx, edi
// 0042169e  e80dfcffff           call 0x4212b0
// 004216a3  8bc8                 mov ecx, eax
// 004216a5  8b11                 mov edx, dword ptr [ecx]
// 004216a7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004216ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 004216ae  5f                   pop edi
// 004216af  5e                   pop esi
// 004216b0  8910                 mov dword ptr [eax], edx
// 004216b2  894804               mov dword ptr [eax + 4], ecx
// 004216b5  c6400801             mov byte ptr [eax + 8], 1
// 004216b9  5d                   pop ebp
// 004216ba  83c40c               add esp, 0xc
// 004216bd  c20800               ret 8
// 004216c0  e86bdb0c00           call 0x4ef230
// 004216c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004216c9  8b4210               mov eax, dword ptr [edx + 0x10]
// 004216cc  3b4504               cmp eax, dword ptr [ebp + 4]
// 004216cf  730e                 jae 0x4216df
// 004216d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004216d5  55                   push ebp
// 004216d6  56                   push esi
// 004216d7  51                   push ecx
// 004216d8  8d54241c             lea edx, [esp + 0x1c]
// 004216dc  52                   push edx
// 004216dd  ebbd                 jmp 0x42169c
// 004216df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004216e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004216e7  5f                   pop edi
// 004216e8  5e                   pop esi
// 004216e9  8908                 mov dword ptr [eax], ecx
// 004216eb  895004               mov dword ptr [eax + 4], edx
// 004216ee  c6400800             mov byte ptr [eax + 8], 0
// 004216f2  5d                   pop ebp
// 004216f3  83c40c               add esp, 0xc
// 004216f6  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

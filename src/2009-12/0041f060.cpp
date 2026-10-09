// roc 2009-12 0041f060  unit: CSelectionTreeCtrl  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041f060
//
// 0041f060  83ec0c               sub esp, 0xc
// 0041f063  53                   push ebx
// 0041f064  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0041f068  55                   push ebp
// 0041f069  56                   push esi
// 0041f06a  57                   push edi
// 0041f06b  8bf9                 mov edi, ecx
// 0041f06d  8b7718               mov esi, dword ptr [edi + 0x18]
// 0041f070  8b4604               mov eax, dword ptr [esi + 4]
// 0041f073  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f077  b101                 mov cl, 1
// 0041f079  884c2410             mov byte ptr [esp + 0x10], cl
// 0041f07d  7520                 jne 0x41f09f
// 0041f07f  8b5304               mov edx, dword ptr [ebx + 4]
// 0041f082  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0041f085  8bf0                 mov esi, eax
// 0041f087  0f92c1               setb cl
// 0041f08a  884c2410             mov byte ptr [esp + 0x10], cl
// 0041f08e  84c9                 test cl, cl
// 0041f090  7404                 je 0x41f096
// 0041f092  8b00                 mov eax, dword ptr [eax]
// 0041f094  eb03                 jmp 0x41f099
// 0041f096  8b4008               mov eax, dword ptr [eax + 8]
// 0041f099  80781500             cmp byte ptr [eax + 0x15], 0
// 0041f09d  74e3                 je 0x41f082
// 0041f09f  8b17                 mov edx, dword ptr [edi]
// 0041f0a1  8bee                 mov ebp, esi
// 0041f0a3  896c2418             mov dword ptr [esp + 0x18], ebp
// 0041f0a7  89542414             mov dword ptr [esp + 0x14], edx
// 0041f0ab  84c9                 test cl, cl
// 0041f0ad  7452                 je 0x41f101
// 0041f0af  8b4718               mov eax, dword ptr [edi + 0x18]
// 0041f0b2  8b28                 mov ebp, dword ptr [eax]
// 0041f0b4  85d2                 test edx, edx
// 0041f0b6  7404                 je 0x41f0bc
// 0041f0b8  3bd2                 cmp edx, edx
// 0041f0ba  7406                 je 0x41f0c2
// 0041f0bc  ff1560b79800         call dword ptr [0x98b760]
// 0041f0c2  8d4c2414             lea ecx, [esp + 0x14]
// 0041f0c6  3bf5                 cmp esi, ebp
// 0041f0c8  752a                 jne 0x41f0f4
// 0041f0ca  53                   push ebx
// 0041f0cb  56                   push esi
// 0041f0cc  6a01                 push 1
// 0041f0ce  51                   push ecx
// 0041f0cf  8bcf                 mov ecx, edi
// 0041f0d1  e8fafcffff           call 0x41edd0
// 0041f0d6  5f                   pop edi
// 0041f0d7  8bc8                 mov ecx, eax
// 0041f0d9  8b11                 mov edx, dword ptr [ecx]
// 0041f0db  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041f0df  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041f0e2  5e                   pop esi
// 0041f0e3  5d                   pop ebp
// 0041f0e4  894804               mov dword ptr [eax + 4], ecx
// 0041f0e7  c6400801             mov byte ptr [eax + 8], 1
// 0041f0eb  8910                 mov dword ptr [eax], edx
// 0041f0ed  5b                   pop ebx
// 0041f0ee  83c40c               add esp, 0xc
// 0041f0f1  c20800               ret 8
// 0041f0f4  e837510200           call 0x444230
// 0041f0f9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0041f0fd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041f101  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0041f104  3b4304               cmp eax, dword ptr [ebx + 4]
// 0041f107  7331                 jae 0x41f13a
// 0041f109  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041f10d  53                   push ebx
// 0041f10e  56                   push esi
// 0041f10f  51                   push ecx
// 0041f110  8d542420             lea edx, [esp + 0x20]
// 0041f114  52                   push edx
// 0041f115  8bcf                 mov ecx, edi
// 0041f117  e8b4fcffff           call 0x41edd0
// 0041f11c  5f                   pop edi
// 0041f11d  8bc8                 mov ecx, eax
// 0041f11f  8b11                 mov edx, dword ptr [ecx]
// 0041f121  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041f125  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041f128  5e                   pop esi
// 0041f129  5d                   pop ebp
// 0041f12a  894804               mov dword ptr [eax + 4], ecx
// 0041f12d  c6400801             mov byte ptr [eax + 8], 1
// 0041f131  8910                 mov dword ptr [eax], edx
// 0041f133  5b                   pop ebx
// 0041f134  83c40c               add esp, 0xc
// 0041f137  c20800               ret 8
// 0041f13a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0041f13e  5f                   pop edi
// 0041f13f  5e                   pop esi
// 0041f140  896804               mov dword ptr [eax + 4], ebp
// 0041f143  5d                   pop ebp
// 0041f144  c6400800             mov byte ptr [eax + 8], 0
// 0041f148  8910                 mov dword ptr [eax], edx
// 0041f14a  5b                   pop ebx
// 0041f14b  83c40c               add esp, 0xc
// 0041f14e  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

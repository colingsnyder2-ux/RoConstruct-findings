// roc 2008-06 00424030  unit: CSelectionTreeCtrl  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424030
//
// 00424030  83ec0c               sub esp, 0xc
// 00424033  53                   push ebx
// 00424034  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00424038  55                   push ebp
// 00424039  56                   push esi
// 0042403a  57                   push edi
// 0042403b  8bf9                 mov edi, ecx
// 0042403d  8b7718               mov esi, dword ptr [edi + 0x18]
// 00424040  8b4604               mov eax, dword ptr [esi + 4]
// 00424043  80781500             cmp byte ptr [eax + 0x15], 0
// 00424047  b101                 mov cl, 1
// 00424049  884c2410             mov byte ptr [esp + 0x10], cl
// 0042404d  7520                 jne 0x42406f
// 0042404f  8b5304               mov edx, dword ptr [ebx + 4]
// 00424052  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00424055  8bf0                 mov esi, eax
// 00424057  0f92c1               setb cl
// 0042405a  884c2410             mov byte ptr [esp + 0x10], cl
// 0042405e  84c9                 test cl, cl
// 00424060  7404                 je 0x424066
// 00424062  8b00                 mov eax, dword ptr [eax]
// 00424064  eb03                 jmp 0x424069
// 00424066  8b4008               mov eax, dword ptr [eax + 8]
// 00424069  80781500             cmp byte ptr [eax + 0x15], 0
// 0042406d  74e3                 je 0x424052
// 0042406f  8b17                 mov edx, dword ptr [edi]
// 00424071  8bee                 mov ebp, esi
// 00424073  896c2418             mov dword ptr [esp + 0x18], ebp
// 00424077  89542414             mov dword ptr [esp + 0x14], edx
// 0042407b  84c9                 test cl, cl
// 0042407d  7452                 je 0x4240d1
// 0042407f  8b4718               mov eax, dword ptr [edi + 0x18]
// 00424082  8b28                 mov ebp, dword ptr [eax]
// 00424084  85d2                 test edx, edx
// 00424086  7404                 je 0x42408c
// 00424088  3bd2                 cmp edx, edx
// 0042408a  7406                 je 0x424092
// 0042408c  ff1590288000         call dword ptr [0x802890]
// 00424092  8d4c2414             lea ecx, [esp + 0x14]
// 00424096  3bf5                 cmp esi, ebp
// 00424098  752a                 jne 0x4240c4
// 0042409a  53                   push ebx
// 0042409b  56                   push esi
// 0042409c  6a01                 push 1
// 0042409e  51                   push ecx
// 0042409f  8bcf                 mov ecx, edi
// 004240a1  e88afdffff           call 0x423e30
// 004240a6  5f                   pop edi
// 004240a7  8bc8                 mov ecx, eax
// 004240a9  8b11                 mov edx, dword ptr [ecx]
// 004240ab  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004240af  8b4904               mov ecx, dword ptr [ecx + 4]
// 004240b2  5e                   pop esi
// 004240b3  5d                   pop ebp
// 004240b4  894804               mov dword ptr [eax + 4], ecx
// 004240b7  c6400801             mov byte ptr [eax + 8], 1
// 004240bb  8910                 mov dword ptr [eax], edx
// 004240bd  5b                   pop ebx
// 004240be  83c40c               add esp, 0xc
// 004240c1  c20800               ret 8
// 004240c4  e8075b1e00           call 0x609bd0
// 004240c9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004240cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 004240d1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004240d4  3b4304               cmp eax, dword ptr [ebx + 4]
// 004240d7  7331                 jae 0x42410a
// 004240d9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004240dd  53                   push ebx
// 004240de  56                   push esi
// 004240df  51                   push ecx
// 004240e0  8d542420             lea edx, [esp + 0x20]
// 004240e4  52                   push edx
// 004240e5  8bcf                 mov ecx, edi
// 004240e7  e844fdffff           call 0x423e30
// 004240ec  5f                   pop edi
// 004240ed  8bc8                 mov ecx, eax
// 004240ef  8b11                 mov edx, dword ptr [ecx]
// 004240f1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004240f5  8b4904               mov ecx, dword ptr [ecx + 4]
// 004240f8  5e                   pop esi
// 004240f9  5d                   pop ebp
// 004240fa  894804               mov dword ptr [eax + 4], ecx
// 004240fd  c6400801             mov byte ptr [eax + 8], 1
// 00424101  8910                 mov dword ptr [eax], edx
// 00424103  5b                   pop ebx
// 00424104  83c40c               add esp, 0xc
// 00424107  c20800               ret 8
// 0042410a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0042410e  5f                   pop edi
// 0042410f  5e                   pop esi
// 00424110  896804               mov dword ptr [eax + 4], ebp
// 00424113  5d                   pop ebp
// 00424114  c6400800             mov byte ptr [eax + 8], 0
// 00424118  8910                 mov dword ptr [eax], edx
// 0042411a  5b                   pop ebx
// 0042411b  83c40c               add esp, 0xc
// 0042411e  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@_N@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp

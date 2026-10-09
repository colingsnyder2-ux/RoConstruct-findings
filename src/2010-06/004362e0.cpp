// roc 2010-06 004362e0  unit: IIHAAH::?$CMap  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004362e0
//
// 004362e0  83ec0c               sub esp, 0xc
// 004362e3  53                   push ebx
// 004362e4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004362e8  55                   push ebp
// 004362e9  56                   push esi
// 004362ea  57                   push edi
// 004362eb  8bf9                 mov edi, ecx
// 004362ed  8b7718               mov esi, dword ptr [edi + 0x18]
// 004362f0  8b4604               mov eax, dword ptr [esi + 4]
// 004362f3  80781100             cmp byte ptr [eax + 0x11], 0
// 004362f7  b101                 mov cl, 1
// 004362f9  884c2410             mov byte ptr [esp + 0x10], cl
// 004362fd  751f                 jne 0x43631e
// 004362ff  8b13                 mov edx, dword ptr [ebx]
// 00436301  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00436304  8bf0                 mov esi, eax
// 00436306  0f92c1               setb cl
// 00436309  884c2410             mov byte ptr [esp + 0x10], cl
// 0043630d  84c9                 test cl, cl
// 0043630f  7404                 je 0x436315
// 00436311  8b00                 mov eax, dword ptr [eax]
// 00436313  eb03                 jmp 0x436318
// 00436315  8b4008               mov eax, dword ptr [eax + 8]
// 00436318  80781100             cmp byte ptr [eax + 0x11], 0
// 0043631c  74e3                 je 0x436301
// 0043631e  8b17                 mov edx, dword ptr [edi]
// 00436320  8bee                 mov ebp, esi
// 00436322  896c2418             mov dword ptr [esp + 0x18], ebp
// 00436326  89542414             mov dword ptr [esp + 0x14], edx
// 0043632a  84c9                 test cl, cl
// 0043632c  7452                 je 0x436380
// 0043632e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00436331  8b28                 mov ebp, dword ptr [eax]
// 00436333  85d2                 test edx, edx
// 00436335  7404                 je 0x43633b
// 00436337  3bd2                 cmp edx, edx
// 00436339  7406                 je 0x436341
// 0043633b  ff150ca99e00         call dword ptr [0x9ea90c]
// 00436341  8d4c2414             lea ecx, [esp + 0x14]
// 00436345  3bf5                 cmp esi, ebp
// 00436347  752a                 jne 0x436373
// 00436349  53                   push ebx
// 0043634a  56                   push esi
// 0043634b  6a01                 push 1
// 0043634d  51                   push ecx
// 0043634e  8bcf                 mov ecx, edi
// 00436350  e85be32b00           call 0x6f46b0
// 00436355  5f                   pop edi
// 00436356  8bc8                 mov ecx, eax
// 00436358  8b11                 mov edx, dword ptr [ecx]
// 0043635a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043635e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00436361  5e                   pop esi
// 00436362  5d                   pop ebp
// 00436363  894804               mov dword ptr [eax + 4], ecx
// 00436366  c6400801             mov byte ptr [eax + 8], 1
// 0043636a  8910                 mov dword ptr [eax], edx
// 0043636c  5b                   pop ebx
// 0043636d  83c40c               add esp, 0xc
// 00436370  c20800               ret 8
// 00436373  e878bdfcff           call 0x4020f0
// 00436378  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0043637c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00436380  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00436383  3b03                 cmp eax, dword ptr [ebx]
// 00436385  7331                 jae 0x4363b8
// 00436387  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043638b  53                   push ebx
// 0043638c  56                   push esi
// 0043638d  51                   push ecx
// 0043638e  8d542420             lea edx, [esp + 0x20]
// 00436392  52                   push edx
// 00436393  8bcf                 mov ecx, edi
// 00436395  e816e32b00           call 0x6f46b0
// 0043639a  5f                   pop edi
// 0043639b  8bc8                 mov ecx, eax
// 0043639d  8b11                 mov edx, dword ptr [ecx]
// 0043639f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004363a3  8b4904               mov ecx, dword ptr [ecx + 4]
// 004363a6  5e                   pop esi
// 004363a7  5d                   pop ebp
// 004363a8  894804               mov dword ptr [eax + 4], ecx
// 004363ab  c6400801             mov byte ptr [eax + 8], 1
// 004363af  8910                 mov dword ptr [eax], edx
// 004363b1  5b                   pop ebx
// 004363b2  83c40c               add esp, 0xc
// 004363b5  c20800               ret 8
// 004363b8  8b442420             mov eax, dword ptr [esp + 0x20]
// 004363bc  5f                   pop edi
// 004363bd  5e                   pop esi
// 004363be  896804               mov dword ptr [eax + 4], ebp
// 004363c1  5d                   pop ebp
// 004363c2  c6400800             mov byte ptr [eax + 8], 0
// 004363c6  8910                 mov dword ptr [eax], edx
// 004363c8  5b                   pop ebx
// 004363c9  83c40c               add esp, 0xc
// 004363cc  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp

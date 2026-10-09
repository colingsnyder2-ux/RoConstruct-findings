// roc 2009-12 007b9e50  unit: RBX::TreeStage  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b9e50
//
// 007b9e50  83ec0c               sub esp, 0xc
// 007b9e53  53                   push ebx
// 007b9e54  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b9e58  55                   push ebp
// 007b9e59  56                   push esi
// 007b9e5a  57                   push edi
// 007b9e5b  8bf9                 mov edi, ecx
// 007b9e5d  8b7718               mov esi, dword ptr [edi + 0x18]
// 007b9e60  8b4604               mov eax, dword ptr [esi + 4]
// 007b9e63  80781100             cmp byte ptr [eax + 0x11], 0
// 007b9e67  b101                 mov cl, 1
// 007b9e69  884c2410             mov byte ptr [esp + 0x10], cl
// 007b9e6d  751f                 jne 0x7b9e8e
// 007b9e6f  8b13                 mov edx, dword ptr [ebx]
// 007b9e71  3b500c               cmp edx, dword ptr [eax + 0xc]
// 007b9e74  8bf0                 mov esi, eax
// 007b9e76  0f92c1               setb cl
// 007b9e79  884c2410             mov byte ptr [esp + 0x10], cl
// 007b9e7d  84c9                 test cl, cl
// 007b9e7f  7404                 je 0x7b9e85
// 007b9e81  8b00                 mov eax, dword ptr [eax]
// 007b9e83  eb03                 jmp 0x7b9e88
// 007b9e85  8b4008               mov eax, dword ptr [eax + 8]
// 007b9e88  80781100             cmp byte ptr [eax + 0x11], 0
// 007b9e8c  74e3                 je 0x7b9e71
// 007b9e8e  8b17                 mov edx, dword ptr [edi]
// 007b9e90  8bee                 mov ebp, esi
// 007b9e92  896c2418             mov dword ptr [esp + 0x18], ebp
// 007b9e96  89542414             mov dword ptr [esp + 0x14], edx
// 007b9e9a  84c9                 test cl, cl
// 007b9e9c  7452                 je 0x7b9ef0
// 007b9e9e  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9ea1  8b28                 mov ebp, dword ptr [eax]
// 007b9ea3  85d2                 test edx, edx
// 007b9ea5  7404                 je 0x7b9eab
// 007b9ea7  3bd2                 cmp edx, edx
// 007b9ea9  7406                 je 0x7b9eb1
// 007b9eab  ff1560b79800         call dword ptr [0x98b760]
// 007b9eb1  8d4c2414             lea ecx, [esp + 0x14]
// 007b9eb5  3bf5                 cmp esi, ebp
// 007b9eb7  752a                 jne 0x7b9ee3
// 007b9eb9  53                   push ebx
// 007b9eba  56                   push esi
// 007b9ebb  6a01                 push 1
// 007b9ebd  51                   push ecx
// 007b9ebe  8bcf                 mov ecx, edi
// 007b9ec0  e88bfdffff           call 0x7b9c50
// 007b9ec5  5f                   pop edi
// 007b9ec6  8bc8                 mov ecx, eax
// 007b9ec8  8b11                 mov edx, dword ptr [ecx]
// 007b9eca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9ece  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b9ed1  5e                   pop esi
// 007b9ed2  5d                   pop ebp
// 007b9ed3  894804               mov dword ptr [eax + 4], ecx
// 007b9ed6  c6400801             mov byte ptr [eax + 8], 1
// 007b9eda  8910                 mov dword ptr [eax], edx
// 007b9edc  5b                   pop ebx
// 007b9edd  83c40c               add esp, 0xc
// 007b9ee0  c20800               ret 8
// 007b9ee3  e80800f6ff           call 0x719ef0
// 007b9ee8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b9eec  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b9ef0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007b9ef3  3b03                 cmp eax, dword ptr [ebx]
// 007b9ef5  7331                 jae 0x7b9f28
// 007b9ef7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b9efb  53                   push ebx
// 007b9efc  56                   push esi
// 007b9efd  51                   push ecx
// 007b9efe  8d542420             lea edx, [esp + 0x20]
// 007b9f02  52                   push edx
// 007b9f03  8bcf                 mov ecx, edi
// 007b9f05  e846fdffff           call 0x7b9c50
// 007b9f0a  5f                   pop edi
// 007b9f0b  8bc8                 mov ecx, eax
// 007b9f0d  8b11                 mov edx, dword ptr [ecx]
// 007b9f0f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b9f13  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b9f16  5e                   pop esi
// 007b9f17  5d                   pop ebp
// 007b9f18  894804               mov dword ptr [eax + 4], ecx
// 007b9f1b  c6400801             mov byte ptr [eax + 8], 1
// 007b9f1f  8910                 mov dword ptr [eax], edx
// 007b9f21  5b                   pop ebx
// 007b9f22  83c40c               add esp, 0xc
// 007b9f25  c20800               ret 8
// 007b9f28  8b442420             mov eax, dword ptr [esp + 0x20]
// 007b9f2c  5f                   pop edi
// 007b9f2d  5e                   pop esi
// 007b9f2e  896804               mov dword ptr [eax + 4], ebp
// 007b9f31  5d                   pop ebp
// 007b9f32  c6400800             mov byte ptr [eax + 8], 0
// 007b9f36  8910                 mov dword ptr [eax], edx
// 007b9f38  5b                   pop ebx
// 007b9f39  83c40c               add esp, 0xc
// 007b9f3c  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp

// roc 2008-06 005e8c40  unit: RBX::Primitive  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8c40
//
// 005e8c40  83ec0c               sub esp, 0xc
// 005e8c43  53                   push ebx
// 005e8c44  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e8c48  55                   push ebp
// 005e8c49  56                   push esi
// 005e8c4a  57                   push edi
// 005e8c4b  8bf9                 mov edi, ecx
// 005e8c4d  8b7718               mov esi, dword ptr [edi + 0x18]
// 005e8c50  8b4604               mov eax, dword ptr [esi + 4]
// 005e8c53  80781100             cmp byte ptr [eax + 0x11], 0
// 005e8c57  b101                 mov cl, 1
// 005e8c59  884c2410             mov byte ptr [esp + 0x10], cl
// 005e8c5d  751f                 jne 0x5e8c7e
// 005e8c5f  8b13                 mov edx, dword ptr [ebx]
// 005e8c61  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005e8c64  8bf0                 mov esi, eax
// 005e8c66  0f92c1               setb cl
// 005e8c69  884c2410             mov byte ptr [esp + 0x10], cl
// 005e8c6d  84c9                 test cl, cl
// 005e8c6f  7404                 je 0x5e8c75
// 005e8c71  8b00                 mov eax, dword ptr [eax]
// 005e8c73  eb03                 jmp 0x5e8c78
// 005e8c75  8b4008               mov eax, dword ptr [eax + 8]
// 005e8c78  80781100             cmp byte ptr [eax + 0x11], 0
// 005e8c7c  74e3                 je 0x5e8c61
// 005e8c7e  8b17                 mov edx, dword ptr [edi]
// 005e8c80  8bee                 mov ebp, esi
// 005e8c82  896c2418             mov dword ptr [esp + 0x18], ebp
// 005e8c86  89542414             mov dword ptr [esp + 0x14], edx
// 005e8c8a  84c9                 test cl, cl
// 005e8c8c  7452                 je 0x5e8ce0
// 005e8c8e  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e8c91  8b28                 mov ebp, dword ptr [eax]
// 005e8c93  85d2                 test edx, edx
// 005e8c95  7404                 je 0x5e8c9b
// 005e8c97  3bd2                 cmp edx, edx
// 005e8c99  7406                 je 0x5e8ca1
// 005e8c9b  ff1590288000         call dword ptr [0x802890]
// 005e8ca1  8d4c2414             lea ecx, [esp + 0x14]
// 005e8ca5  3bf5                 cmp esi, ebp
// 005e8ca7  752a                 jne 0x5e8cd3
// 005e8ca9  53                   push ebx
// 005e8caa  56                   push esi
// 005e8cab  6a01                 push 1
// 005e8cad  51                   push ecx
// 005e8cae  8bcf                 mov ecx, edi
// 005e8cb0  e88bfdffff           call 0x5e8a40
// 005e8cb5  5f                   pop edi
// 005e8cb6  8bc8                 mov ecx, eax
// 005e8cb8  8b11                 mov edx, dword ptr [ecx]
// 005e8cba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e8cbe  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e8cc1  5e                   pop esi
// 005e8cc2  5d                   pop ebp
// 005e8cc3  894804               mov dword ptr [eax + 4], ecx
// 005e8cc6  c6400801             mov byte ptr [eax + 8], 1
// 005e8cca  8910                 mov dword ptr [eax], edx
// 005e8ccc  5b                   pop ebx
// 005e8ccd  83c40c               add esp, 0xc
// 005e8cd0  c20800               ret 8
// 005e8cd3  e8d8050000           call 0x5e92b0
// 005e8cd8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005e8cdc  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e8ce0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005e8ce3  3b03                 cmp eax, dword ptr [ebx]
// 005e8ce5  7331                 jae 0x5e8d18
// 005e8ce7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e8ceb  53                   push ebx
// 005e8cec  56                   push esi
// 005e8ced  51                   push ecx
// 005e8cee  8d542420             lea edx, [esp + 0x20]
// 005e8cf2  52                   push edx
// 005e8cf3  8bcf                 mov ecx, edi
// 005e8cf5  e846fdffff           call 0x5e8a40
// 005e8cfa  5f                   pop edi
// 005e8cfb  8bc8                 mov ecx, eax
// 005e8cfd  8b11                 mov edx, dword ptr [ecx]
// 005e8cff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e8d03  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e8d06  5e                   pop esi
// 005e8d07  5d                   pop ebp
// 005e8d08  894804               mov dword ptr [eax + 4], ecx
// 005e8d0b  c6400801             mov byte ptr [eax + 8], 1
// 005e8d0f  8910                 mov dword ptr [eax], edx
// 005e8d11  5b                   pop ebx
// 005e8d12  83c40c               add esp, 0xc
// 005e8d15  c20800               ret 8
// 005e8d18  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e8d1c  5f                   pop edi
// 005e8d1d  5e                   pop esi
// 005e8d1e  896804               mov dword ptr [eax + 4], ebp
// 005e8d21  5d                   pop ebp
// 005e8d22  c6400800             mov byte ptr [eax + 8], 0
// 005e8d26  8910                 mov dword ptr [eax], edx
// 005e8d28  5b                   pop ebx
// 005e8d29  83c40c               add esp, 0xc
// 005e8d2c  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp

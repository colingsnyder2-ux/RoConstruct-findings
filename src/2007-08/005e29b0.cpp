// roc 2007-08 005e29b0  unit: seg_005e0000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e29b0
//
// 005e29b0  83ec0c               sub esp, 0xc
// 005e29b3  55                   push ebp
// 005e29b4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005e29b8  56                   push esi
// 005e29b9  57                   push edi
// 005e29ba  8bf9                 mov edi, ecx
// 005e29bc  8b7704               mov esi, dword ptr [edi + 4]
// 005e29bf  8b4604               mov eax, dword ptr [esi + 4]
// 005e29c2  80781100             cmp byte ptr [eax + 0x11], 0
// 005e29c6  b101                 mov cl, 1
// 005e29c8  884c240c             mov byte ptr [esp + 0xc], cl
// 005e29cc  7520                 jne 0x5e29ee
// 005e29ce  8b5500               mov edx, dword ptr [ebp]
// 005e29d1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005e29d4  8bf0                 mov esi, eax
// 005e29d6  0f92c1               setb cl
// 005e29d9  84c9                 test cl, cl
// 005e29db  884c240c             mov byte ptr [esp + 0xc], cl
// 005e29df  7404                 je 0x5e29e5
// 005e29e1  8b00                 mov eax, dword ptr [eax]
// 005e29e3  eb03                 jmp 0x5e29e8
// 005e29e5  8b4008               mov eax, dword ptr [eax + 8]
// 005e29e8  80781100             cmp byte ptr [eax + 0x11], 0
// 005e29ec  74e3                 je 0x5e29d1
// 005e29ee  84c9                 test cl, cl
// 005e29f0  8bd6                 mov edx, esi
// 005e29f2  89542414             mov dword ptr [esp + 0x14], edx
// 005e29f6  897c2410             mov dword ptr [esp + 0x10], edi
// 005e29fa  743d                 je 0x5e2a39
// 005e29fc  8b4704               mov eax, dword ptr [edi + 4]
// 005e29ff  3b30                 cmp esi, dword ptr [eax]
// 005e2a01  8d4c2410             lea ecx, [esp + 0x10]
// 005e2a05  7529                 jne 0x5e2a30
// 005e2a07  55                   push ebp
// 005e2a08  56                   push esi
// 005e2a09  6a01                 push 1
// 005e2a0b  51                   push ecx
// 005e2a0c  8bcf                 mov ecx, edi
// 005e2a0e  e89dfdffff           call 0x5e27b0
// 005e2a13  8bc8                 mov ecx, eax
// 005e2a15  8b11                 mov edx, dword ptr [ecx]
// 005e2a17  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e2a1b  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e2a1e  5f                   pop edi
// 005e2a1f  5e                   pop esi
// 005e2a20  8910                 mov dword ptr [eax], edx
// 005e2a22  894804               mov dword ptr [eax + 4], ecx
// 005e2a25  c6400801             mov byte ptr [eax + 8], 1
// 005e2a29  5d                   pop ebp
// 005e2a2a  83c40c               add esp, 0xc
// 005e2a2d  c20800               ret 8
// 005e2a30  e88b06fdff           call 0x5b30c0
// 005e2a35  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e2a39  8b420c               mov eax, dword ptr [edx + 0xc]
// 005e2a3c  3b4500               cmp eax, dword ptr [ebp]
// 005e2a3f  730e                 jae 0x5e2a4f
// 005e2a41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e2a45  55                   push ebp
// 005e2a46  56                   push esi
// 005e2a47  51                   push ecx
// 005e2a48  8d54241c             lea edx, [esp + 0x1c]
// 005e2a4c  52                   push edx
// 005e2a4d  ebbd                 jmp 0x5e2a0c
// 005e2a4f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e2a53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e2a57  5f                   pop edi
// 005e2a58  5e                   pop esi
// 005e2a59  8908                 mov dword ptr [eax], ecx
// 005e2a5b  895004               mov dword ptr [eax + 4], edx
// 005e2a5e  c6400800             mov byte ptr [eax + 8], 0
// 005e2a62  5d                   pop ebp
// 005e2a63  83c40c               add esp, 0xc
// 005e2a66  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

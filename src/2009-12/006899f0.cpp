// roc 2009-12 006899f0  unit: TextXmlWriter  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006899f0
//
// 006899f0  83ec0c               sub esp, 0xc
// 006899f3  53                   push ebx
// 006899f4  55                   push ebp
// 006899f5  56                   push esi
// 006899f6  8be9                 mov ebp, ecx
// 006899f8  57                   push edi
// 006899f9  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 006899fc  8b7704               mov esi, dword ptr [edi + 4]
// 006899ff  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00689a03  b001                 mov al, 1
// 00689a05  88442410             mov byte ptr [esp + 0x10], al
// 00689a09  752d                 jne 0x689a38
// 00689a0b  eb03                 jmp 0x689a10
// 00689a0d  8d4900               lea ecx, [ecx]
// 00689a10  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00689a14  8d460c               lea eax, [esi + 0xc]
// 00689a17  50                   push eax
// 00689a18  51                   push ecx
// 00689a19  8bfe                 mov edi, esi
// 00689a1b  e8b07c0200           call 0x6b16d0
// 00689a20  83c408               add esp, 8
// 00689a23  88442410             mov byte ptr [esp + 0x10], al
// 00689a27  84c0                 test al, al
// 00689a29  7404                 je 0x689a2f
// 00689a2b  8b36                 mov esi, dword ptr [esi]
// 00689a2d  eb03                 jmp 0x689a32
// 00689a2f  8b7608               mov esi, dword ptr [esi + 8]
// 00689a32  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00689a36  74d8                 je 0x689a10
// 00689a38  8b7500               mov esi, dword ptr [ebp]
// 00689a3b  8bdf                 mov ebx, edi
// 00689a3d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00689a41  89742414             mov dword ptr [esp + 0x14], esi
// 00689a45  84c0                 test al, al
// 00689a47  7456                 je 0x689a9f
// 00689a49  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00689a4c  8b1a                 mov ebx, dword ptr [edx]
// 00689a4e  85f6                 test esi, esi
// 00689a50  7404                 je 0x689a56
// 00689a52  3bf6                 cmp esi, esi
// 00689a54  7406                 je 0x689a5c
// 00689a56  ff1560b79800         call dword ptr [0x98b760]
// 00689a5c  8d4c2414             lea ecx, [esp + 0x14]
// 00689a60  3bfb                 cmp edi, ebx
// 00689a62  752e                 jne 0x689a92
// 00689a64  8b442424             mov eax, dword ptr [esp + 0x24]
// 00689a68  50                   push eax
// 00689a69  57                   push edi
// 00689a6a  6a01                 push 1
// 00689a6c  51                   push ecx
// 00689a6d  8bcd                 mov ecx, ebp
// 00689a6f  e86c10dfff           call 0x47aae0
// 00689a74  5f                   pop edi
// 00689a75  8bc8                 mov ecx, eax
// 00689a77  8b11                 mov edx, dword ptr [ecx]
// 00689a79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00689a7d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00689a80  5e                   pop esi
// 00689a81  5d                   pop ebp
// 00689a82  8910                 mov dword ptr [eax], edx
// 00689a84  894804               mov dword ptr [eax + 4], ecx
// 00689a87  c6400801             mov byte ptr [eax + 8], 1
// 00689a8b  5b                   pop ebx
// 00689a8c  83c40c               add esp, 0xc
// 00689a8f  c20800               ret 8
// 00689a92  e869eeffff           call 0x688900
// 00689a97  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00689a9b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00689a9f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00689aa3  52                   push edx
// 00689aa4  8d430c               lea eax, [ebx + 0xc]
// 00689aa7  50                   push eax
// 00689aa8  e8237c0200           call 0x6b16d0
// 00689aad  83c408               add esp, 8
// 00689ab0  84c0                 test al, al
// 00689ab2  7412                 je 0x689ac6
// 00689ab4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00689ab8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689abc  51                   push ecx
// 00689abd  57                   push edi
// 00689abe  52                   push edx
// 00689abf  8d442420             lea eax, [esp + 0x20]
// 00689ac3  50                   push eax
// 00689ac4  eba7                 jmp 0x689a6d
// 00689ac6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00689aca  5f                   pop edi
// 00689acb  8930                 mov dword ptr [eax], esi
// 00689acd  5e                   pop esi
// 00689ace  5d                   pop ebp
// 00689acf  895804               mov dword ptr [eax + 4], ebx
// 00689ad2  c6400800             mov byte ptr [eax + 8], 0
// 00689ad6  5b                   pop ebx
// 00689ad7  83c40c               add esp, 0xc
// 00689ada  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

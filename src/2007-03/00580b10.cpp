// roc 2007-03 00580b10  unit: seg_00580000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580b10
//
// 00580b10  83ec0c               sub esp, 0xc
// 00580b13  55                   push ebp
// 00580b14  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00580b18  56                   push esi
// 00580b19  57                   push edi
// 00580b1a  8bf9                 mov edi, ecx
// 00580b1c  8b7704               mov esi, dword ptr [edi + 4]
// 00580b1f  8b4604               mov eax, dword ptr [esi + 4]
// 00580b22  80782100             cmp byte ptr [eax + 0x21], 0
// 00580b26  b101                 mov cl, 1
// 00580b28  884c240c             mov byte ptr [esp + 0xc], cl
// 00580b2c  7520                 jne 0x580b4e
// 00580b2e  8b5500               mov edx, dword ptr [ebp]
// 00580b31  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00580b34  8bf0                 mov esi, eax
// 00580b36  0f9cc1               setl cl
// 00580b39  84c9                 test cl, cl
// 00580b3b  884c240c             mov byte ptr [esp + 0xc], cl
// 00580b3f  7404                 je 0x580b45
// 00580b41  8b00                 mov eax, dword ptr [eax]
// 00580b43  eb03                 jmp 0x580b48
// 00580b45  8b4008               mov eax, dword ptr [eax + 8]
// 00580b48  80782100             cmp byte ptr [eax + 0x21], 0
// 00580b4c  74e3                 je 0x580b31
// 00580b4e  84c9                 test cl, cl
// 00580b50  8bd6                 mov edx, esi
// 00580b52  89542414             mov dword ptr [esp + 0x14], edx
// 00580b56  897c2410             mov dword ptr [esp + 0x10], edi
// 00580b5a  743d                 je 0x580b99
// 00580b5c  8b4704               mov eax, dword ptr [edi + 4]
// 00580b5f  3b30                 cmp esi, dword ptr [eax]
// 00580b61  8d4c2410             lea ecx, [esp + 0x10]
// 00580b65  7529                 jne 0x580b90
// 00580b67  55                   push ebp
// 00580b68  56                   push esi
// 00580b69  6a01                 push 1
// 00580b6b  51                   push ecx
// 00580b6c  8bcf                 mov ecx, edi
// 00580b6e  e81df8ffff           call 0x580390
// 00580b73  8bc8                 mov ecx, eax
// 00580b75  8b11                 mov edx, dword ptr [ecx]
// 00580b77  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580b7b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00580b7e  5f                   pop edi
// 00580b7f  5e                   pop esi
// 00580b80  8910                 mov dword ptr [eax], edx
// 00580b82  894804               mov dword ptr [eax + 4], ecx
// 00580b85  c6400801             mov byte ptr [eax + 8], 1
// 00580b89  5d                   pop ebp
// 00580b8a  83c40c               add esp, 0xc
// 00580b8d  c20800               ret 8
// 00580b90  e81b41f4ff           call 0x4c4cb0
// 00580b95  8b542414             mov edx, dword ptr [esp + 0x14]
// 00580b99  8b420c               mov eax, dword ptr [edx + 0xc]
// 00580b9c  3b4500               cmp eax, dword ptr [ebp]
// 00580b9f  7d0e                 jge 0x580baf
// 00580ba1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580ba5  55                   push ebp
// 00580ba6  56                   push esi
// 00580ba7  51                   push ecx
// 00580ba8  8d54241c             lea edx, [esp + 0x1c]
// 00580bac  52                   push edx
// 00580bad  ebbd                 jmp 0x580b6c
// 00580baf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580bb3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580bb7  5f                   pop edi
// 00580bb8  5e                   pop esi
// 00580bb9  8908                 mov dword ptr [eax], ecx
// 00580bbb  895004               mov dword ptr [eax + 4], edx
// 00580bbe  c6400800             mov byte ptr [eax + 8], 0
// 00580bc2  5d                   pop ebp
// 00580bc3  83c40c               add esp, 0xc
// 00580bc6  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp

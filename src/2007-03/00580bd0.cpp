// roc 2007-03 00580bd0  unit: seg_00580000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580bd0
//
// 00580bd0  83ec0c               sub esp, 0xc
// 00580bd3  55                   push ebp
// 00580bd4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00580bd8  56                   push esi
// 00580bd9  57                   push edi
// 00580bda  8bf9                 mov edi, ecx
// 00580bdc  8b7704               mov esi, dword ptr [edi + 4]
// 00580bdf  8b4604               mov eax, dword ptr [esi + 4]
// 00580be2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00580be6  b101                 mov cl, 1
// 00580be8  884c240c             mov byte ptr [esp + 0xc], cl
// 00580bec  7520                 jne 0x580c0e
// 00580bee  8b5500               mov edx, dword ptr [ebp]
// 00580bf1  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00580bf4  8bf0                 mov esi, eax
// 00580bf6  0f9cc1               setl cl
// 00580bf9  84c9                 test cl, cl
// 00580bfb  884c240c             mov byte ptr [esp + 0xc], cl
// 00580bff  7404                 je 0x580c05
// 00580c01  8b00                 mov eax, dword ptr [eax]
// 00580c03  eb03                 jmp 0x580c08
// 00580c05  8b4008               mov eax, dword ptr [eax + 8]
// 00580c08  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00580c0c  74e3                 je 0x580bf1
// 00580c0e  84c9                 test cl, cl
// 00580c10  8bd6                 mov edx, esi
// 00580c12  89542414             mov dword ptr [esp + 0x14], edx
// 00580c16  897c2410             mov dword ptr [esp + 0x10], edi
// 00580c1a  743d                 je 0x580c59
// 00580c1c  8b4704               mov eax, dword ptr [edi + 4]
// 00580c1f  3b30                 cmp esi, dword ptr [eax]
// 00580c21  8d4c2410             lea ecx, [esp + 0x10]
// 00580c25  7529                 jne 0x580c50
// 00580c27  55                   push ebp
// 00580c28  56                   push esi
// 00580c29  6a01                 push 1
// 00580c2b  51                   push ecx
// 00580c2c  8bcf                 mov ecx, edi
// 00580c2e  e85df9ffff           call 0x580590
// 00580c33  8bc8                 mov ecx, eax
// 00580c35  8b11                 mov edx, dword ptr [ecx]
// 00580c37  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580c3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00580c3e  5f                   pop edi
// 00580c3f  5e                   pop esi
// 00580c40  8910                 mov dword ptr [eax], edx
// 00580c42  894804               mov dword ptr [eax + 4], ecx
// 00580c45  c6400801             mov byte ptr [eax + 8], 1
// 00580c49  5d                   pop ebp
// 00580c4a  83c40c               add esp, 0xc
// 00580c4d  c20800               ret 8
// 00580c50  e8ab740700           call 0x5f8100
// 00580c55  8b542414             mov edx, dword ptr [esp + 0x14]
// 00580c59  8b420c               mov eax, dword ptr [edx + 0xc]
// 00580c5c  3b4500               cmp eax, dword ptr [ebp]
// 00580c5f  7d0e                 jge 0x580c6f
// 00580c61  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580c65  55                   push ebp
// 00580c66  56                   push esi
// 00580c67  51                   push ecx
// 00580c68  8d54241c             lea edx, [esp + 0x1c]
// 00580c6c  52                   push edx
// 00580c6d  ebbd                 jmp 0x580c2c
// 00580c6f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580c73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580c77  5f                   pop edi
// 00580c78  5e                   pop esi
// 00580c79  8908                 mov dword ptr [eax], ecx
// 00580c7b  895004               mov dword ptr [eax + 4], edx
// 00580c7e  c6400800             mov byte ptr [eax + 8], 0
// 00580c82  5d                   pop ebp
// 00580c83  83c40c               add esp, 0xc
// 00580c86  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4Number@BrickColor@RBX@@@5@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@5@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4Number@BrickColor@RBX@@@5@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@5@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBW4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp

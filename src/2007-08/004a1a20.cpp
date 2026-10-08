// roc 2007-08 004a1a20  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1a20
//
// 004a1a20  83ec0c               sub esp, 0xc
// 004a1a23  55                   push ebp
// 004a1a24  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004a1a28  56                   push esi
// 004a1a29  57                   push edi
// 004a1a2a  8bf9                 mov edi, ecx
// 004a1a2c  8b7704               mov esi, dword ptr [edi + 4]
// 004a1a2f  8b4604               mov eax, dword ptr [esi + 4]
// 004a1a32  80782d00             cmp byte ptr [eax + 0x2d], 0
// 004a1a36  b101                 mov cl, 1
// 004a1a38  884c240c             mov byte ptr [esp + 0xc], cl
// 004a1a3c  7520                 jne 0x4a1a5e
// 004a1a3e  8a5500               mov dl, byte ptr [ebp]
// 004a1a41  3a500c               cmp dl, byte ptr [eax + 0xc]
// 004a1a44  8bf0                 mov esi, eax
// 004a1a46  0f92c1               setb cl
// 004a1a49  84c9                 test cl, cl
// 004a1a4b  884c240c             mov byte ptr [esp + 0xc], cl
// 004a1a4f  7404                 je 0x4a1a55
// 004a1a51  8b00                 mov eax, dword ptr [eax]
// 004a1a53  eb03                 jmp 0x4a1a58
// 004a1a55  8b4008               mov eax, dword ptr [eax + 8]
// 004a1a58  80782d00             cmp byte ptr [eax + 0x2d], 0
// 004a1a5c  74e3                 je 0x4a1a41
// 004a1a5e  84c9                 test cl, cl
// 004a1a60  8bd6                 mov edx, esi
// 004a1a62  89542414             mov dword ptr [esp + 0x14], edx
// 004a1a66  897c2410             mov dword ptr [esp + 0x10], edi
// 004a1a6a  743d                 je 0x4a1aa9
// 004a1a6c  8b4704               mov eax, dword ptr [edi + 4]
// 004a1a6f  3b30                 cmp esi, dword ptr [eax]
// 004a1a71  8d4c2410             lea ecx, [esp + 0x10]
// 004a1a75  7529                 jne 0x4a1aa0
// 004a1a77  55                   push ebp
// 004a1a78  56                   push esi
// 004a1a79  6a01                 push 1
// 004a1a7b  51                   push ecx
// 004a1a7c  8bcf                 mov ecx, edi
// 004a1a7e  e8bdfaffff           call 0x4a1540
// 004a1a83  8bc8                 mov ecx, eax
// 004a1a85  8b11                 mov edx, dword ptr [ecx]
// 004a1a87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a1a8b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a1a8e  5f                   pop edi
// 004a1a8f  5e                   pop esi
// 004a1a90  8910                 mov dword ptr [eax], edx
// 004a1a92  894804               mov dword ptr [eax + 4], ecx
// 004a1a95  c6400801             mov byte ptr [eax + 8], 1
// 004a1a99  5d                   pop ebp
// 004a1a9a  83c40c               add esp, 0xc
// 004a1a9d  c20800               ret 8
// 004a1aa0  e87b190e00           call 0x583420
// 004a1aa5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a1aa9  8a420c               mov al, byte ptr [edx + 0xc]
// 004a1aac  3a4500               cmp al, byte ptr [ebp]
// 004a1aaf  730e                 jae 0x4a1abf
// 004a1ab1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a1ab5  55                   push ebp
// 004a1ab6  56                   push esi
// 004a1ab7  51                   push ecx
// 004a1ab8  8d54241c             lea edx, [esp + 0x1c]
// 004a1abc  52                   push edx
// 004a1abd  ebbd                 jmp 0x4a1a7c
// 004a1abf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a1ac3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a1ac7  5f                   pop edi
// 004a1ac8  5e                   pop esi
// 004a1ac9  8908                 mov dword ptr [eax], ecx
// 004a1acb  895004               mov dword ptr [eax + 4], edx
// 004a1ace  c6400800             mov byte ptr [eax + 8], 0
// 004a1ad2  5d                   pop ebp
// 004a1ad3  83c40c               add esp, 0xc
// 004a1ad6  c20800               ret 8
// library rbxgs-net/Streaming.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@EV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@EV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp

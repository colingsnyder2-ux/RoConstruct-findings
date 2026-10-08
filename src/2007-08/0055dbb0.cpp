// roc 2007-08 0055dbb0  unit: RBX::DataModel  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055dbb0
//
// 0055dbb0  83ec0c               sub esp, 0xc
// 0055dbb3  53                   push ebx
// 0055dbb4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055dbb8  55                   push ebp
// 0055dbb9  56                   push esi
// 0055dbba  8be9                 mov ebp, ecx
// 0055dbbc  57                   push edi
// 0055dbbd  8b7d04               mov edi, dword ptr [ebp + 4]
// 0055dbc0  8b7704               mov esi, dword ptr [edi + 4]
// 0055dbc3  807e1900             cmp byte ptr [esi + 0x19], 0
// 0055dbc7  b001                 mov al, 1
// 0055dbc9  88442410             mov byte ptr [esp + 0x10], al
// 0055dbcd  7523                 jne 0x55dbf2
// 0055dbcf  90                   nop 
// 0055dbd0  8d460c               lea eax, [esi + 0xc]
// 0055dbd3  50                   push eax
// 0055dbd4  8bcb                 mov ecx, ebx
// 0055dbd6  8bfe                 mov edi, esi
// 0055dbd8  e833fb0200           call 0x58d710
// 0055dbdd  84c0                 test al, al
// 0055dbdf  88442410             mov byte ptr [esp + 0x10], al
// 0055dbe3  7404                 je 0x55dbe9
// 0055dbe5  8b36                 mov esi, dword ptr [esi]
// 0055dbe7  eb03                 jmp 0x55dbec
// 0055dbe9  8b7608               mov esi, dword ptr [esi + 8]
// 0055dbec  807e1900             cmp byte ptr [esi + 0x19], 0
// 0055dbf0  74de                 je 0x55dbd0
// 0055dbf2  84c0                 test al, al
// 0055dbf4  8bf7                 mov esi, edi
// 0055dbf6  89742418             mov dword ptr [esp + 0x18], esi
// 0055dbfa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055dbfe  7442                 je 0x55dc42
// 0055dc00  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0055dc03  3b39                 cmp edi, dword ptr [ecx]
// 0055dc05  752e                 jne 0x55dc35
// 0055dc07  53                   push ebx
// 0055dc08  57                   push edi
// 0055dc09  6a01                 push 1
// 0055dc0b  8d542420             lea edx, [esp + 0x20]
// 0055dc0f  52                   push edx
// 0055dc10  8bcd                 mov ecx, ebp
// 0055dc12  e899fdffff           call 0x55d9b0
// 0055dc17  5f                   pop edi
// 0055dc18  8bc8                 mov ecx, eax
// 0055dc1a  8b11                 mov edx, dword ptr [ecx]
// 0055dc1c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055dc20  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055dc23  5e                   pop esi
// 0055dc24  5d                   pop ebp
// 0055dc25  894804               mov dword ptr [eax + 4], ecx
// 0055dc28  c6400801             mov byte ptr [eax + 8], 1
// 0055dc2c  8910                 mov dword ptr [eax], edx
// 0055dc2e  5b                   pop ebx
// 0055dc2f  83c40c               add esp, 0xc
// 0055dc32  c20800               ret 8
// 0055dc35  8d4c2414             lea ecx, [esp + 0x14]
// 0055dc39  e8f29f0200           call 0x587c30
// 0055dc3e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055dc42  53                   push ebx
// 0055dc43  8d4e0c               lea ecx, [esi + 0xc]
// 0055dc46  e8c5fa0200           call 0x58d710
// 0055dc4b  84c0                 test al, al
// 0055dc4d  7431                 je 0x55dc80
// 0055dc4f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055dc53  53                   push ebx
// 0055dc54  57                   push edi
// 0055dc55  52                   push edx
// 0055dc56  8d442420             lea eax, [esp + 0x20]
// 0055dc5a  50                   push eax
// 0055dc5b  8bcd                 mov ecx, ebp
// 0055dc5d  e84efdffff           call 0x55d9b0
// 0055dc62  5f                   pop edi
// 0055dc63  8bc8                 mov ecx, eax
// 0055dc65  8b11                 mov edx, dword ptr [ecx]
// 0055dc67  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055dc6b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055dc6e  5e                   pop esi
// 0055dc6f  5d                   pop ebp
// 0055dc70  894804               mov dword ptr [eax + 4], ecx
// 0055dc73  c6400801             mov byte ptr [eax + 8], 1
// 0055dc77  8910                 mov dword ptr [eax], edx
// 0055dc79  5b                   pop ebx
// 0055dc7a  83c40c               add esp, 0xc
// 0055dc7d  c20800               ret 8
// 0055dc80  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055dc84  8b542414             mov edx, dword ptr [esp + 0x14]
// 0055dc88  5f                   pop edi
// 0055dc89  897004               mov dword ptr [eax + 4], esi
// 0055dc8c  5e                   pop esi
// 0055dc8d  5d                   pop ebp
// 0055dc8e  c6400800             mov byte ptr [eax + 8], 0
// 0055dc92  8910                 mov dword ptr [eax], edx
// 0055dc94  5b                   pop ebx
// 0055dc95  83c40c               add esp, 0xc
// 0055dc98  c20800               ret 8
// library rbxgs/v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp

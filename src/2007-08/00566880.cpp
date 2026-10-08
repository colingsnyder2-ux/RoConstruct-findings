// roc 2007-08 00566880  unit: TextXmlWriter  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00566880
//
// 00566880  83ec0c               sub esp, 0xc
// 00566883  53                   push ebx
// 00566884  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00566888  55                   push ebp
// 00566889  56                   push esi
// 0056688a  8be9                 mov ebp, ecx
// 0056688c  57                   push edi
// 0056688d  8b7d04               mov edi, dword ptr [ebp + 4]
// 00566890  8b7704               mov esi, dword ptr [edi + 4]
// 00566893  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00566897  b001                 mov al, 1
// 00566899  88442410             mov byte ptr [esp + 0x10], al
// 0056689d  7525                 jne 0x5668c4
// 0056689f  90                   nop 
// 005668a0  8d460c               lea eax, [esi + 0xc]
// 005668a3  50                   push eax
// 005668a4  53                   push ebx
// 005668a5  8bfe                 mov edi, esi
// 005668a7  e804e7fdff           call 0x544fb0
// 005668ac  83c408               add esp, 8
// 005668af  84c0                 test al, al
// 005668b1  88442410             mov byte ptr [esp + 0x10], al
// 005668b5  7404                 je 0x5668bb
// 005668b7  8b36                 mov esi, dword ptr [esi]
// 005668b9  eb03                 jmp 0x5668be
// 005668bb  8b7608               mov esi, dword ptr [esi + 8]
// 005668be  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005668c2  74dc                 je 0x5668a0
// 005668c4  84c0                 test al, al
// 005668c6  8bf7                 mov esi, edi
// 005668c8  89742418             mov dword ptr [esp + 0x18], esi
// 005668cc  896c2414             mov dword ptr [esp + 0x14], ebp
// 005668d0  7442                 je 0x566914
// 005668d2  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005668d5  3b39                 cmp edi, dword ptr [ecx]
// 005668d7  752e                 jne 0x566907
// 005668d9  53                   push ebx
// 005668da  57                   push edi
// 005668db  6a01                 push 1
// 005668dd  8d542420             lea edx, [esp + 0x20]
// 005668e1  52                   push edx
// 005668e2  8bcd                 mov ecx, ebp
// 005668e4  e897fdffff           call 0x566680
// 005668e9  5f                   pop edi
// 005668ea  8bc8                 mov ecx, eax
// 005668ec  8b11                 mov edx, dword ptr [ecx]
// 005668ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005668f2  8b4904               mov ecx, dword ptr [ecx + 4]
// 005668f5  5e                   pop esi
// 005668f6  5d                   pop ebp
// 005668f7  894804               mov dword ptr [eax + 4], ecx
// 005668fa  c6400801             mov byte ptr [eax + 8], 1
// 005668fe  8910                 mov dword ptr [eax], edx
// 00566900  5b                   pop ebx
// 00566901  83c40c               add esp, 0xc
// 00566904  c20800               ret 8
// 00566907  8d4c2414             lea ecx, [esp + 0x14]
// 0056690b  e810cb0100           call 0x583420
// 00566910  8b742418             mov esi, dword ptr [esp + 0x18]
// 00566914  8d560c               lea edx, [esi + 0xc]
// 00566917  53                   push ebx
// 00566918  52                   push edx
// 00566919  e892e6fdff           call 0x544fb0
// 0056691e  83c408               add esp, 8
// 00566921  84c0                 test al, al
// 00566923  7431                 je 0x566956
// 00566925  8b442410             mov eax, dword ptr [esp + 0x10]
// 00566929  53                   push ebx
// 0056692a  57                   push edi
// 0056692b  50                   push eax
// 0056692c  8d4c2420             lea ecx, [esp + 0x20]
// 00566930  51                   push ecx
// 00566931  8bcd                 mov ecx, ebp
// 00566933  e848fdffff           call 0x566680
// 00566938  5f                   pop edi
// 00566939  8bc8                 mov ecx, eax
// 0056693b  8b11                 mov edx, dword ptr [ecx]
// 0056693d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00566941  8b4904               mov ecx, dword ptr [ecx + 4]
// 00566944  5e                   pop esi
// 00566945  5d                   pop ebp
// 00566946  894804               mov dword ptr [eax + 4], ecx
// 00566949  c6400801             mov byte ptr [eax + 8], 1
// 0056694d  8910                 mov dword ptr [eax], edx
// 0056694f  5b                   pop ebx
// 00566950  83c40c               add esp, 0xc
// 00566953  c20800               ret 8
// 00566956  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056695a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056695e  5f                   pop edi
// 0056695f  897004               mov dword ptr [eax + 4], esi
// 00566962  5e                   pop esi
// 00566963  5d                   pop ebp
// 00566964  c6400800             mov byte ptr [eax + 8], 0
// 00566968  8910                 mov dword ptr [eax], edx
// 0056696a  5b                   pop ebx
// 0056696b  83c40c               add esp, 0xc
// 0056696e  c20800               ret 8
// library rbxgs/v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp

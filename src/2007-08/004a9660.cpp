// roc 2007-08 004a9660  unit: RBX::VInstance::?$NonFactoryProduct  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9660
//
// 004a9660  83ec0c               sub esp, 0xc
// 004a9663  55                   push ebp
// 004a9664  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004a9668  56                   push esi
// 004a9669  57                   push edi
// 004a966a  8bf9                 mov edi, ecx
// 004a966c  8b7704               mov esi, dword ptr [edi + 4]
// 004a966f  8b4604               mov eax, dword ptr [esi + 4]
// 004a9672  80781100             cmp byte ptr [eax + 0x11], 0
// 004a9676  b101                 mov cl, 1
// 004a9678  884c240c             mov byte ptr [esp + 0xc], cl
// 004a967c  7520                 jne 0x4a969e
// 004a967e  8b5500               mov edx, dword ptr [ebp]
// 004a9681  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004a9684  8bf0                 mov esi, eax
// 004a9686  0f92c1               setb cl
// 004a9689  84c9                 test cl, cl
// 004a968b  884c240c             mov byte ptr [esp + 0xc], cl
// 004a968f  7404                 je 0x4a9695
// 004a9691  8b00                 mov eax, dword ptr [eax]
// 004a9693  eb03                 jmp 0x4a9698
// 004a9695  8b4008               mov eax, dword ptr [eax + 8]
// 004a9698  80781100             cmp byte ptr [eax + 0x11], 0
// 004a969c  74e3                 je 0x4a9681
// 004a969e  84c9                 test cl, cl
// 004a96a0  8bd6                 mov edx, esi
// 004a96a2  89542414             mov dword ptr [esp + 0x14], edx
// 004a96a6  897c2410             mov dword ptr [esp + 0x10], edi
// 004a96aa  743d                 je 0x4a96e9
// 004a96ac  8b4704               mov eax, dword ptr [edi + 4]
// 004a96af  3b30                 cmp esi, dword ptr [eax]
// 004a96b1  8d4c2410             lea ecx, [esp + 0x10]
// 004a96b5  7529                 jne 0x4a96e0
// 004a96b7  55                   push ebp
// 004a96b8  56                   push esi
// 004a96b9  6a01                 push 1
// 004a96bb  51                   push ecx
// 004a96bc  8bcf                 mov ecx, edi
// 004a96be  e88df0ffff           call 0x4a8750
// 004a96c3  8bc8                 mov ecx, eax
// 004a96c5  8b11                 mov edx, dword ptr [ecx]
// 004a96c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a96cb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a96ce  5f                   pop edi
// 004a96cf  5e                   pop esi
// 004a96d0  8910                 mov dword ptr [eax], edx
// 004a96d2  894804               mov dword ptr [eax + 4], ecx
// 004a96d5  c6400801             mov byte ptr [eax + 8], 1
// 004a96d9  5d                   pop ebp
// 004a96da  83c40c               add esp, 0xc
// 004a96dd  c20800               ret 8
// 004a96e0  e8db991000           call 0x5b30c0
// 004a96e5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a96e9  8b420c               mov eax, dword ptr [edx + 0xc]
// 004a96ec  3b4500               cmp eax, dword ptr [ebp]
// 004a96ef  730e                 jae 0x4a96ff
// 004a96f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a96f5  55                   push ebp
// 004a96f6  56                   push esi
// 004a96f7  51                   push ecx
// 004a96f8  8d54241c             lea edx, [esp + 0x1c]
// 004a96fc  52                   push edx
// 004a96fd  ebbd                 jmp 0x4a96bc
// 004a96ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a9703  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a9707  5f                   pop edi
// 004a9708  5e                   pop esi
// 004a9709  8908                 mov dword ptr [eax], ecx
// 004a970b  895004               mov dword ptr [eax + 4], edx
// 004a970e  c6400800             mov byte ptr [eax + 8], 0
// 004a9712  5d                   pop ebp
// 004a9713  83c40c               add esp, 0xc
// 004a9716  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

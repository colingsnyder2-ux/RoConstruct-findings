// roc 2007-03 00613470  unit: seg_00610000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613470
//
// 00613470  83ec0c               sub esp, 0xc
// 00613473  55                   push ebp
// 00613474  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00613478  56                   push esi
// 00613479  57                   push edi
// 0061347a  8bf9                 mov edi, ecx
// 0061347c  8b7704               mov esi, dword ptr [edi + 4]
// 0061347f  8b4604               mov eax, dword ptr [esi + 4]
// 00613482  80781100             cmp byte ptr [eax + 0x11], 0
// 00613486  b101                 mov cl, 1
// 00613488  884c240c             mov byte ptr [esp + 0xc], cl
// 0061348c  7520                 jne 0x6134ae
// 0061348e  8b5500               mov edx, dword ptr [ebp]
// 00613491  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00613494  8bf0                 mov esi, eax
// 00613496  0f92c1               setb cl
// 00613499  84c9                 test cl, cl
// 0061349b  884c240c             mov byte ptr [esp + 0xc], cl
// 0061349f  7404                 je 0x6134a5
// 006134a1  8b00                 mov eax, dword ptr [eax]
// 006134a3  eb03                 jmp 0x6134a8
// 006134a5  8b4008               mov eax, dword ptr [eax + 8]
// 006134a8  80781100             cmp byte ptr [eax + 0x11], 0
// 006134ac  74e3                 je 0x613491
// 006134ae  84c9                 test cl, cl
// 006134b0  8bd6                 mov edx, esi
// 006134b2  89542414             mov dword ptr [esp + 0x14], edx
// 006134b6  897c2410             mov dword ptr [esp + 0x10], edi
// 006134ba  743d                 je 0x6134f9
// 006134bc  8b4704               mov eax, dword ptr [edi + 4]
// 006134bf  3b30                 cmp esi, dword ptr [eax]
// 006134c1  8d4c2410             lea ecx, [esp + 0x10]
// 006134c5  7529                 jne 0x6134f0
// 006134c7  55                   push ebp
// 006134c8  56                   push esi
// 006134c9  6a01                 push 1
// 006134cb  51                   push ecx
// 006134cc  8bcf                 mov ecx, edi
// 006134ce  e87dfcffff           call 0x613150
// 006134d3  8bc8                 mov ecx, eax
// 006134d5  8b11                 mov edx, dword ptr [ecx]
// 006134d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006134db  8b4904               mov ecx, dword ptr [ecx + 4]
// 006134de  5f                   pop edi
// 006134df  5e                   pop esi
// 006134e0  8910                 mov dword ptr [eax], edx
// 006134e2  894804               mov dword ptr [eax + 4], ecx
// 006134e5  c6400801             mov byte ptr [eax + 8], 1
// 006134e9  5d                   pop ebp
// 006134ea  83c40c               add esp, 0xc
// 006134ed  c20800               ret 8
// 006134f0  e8fb88f9ff           call 0x5abdf0
// 006134f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 006134f9  8b420c               mov eax, dword ptr [edx + 0xc]
// 006134fc  3b4500               cmp eax, dword ptr [ebp]
// 006134ff  730e                 jae 0x61350f
// 00613501  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00613505  55                   push ebp
// 00613506  56                   push esi
// 00613507  51                   push ecx
// 00613508  8d54241c             lea edx, [esp + 0x1c]
// 0061350c  52                   push edx
// 0061350d  ebbd                 jmp 0x6134cc
// 0061350f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00613513  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00613517  5f                   pop edi
// 00613518  5e                   pop esi
// 00613519  8908                 mov dword ptr [eax], ecx
// 0061351b  895004               mov dword ptr [eax + 4], edx
// 0061351e  c6400800             mov byte ptr [eax + 8], 0
// 00613522  5d                   pop ebp
// 00613523  83c40c               add esp, 0xc
// 00613526  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

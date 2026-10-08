// roc 2007-03 00406770  unit: seg_00400000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00406770
//
// 00406770  83ec0c               sub esp, 0xc
// 00406773  55                   push ebp
// 00406774  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00406778  56                   push esi
// 00406779  57                   push edi
// 0040677a  8bf9                 mov edi, ecx
// 0040677c  8b7704               mov esi, dword ptr [edi + 4]
// 0040677f  8b4604               mov eax, dword ptr [esi + 4]
// 00406782  80781100             cmp byte ptr [eax + 0x11], 0
// 00406786  b101                 mov cl, 1
// 00406788  884c240c             mov byte ptr [esp + 0xc], cl
// 0040678c  7520                 jne 0x4067ae
// 0040678e  8b5500               mov edx, dword ptr [ebp]
// 00406791  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00406794  8bf0                 mov esi, eax
// 00406796  0f92c1               setb cl
// 00406799  84c9                 test cl, cl
// 0040679b  884c240c             mov byte ptr [esp + 0xc], cl
// 0040679f  7404                 je 0x4067a5
// 004067a1  8b00                 mov eax, dword ptr [eax]
// 004067a3  eb03                 jmp 0x4067a8
// 004067a5  8b4008               mov eax, dword ptr [eax + 8]
// 004067a8  80781100             cmp byte ptr [eax + 0x11], 0
// 004067ac  74e3                 je 0x406791
// 004067ae  84c9                 test cl, cl
// 004067b0  8bd6                 mov edx, esi
// 004067b2  89542414             mov dword ptr [esp + 0x14], edx
// 004067b6  897c2410             mov dword ptr [esp + 0x10], edi
// 004067ba  743d                 je 0x4067f9
// 004067bc  8b4704               mov eax, dword ptr [edi + 4]
// 004067bf  3b30                 cmp esi, dword ptr [eax]
// 004067c1  8d4c2410             lea ecx, [esp + 0x10]
// 004067c5  7529                 jne 0x4067f0
// 004067c7  55                   push ebp
// 004067c8  56                   push esi
// 004067c9  6a01                 push 1
// 004067cb  51                   push ecx
// 004067cc  8bcf                 mov ecx, edi
// 004067ce  e81df1ffff           call 0x4058f0
// 004067d3  8bc8                 mov ecx, eax
// 004067d5  8b11                 mov edx, dword ptr [ecx]
// 004067d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004067db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004067de  5f                   pop edi
// 004067df  5e                   pop esi
// 004067e0  8910                 mov dword ptr [eax], edx
// 004067e2  894804               mov dword ptr [eax + 4], ecx
// 004067e5  c6400801             mov byte ptr [eax + 8], 1
// 004067e9  5d                   pop ebp
// 004067ea  83c40c               add esp, 0xc
// 004067ed  c20800               ret 8
// 004067f0  e8fb551a00           call 0x5abdf0
// 004067f5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004067f9  8b420c               mov eax, dword ptr [edx + 0xc]
// 004067fc  3b4500               cmp eax, dword ptr [ebp]
// 004067ff  730e                 jae 0x40680f
// 00406801  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00406805  55                   push ebp
// 00406806  56                   push esi
// 00406807  51                   push ecx
// 00406808  8d54241c             lea edx, [esp + 0x1c]
// 0040680c  52                   push edx
// 0040680d  ebbd                 jmp 0x4067cc
// 0040680f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00406813  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406817  5f                   pop edi
// 00406818  5e                   pop esi
// 00406819  8908                 mov dword ptr [eax], ecx
// 0040681b  895004               mov dword ptr [eax + 4], edx
// 0040681e  c6400800             mov byte ptr [eax + 8], 0
// 00406822  5d                   pop ebp
// 00406823  83c40c               add esp, 0xc
// 00406826  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

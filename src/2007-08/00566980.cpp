// roc 2007-08 00566980  unit: TextXmlWriter  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00566980
//
// 00566980  83ec10               sub esp, 0x10
// 00566983  53                   push ebx
// 00566984  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00566988  56                   push esi
// 00566989  57                   push edi
// 0056698a  53                   push ebx
// 0056698b  8bf1                 mov esi, ecx
// 0056698d  e8beefffff           call 0x565950
// 00566992  85f6                 test esi, esi
// 00566994  8bf8                 mov edi, eax
// 00566996  897c2410             mov dword ptr [esp + 0x10], edi
// 0056699a  7506                 jne 0x5669a2
// 0056699c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005669a2  3b7e04               cmp edi, dword ptr [esi + 4]
// 005669a5  8974240c             mov dword ptr [esp + 0xc], esi
// 005669a9  7417                 je 0x5669c2
// 005669ab  83c70c               add edi, 0xc
// 005669ae  57                   push edi
// 005669af  53                   push ebx
// 005669b0  e8fbe5fdff           call 0x544fb0
// 005669b5  83c408               add esp, 8
// 005669b8  84c0                 test al, al
// 005669ba  7506                 jne 0x5669c2
// 005669bc  8d4c240c             lea ecx, [esp + 0xc]
// 005669c0  eb0f                 jmp 0x5669d1
// 005669c2  8b4604               mov eax, dword ptr [esi + 4]
// 005669c5  89442418             mov dword ptr [esp + 0x18], eax
// 005669c9  89742414             mov dword ptr [esp + 0x14], esi
// 005669cd  8d4c2414             lea ecx, [esp + 0x14]
// 005669d1  8b11                 mov edx, dword ptr [ecx]
// 005669d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005669d7  8b4904               mov ecx, dword ptr [ecx + 4]
// 005669da  5f                   pop edi
// 005669db  5e                   pop esi
// 005669dc  8910                 mov dword ptr [eax], edx
// 005669de  894804               mov dword ptr [eax + 4], ecx
// 005669e1  5b                   pop ebx
// 005669e2  83c410               add esp, 0x10
// 005669e5  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

// roc 2007-08 004a86f0  unit: RBX::Network::VClient::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a86f0
//
// 004a86f0  8b5104               mov edx, dword ptr [ecx + 4]
// 004a86f3  8b4204               mov eax, dword ptr [edx + 4]
// 004a86f6  80781100             cmp byte ptr [eax + 0x11], 0
// 004a86fa  56                   push esi
// 004a86fb  57                   push edi
// 004a86fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a8700  7516                 jne 0x4a8718
// 004a8702  8b37                 mov esi, dword ptr [edi]
// 004a8704  3b700c               cmp esi, dword ptr [eax + 0xc]
// 004a8707  7306                 jae 0x4a870f
// 004a8709  8bd0                 mov edx, eax
// 004a870b  8b00                 mov eax, dword ptr [eax]
// 004a870d  eb03                 jmp 0x4a8712
// 004a870f  8b4008               mov eax, dword ptr [eax + 8]
// 004a8712  80781100             cmp byte ptr [eax + 0x11], 0
// 004a8716  74ec                 je 0x4a8704
// 004a8718  8b7104               mov esi, dword ptr [ecx + 4]
// 004a871b  8b4604               mov eax, dword ptr [esi + 4]
// 004a871e  80781100             cmp byte ptr [eax + 0x11], 0
// 004a8722  7516                 jne 0x4a873a
// 004a8724  8b3f                 mov edi, dword ptr [edi]
// 004a8726  39780c               cmp dword ptr [eax + 0xc], edi
// 004a8729  7305                 jae 0x4a8730
// 004a872b  8b4008               mov eax, dword ptr [eax + 8]
// 004a872e  eb04                 jmp 0x4a8734
// 004a8730  8bf0                 mov esi, eax
// 004a8732  8b00                 mov eax, dword ptr [eax]
// 004a8734  80781100             cmp byte ptr [eax + 0x11], 0
// 004a8738  74ec                 je 0x4a8726
// 004a873a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a873e  5f                   pop edi
// 004a873f  897004               mov dword ptr [eax + 4], esi
// 004a8742  8908                 mov dword ptr [eax], ecx
// 004a8744  894808               mov dword ptr [eax + 8], ecx
// 004a8747  89500c               mov dword ptr [eax + 0xc], edx
// 004a874a  5e                   pop esi
// 004a874b  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?equal_range@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@V123@@2@ABQAVScript@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

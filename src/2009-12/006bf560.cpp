// roc 2009-12 006bf560  unit: RBX::VInstance::?$NonFactoryProduct  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bf560
//
// 006bf560  83ec10               sub esp, 0x10
// 006bf563  53                   push ebx
// 006bf564  55                   push ebp
// 006bf565  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006bf569  56                   push esi
// 006bf56a  55                   push ebp
// 006bf56b  8bf1                 mov esi, ecx
// 006bf56d  e86edeffff           call 0x6bd3e0
// 006bf572  8bd8                 mov ebx, eax
// 006bf574  895c2410             mov dword ptr [esp + 0x10], ebx
// 006bf578  85f6                 test esi, esi
// 006bf57a  7506                 jne 0x6bf582
// 006bf57c  ff1560b79800         call dword ptr [0x98b760]
// 006bf582  8b06                 mov eax, dword ptr [esi]
// 006bf584  57                   push edi
// 006bf585  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006bf588  89442410             mov dword ptr [esp + 0x10], eax
// 006bf58c  85c0                 test eax, eax
// 006bf58e  7404                 je 0x6bf594
// 006bf590  3bc0                 cmp eax, eax
// 006bf592  7406                 je 0x6bf59a
// 006bf594  ff1560b79800         call dword ptr [0x98b760]
// 006bf59a  3bdf                 cmp ebx, edi
// 006bf59c  5f                   pop edi
// 006bf59d  7417                 je 0x6bf5b6
// 006bf59f  83c30c               add ebx, 0xc
// 006bf5a2  53                   push ebx
// 006bf5a3  55                   push ebp
// 006bf5a4  e82721ffff           call 0x6b16d0
// 006bf5a9  83c408               add esp, 8
// 006bf5ac  84c0                 test al, al
// 006bf5ae  7506                 jne 0x6bf5b6
// 006bf5b0  8d4c240c             lea ecx, [esp + 0xc]
// 006bf5b4  eb11                 jmp 0x6bf5c7
// 006bf5b6  8b0e                 mov ecx, dword ptr [esi]
// 006bf5b8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006bf5bb  894c2414             mov dword ptr [esp + 0x14], ecx
// 006bf5bf  89442418             mov dword ptr [esp + 0x18], eax
// 006bf5c3  8d4c2414             lea ecx, [esp + 0x14]
// 006bf5c7  8b11                 mov edx, dword ptr [ecx]
// 006bf5c9  8b442420             mov eax, dword ptr [esp + 0x20]
// 006bf5cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 006bf5d0  5e                   pop esi
// 006bf5d1  5d                   pop ebp
// 006bf5d2  8910                 mov dword ptr [eax], edx
// 006bf5d4  894804               mov dword ptr [eax + 4], ecx
// 006bf5d7  5b                   pop ebx
// 006bf5d8  83c410               add esp, 0x10
// 006bf5db  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

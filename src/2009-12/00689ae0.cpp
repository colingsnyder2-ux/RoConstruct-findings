// roc 2009-12 00689ae0  unit: TextXmlWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00689ae0
//
// 00689ae0  83ec10               sub esp, 0x10
// 00689ae3  53                   push ebx
// 00689ae4  55                   push ebp
// 00689ae5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00689ae9  56                   push esi
// 00689aea  55                   push ebp
// 00689aeb  8bf1                 mov esi, ecx
// 00689aed  e8ceedffff           call 0x6888c0
// 00689af2  8bd8                 mov ebx, eax
// 00689af4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00689af8  85f6                 test esi, esi
// 00689afa  7506                 jne 0x689b02
// 00689afc  ff1560b79800         call dword ptr [0x98b760]
// 00689b02  8b06                 mov eax, dword ptr [esi]
// 00689b04  57                   push edi
// 00689b05  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00689b08  89442410             mov dword ptr [esp + 0x10], eax
// 00689b0c  85c0                 test eax, eax
// 00689b0e  7404                 je 0x689b14
// 00689b10  3bc0                 cmp eax, eax
// 00689b12  7406                 je 0x689b1a
// 00689b14  ff1560b79800         call dword ptr [0x98b760]
// 00689b1a  3bdf                 cmp ebx, edi
// 00689b1c  5f                   pop edi
// 00689b1d  7417                 je 0x689b36
// 00689b1f  83c30c               add ebx, 0xc
// 00689b22  53                   push ebx
// 00689b23  55                   push ebp
// 00689b24  e8a77b0200           call 0x6b16d0
// 00689b29  83c408               add esp, 8
// 00689b2c  84c0                 test al, al
// 00689b2e  7506                 jne 0x689b36
// 00689b30  8d4c240c             lea ecx, [esp + 0xc]
// 00689b34  eb11                 jmp 0x689b47
// 00689b36  8b0e                 mov ecx, dword ptr [esi]
// 00689b38  8b4618               mov eax, dword ptr [esi + 0x18]
// 00689b3b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00689b3f  89442418             mov dword ptr [esp + 0x18], eax
// 00689b43  8d4c2414             lea ecx, [esp + 0x14]
// 00689b47  8b11                 mov edx, dword ptr [ecx]
// 00689b49  8b442420             mov eax, dword ptr [esp + 0x20]
// 00689b4d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00689b50  5e                   pop esi
// 00689b51  5d                   pop ebp
// 00689b52  8910                 mov dword ptr [eax], edx
// 00689b54  894804               mov dword ptr [eax + 4], ecx
// 00689b57  5b                   pop ebx
// 00689b58  83c410               add esp, 0x10
// 00689b5b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

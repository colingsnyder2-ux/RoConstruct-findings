// roc 2008-06 0058eef0  unit: TextXmlWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058eef0
//
// 0058eef0  83ec10               sub esp, 0x10
// 0058eef3  53                   push ebx
// 0058eef4  55                   push ebp
// 0058eef5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058eef9  56                   push esi
// 0058eefa  55                   push ebp
// 0058eefb  8bf1                 mov esi, ecx
// 0058eefd  e85ee7ffff           call 0x58d660
// 0058ef02  8bd8                 mov ebx, eax
// 0058ef04  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058ef08  85f6                 test esi, esi
// 0058ef0a  7506                 jne 0x58ef12
// 0058ef0c  ff1590288000         call dword ptr [0x802890]
// 0058ef12  8b06                 mov eax, dword ptr [esi]
// 0058ef14  57                   push edi
// 0058ef15  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0058ef18  89442410             mov dword ptr [esp + 0x10], eax
// 0058ef1c  85c0                 test eax, eax
// 0058ef1e  7404                 je 0x58ef24
// 0058ef20  3bc0                 cmp eax, eax
// 0058ef22  7406                 je 0x58ef2a
// 0058ef24  ff1590288000         call dword ptr [0x802890]
// 0058ef2a  3bdf                 cmp ebx, edi
// 0058ef2c  5f                   pop edi
// 0058ef2d  7417                 je 0x58ef46
// 0058ef2f  83c30c               add ebx, 0xc
// 0058ef32  53                   push ebx
// 0058ef33  55                   push ebp
// 0058ef34  e817cefcff           call 0x55bd50
// 0058ef39  83c408               add esp, 8
// 0058ef3c  84c0                 test al, al
// 0058ef3e  7506                 jne 0x58ef46
// 0058ef40  8d4c240c             lea ecx, [esp + 0xc]
// 0058ef44  eb11                 jmp 0x58ef57
// 0058ef46  8b0e                 mov ecx, dword ptr [esi]
// 0058ef48  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058ef4b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058ef4f  89442418             mov dword ptr [esp + 0x18], eax
// 0058ef53  8d4c2414             lea ecx, [esp + 0x14]
// 0058ef57  8b11                 mov edx, dword ptr [ecx]
// 0058ef59  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058ef5d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0058ef60  5e                   pop esi
// 0058ef61  5d                   pop ebp
// 0058ef62  8910                 mov dword ptr [eax], edx
// 0058ef64  894804               mov dword ptr [eax + 4], ecx
// 0058ef67  5b                   pop ebx
// 0058ef68  83c410               add esp, 0x10
// 0058ef6b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

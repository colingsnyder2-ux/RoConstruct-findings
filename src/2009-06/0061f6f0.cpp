// roc 2009-06 0061f6f0  unit: TextXmlWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061f6f0
//
// 0061f6f0  83ec10               sub esp, 0x10
// 0061f6f3  53                   push ebx
// 0061f6f4  55                   push ebp
// 0061f6f5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0061f6f9  56                   push esi
// 0061f6fa  55                   push ebp
// 0061f6fb  8bf1                 mov esi, ecx
// 0061f6fd  e85eeeffff           call 0x61e560
// 0061f702  8bd8                 mov ebx, eax
// 0061f704  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061f708  85f6                 test esi, esi
// 0061f70a  7506                 jne 0x61f712
// 0061f70c  ff15ace98900         call dword ptr [0x89e9ac]
// 0061f712  8b06                 mov eax, dword ptr [esi]
// 0061f714  57                   push edi
// 0061f715  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0061f718  89442410             mov dword ptr [esp + 0x10], eax
// 0061f71c  85c0                 test eax, eax
// 0061f71e  7404                 je 0x61f724
// 0061f720  3bc0                 cmp eax, eax
// 0061f722  7406                 je 0x61f72a
// 0061f724  ff15ace98900         call dword ptr [0x89e9ac]
// 0061f72a  3bdf                 cmp ebx, edi
// 0061f72c  5f                   pop edi
// 0061f72d  7417                 je 0x61f746
// 0061f72f  83c30c               add ebx, 0xc
// 0061f732  53                   push ebx
// 0061f733  55                   push ebp
// 0061f734  e82795fbff           call 0x5d8c60
// 0061f739  83c408               add esp, 8
// 0061f73c  84c0                 test al, al
// 0061f73e  7506                 jne 0x61f746
// 0061f740  8d4c240c             lea ecx, [esp + 0xc]
// 0061f744  eb11                 jmp 0x61f757
// 0061f746  8b0e                 mov ecx, dword ptr [esi]
// 0061f748  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061f74b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061f74f  89442418             mov dword ptr [esp + 0x18], eax
// 0061f753  8d4c2414             lea ecx, [esp + 0x14]
// 0061f757  8b11                 mov edx, dword ptr [ecx]
// 0061f759  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061f75d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061f760  5e                   pop esi
// 0061f761  5d                   pop ebp
// 0061f762  8910                 mov dword ptr [eax], edx
// 0061f764  894804               mov dword ptr [eax + 4], ecx
// 0061f767  5b                   pop ebx
// 0061f768  83c410               add esp, 0x10
// 0061f76b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

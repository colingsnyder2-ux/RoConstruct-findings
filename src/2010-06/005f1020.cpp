// roc 2010-06 005f1020  unit: TextXmlWriter  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f1020
//
// 005f1020  83ec0c               sub esp, 0xc
// 005f1023  53                   push ebx
// 005f1024  55                   push ebp
// 005f1025  56                   push esi
// 005f1026  8be9                 mov ebp, ecx
// 005f1028  57                   push edi
// 005f1029  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 005f102c  8b7704               mov esi, dword ptr [edi + 4]
// 005f102f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005f1033  b001                 mov al, 1
// 005f1035  88442410             mov byte ptr [esp + 0x10], al
// 005f1039  752d                 jne 0x5f1068
// 005f103b  eb03                 jmp 0x5f1040
// 005f103d  8d4900               lea ecx, [ecx]
// 005f1040  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f1044  8d460c               lea eax, [esi + 0xc]
// 005f1047  50                   push eax
// 005f1048  51                   push ecx
// 005f1049  8bfe                 mov edi, esi
// 005f104b  e8b09c0300           call 0x62ad00
// 005f1050  83c408               add esp, 8
// 005f1053  88442410             mov byte ptr [esp + 0x10], al
// 005f1057  84c0                 test al, al
// 005f1059  7404                 je 0x5f105f
// 005f105b  8b36                 mov esi, dword ptr [esi]
// 005f105d  eb03                 jmp 0x5f1062
// 005f105f  8b7608               mov esi, dword ptr [esi + 8]
// 005f1062  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005f1066  74d8                 je 0x5f1040
// 005f1068  8b7500               mov esi, dword ptr [ebp]
// 005f106b  8bdf                 mov ebx, edi
// 005f106d  895c2418             mov dword ptr [esp + 0x18], ebx
// 005f1071  89742414             mov dword ptr [esp + 0x14], esi
// 005f1075  84c0                 test al, al
// 005f1077  7456                 je 0x5f10cf
// 005f1079  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005f107c  8b1a                 mov ebx, dword ptr [edx]
// 005f107e  85f6                 test esi, esi
// 005f1080  7404                 je 0x5f1086
// 005f1082  3bf6                 cmp esi, esi
// 005f1084  7406                 je 0x5f108c
// 005f1086  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f108c  8d4c2414             lea ecx, [esp + 0x14]
// 005f1090  3bfb                 cmp edi, ebx
// 005f1092  752e                 jne 0x5f10c2
// 005f1094  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f1098  50                   push eax
// 005f1099  57                   push edi
// 005f109a  6a01                 push 1
// 005f109c  51                   push ecx
// 005f109d  8bcd                 mov ecx, ebp
// 005f109f  e8ac881400           call 0x739950
// 005f10a4  5f                   pop edi
// 005f10a5  8bc8                 mov ecx, eax
// 005f10a7  8b11                 mov edx, dword ptr [ecx]
// 005f10a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f10ad  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f10b0  5e                   pop esi
// 005f10b1  5d                   pop ebp
// 005f10b2  8910                 mov dword ptr [eax], edx
// 005f10b4  894804               mov dword ptr [eax + 4], ecx
// 005f10b7  c6400801             mov byte ptr [eax + 8], 1
// 005f10bb  5b                   pop ebx
// 005f10bc  83c40c               add esp, 0xc
// 005f10bf  c20800               ret 8
// 005f10c2  e859871400           call 0x739820
// 005f10c7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005f10cb  8b742414             mov esi, dword ptr [esp + 0x14]
// 005f10cf  8b542424             mov edx, dword ptr [esp + 0x24]
// 005f10d3  52                   push edx
// 005f10d4  8d430c               lea eax, [ebx + 0xc]
// 005f10d7  50                   push eax
// 005f10d8  e8239c0300           call 0x62ad00
// 005f10dd  83c408               add esp, 8
// 005f10e0  84c0                 test al, al
// 005f10e2  7412                 je 0x5f10f6
// 005f10e4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f10e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f10ec  51                   push ecx
// 005f10ed  57                   push edi
// 005f10ee  52                   push edx
// 005f10ef  8d442420             lea eax, [esp + 0x20]
// 005f10f3  50                   push eax
// 005f10f4  eba7                 jmp 0x5f109d
// 005f10f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f10fa  5f                   pop edi
// 005f10fb  8930                 mov dword ptr [eax], esi
// 005f10fd  5e                   pop esi
// 005f10fe  5d                   pop ebp
// 005f10ff  895804               mov dword ptr [eax + 4], ebx
// 005f1102  c6400800             mov byte ptr [eax + 8], 0
// 005f1106  5b                   pop ebx
// 005f1107  83c40c               add esp, 0xc
// 005f110a  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp

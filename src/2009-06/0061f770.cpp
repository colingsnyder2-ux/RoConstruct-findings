// roc 2009-06 0061f770  unit: TextXmlWriter  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061f770
//
// 0061f770  83ec10               sub esp, 0x10
// 0061f773  53                   push ebx
// 0061f774  55                   push ebp
// 0061f775  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0061f779  56                   push esi
// 0061f77a  55                   push ebp
// 0061f77b  8bf1                 mov esi, ecx
// 0061f77d  e86e67e5ff           call 0x475ef0
// 0061f782  8bd8                 mov ebx, eax
// 0061f784  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061f788  85f6                 test esi, esi
// 0061f78a  7506                 jne 0x61f792
// 0061f78c  ff15ace98900         call dword ptr [0x89e9ac]
// 0061f792  8b06                 mov eax, dword ptr [esi]
// 0061f794  57                   push edi
// 0061f795  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0061f798  89442410             mov dword ptr [esp + 0x10], eax
// 0061f79c  85c0                 test eax, eax
// 0061f79e  7404                 je 0x61f7a4
// 0061f7a0  3bc0                 cmp eax, eax
// 0061f7a2  7406                 je 0x61f7aa
// 0061f7a4  ff15ace98900         call dword ptr [0x89e9ac]
// 0061f7aa  3bdf                 cmp ebx, edi
// 0061f7ac  5f                   pop edi
// 0061f7ad  7418                 je 0x61f7c7
// 0061f7af  83c30c               add ebx, 0xc
// 0061f7b2  53                   push ebx
// 0061f7b3  55                   push ebp
// 0061f7b4  ff15e0e48900         call dword ptr [0x89e4e0]
// 0061f7ba  83c408               add esp, 8
// 0061f7bd  84c0                 test al, al
// 0061f7bf  7506                 jne 0x61f7c7
// 0061f7c1  8d4c240c             lea ecx, [esp + 0xc]
// 0061f7c5  eb11                 jmp 0x61f7d8
// 0061f7c7  8b0e                 mov ecx, dword ptr [esi]
// 0061f7c9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061f7cc  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061f7d0  89442418             mov dword ptr [esp + 0x18], eax
// 0061f7d4  8d4c2414             lea ecx, [esp + 0x14]
// 0061f7d8  8b11                 mov edx, dword ptr [ecx]
// 0061f7da  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061f7de  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061f7e1  5e                   pop esi
// 0061f7e2  5d                   pop ebp
// 0061f7e3  8910                 mov dword ptr [eax], edx
// 0061f7e5  894804               mov dword ptr [eax + 4], ecx
// 0061f7e8  5b                   pop ebx
// 0061f7e9  83c410               add esp, 0x10
// 0061f7ec  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

// roc 2008-06 0058ef70  unit: TextXmlWriter  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058ef70
//
// 0058ef70  83ec10               sub esp, 0x10
// 0058ef73  53                   push ebx
// 0058ef74  55                   push ebp
// 0058ef75  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058ef79  56                   push esi
// 0058ef7a  55                   push ebp
// 0058ef7b  8bf1                 mov esi, ecx
// 0058ef7d  e81ee7ffff           call 0x58d6a0
// 0058ef82  8bd8                 mov ebx, eax
// 0058ef84  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058ef88  85f6                 test esi, esi
// 0058ef8a  7506                 jne 0x58ef92
// 0058ef8c  ff1590288000         call dword ptr [0x802890]
// 0058ef92  8b06                 mov eax, dword ptr [esi]
// 0058ef94  57                   push edi
// 0058ef95  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0058ef98  89442410             mov dword ptr [esp + 0x10], eax
// 0058ef9c  85c0                 test eax, eax
// 0058ef9e  7404                 je 0x58efa4
// 0058efa0  3bc0                 cmp eax, eax
// 0058efa2  7406                 je 0x58efaa
// 0058efa4  ff1590288000         call dword ptr [0x802890]
// 0058efaa  3bdf                 cmp ebx, edi
// 0058efac  5f                   pop edi
// 0058efad  7418                 je 0x58efc7
// 0058efaf  83c30c               add ebx, 0xc
// 0058efb2  53                   push ebx
// 0058efb3  55                   push ebp
// 0058efb4  ff155c238000         call dword ptr [0x80235c]
// 0058efba  83c408               add esp, 8
// 0058efbd  84c0                 test al, al
// 0058efbf  7506                 jne 0x58efc7
// 0058efc1  8d4c240c             lea ecx, [esp + 0xc]
// 0058efc5  eb11                 jmp 0x58efd8
// 0058efc7  8b0e                 mov ecx, dword ptr [esi]
// 0058efc9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058efcc  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058efd0  89442418             mov dword ptr [esp + 0x18], eax
// 0058efd4  8d4c2414             lea ecx, [esp + 0x14]
// 0058efd8  8b11                 mov edx, dword ptr [ecx]
// 0058efda  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058efde  8b4904               mov ecx, dword ptr [ecx + 4]
// 0058efe1  5e                   pop esi
// 0058efe2  5d                   pop ebp
// 0058efe3  8910                 mov dword ptr [eax], edx
// 0058efe5  894804               mov dword ptr [eax + 4], ecx
// 0058efe8  5b                   pop ebx
// 0058efe9  83c410               add esp, 0x10
// 0058efec  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

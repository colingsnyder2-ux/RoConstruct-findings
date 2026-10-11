// roc 2008-06 006710e0  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006710e0
//
// 006710e0  83ec10               sub esp, 0x10
// 006710e3  53                   push ebx
// 006710e4  55                   push ebp
// 006710e5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006710e9  56                   push esi
// 006710ea  55                   push ebp
// 006710eb  8bf1                 mov esi, ecx
// 006710ed  e8deedffff           call 0x66fed0
// 006710f2  8bd8                 mov ebx, eax
// 006710f4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006710f8  85f6                 test esi, esi
// 006710fa  7506                 jne 0x671102
// 006710fc  ff1590288000         call dword ptr [0x802890]
// 00671102  8b06                 mov eax, dword ptr [esi]
// 00671104  57                   push edi
// 00671105  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00671108  89442410             mov dword ptr [esp + 0x10], eax
// 0067110c  85c0                 test eax, eax
// 0067110e  7404                 je 0x671114
// 00671110  3bc0                 cmp eax, eax
// 00671112  7406                 je 0x67111a
// 00671114  ff1590288000         call dword ptr [0x802890]
// 0067111a  3bdf                 cmp ebx, edi
// 0067111c  5f                   pop edi
// 0067111d  7418                 je 0x671137
// 0067111f  83c30c               add ebx, 0xc
// 00671122  53                   push ebx
// 00671123  55                   push ebp
// 00671124  ff155c238000         call dword ptr [0x80235c]
// 0067112a  83c408               add esp, 8
// 0067112d  84c0                 test al, al
// 0067112f  7506                 jne 0x671137
// 00671131  8d4c240c             lea ecx, [esp + 0xc]
// 00671135  eb11                 jmp 0x671148
// 00671137  8b0e                 mov ecx, dword ptr [esi]
// 00671139  8b4618               mov eax, dword ptr [esi + 0x18]
// 0067113c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00671140  89442418             mov dword ptr [esp + 0x18], eax
// 00671144  8d4c2414             lea ecx, [esp + 0x14]
// 00671148  8b11                 mov edx, dword ptr [ecx]
// 0067114a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067114e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00671151  5e                   pop esi
// 00671152  5d                   pop ebp
// 00671153  8910                 mov dword ptr [eax], edx
// 00671155  894804               mov dword ptr [eax + 4], ecx
// 00671158  5b                   pop ebx
// 00671159  83c410               add esp, 0x10
// 0067115c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

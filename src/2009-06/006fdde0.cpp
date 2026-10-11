// roc 2009-06 006fdde0  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fdde0
//
// 006fdde0  83ec10               sub esp, 0x10
// 006fdde3  53                   push ebx
// 006fdde4  55                   push ebp
// 006fdde5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006fdde9  56                   push esi
// 006fddea  55                   push ebp
// 006fddeb  8bf1                 mov esi, ecx
// 006fdded  e89eecffff           call 0x6fca90
// 006fddf2  8bd8                 mov ebx, eax
// 006fddf4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006fddf8  85f6                 test esi, esi
// 006fddfa  7506                 jne 0x6fde02
// 006fddfc  ff15ace98900         call dword ptr [0x89e9ac]
// 006fde02  8b06                 mov eax, dword ptr [esi]
// 006fde04  57                   push edi
// 006fde05  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006fde08  89442410             mov dword ptr [esp + 0x10], eax
// 006fde0c  85c0                 test eax, eax
// 006fde0e  7404                 je 0x6fde14
// 006fde10  3bc0                 cmp eax, eax
// 006fde12  7406                 je 0x6fde1a
// 006fde14  ff15ace98900         call dword ptr [0x89e9ac]
// 006fde1a  3bdf                 cmp ebx, edi
// 006fde1c  5f                   pop edi
// 006fde1d  7418                 je 0x6fde37
// 006fde1f  83c30c               add ebx, 0xc
// 006fde22  53                   push ebx
// 006fde23  55                   push ebp
// 006fde24  ff15e0e48900         call dword ptr [0x89e4e0]
// 006fde2a  83c408               add esp, 8
// 006fde2d  84c0                 test al, al
// 006fde2f  7506                 jne 0x6fde37
// 006fde31  8d4c240c             lea ecx, [esp + 0xc]
// 006fde35  eb11                 jmp 0x6fde48
// 006fde37  8b0e                 mov ecx, dword ptr [esi]
// 006fde39  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fde3c  894c2414             mov dword ptr [esp + 0x14], ecx
// 006fde40  89442418             mov dword ptr [esp + 0x18], eax
// 006fde44  8d4c2414             lea ecx, [esp + 0x14]
// 006fde48  8b11                 mov edx, dword ptr [ecx]
// 006fde4a  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fde4e  8b4904               mov ecx, dword ptr [ecx + 4]
// 006fde51  5e                   pop esi
// 006fde52  5d                   pop ebp
// 006fde53  8910                 mov dword ptr [eax], edx
// 006fde55  894804               mov dword ptr [eax + 4], ecx
// 006fde58  5b                   pop ebx
// 006fde59  83c410               add esp, 0x10
// 006fde5c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

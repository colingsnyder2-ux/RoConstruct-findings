// roc 2010-06 008c8150  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c8150
//
// 008c8150  83ec10               sub esp, 0x10
// 008c8153  53                   push ebx
// 008c8154  55                   push ebp
// 008c8155  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008c8159  56                   push esi
// 008c815a  55                   push ebp
// 008c815b  8bf1                 mov esi, ecx
// 008c815d  e84eebffff           call 0x8c6cb0
// 008c8162  8bd8                 mov ebx, eax
// 008c8164  895c2410             mov dword ptr [esp + 0x10], ebx
// 008c8168  85f6                 test esi, esi
// 008c816a  7506                 jne 0x8c8172
// 008c816c  ff150ca99e00         call dword ptr [0x9ea90c]
// 008c8172  8b06                 mov eax, dword ptr [esi]
// 008c8174  57                   push edi
// 008c8175  8b7e18               mov edi, dword ptr [esi + 0x18]
// 008c8178  89442410             mov dword ptr [esp + 0x10], eax
// 008c817c  85c0                 test eax, eax
// 008c817e  7404                 je 0x8c8184
// 008c8180  3bc0                 cmp eax, eax
// 008c8182  7406                 je 0x8c818a
// 008c8184  ff150ca99e00         call dword ptr [0x9ea90c]
// 008c818a  3bdf                 cmp ebx, edi
// 008c818c  5f                   pop edi
// 008c818d  7418                 je 0x8c81a7
// 008c818f  83c30c               add ebx, 0xc
// 008c8192  53                   push ebx
// 008c8193  55                   push ebp
// 008c8194  ff151ca59e00         call dword ptr [0x9ea51c]
// 008c819a  83c408               add esp, 8
// 008c819d  84c0                 test al, al
// 008c819f  7506                 jne 0x8c81a7
// 008c81a1  8d4c240c             lea ecx, [esp + 0xc]
// 008c81a5  eb11                 jmp 0x8c81b8
// 008c81a7  8b0e                 mov ecx, dword ptr [esi]
// 008c81a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 008c81ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c81b0  89442418             mov dword ptr [esp + 0x18], eax
// 008c81b4  8d4c2414             lea ecx, [esp + 0x14]
// 008c81b8  8b11                 mov edx, dword ptr [ecx]
// 008c81ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c81be  8b4904               mov ecx, dword ptr [ecx + 4]
// 008c81c1  5e                   pop esi
// 008c81c2  5d                   pop ebp
// 008c81c3  8910                 mov dword ptr [eax], edx
// 008c81c5  894804               mov dword ptr [eax + 4], ecx
// 008c81c8  5b                   pop ebx
// 008c81c9  83c410               add esp, 0x10
// 008c81cc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

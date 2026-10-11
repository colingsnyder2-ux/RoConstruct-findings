// roc 2010-06 004c4c80  unit: RBX::VInstance::?$NonFactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4c80
//
// 004c4c80  83ec10               sub esp, 0x10
// 004c4c83  53                   push ebx
// 004c4c84  55                   push ebp
// 004c4c85  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004c4c89  56                   push esi
// 004c4c8a  55                   push ebp
// 004c4c8b  8bf1                 mov esi, ecx
// 004c4c8d  e81ec1ffff           call 0x4c0db0
// 004c4c92  8bd8                 mov ebx, eax
// 004c4c94  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c4c98  85f6                 test esi, esi
// 004c4c9a  7506                 jne 0x4c4ca2
// 004c4c9c  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c4ca2  8b06                 mov eax, dword ptr [esi]
// 004c4ca4  57                   push edi
// 004c4ca5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c4ca8  89442410             mov dword ptr [esp + 0x10], eax
// 004c4cac  85c0                 test eax, eax
// 004c4cae  7404                 je 0x4c4cb4
// 004c4cb0  3bc0                 cmp eax, eax
// 004c4cb2  7406                 je 0x4c4cba
// 004c4cb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c4cba  3bdf                 cmp ebx, edi
// 004c4cbc  5f                   pop edi
// 004c4cbd  7418                 je 0x4c4cd7
// 004c4cbf  83c30c               add ebx, 0xc
// 004c4cc2  53                   push ebx
// 004c4cc3  55                   push ebp
// 004c4cc4  ff151ca59e00         call dword ptr [0x9ea51c]
// 004c4cca  83c408               add esp, 8
// 004c4ccd  84c0                 test al, al
// 004c4ccf  7506                 jne 0x4c4cd7
// 004c4cd1  8d4c240c             lea ecx, [esp + 0xc]
// 004c4cd5  eb11                 jmp 0x4c4ce8
// 004c4cd7  8b0e                 mov ecx, dword ptr [esi]
// 004c4cd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c4cdc  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c4ce0  89442418             mov dword ptr [esp + 0x18], eax
// 004c4ce4  8d4c2414             lea ecx, [esp + 0x14]
// 004c4ce8  8b11                 mov edx, dword ptr [ecx]
// 004c4cea  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c4cee  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c4cf1  5e                   pop esi
// 004c4cf2  5d                   pop ebp
// 004c4cf3  8910                 mov dword ptr [eax], edx
// 004c4cf5  894804               mov dword ptr [eax + 4], ecx
// 004c4cf8  5b                   pop ebx
// 004c4cf9  83c410               add esp, 0x10
// 004c4cfc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

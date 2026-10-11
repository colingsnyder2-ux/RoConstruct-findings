// roc 2010-06 00610d90  unit: RBX::VScriptContext::?$FactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00610d90
//
// 00610d90  83ec10               sub esp, 0x10
// 00610d93  53                   push ebx
// 00610d94  55                   push ebp
// 00610d95  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00610d99  56                   push esi
// 00610d9a  55                   push ebp
// 00610d9b  8bf1                 mov esi, ecx
// 00610d9d  e83ec5ffff           call 0x60d2e0
// 00610da2  8bd8                 mov ebx, eax
// 00610da4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00610da8  85f6                 test esi, esi
// 00610daa  7506                 jne 0x610db2
// 00610dac  ff150ca99e00         call dword ptr [0x9ea90c]
// 00610db2  8b06                 mov eax, dword ptr [esi]
// 00610db4  57                   push edi
// 00610db5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00610db8  89442410             mov dword ptr [esp + 0x10], eax
// 00610dbc  85c0                 test eax, eax
// 00610dbe  7404                 je 0x610dc4
// 00610dc0  3bc0                 cmp eax, eax
// 00610dc2  7406                 je 0x610dca
// 00610dc4  ff150ca99e00         call dword ptr [0x9ea90c]
// 00610dca  3bdf                 cmp ebx, edi
// 00610dcc  5f                   pop edi
// 00610dcd  7418                 je 0x610de7
// 00610dcf  83c30c               add ebx, 0xc
// 00610dd2  53                   push ebx
// 00610dd3  55                   push ebp
// 00610dd4  ff151ca59e00         call dword ptr [0x9ea51c]
// 00610dda  83c408               add esp, 8
// 00610ddd  84c0                 test al, al
// 00610ddf  7506                 jne 0x610de7
// 00610de1  8d4c240c             lea ecx, [esp + 0xc]
// 00610de5  eb11                 jmp 0x610df8
// 00610de7  8b0e                 mov ecx, dword ptr [esi]
// 00610de9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00610dec  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610df0  89442418             mov dword ptr [esp + 0x18], eax
// 00610df4  8d4c2414             lea ecx, [esp + 0x14]
// 00610df8  8b11                 mov edx, dword ptr [ecx]
// 00610dfa  8b442420             mov eax, dword ptr [esp + 0x20]
// 00610dfe  8b4904               mov ecx, dword ptr [ecx + 4]
// 00610e01  5e                   pop esi
// 00610e02  5d                   pop ebp
// 00610e03  8910                 mov dword ptr [eax], edx
// 00610e05  894804               mov dword ptr [eax + 4], ecx
// 00610e08  5b                   pop ebx
// 00610e09  83c410               add esp, 0x10
// 00610e0c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

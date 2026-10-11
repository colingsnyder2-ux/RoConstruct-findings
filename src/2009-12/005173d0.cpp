// roc 2009-12 005173d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005173d0
//
// 005173d0  83ec10               sub esp, 0x10
// 005173d3  53                   push ebx
// 005173d4  55                   push ebp
// 005173d5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005173d9  56                   push esi
// 005173da  55                   push ebp
// 005173db  8bf1                 mov esi, ecx
// 005173dd  e8dec3ffff           call 0x5137c0
// 005173e2  8bd8                 mov ebx, eax
// 005173e4  895c2410             mov dword ptr [esp + 0x10], ebx
// 005173e8  85f6                 test esi, esi
// 005173ea  7506                 jne 0x5173f2
// 005173ec  ff1560b79800         call dword ptr [0x98b760]
// 005173f2  8b06                 mov eax, dword ptr [esi]
// 005173f4  57                   push edi
// 005173f5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005173f8  89442410             mov dword ptr [esp + 0x10], eax
// 005173fc  85c0                 test eax, eax
// 005173fe  7404                 je 0x517404
// 00517400  3bc0                 cmp eax, eax
// 00517402  7406                 je 0x51740a
// 00517404  ff1560b79800         call dword ptr [0x98b760]
// 0051740a  3bdf                 cmp ebx, edi
// 0051740c  5f                   pop edi
// 0051740d  7418                 je 0x517427
// 0051740f  83c30c               add ebx, 0xc
// 00517412  53                   push ebx
// 00517413  55                   push ebp
// 00517414  ff15d8b59800         call dword ptr [0x98b5d8]
// 0051741a  83c408               add esp, 8
// 0051741d  84c0                 test al, al
// 0051741f  7506                 jne 0x517427
// 00517421  8d4c240c             lea ecx, [esp + 0xc]
// 00517425  eb11                 jmp 0x517438
// 00517427  8b0e                 mov ecx, dword ptr [esi]
// 00517429  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051742c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00517430  89442418             mov dword ptr [esp + 0x18], eax
// 00517434  8d4c2414             lea ecx, [esp + 0x14]
// 00517438  8b11                 mov edx, dword ptr [ecx]
// 0051743a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051743e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00517441  5e                   pop esi
// 00517442  5d                   pop ebp
// 00517443  8910                 mov dword ptr [eax], edx
// 00517445  894804               mov dword ptr [eax + 4], ecx
// 00517448  5b                   pop ebx
// 00517449  83c410               add esp, 0x10
// 0051744c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

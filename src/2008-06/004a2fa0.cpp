// roc 2008-06 004a2fa0  unit: RBX::Network::Server::ClientProxy  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2fa0
//
// 004a2fa0  83ec10               sub esp, 0x10
// 004a2fa3  53                   push ebx
// 004a2fa4  55                   push ebp
// 004a2fa5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004a2fa9  56                   push esi
// 004a2faa  55                   push ebp
// 004a2fab  8bf1                 mov esi, ecx
// 004a2fad  e88eeaffff           call 0x4a1a40
// 004a2fb2  8bd8                 mov ebx, eax
// 004a2fb4  895c2410             mov dword ptr [esp + 0x10], ebx
// 004a2fb8  85f6                 test esi, esi
// 004a2fba  7506                 jne 0x4a2fc2
// 004a2fbc  ff1590288000         call dword ptr [0x802890]
// 004a2fc2  8b06                 mov eax, dword ptr [esi]
// 004a2fc4  57                   push edi
// 004a2fc5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004a2fc8  89442410             mov dword ptr [esp + 0x10], eax
// 004a2fcc  85c0                 test eax, eax
// 004a2fce  7404                 je 0x4a2fd4
// 004a2fd0  3bc0                 cmp eax, eax
// 004a2fd2  7406                 je 0x4a2fda
// 004a2fd4  ff1590288000         call dword ptr [0x802890]
// 004a2fda  3bdf                 cmp ebx, edi
// 004a2fdc  5f                   pop edi
// 004a2fdd  7418                 je 0x4a2ff7
// 004a2fdf  83c30c               add ebx, 0xc
// 004a2fe2  53                   push ebx
// 004a2fe3  55                   push ebp
// 004a2fe4  ff155c238000         call dword ptr [0x80235c]
// 004a2fea  83c408               add esp, 8
// 004a2fed  84c0                 test al, al
// 004a2fef  7506                 jne 0x4a2ff7
// 004a2ff1  8d4c240c             lea ecx, [esp + 0xc]
// 004a2ff5  eb11                 jmp 0x4a3008
// 004a2ff7  8b0e                 mov ecx, dword ptr [esi]
// 004a2ff9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a2ffc  894c2414             mov dword ptr [esp + 0x14], ecx
// 004a3000  89442418             mov dword ptr [esp + 0x18], eax
// 004a3004  8d4c2414             lea ecx, [esp + 0x14]
// 004a3008  8b11                 mov edx, dword ptr [ecx]
// 004a300a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a300e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a3011  5e                   pop esi
// 004a3012  5d                   pop ebp
// 004a3013  8910                 mov dword ptr [eax], edx
// 004a3015  894804               mov dword ptr [eax + 4], ecx
// 004a3018  5b                   pop ebx
// 004a3019  83c410               add esp, 0x10
// 004a301c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp

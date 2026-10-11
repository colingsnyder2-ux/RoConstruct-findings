// roc 2010-06 006efd80  unit: RBX::VInstance::?$NonFactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006efd80
//
// 006efd80  83ec10               sub esp, 0x10
// 006efd83  53                   push ebx
// 006efd84  55                   push ebp
// 006efd85  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006efd89  56                   push esi
// 006efd8a  55                   push ebp
// 006efd8b  8bf1                 mov esi, ecx
// 006efd8d  e86eeafcff           call 0x6be800
// 006efd92  8bd8                 mov ebx, eax
// 006efd94  895c2410             mov dword ptr [esp + 0x10], ebx
// 006efd98  85f6                 test esi, esi
// 006efd9a  7506                 jne 0x6efda2
// 006efd9c  ff150ca99e00         call dword ptr [0x9ea90c]
// 006efda2  8b06                 mov eax, dword ptr [esi]
// 006efda4  57                   push edi
// 006efda5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006efda8  89442410             mov dword ptr [esp + 0x10], eax
// 006efdac  85c0                 test eax, eax
// 006efdae  7404                 je 0x6efdb4
// 006efdb0  3bc0                 cmp eax, eax
// 006efdb2  7406                 je 0x6efdba
// 006efdb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 006efdba  3bdf                 cmp ebx, edi
// 006efdbc  5f                   pop edi
// 006efdbd  7418                 je 0x6efdd7
// 006efdbf  83c30c               add ebx, 0xc
// 006efdc2  53                   push ebx
// 006efdc3  55                   push ebp
// 006efdc4  ff151ca59e00         call dword ptr [0x9ea51c]
// 006efdca  83c408               add esp, 8
// 006efdcd  84c0                 test al, al
// 006efdcf  7506                 jne 0x6efdd7
// 006efdd1  8d4c240c             lea ecx, [esp + 0xc]
// 006efdd5  eb11                 jmp 0x6efde8
// 006efdd7  8b0e                 mov ecx, dword ptr [esi]
// 006efdd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 006efddc  894c2414             mov dword ptr [esp + 0x14], ecx
// 006efde0  89442418             mov dword ptr [esp + 0x18], eax
// 006efde4  8d4c2414             lea ecx, [esp + 0x14]
// 006efde8  8b11                 mov edx, dword ptr [ecx]
// 006efdea  8b442420             mov eax, dword ptr [esp + 0x20]
// 006efdee  8b4904               mov ecx, dword ptr [ecx + 4]
// 006efdf1  5e                   pop esi
// 006efdf2  5d                   pop ebp
// 006efdf3  8910                 mov dword ptr [eax], edx
// 006efdf5  894804               mov dword ptr [eax + 4], ecx
// 006efdf8  5b                   pop ebx
// 006efdf9  83c410               add esp, 0x10
// 006efdfc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

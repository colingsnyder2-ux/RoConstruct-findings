// roc 2010-06 008cd7d0  unit: Ogre::RbxMeshLoader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cd7d0
//
// 008cd7d0  83ec10               sub esp, 0x10
// 008cd7d3  53                   push ebx
// 008cd7d4  55                   push ebp
// 008cd7d5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008cd7d9  56                   push esi
// 008cd7da  55                   push ebp
// 008cd7db  8bf1                 mov esi, ecx
// 008cd7dd  e8def8ffff           call 0x8cd0c0
// 008cd7e2  8bd8                 mov ebx, eax
// 008cd7e4  895c2410             mov dword ptr [esp + 0x10], ebx
// 008cd7e8  85f6                 test esi, esi
// 008cd7ea  7506                 jne 0x8cd7f2
// 008cd7ec  ff150ca99e00         call dword ptr [0x9ea90c]
// 008cd7f2  8b06                 mov eax, dword ptr [esi]
// 008cd7f4  57                   push edi
// 008cd7f5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 008cd7f8  89442410             mov dword ptr [esp + 0x10], eax
// 008cd7fc  85c0                 test eax, eax
// 008cd7fe  7404                 je 0x8cd804
// 008cd800  3bc0                 cmp eax, eax
// 008cd802  7406                 je 0x8cd80a
// 008cd804  ff150ca99e00         call dword ptr [0x9ea90c]
// 008cd80a  3bdf                 cmp ebx, edi
// 008cd80c  5f                   pop edi
// 008cd80d  7418                 je 0x8cd827
// 008cd80f  83c30c               add ebx, 0xc
// 008cd812  53                   push ebx
// 008cd813  55                   push ebp
// 008cd814  ff151ca59e00         call dword ptr [0x9ea51c]
// 008cd81a  83c408               add esp, 8
// 008cd81d  84c0                 test al, al
// 008cd81f  7506                 jne 0x8cd827
// 008cd821  8d4c240c             lea ecx, [esp + 0xc]
// 008cd825  eb11                 jmp 0x8cd838
// 008cd827  8b0e                 mov ecx, dword ptr [esi]
// 008cd829  8b4618               mov eax, dword ptr [esi + 0x18]
// 008cd82c  894c2414             mov dword ptr [esp + 0x14], ecx
// 008cd830  89442418             mov dword ptr [esp + 0x18], eax
// 008cd834  8d4c2414             lea ecx, [esp + 0x14]
// 008cd838  8b11                 mov edx, dword ptr [ecx]
// 008cd83a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cd83e  8b4904               mov ecx, dword ptr [ecx + 4]
// 008cd841  5e                   pop esi
// 008cd842  5d                   pop ebp
// 008cd843  8910                 mov dword ptr [eax], edx
// 008cd845  894804               mov dword ptr [eax + 4], ecx
// 008cd848  5b                   pop ebx
// 008cd849  83c410               add esp, 0x10
// 008cd84c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp

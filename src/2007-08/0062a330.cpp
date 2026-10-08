// roc 2007-08 0062a330  unit: RBX::AssemblyStage  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062a330
//
// 0062a330  83ec10               sub esp, 0x10
// 0062a333  53                   push ebx
// 0062a334  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062a338  56                   push esi
// 0062a339  57                   push edi
// 0062a33a  53                   push ebx
// 0062a33b  8bf1                 mov esi, ecx
// 0062a33d  e8fefbffff           call 0x629f40
// 0062a342  85f6                 test esi, esi
// 0062a344  8bf8                 mov edi, eax
// 0062a346  897c2410             mov dword ptr [esp + 0x10], edi
// 0062a34a  7506                 jne 0x62a352
// 0062a34c  ff15d8e67700         call dword ptr [0x77e6d8]
// 0062a352  3b7e04               cmp edi, dword ptr [esi + 4]
// 0062a355  8974240c             mov dword ptr [esp + 0xc], esi
// 0062a359  7418                 je 0x62a373
// 0062a35b  83c70c               add edi, 0xc
// 0062a35e  57                   push edi
// 0062a35f  53                   push ebx
// 0062a360  ff1520e67700         call dword ptr [0x77e620]
// 0062a366  83c408               add esp, 8
// 0062a369  84c0                 test al, al
// 0062a36b  7506                 jne 0x62a373
// 0062a36d  8d4c240c             lea ecx, [esp + 0xc]
// 0062a371  eb0f                 jmp 0x62a382
// 0062a373  8b4604               mov eax, dword ptr [esi + 4]
// 0062a376  89442418             mov dword ptr [esp + 0x18], eax
// 0062a37a  89742414             mov dword ptr [esp + 0x14], esi
// 0062a37e  8d4c2414             lea ecx, [esp + 0x14]
// 0062a382  8b11                 mov edx, dword ptr [ecx]
// 0062a384  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062a388  8b4904               mov ecx, dword ptr [ecx + 4]
// 0062a38b  5f                   pop edi
// 0062a38c  5e                   pop esi
// 0062a38d  8910                 mov dword ptr [eax], edx
// 0062a38f  894804               mov dword ptr [eax + 4], ecx
// 0062a392  5b                   pop ebx
// 0062a393  83c410               add esp, 0x10
// 0062a396  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

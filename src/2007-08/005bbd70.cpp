// roc 2007-08 005bbd70  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbd70
//
// 005bbd70  83ec10               sub esp, 0x10
// 005bbd73  53                   push ebx
// 005bbd74  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005bbd78  56                   push esi
// 005bbd79  57                   push edi
// 005bbd7a  53                   push ebx
// 005bbd7b  8bf1                 mov esi, ecx
// 005bbd7d  e8de6ef8ff           call 0x542c60
// 005bbd82  85f6                 test esi, esi
// 005bbd84  8bf8                 mov edi, eax
// 005bbd86  897c2410             mov dword ptr [esp + 0x10], edi
// 005bbd8a  7506                 jne 0x5bbd92
// 005bbd8c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005bbd92  3b7e04               cmp edi, dword ptr [esi + 4]
// 005bbd95  8974240c             mov dword ptr [esp + 0xc], esi
// 005bbd99  7418                 je 0x5bbdb3
// 005bbd9b  83c70c               add edi, 0xc
// 005bbd9e  57                   push edi
// 005bbd9f  53                   push ebx
// 005bbda0  ff1520e67700         call dword ptr [0x77e620]
// 005bbda6  83c408               add esp, 8
// 005bbda9  84c0                 test al, al
// 005bbdab  7506                 jne 0x5bbdb3
// 005bbdad  8d4c240c             lea ecx, [esp + 0xc]
// 005bbdb1  eb0f                 jmp 0x5bbdc2
// 005bbdb3  8b4604               mov eax, dword ptr [esi + 4]
// 005bbdb6  89442418             mov dword ptr [esp + 0x18], eax
// 005bbdba  89742414             mov dword ptr [esp + 0x14], esi
// 005bbdbe  8d4c2414             lea ecx, [esp + 0x14]
// 005bbdc2  8b11                 mov edx, dword ptr [ecx]
// 005bbdc4  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bbdc8  8b4904               mov ecx, dword ptr [ecx + 4]
// 005bbdcb  5f                   pop edi
// 005bbdcc  5e                   pop esi
// 005bbdcd  8910                 mov dword ptr [eax], edx
// 005bbdcf  894804               mov dword ptr [eax + 4], ecx
// 005bbdd2  5b                   pop ebx
// 005bbdd3  83c410               add esp, 0x10
// 005bbdd6  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

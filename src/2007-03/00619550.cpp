// roc 2007-03 00619550  unit: seg_00610000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00619550
//
// 00619550  83ec10               sub esp, 0x10
// 00619553  53                   push ebx
// 00619554  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00619558  56                   push esi
// 00619559  57                   push edi
// 0061955a  53                   push ebx
// 0061955b  8bf1                 mov esi, ecx
// 0061955d  e8cef1ffff           call 0x618730
// 00619562  85f6                 test esi, esi
// 00619564  8bf8                 mov edi, eax
// 00619566  897c2410             mov dword ptr [esp + 0x10], edi
// 0061956a  7506                 jne 0x619572
// 0061956c  ff1544e97700         call dword ptr [0x77e944]
// 00619572  3b7e04               cmp edi, dword ptr [esi + 4]
// 00619575  8974240c             mov dword ptr [esp + 0xc], esi
// 00619579  7418                 je 0x619593
// 0061957b  83c70c               add edi, 0xc
// 0061957e  57                   push edi
// 0061957f  53                   push ebx
// 00619580  ff15e0e67700         call dword ptr [0x77e6e0]
// 00619586  83c408               add esp, 8
// 00619589  84c0                 test al, al
// 0061958b  7506                 jne 0x619593
// 0061958d  8d4c240c             lea ecx, [esp + 0xc]
// 00619591  eb0f                 jmp 0x6195a2
// 00619593  8b4604               mov eax, dword ptr [esi + 4]
// 00619596  89442418             mov dword ptr [esp + 0x18], eax
// 0061959a  89742414             mov dword ptr [esp + 0x14], esi
// 0061959e  8d4c2414             lea ecx, [esp + 0x14]
// 006195a2  8b11                 mov edx, dword ptr [ecx]
// 006195a4  8b442420             mov eax, dword ptr [esp + 0x20]
// 006195a8  8b4904               mov ecx, dword ptr [ecx + 4]
// 006195ab  5f                   pop edi
// 006195ac  5e                   pop esi
// 006195ad  8910                 mov dword ptr [eax], edx
// 006195af  894804               mov dword ptr [eax + 4], ecx
// 006195b2  5b                   pop ebx
// 006195b3  83c410               add esp, 0x10
// 006195b6  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

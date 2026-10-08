// roc 2007-08 00569ab0  unit: RBX::ModelInstance  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569ab0
//
// 00569ab0  83ec10               sub esp, 0x10
// 00569ab3  53                   push ebx
// 00569ab4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00569ab8  56                   push esi
// 00569ab9  57                   push edi
// 00569aba  53                   push ebx
// 00569abb  8bf1                 mov esi, ecx
// 00569abd  e85efbffff           call 0x569620
// 00569ac2  85f6                 test esi, esi
// 00569ac4  8bf8                 mov edi, eax
// 00569ac6  897c2410             mov dword ptr [esp + 0x10], edi
// 00569aca  7506                 jne 0x569ad2
// 00569acc  ff15d8e67700         call dword ptr [0x77e6d8]
// 00569ad2  3b7e04               cmp edi, dword ptr [esi + 4]
// 00569ad5  8974240c             mov dword ptr [esp + 0xc], esi
// 00569ad9  7418                 je 0x569af3
// 00569adb  83c70c               add edi, 0xc
// 00569ade  57                   push edi
// 00569adf  53                   push ebx
// 00569ae0  ff1520e67700         call dword ptr [0x77e620]
// 00569ae6  83c408               add esp, 8
// 00569ae9  84c0                 test al, al
// 00569aeb  7506                 jne 0x569af3
// 00569aed  8d4c240c             lea ecx, [esp + 0xc]
// 00569af1  eb0f                 jmp 0x569b02
// 00569af3  8b4604               mov eax, dword ptr [esi + 4]
// 00569af6  89442418             mov dword ptr [esp + 0x18], eax
// 00569afa  89742414             mov dword ptr [esp + 0x14], esi
// 00569afe  8d4c2414             lea ecx, [esp + 0x14]
// 00569b02  8b11                 mov edx, dword ptr [ecx]
// 00569b04  8b442420             mov eax, dword ptr [esp + 0x20]
// 00569b08  8b4904               mov ecx, dword ptr [ecx + 4]
// 00569b0b  5f                   pop edi
// 00569b0c  5e                   pop esi
// 00569b0d  8910                 mov dword ptr [eax], edx
// 00569b0f  894804               mov dword ptr [eax + 4], ecx
// 00569b12  5b                   pop ebx
// 00569b13  83c410               add esp, 0x10
// 00569b16  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

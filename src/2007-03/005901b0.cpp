// roc 2007-03 005901b0  unit: seg_00590000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005901b0
//
// 005901b0  83ec10               sub esp, 0x10
// 005901b3  53                   push ebx
// 005901b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005901b8  56                   push esi
// 005901b9  57                   push edi
// 005901ba  53                   push ebx
// 005901bb  8bf1                 mov esi, ecx
// 005901bd  e8ae2b0200           call 0x5b2d70
// 005901c2  85f6                 test esi, esi
// 005901c4  8bf8                 mov edi, eax
// 005901c6  897c2410             mov dword ptr [esp + 0x10], edi
// 005901ca  7506                 jne 0x5901d2
// 005901cc  ff1544e97700         call dword ptr [0x77e944]
// 005901d2  3b7e04               cmp edi, dword ptr [esi + 4]
// 005901d5  8974240c             mov dword ptr [esp + 0xc], esi
// 005901d9  7418                 je 0x5901f3
// 005901db  83c70c               add edi, 0xc
// 005901de  57                   push edi
// 005901df  53                   push ebx
// 005901e0  ff15e0e67700         call dword ptr [0x77e6e0]
// 005901e6  83c408               add esp, 8
// 005901e9  84c0                 test al, al
// 005901eb  7506                 jne 0x5901f3
// 005901ed  8d4c240c             lea ecx, [esp + 0xc]
// 005901f1  eb0f                 jmp 0x590202
// 005901f3  8b4604               mov eax, dword ptr [esi + 4]
// 005901f6  89442418             mov dword ptr [esp + 0x18], eax
// 005901fa  89742414             mov dword ptr [esp + 0x14], esi
// 005901fe  8d4c2414             lea ecx, [esp + 0x14]
// 00590202  8b11                 mov edx, dword ptr [ecx]
// 00590204  8b442420             mov eax, dword ptr [esp + 0x20]
// 00590208  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059020b  5f                   pop edi
// 0059020c  5e                   pop esi
// 0059020d  8910                 mov dword ptr [eax], edx
// 0059020f  894804               mov dword ptr [eax + 4], ecx
// 00590212  5b                   pop ebx
// 00590213  83c410               add esp, 0x10
// 00590216  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

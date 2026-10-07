// roc 2008-06 00500690  unit: RBX::ViewNew::HeadBuilder  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500690
//
// 00500690  53                   push ebx
// 00500691  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00500695  55                   push ebp
// 00500696  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0050069a  56                   push esi
// 0050069b  8bf1                 mov esi, ecx
// 0050069d  8b06                 mov eax, dword ptr [esi]
// 0050069f  57                   push edi
// 005006a0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005006a4  3bf8                 cmp edi, eax
// 005006a6  720e                 jb 0x5006b6
// 005006a8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005006ab  8d1488               lea edx, [eax + ecx*4]
// 005006ae  3bfa                 cmp edi, edx
// 005006b0  0f829a000000         jb 0x500750
// 005006b6  3bd8                 cmp ebx, eax
// 005006b8  720e                 jb 0x5006c8
// 005006ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 005006bd  8d1488               lea edx, [eax + ecx*4]
// 005006c0  3bda                 cmp ebx, edx
// 005006c2  0f8288000000         jb 0x500750
// 005006c8  3be8                 cmp ebp, eax
// 005006ca  720a                 jb 0x5006d6
// 005006cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005006cf  8d1488               lea edx, [eax + ecx*4]
// 005006d2  3bea                 cmp ebp, edx
// 005006d4  727a                 jb 0x500750
// 005006d6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005006d9  8d5102               lea edx, [ecx + 2]
// 005006dc  3b5608               cmp edx, dword ptr [esi + 8]
// 005006df  7d39                 jge 0x50071a
// 005006e1  8d0488               lea eax, [eax + ecx*4]
// 005006e4  85c0                 test eax, eax
// 005006e6  7404                 je 0x5006ec
// 005006e8  8b0f                 mov ecx, dword ptr [edi]
// 005006ea  8908                 mov dword ptr [eax], ecx
// 005006ec  8b5604               mov edx, dword ptr [esi + 4]
// 005006ef  8b06                 mov eax, dword ptr [esi]
// 005006f1  8d449004             lea eax, [eax + edx*4 + 4]
// 005006f5  85c0                 test eax, eax
// 005006f7  7404                 je 0x5006fd
// 005006f9  8b0b                 mov ecx, dword ptr [ebx]
// 005006fb  8908                 mov dword ptr [eax], ecx
// 005006fd  8b5604               mov edx, dword ptr [esi + 4]
// 00500700  8b06                 mov eax, dword ptr [esi]
// 00500702  8d449008             lea eax, [eax + edx*4 + 8]
// 00500706  85c0                 test eax, eax
// 00500708  7405                 je 0x50070f
// 0050070a  8b4d00               mov ecx, dword ptr [ebp]
// 0050070d  8908                 mov dword ptr [eax], ecx
// 0050070f  83460403             add dword ptr [esi + 4], 3
// 00500713  5f                   pop edi
// 00500714  5e                   pop esi
// 00500715  5d                   pop ebp
// 00500716  5b                   pop ebx
// 00500717  c20c00               ret 0xc
// 0050071a  83c103               add ecx, 3
// 0050071d  6a00                 push 0
// 0050071f  51                   push ecx
// 00500720  8bce                 mov ecx, esi
// 00500722  e889fef7ff           call 0x4805b0
// 00500727  8b5604               mov edx, dword ptr [esi + 4]
// 0050072a  8b06                 mov eax, dword ptr [esi]
// 0050072c  8b0f                 mov ecx, dword ptr [edi]
// 0050072e  894c90f4             mov dword ptr [eax + edx*4 - 0xc], ecx
// 00500732  8b5604               mov edx, dword ptr [esi + 4]
// 00500735  8b06                 mov eax, dword ptr [esi]
// 00500737  8b0b                 mov ecx, dword ptr [ebx]
// 00500739  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 0050073d  8b5604               mov edx, dword ptr [esi + 4]
// 00500740  8b06                 mov eax, dword ptr [esi]
// 00500742  8b4d00               mov ecx, dword ptr [ebp]
// 00500745  5f                   pop edi
// 00500746  5e                   pop esi
// 00500747  5d                   pop ebp
// 00500748  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0050074c  5b                   pop ebx
// 0050074d  c20c00               ret 0xc
// 00500750  8b17                 mov edx, dword ptr [edi]
// 00500752  8b03                 mov eax, dword ptr [ebx]
// 00500754  8b4d00               mov ecx, dword ptr [ebp]
// 00500757  89542418             mov dword ptr [esp + 0x18], edx
// 0050075b  8d542414             lea edx, [esp + 0x14]
// 0050075f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00500763  52                   push edx
// 00500764  894c2418             mov dword ptr [esp + 0x18], ecx
// 00500768  8d442420             lea eax, [esp + 0x20]
// 0050076c  50                   push eax
// 0050076d  8d4c2420             lea ecx, [esp + 0x20]
// 00500771  51                   push ecx
// 00500772  8bce                 mov ecx, esi
// 00500774  e817ffffff           call 0x500690
// 00500779  5f                   pop edi
// 0050077a  5e                   pop esi
// 0050077b  5d                   pop ebp
// 0050077c  5b                   pop ebx
// 0050077d  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@H@G3D@@QAEXABH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp

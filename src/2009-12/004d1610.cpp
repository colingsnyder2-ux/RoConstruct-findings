// roc 2009-12 004d1610  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1610
//
// 004d1610  51                   push ecx
// 004d1611  53                   push ebx
// 004d1612  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d1616  55                   push ebp
// 004d1617  56                   push esi
// 004d1618  57                   push edi
// 004d1619  8bf1                 mov esi, ecx
// 004d161b  8b4608               mov eax, dword ptr [esi + 8]
// 004d161e  8d3c9d00000000       lea edi, [ebx*4]
// 004d1625  6a10                 push 0x10
// 004d1627  57                   push edi
// 004d1628  89442418             mov dword ptr [esp + 0x18], eax
// 004d162c  e88f8c1100           call 0x5ea2c0
// 004d1631  57                   push edi
// 004d1632  6a00                 push 0
// 004d1634  50                   push eax
// 004d1635  894608               mov dword ptr [esi + 8], eax
// 004d1638  e883991100           call 0x5eafc0
// 004d163d  33ed                 xor ebp, ebp
// 004d163f  83c414               add esp, 0x14
// 004d1642  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d1645  7e2f                 jle 0x4d1676
// 004d1647  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d164b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004d164e  85c9                 test ecx, ecx
// 004d1650  741e                 je 0x4d1670
// 004d1652  8b01                 mov eax, dword ptr [ecx]
// 004d1654  33d2                 xor edx, edx
// 004d1656  f7f3                 div ebx
// 004d1658  8b4608               mov eax, dword ptr [esi + 8]
// 004d165b  8b7948               mov edi, dword ptr [ecx + 0x48]
// 004d165e  8b0490               mov eax, dword ptr [eax + edx*4]
// 004d1661  894148               mov dword ptr [ecx + 0x48], eax
// 004d1664  8b4608               mov eax, dword ptr [esi + 8]
// 004d1667  890c90               mov dword ptr [eax + edx*4], ecx
// 004d166a  8bcf                 mov ecx, edi
// 004d166c  85ff                 test edi, edi
// 004d166e  75e2                 jne 0x4d1652
// 004d1670  45                   inc ebp
// 004d1671  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004d1674  7cd1                 jl 0x4d1647
// 004d1676  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d167a  51                   push ecx
// 004d167b  e8608d1100           call 0x5ea3e0
// 004d1680  83c404               add esp, 4
// 004d1683  5f                   pop edi
// 004d1684  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d1687  5e                   pop esi
// 004d1688  5d                   pop ebp
// 004d1689  5b                   pop ebx
// 004d168a  59                   pop ecx
// 004d168b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp

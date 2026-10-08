// roc 2009-12 004d3540  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3540
//
// 004d3540  51                   push ecx
// 004d3541  53                   push ebx
// 004d3542  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d3546  55                   push ebp
// 004d3547  56                   push esi
// 004d3548  57                   push edi
// 004d3549  8bf1                 mov esi, ecx
// 004d354b  8b4608               mov eax, dword ptr [esi + 8]
// 004d354e  8d3c9d00000000       lea edi, [ebx*4]
// 004d3555  6a10                 push 0x10
// 004d3557  57                   push edi
// 004d3558  89442418             mov dword ptr [esp + 0x18], eax
// 004d355c  e85f6d1100           call 0x5ea2c0
// 004d3561  57                   push edi
// 004d3562  6a00                 push 0
// 004d3564  50                   push eax
// 004d3565  894608               mov dword ptr [esi + 8], eax
// 004d3568  e8537a1100           call 0x5eafc0
// 004d356d  33ed                 xor ebp, ebp
// 004d356f  83c414               add esp, 0x14
// 004d3572  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004d3575  7e2f                 jle 0x4d35a6
// 004d3577  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d357b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004d357e  85c9                 test ecx, ecx
// 004d3580  741e                 je 0x4d35a0
// 004d3582  8b01                 mov eax, dword ptr [ecx]
// 004d3584  33d2                 xor edx, edx
// 004d3586  f7f3                 div ebx
// 004d3588  8b4608               mov eax, dword ptr [esi + 8]
// 004d358b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 004d358e  8b0490               mov eax, dword ptr [eax + edx*4]
// 004d3591  894124               mov dword ptr [ecx + 0x24], eax
// 004d3594  8b4608               mov eax, dword ptr [esi + 8]
// 004d3597  890c90               mov dword ptr [eax + edx*4], ecx
// 004d359a  8bcf                 mov ecx, edi
// 004d359c  85ff                 test edi, edi
// 004d359e  75e2                 jne 0x4d3582
// 004d35a0  45                   inc ebp
// 004d35a1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004d35a4  7cd1                 jl 0x4d3577
// 004d35a6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d35aa  51                   push ecx
// 004d35ab  e8306e1100           call 0x5ea3e0
// 004d35b0  83c404               add esp, 4
// 004d35b3  5f                   pop edi
// 004d35b4  895e0c               mov dword ptr [esi + 0xc], ebx
// 004d35b7  5e                   pop esi
// 004d35b8  5d                   pop ebp
// 004d35b9  5b                   pop ebx
// 004d35ba  59                   pop ecx
// 004d35bb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp

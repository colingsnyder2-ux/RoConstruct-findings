// roc 2009-12 00851bf0  unit: CXTPPropExchangeArchive  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851bf0
//
// 00851bf0  83ec08               sub esp, 8
// 00851bf3  53                   push ebx
// 00851bf4  56                   push esi
// 00851bf5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00851bf9  8b06                 mov eax, dword ptr [esi]
// 00851bfb  8b5604               mov edx, dword ptr [esi + 4]
// 00851bfe  57                   push edi
// 00851bff  b120                 mov cl, 0x20
// 00851c01  e86a520d00           call 0x926e70
// 00851c06  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00851c0a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00851c0e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00851c12  8944240c             mov dword ptr [esp + 0xc], eax
// 00851c16  8b06                 mov eax, dword ptr [esi]
// 00851c18  51                   push ecx
// 00851c19  89442414             mov dword ptr [esp + 0x14], eax
// 00851c1d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00851c21  50                   push eax
// 00851c22  8d4c2414             lea ecx, [esp + 0x14]
// 00851c26  51                   push ecx
// 00851c27  52                   push edx
// 00851c28  53                   push ebx
// 00851c29  e822efffff           call 0x850b50
// 00851c2e  8bf8                 mov edi, eax
// 00851c30  83c414               add esp, 0x14
// 00851c33  85ff                 test edi, edi
// 00851c35  742c                 je 0x851c63
// 00851c37  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00851c3b  7426                 je 0x851c63
// 00851c3d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00851c41  c7460400000000       mov dword ptr [esi + 4], 0
// 00851c48  8b5604               mov edx, dword ptr [esi + 4]
// 00851c4b  b120                 mov cl, 0x20
// 00851c4d  e8fe510d00           call 0x926e50
// 00851c52  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851c56  8906                 mov dword ptr [esi], eax
// 00851c58  010e                 add dword ptr [esi], ecx
// 00851c5a  895604               mov dword ptr [esi + 4], edx
// 00851c5d  8bc7                 mov eax, edi
// 00851c5f  83560400             adc dword ptr [esi + 4], 0
// 00851c63  5f                   pop edi
// 00851c64  5e                   pop esi
// 00851c65  5b                   pop ebx
// 00851c66  83c408               add esp, 8
// 00851c69  c3                   ret 
// copied from an identical function in another client (function ?PX_UI8@@YAHPAVCXTPPropExchange@@PBDAA_K_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp
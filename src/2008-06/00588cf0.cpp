// roc 2008-06 00588cf0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00588cf0
//
// 00588cf0  53                   push ebx
// 00588cf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00588cf5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00588cf8  56                   push esi
// 00588cf9  57                   push edi
// 00588cfa  8bf1                 mov esi, ecx
// 00588cfc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00588cff  83c004               add eax, 4
// 00588d02  8b00                 mov eax, dword ptr [eax]
// 00588d04  57                   push edi
// 00588d05  50                   push eax
// 00588d06  e885f4ffff           call 0x588190
// 00588d0b  894704               mov dword ptr [edi + 4], eax
// 00588d0e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00588d11  8b5618               mov edx, dword ptr [esi + 0x18]
// 00588d14  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00588d17  8b4204               mov eax, dword ptr [edx + 4]
// 00588d1a  80781900             cmp byte ptr [eax + 0x19], 0
// 00588d1e  7537                 jne 0x588d57
// 00588d20  8b08                 mov ecx, dword ptr [eax]
// 00588d22  80791900             cmp byte ptr [ecx + 0x19], 0
// 00588d26  750a                 jne 0x588d32
// 00588d28  8bc1                 mov eax, ecx
// 00588d2a  8b08                 mov ecx, dword ptr [eax]
// 00588d2c  80791900             cmp byte ptr [ecx + 0x19], 0
// 00588d30  74f6                 je 0x588d28
// 00588d32  8902                 mov dword ptr [edx], eax
// 00588d34  8b7618               mov esi, dword ptr [esi + 0x18]
// 00588d37  8b4e04               mov ecx, dword ptr [esi + 4]
// 00588d3a  8b4108               mov eax, dword ptr [ecx + 8]
// 00588d3d  80781900             cmp byte ptr [eax + 0x19], 0
// 00588d41  750b                 jne 0x588d4e
// 00588d43  8bc8                 mov ecx, eax
// 00588d45  8b4108               mov eax, dword ptr [ecx + 8]
// 00588d48  80781900             cmp byte ptr [eax + 0x19], 0
// 00588d4c  74f5                 je 0x588d43
// 00588d4e  5f                   pop edi
// 00588d4f  894e08               mov dword ptr [esi + 8], ecx
// 00588d52  5e                   pop esi
// 00588d53  5b                   pop ebx
// 00588d54  c20400               ret 4
// 00588d57  8912                 mov dword ptr [edx], edx
// 00588d59  8b7618               mov esi, dword ptr [esi + 0x18]
// 00588d5c  5f                   pop edi
// 00588d5d  897608               mov dword ptr [esi + 8], esi
// 00588d60  5e                   pop esi
// 00588d61  5b                   pop ebx
// 00588d62  c20400               ret 4
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@IUGpuLogicalIndexUse@Ogre@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUGpuLogicalIndexUse@Ogre@@@std@@@4@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp

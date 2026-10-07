// roc 2011-06 004ec9e0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec9e0
//
// 004ec9e0  53                   push ebx
// 004ec9e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004ec9e5  56                   push esi
// 004ec9e6  8bf1                 mov esi, ecx
// 004ec9e8  85db                 test ebx, ebx
// 004ec9ea  7707                 ja 0x4ec9f3
// 004ec9ec  5e                   pop esi
// 004ec9ed  32c0                 xor al, al
// 004ec9ef  5b                   pop ebx
// 004ec9f0  c20c00               ret 0xc
// 004ec9f3  8b4608               mov eax, dword ptr [esi + 8]
// 004ec9f6  8d0c18               lea ecx, [eax + ebx]
// 004ec9f9  3b0e                 cmp ecx, dword ptr [esi]
// 004ec9fb  77ef                 ja 0x4ec9ec
// 004ec9fd  8bc8                 mov ecx, eax
// 004ec9ff  83e107               and ecx, 7
// 004eca02  894c2410             mov dword ptr [esp + 0x10], ecx
// 004eca06  7529                 jne 0x4eca31
// 004eca08  f6c307               test bl, 7
// 004eca0b  7524                 jne 0x4eca31
// 004eca0d  c1e803               shr eax, 3
// 004eca10  03460c               add eax, dword ptr [esi + 0xc]
// 004eca13  8bd3                 mov edx, ebx
// 004eca15  c1ea03               shr edx, 3
// 004eca18  52                   push edx
// 004eca19  50                   push eax
// 004eca1a  8b442414             mov eax, dword ptr [esp + 0x14]
// 004eca1e  50                   push eax
// 004eca1f  e8b8eb3100           call 0x80b5dc
// 004eca24  83c40c               add esp, 0xc
// 004eca27  015e08               add dword ptr [esi + 8], ebx
// 004eca2a  5e                   pop esi
// 004eca2b  b001                 mov al, 1
// 004eca2d  5b                   pop ebx
// 004eca2e  c20c00               ret 0xc
// 004eca31  55                   push ebp
// 004eca32  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004eca36  57                   push edi
// 004eca37  8d4b07               lea ecx, [ebx + 7]
// 004eca3a  c1e903               shr ecx, 3
// 004eca3d  51                   push ecx
// 004eca3e  33ff                 xor edi, edi
// 004eca40  57                   push edi
// 004eca41  55                   push ebp
// 004eca42  e89de83100           call 0x80b2e4
// 004eca47  83c40c               add esp, 0xc
// 004eca4a  8d9b00000000         lea ebx, [ebx]
// 004eca50  8b5608               mov edx, dword ptr [esi + 8]
// 004eca53  8b460c               mov eax, dword ptr [esi + 0xc]
// 004eca56  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004eca5a  c1ea03               shr edx, 3
// 004eca5d  8a1402               mov dl, byte ptr [edx + eax]
// 004eca60  d2e2                 shl dl, cl
// 004eca62  08142f               or byte ptr [edi + ebp], dl
// 004eca65  85c9                 test ecx, ecx
// 004eca67  7622                 jbe 0x4eca8b
// 004eca69  b808000000           mov eax, 8
// 004eca6e  2bc1                 sub eax, ecx
// 004eca70  3bd8                 cmp ebx, eax
// 004eca72  7617                 jbe 0x4eca8b
// 004eca74  8b4e08               mov ecx, dword ptr [esi + 8]
// 004eca77  8b560c               mov edx, dword ptr [esi + 0xc]
// 004eca7a  c1e903               shr ecx, 3
// 004eca7d  8a541101             mov dl, byte ptr [ecx + edx + 1]
// 004eca81  8ac8                 mov cl, al
// 004eca83  d2ea                 shr dl, cl
// 004eca85  0a142f               or dl, byte ptr [edi + ebp]
// 004eca88  88142f               mov byte ptr [edi + ebp], dl
// 004eca8b  b808000000           mov eax, 8
// 004eca90  3bd8                 cmp ebx, eax
// 004eca92  7213                 jb 0x4ecaa7
// 004eca94  014608               add dword ptr [esi + 8], eax
// 004eca97  2bd8                 sub ebx, eax
// 004eca99  47                   inc edi
// 004eca9a  85db                 test ebx, ebx
// 004eca9c  77b2                 ja 0x4eca50
// 004eca9e  5f                   pop edi
// 004eca9f  5d                   pop ebp
// 004ecaa0  5e                   pop esi
// 004ecaa1  b001                 mov al, 1
// 004ecaa3  5b                   pop ebx
// 004ecaa4  c20c00               ret 0xc
// 004ecaa7  83c3f8               add ebx, -8
// 004ecaaa  791c                 jns 0x4ecac8
// 004ecaac  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ecab1  7407                 je 0x4ecaba
// 004ecab3  8acb                 mov cl, bl
// 004ecab5  f6d9                 neg cl
// 004ecab7  d22c2f               shr byte ptr [edi + ebp], cl
// 004ecaba  5f                   pop edi
// 004ecabb  03d8                 add ebx, eax
// 004ecabd  015e08               add dword ptr [esi + 8], ebx
// 004ecac0  5d                   pop ebp
// 004ecac1  5e                   pop esi
// 004ecac2  b001                 mov al, 1
// 004ecac4  5b                   pop ebx
// 004ecac5  c20c00               ret 0xc
// 004ecac8  014608               add dword ptr [esi + 8], eax
// 004ecacb  5f                   pop edi
// 004ecacc  5d                   pop ebp
// 004ecacd  5e                   pop esi
// 004ecace  b001                 mov al, 1
// 004ecad0  5b                   pop ebx
// 004ecad1  c20c00               ret 0xc
// library rbx2016-raknet/BitStream.cpp (function ?ReadBits@BitStream@RakNet@@QAE_NPAEI_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp

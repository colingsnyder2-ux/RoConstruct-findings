// roc 2007-03 0071bde0  unit: seg_00710000  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071bde0
//
// 0071bde0  8b442404             mov eax, dword ptr [esp + 4]
// 0071bde4  8b10                 mov edx, dword ptr [eax]
// 0071bde6  53                   push ebx
// 0071bde7  55                   push ebp
// 0071bde8  56                   push esi
// 0071bde9  8b742414             mov esi, dword ptr [esp + 0x14]
// 0071bded  837e5400             cmp dword ptr [esi + 0x54], 0
// 0071bdf1  895640               mov dword ptr [esi + 0x40], edx
// 0071bdf4  8b5004               mov edx, dword ptr [eax + 4]
// 0071bdf7  895644               mov dword ptr [esi + 0x44], edx
// 0071bdfa  8b5008               mov edx, dword ptr [eax + 8]
// 0071bdfd  895648               mov dword ptr [esi + 0x48], edx
// 0071be00  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071be03  57                   push edi
// 0071be04  89564c               mov dword ptr [esi + 0x4c], edx
// 0071be07  7424                 je 0x71be2d
// 0071be09  8b5004               mov edx, dword ptr [eax + 4]
// 0071be0c  895610               mov dword ptr [esi + 0x10], edx
// 0071be0f  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071be12  895614               mov dword ptr [esi + 0x14], edx
// 0071be15  8b10                 mov edx, dword ptr [eax]
// 0071be17  895618               mov dword ptr [esi + 0x18], edx
// 0071be1a  8b4008               mov eax, dword ptr [eax + 8]
// 0071be1d  89461c               mov dword ptr [esi + 0x1c], eax
// 0071be20  e89b81fdff           call 0x6f3fc0
// 0071be25  8b8850010000         mov ecx, dword ptr [eax + 0x150]
// 0071be2b  eb22                 jmp 0x71be4f
// 0071be2d  8b10                 mov edx, dword ptr [eax]
// 0071be2f  895610               mov dword ptr [esi + 0x10], edx
// 0071be32  8b5008               mov edx, dword ptr [eax + 8]
// 0071be35  895614               mov dword ptr [esi + 0x14], edx
// 0071be38  8b5004               mov edx, dword ptr [eax + 4]
// 0071be3b  895618               mov dword ptr [esi + 0x18], edx
// 0071be3e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0071be41  89461c               mov dword ptr [esi + 0x1c], eax
// 0071be44  e87781fdff           call 0x6f3fc0
// 0071be49  8b8844010000         mov ecx, dword ptr [eax + 0x144]
// 0071be4f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071be53  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0071be56  894e20               mov dword ptr [esi + 0x20], ecx
// 0071be59  8b5014               mov edx, dword ptr [eax + 0x14]
// 0071be5c  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0071be5f  89560c               mov dword ptr [esi + 0xc], edx
// 0071be62  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0071be65  894e08               mov dword ptr [esi + 8], ecx
// 0071be68  8b5008               mov edx, dword ptr [eax + 8]
// 0071be6b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0071be6e  8916                 mov dword ptr [esi], edx
// 0071be70  8b400c               mov eax, dword ptr [eax + 0xc]
// 0071be73  894604               mov dword ptr [esi + 4], eax
// 0071be76  2bc2                 sub eax, edx
// 0071be78  83c001               add eax, 1
// 0071be7b  8be8                 mov ebp, eax
// 0071be7d  8bc3                 mov eax, ebx
// 0071be7f  2bc1                 sub eax, ecx
// 0071be81  99                   cdq 
// 0071be82  2bc2                 sub eax, edx
// 0071be84  d1f8                 sar eax, 1
// 0071be86  3bc7                 cmp eax, edi
// 0071be88  7d02                 jge 0x71be8c
// 0071be8a  8bf8                 mov edi, eax
// 0071be8c  8b5608               mov edx, dword ptr [esi + 8]
// 0071be8f  8bc3                 mov eax, ebx
// 0071be91  8b1d10d27700         mov ebx, dword ptr [0x77d210]
// 0071be97  03cf                 add ecx, edi
// 0071be99  2bc7                 sub eax, edi
// 0071be9b  85d2                 test edx, edx
// 0071be9d  894e24               mov dword ptr [esi + 0x24], ecx
// 0071bea0  894628               mov dword ptr [esi + 0x28], eax
// 0071bea3  741e                 je 0x71bec3
// 0071bea5  85ed                 test ebp, ebp
// 0071bea7  741a                 je 0x71bec3
// 0071bea9  55                   push ebp
// 0071beaa  52                   push edx
// 0071beab  2bc1                 sub eax, ecx
// 0071bead  50                   push eax
// 0071beae  ffd3                 call ebx
// 0071beb0  8bc8                 mov ecx, eax
// 0071beb2  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071beb5  99                   cdq 
// 0071beb6  2bc2                 sub eax, edx
// 0071beb8  d1f8                 sar eax, 1
// 0071beba  3bc1                 cmp eax, ecx
// 0071bebc  7f02                 jg 0x71bec0
// 0071bebe  8bc1                 mov eax, ecx
// 0071bec0  894620               mov dword ptr [esi + 0x20], eax
// 0071bec3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0071bec6  8b5608               mov edx, dword ptr [esi + 8]
// 0071bec9  8d0c38               lea ecx, [eax + edi]
// 0071becc  8b4614               mov eax, dword ptr [esi + 0x14]
// 0071becf  2bc1                 sub eax, ecx
// 0071bed1  2bc7                 sub eax, edi
// 0071bed3  2b4620               sub eax, dword ptr [esi + 0x20]
// 0071bed6  85d2                 test edx, edx
// 0071bed8  894e3c               mov dword ptr [esi + 0x3c], ecx
// 0071bedb  894638               mov dword ptr [esi + 0x38], eax
// 0071bede  7505                 jne 0x71bee5
// 0071bee0  ba01000000           mov edx, 1
// 0071bee5  2bea                 sub ebp, edx
// 0071bee7  741f                 je 0x71bf08
// 0071bee9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0071beec  2b0e                 sub ecx, dword ptr [esi]
// 0071beee  55                   push ebp
// 0071beef  50                   push eax
// 0071bef0  51                   push ecx
// 0071bef1  ffd3                 call ebx
// 0071bef3  03463c               add eax, dword ptr [esi + 0x3c]
// 0071bef6  5f                   pop edi
// 0071bef7  8bd0                 mov edx, eax
// 0071bef9  035620               add edx, dword ptr [esi + 0x20]
// 0071befc  894634               mov dword ptr [esi + 0x34], eax
// 0071beff  895630               mov dword ptr [esi + 0x30], edx
// 0071bf02  5e                   pop esi
// 0071bf03  5d                   pop ebp
// 0071bf04  5b                   pop ebx
// 0071bf05  c20c00               ret 0xc
// 0071bf08  83c1ff               add ecx, -1
// 0071bf0b  8bd1                 mov edx, ecx
// 0071bf0d  035620               add edx, dword ptr [esi + 0x20]
// 0071bf10  5f                   pop edi
// 0071bf11  894e34               mov dword ptr [esi + 0x34], ecx
// 0071bf14  895630               mov dword ptr [esi + 0x30], edx
// 0071bf17  5e                   pop esi
// 0071bf18  5d                   pop ebp
// 0071bf19  5b                   pop ebx
// 0071bf1a  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectScrollBar.cpp (function ?CalcScrollBarInfo@CXTPSkinObjectFrame@@IAEXPAUtagRECT@@PAUXTP_SKINSCROLLBARPOSINFO@@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectScrollBar.cpp

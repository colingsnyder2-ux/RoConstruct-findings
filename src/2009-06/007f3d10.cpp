// roc 2009-06 007f3d10  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3d10
//
// 007f3d10  83ec08               sub esp, 8
// 007f3d13  56                   push esi
// 007f3d14  8bf1                 mov esi, ecx
// 007f3d16  8b4608               mov eax, dword ptr [esi + 8]
// 007f3d19  83f802               cmp eax, 2
// 007f3d1c  7425                 je 0x7f3d43
// 007f3d1e  83f801               cmp eax, 1
// 007f3d21  750f                 jne 0x7f3d32
// 007f3d23  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f3d26  8b01                 mov eax, dword ptr [ecx]
// 007f3d28  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007f3d2b  56                   push esi
// 007f3d2c  ffd2                 call edx
// 007f3d2e  85c0                 test eax, eax
// 007f3d30  7511                 jne 0x7f3d43
// 007f3d32  83c610               add esi, 0x10
// 007f3d35  56                   push esi
// 007f3d36  ff15c8ee8900         call dword ptr [0x89eec8]
// 007f3d3c  5e                   pop esi
// 007f3d3d  83c408               add esp, 8
// 007f3d40  c20400               ret 4
// 007f3d43  8b06                 mov eax, dword ptr [esi]
// 007f3d45  8b5008               mov edx, dword ptr [eax + 8]
// 007f3d48  53                   push ebx
// 007f3d49  57                   push edi
// 007f3d4a  8d4c240c             lea ecx, [esp + 0xc]
// 007f3d4e  51                   push ecx
// 007f3d4f  8bce                 mov ecx, esi
// 007f3d51  ffd2                 call edx
// 007f3d53  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 007f3d56  8b07                 mov eax, dword ptr [edi]
// 007f3d58  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f3d5b  8bcf                 mov ecx, edi
// 007f3d5d  ffd2                 call edx
// 007f3d5f  83f802               cmp eax, 2
// 007f3d62  740d                 je 0x7f3d71
// 007f3d64  8b07                 mov eax, dword ptr [edi]
// 007f3d66  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f3d69  8bcf                 mov ecx, edi
// 007f3d6b  ffd2                 call edx
// 007f3d6d  85c0                 test eax, eax
// 007f3d6f  7545                 jne 0x7f3db6
// 007f3d71  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007f3d75  8b470c               mov eax, dword ptr [edi + 0xc]
// 007f3d78  034704               add eax, dword ptr [edi + 4]
// 007f3d7b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f3d7f  99                   cdq 
// 007f3d80  2bc2                 sub eax, edx
// 007f3d82  8bc8                 mov ecx, eax
// 007f3d84  8bc3                 mov eax, ebx
// 007f3d86  99                   cdq 
// 007f3d87  2bc2                 sub eax, edx
// 007f3d89  d1f9                 sar ecx, 1
// 007f3d8b  d1f8                 sar eax, 1
// 007f3d8d  03c1                 add eax, ecx
// 007f3d8f  8b4f08               mov ecx, dword ptr [edi + 8]
// 007f3d92  50                   push eax
// 007f3d93  51                   push ecx
// 007f3d94  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 007f3d98  2bc3                 sub eax, ebx
// 007f3d9a  50                   push eax
// 007f3d9b  51                   push ecx
// 007f3d9c  83c610               add esi, 0x10
// 007f3d9f  56                   push esi
// 007f3da0  ff15a4ed8900         call dword ptr [0x89eda4]
// 007f3da6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f3daa  295708               sub dword ptr [edi + 8], edx
// 007f3dad  5f                   pop edi
// 007f3dae  5b                   pop ebx
// 007f3daf  5e                   pop esi
// 007f3db0  83c408               add esp, 8
// 007f3db3  c20400               ret 4
// 007f3db6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007f3dba  8b4708               mov eax, dword ptr [edi + 8]
// 007f3dbd  0307                 add eax, dword ptr [edi]
// 007f3dbf  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 007f3dc2  99                   cdq 
// 007f3dc3  55                   push ebp
// 007f3dc4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007f3dc8  2bc2                 sub eax, edx
// 007f3dca  8bc8                 mov ecx, eax
// 007f3dcc  8bc5                 mov eax, ebp
// 007f3dce  99                   cdq 
// 007f3dcf  2bc2                 sub eax, edx
// 007f3dd1  d1f8                 sar eax, 1
// 007f3dd3  d1f9                 sar ecx, 1
// 007f3dd5  53                   push ebx
// 007f3dd6  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 007f3dda  2bc8                 sub ecx, eax
// 007f3ddc  8d0429               lea eax, [ecx + ebp]
// 007f3ddf  50                   push eax
// 007f3de0  53                   push ebx
// 007f3de1  51                   push ecx
// 007f3de2  83c610               add esi, 0x10
// 007f3de5  56                   push esi
// 007f3de6  ff15a4ed8900         call dword ptr [0x89eda4]
// 007f3dec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f3df0  294f0c               sub dword ptr [edi + 0xc], ecx
// 007f3df3  5d                   pop ebp
// 007f3df4  5f                   pop edi
// 007f3df5  5b                   pop ebx
// 007f3df6  5e                   pop esi
// 007f3df7  83c408               add esp, 8
// 007f3dfa  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

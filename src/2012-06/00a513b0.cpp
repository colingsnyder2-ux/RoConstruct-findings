// roc 2012-06 00a513b0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a513b0
//
// 00a513b0  8b542408             mov edx, dword ptr [esp + 8]
// 00a513b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a513b8  83ec10               sub esp, 0x10
// 00a513bb  53                   push ebx
// 00a513bc  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a513c0  55                   push ebp
// 00a513c1  8b29                 mov ebp, dword ptr [ecx]
// 00a513c3  56                   push esi
// 00a513c4  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a513c8  8916                 mov dword ptr [esi], edx
// 00a513ca  57                   push edi
// 00a513cb  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a513cf  895e04               mov dword ptr [esi + 4], ebx
// 00a513d2  894608               mov dword ptr [esi + 8], eax
// 00a513d5  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a513d9  57                   push edi
// 00a513da  83ec10               sub esp, 0x10
// 00a513dd  89460c               mov dword ptr [esi + 0xc], eax
// 00a513e0  8bc4                 mov eax, esp
// 00a513e2  8910                 mov dword ptr [eax], edx
// 00a513e4  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a513e8  895804               mov dword ptr [eax + 4], ebx
// 00a513eb  895008               mov dword ptr [eax + 8], edx
// 00a513ee  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a513f2  89500c               mov dword ptr [eax + 0xc], edx
// 00a513f5  8b5508               mov edx, dword ptr [ebp + 8]
// 00a513f8  8d442424             lea eax, [esp + 0x24]
// 00a513fc  50                   push eax
// 00a513fd  ffd2                 call edx
// 00a513ff  8b07                 mov eax, dword ptr [edi]
// 00a51401  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a51404  8bcf                 mov ecx, edi
// 00a51406  ffd2                 call edx
// 00a51408  83f803               cmp eax, 3
// 00a5140b  774a                 ja 0xa51457
// 00a5140d  ff24856414a500       jmp dword ptr [eax*4 + 0xa51464]
// 00a51414  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a51418  48                   dec eax
// 00a51419  894604               mov dword ptr [esi + 4], eax
// 00a5141c  8bc6                 mov eax, esi
// 00a5141e  5f                   pop edi
// 00a5141f  5e                   pop esi
// 00a51420  5d                   pop ebp
// 00a51421  5b                   pop ebx
// 00a51422  83c410               add esp, 0x10
// 00a51425  c21800               ret 0x18
// 00a51428  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5142c  49                   dec ecx
// 00a5142d  890e                 mov dword ptr [esi], ecx
// 00a5142f  8bc6                 mov eax, esi
// 00a51431  5f                   pop edi
// 00a51432  5e                   pop esi
// 00a51433  5d                   pop ebp
// 00a51434  5b                   pop ebx
// 00a51435  83c410               add esp, 0x10
// 00a51438  c21800               ret 0x18
// 00a5143b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a5143f  42                   inc edx
// 00a51440  89560c               mov dword ptr [esi + 0xc], edx
// 00a51443  8bc6                 mov eax, esi
// 00a51445  5f                   pop edi
// 00a51446  5e                   pop esi
// 00a51447  5d                   pop ebp
// 00a51448  5b                   pop ebx
// 00a51449  83c410               add esp, 0x10
// 00a5144c  c21800               ret 0x18
// 00a5144f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a51453  40                   inc eax
// 00a51454  894608               mov dword ptr [esi + 8], eax
// 00a51457  5f                   pop edi
// 00a51458  8bc6                 mov eax, esi
// 00a5145a  5e                   pop esi
// 00a5145b  5d                   pop ebp
// 00a5145c  5b                   pop ebx
// 00a5145d  83c410               add esp, 0x10
// 00a51460  c21800               ret 0x18
// 00a51463  90                   nop 
// 00a51464  1414                 adc al, 0x14
// 00a51466  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a51467  0028                 add byte ptr [eax], ch
// 00a51469  14a5                 adc al, 0xa5
// 00a5146b  003b                 add byte ptr [ebx], bh
// 00a5146d  14a5                 adc al, 0xa5
// 00a5146f  004f14               add byte ptr [edi + 0x14], cl
// 00a51472  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
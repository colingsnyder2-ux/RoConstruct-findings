// roc 2009-06 007f4140  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4140
//
// 007f4140  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f4144  8b442408             mov eax, dword ptr [esp + 8]
// 007f4148  03c2                 add eax, edx
// 007f414a  99                   cdq 
// 007f414b  2bc2                 sub eax, edx
// 007f414d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f4151  53                   push ebx
// 007f4152  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 007f4155  56                   push esi
// 007f4156  8bf0                 mov esi, eax
// 007f4158  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f415c  03c2                 add eax, edx
// 007f415e  99                   cdq 
// 007f415f  2bc2                 sub eax, edx
// 007f4161  57                   push edi
// 007f4162  8bf8                 mov edi, eax
// 007f4164  8b03                 mov eax, dword ptr [ebx]
// 007f4166  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f4169  8bcb                 mov ecx, ebx
// 007f416b  d1fe                 sar esi, 1
// 007f416d  d1ff                 sar edi, 1
// 007f416f  ffd2                 call edx
// 007f4171  83f802               cmp eax, 2
// 007f4174  740d                 je 0x7f4183
// 007f4176  8b03                 mov eax, dword ptr [ebx]
// 007f4178  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f417b  8bcb                 mov ecx, ebx
// 007f417d  ffd2                 call edx
// 007f417f  85c0                 test eax, eax
// 007f4181  7528                 jne 0x7f41ab
// 007f4183  8d4f03               lea ecx, [edi + 3]
// 007f4186  51                   push ecx
// 007f4187  8d46fe               lea eax, [esi - 2]
// 007f418a  50                   push eax
// 007f418b  8d5602               lea edx, [esi + 2]
// 007f418e  8d77ff               lea esi, [edi - 1]
// 007f4191  56                   push esi
// 007f4192  52                   push edx
// 007f4193  83c7fb               add edi, -5
// 007f4196  57                   push edi
// 007f4197  50                   push eax
// 007f4198  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f419c  50                   push eax
// 007f419d  e81ec2f7ff           call 0x7703c0
// 007f41a2  83c41c               add esp, 0x1c
// 007f41a5  5f                   pop edi
// 007f41a6  5e                   pop esi
// 007f41a7  5b                   pop ebx
// 007f41a8  c21400               ret 0x14
// 007f41ab  8d47fe               lea eax, [edi - 2]
// 007f41ae  50                   push eax
// 007f41af  8d4e03               lea ecx, [esi + 3]
// 007f41b2  51                   push ecx
// 007f41b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f41b7  8d56ff               lea edx, [esi - 1]
// 007f41ba  83c702               add edi, 2
// 007f41bd  57                   push edi
// 007f41be  52                   push edx
// 007f41bf  50                   push eax
// 007f41c0  83c6fb               add esi, -5
// 007f41c3  56                   push esi
// 007f41c4  51                   push ecx
// 007f41c5  e8f6c1f7ff           call 0x7703c0
// 007f41ca  83c41c               add esp, 0x1c
// 007f41cd  5f                   pop edi
// 007f41ce  5e                   pop esi
// 007f41cf  5b                   pop ebx
// 007f41d0  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

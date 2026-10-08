// roc 2009-06 007f4210  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4210
//
// 007f4210  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f4214  8b442408             mov eax, dword ptr [esp + 8]
// 007f4218  03c2                 add eax, edx
// 007f421a  99                   cdq 
// 007f421b  2bc2                 sub eax, edx
// 007f421d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f4221  53                   push ebx
// 007f4222  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 007f4225  56                   push esi
// 007f4226  8bf0                 mov esi, eax
// 007f4228  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f422c  03c2                 add eax, edx
// 007f422e  99                   cdq 
// 007f422f  2bc2                 sub eax, edx
// 007f4231  57                   push edi
// 007f4232  8bf8                 mov edi, eax
// 007f4234  8b03                 mov eax, dword ptr [ebx]
// 007f4236  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f4239  8bcb                 mov ecx, ebx
// 007f423b  d1fe                 sar esi, 1
// 007f423d  d1ff                 sar edi, 1
// 007f423f  ffd2                 call edx
// 007f4241  83f802               cmp eax, 2
// 007f4244  740d                 je 0x7f4253
// 007f4246  8b03                 mov eax, dword ptr [ebx]
// 007f4248  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f424b  8bcb                 mov ecx, ebx
// 007f424d  ffd2                 call edx
// 007f424f  85c0                 test eax, eax
// 007f4251  7528                 jne 0x7f427b
// 007f4253  8d4f03               lea ecx, [edi + 3]
// 007f4256  51                   push ecx
// 007f4257  8d4602               lea eax, [esi + 2]
// 007f425a  50                   push eax
// 007f425b  8d56fe               lea edx, [esi - 2]
// 007f425e  8d77ff               lea esi, [edi - 1]
// 007f4261  56                   push esi
// 007f4262  52                   push edx
// 007f4263  83c7fb               add edi, -5
// 007f4266  57                   push edi
// 007f4267  50                   push eax
// 007f4268  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f426c  50                   push eax
// 007f426d  e84ec1f7ff           call 0x7703c0
// 007f4272  83c41c               add esp, 0x1c
// 007f4275  5f                   pop edi
// 007f4276  5e                   pop esi
// 007f4277  5b                   pop ebx
// 007f4278  c21400               ret 0x14
// 007f427b  8d4702               lea eax, [edi + 2]
// 007f427e  50                   push eax
// 007f427f  8d4e03               lea ecx, [esi + 3]
// 007f4282  51                   push ecx
// 007f4283  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f4287  8d56ff               lea edx, [esi - 1]
// 007f428a  83c7fe               add edi, -2
// 007f428d  57                   push edi
// 007f428e  52                   push edx
// 007f428f  50                   push eax
// 007f4290  83c6fb               add esi, -5
// 007f4293  56                   push esi
// 007f4294  51                   push ecx
// 007f4295  e826c1f7ff           call 0x7703c0
// 007f429a  83c41c               add esp, 0x1c
// 007f429d  5f                   pop edi
// 007f429e  5e                   pop esi
// 007f429f  5b                   pop ebx
// 007f42a0  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

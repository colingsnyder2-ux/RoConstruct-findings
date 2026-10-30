// roc 2009-06 007f9410  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9410
//
// 007f9410  8b542408             mov edx, dword ptr [esp + 8]
// 007f9414  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9418  83ec10               sub esp, 0x10
// 007f941b  53                   push ebx
// 007f941c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007f9420  55                   push ebp
// 007f9421  8b29                 mov ebp, dword ptr [ecx]
// 007f9423  56                   push esi
// 007f9424  8b742420             mov esi, dword ptr [esp + 0x20]
// 007f9428  8916                 mov dword ptr [esi], edx
// 007f942a  57                   push edi
// 007f942b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007f942f  895e04               mov dword ptr [esi + 4], ebx
// 007f9432  894608               mov dword ptr [esi + 8], eax
// 007f9435  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f9439  57                   push edi
// 007f943a  83ec10               sub esp, 0x10
// 007f943d  89460c               mov dword ptr [esi + 0xc], eax
// 007f9440  8bc4                 mov eax, esp
// 007f9442  8910                 mov dword ptr [eax], edx
// 007f9444  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f9448  895804               mov dword ptr [eax + 4], ebx
// 007f944b  895008               mov dword ptr [eax + 8], edx
// 007f944e  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f9452  89500c               mov dword ptr [eax + 0xc], edx
// 007f9455  8b5508               mov edx, dword ptr [ebp + 8]
// 007f9458  8d442424             lea eax, [esp + 0x24]
// 007f945c  50                   push eax
// 007f945d  ffd2                 call edx
// 007f945f  8b07                 mov eax, dword ptr [edi]
// 007f9461  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f9464  8bcf                 mov ecx, edi
// 007f9466  ffd2                 call edx
// 007f9468  83f803               cmp eax, 3
// 007f946b  774a                 ja 0x7f94b7
// 007f946d  ff2485c4947f00       jmp dword ptr [eax*4 + 0x7f94c4]
// 007f9474  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f9478  48                   dec eax
// 007f9479  894604               mov dword ptr [esi + 4], eax
// 007f947c  8bc6                 mov eax, esi
// 007f947e  5f                   pop edi
// 007f947f  5e                   pop esi
// 007f9480  5d                   pop ebp
// 007f9481  5b                   pop ebx
// 007f9482  83c410               add esp, 0x10
// 007f9485  c21800               ret 0x18
// 007f9488  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f948c  49                   dec ecx
// 007f948d  890e                 mov dword ptr [esi], ecx
// 007f948f  8bc6                 mov eax, esi
// 007f9491  5f                   pop edi
// 007f9492  5e                   pop esi
// 007f9493  5d                   pop ebp
// 007f9494  5b                   pop ebx
// 007f9495  83c410               add esp, 0x10
// 007f9498  c21800               ret 0x18
// 007f949b  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f949f  42                   inc edx
// 007f94a0  89560c               mov dword ptr [esi + 0xc], edx
// 007f94a3  8bc6                 mov eax, esi
// 007f94a5  5f                   pop edi
// 007f94a6  5e                   pop esi
// 007f94a7  5d                   pop ebp
// 007f94a8  5b                   pop ebx
// 007f94a9  83c410               add esp, 0x10
// 007f94ac  c21800               ret 0x18
// 007f94af  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f94b3  40                   inc eax
// 007f94b4  894608               mov dword ptr [esi + 8], eax
// 007f94b7  5f                   pop edi
// 007f94b8  8bc6                 mov eax, esi
// 007f94ba  5e                   pop esi
// 007f94bb  5d                   pop ebp
// 007f94bc  5b                   pop ebx
// 007f94bd  83c410               add esp, 0x10
// 007f94c0  c21800               ret 0x18
// 007f94c3  90                   nop 
// 007f94c4  7494                 je 0x7f945a
// 007f94c6  7f00                 jg 0x7f94c8
// 007f94c8  88947f009b947f       mov byte ptr [edi + edi*2 + 0x7f949b00], dl
// copied from an identical function in another client (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp
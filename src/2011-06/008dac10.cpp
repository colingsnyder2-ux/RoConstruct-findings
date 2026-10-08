// roc 2011-06 008dac10  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dac10
//
// 008dac10  83ec10               sub esp, 0x10
// 008dac13  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dac17  53                   push ebx
// 008dac18  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 008dac1b  55                   push ebp
// 008dac1c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 008dac1f  56                   push esi
// 008dac20  8b7044               mov esi, dword ptr [eax + 0x44]
// 008dac23  57                   push edi
// 008dac24  8b7848               mov edi, dword ptr [eax + 0x48]
// 008dac27  8b4060               mov eax, dword ptr [eax + 0x60]
// 008dac2a  8b10                 mov edx, dword ptr [eax]
// 008dac2c  89442428             mov dword ptr [esp + 0x28], eax
// 008dac30  8bc8                 mov ecx, eax
// 008dac32  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dac35  ffd0                 call eax
// 008dac37  83f802               cmp eax, 2
// 008dac3a  740f                 je 0x8dac4b
// 008dac3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dac40  8b11                 mov edx, dword ptr [ecx]
// 008dac42  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dac45  ffd0                 call eax
// 008dac47  85c0                 test eax, eax
// 008dac49  7511                 jne 0x8dac5c
// 008dac4b  2bf5                 sub esi, ebp
// 008dac4d  03f7                 add esi, edi
// 008dac4f  89742410             mov dword ptr [esp + 0x10], esi
// 008dac53  897c2414             mov dword ptr [esp + 0x14], edi
// 008dac57  83c302               add ebx, 2
// 008dac5a  eb0f                 jmp 0x8dac6b
// 008dac5c  89742410             mov dword ptr [esp + 0x10], esi
// 008dac60  2bf3                 sub esi, ebx
// 008dac62  03f7                 add esi, edi
// 008dac64  89742414             mov dword ptr [esp + 0x14], esi
// 008dac68  83c502               add ebp, 2
// 008dac6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008dac6f  8d4c2410             lea ecx, [esp + 0x10]
// 008dac73  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008dac77  895c2418             mov dword ptr [esp + 0x18], ebx
// 008dac7b  8b11                 mov edx, dword ptr [ecx]
// 008dac7d  8910                 mov dword ptr [eax], edx
// 008dac7f  8b5104               mov edx, dword ptr [ecx + 4]
// 008dac82  5f                   pop edi
// 008dac83  895004               mov dword ptr [eax + 4], edx
// 008dac86  8b5108               mov edx, dword ptr [ecx + 8]
// 008dac89  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008dac8c  5e                   pop esi
// 008dac8d  5d                   pop ebp
// 008dac8e  895008               mov dword ptr [eax + 8], edx
// 008dac91  89480c               mov dword ptr [eax + 0xc], ecx
// 008dac94  5b                   pop ebx
// 008dac95  83c410               add esp, 0x10
// 008dac98  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

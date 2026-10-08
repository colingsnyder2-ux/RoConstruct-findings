// roc 2009-06 007faf80  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007faf80
//
// 007faf80  83ec10               sub esp, 0x10
// 007faf83  8b442418             mov eax, dword ptr [esp + 0x18]
// 007faf87  53                   push ebx
// 007faf88  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 007faf8b  55                   push ebp
// 007faf8c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 007faf8f  56                   push esi
// 007faf90  8b7044               mov esi, dword ptr [eax + 0x44]
// 007faf93  57                   push edi
// 007faf94  8b7848               mov edi, dword ptr [eax + 0x48]
// 007faf97  8b4060               mov eax, dword ptr [eax + 0x60]
// 007faf9a  8b10                 mov edx, dword ptr [eax]
// 007faf9c  89442428             mov dword ptr [esp + 0x28], eax
// 007fafa0  8bc8                 mov ecx, eax
// 007fafa2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fafa5  ffd0                 call eax
// 007fafa7  83f802               cmp eax, 2
// 007fafaa  740f                 je 0x7fafbb
// 007fafac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fafb0  8b11                 mov edx, dword ptr [ecx]
// 007fafb2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fafb5  ffd0                 call eax
// 007fafb7  85c0                 test eax, eax
// 007fafb9  7511                 jne 0x7fafcc
// 007fafbb  2bf5                 sub esi, ebp
// 007fafbd  03f7                 add esi, edi
// 007fafbf  89742410             mov dword ptr [esp + 0x10], esi
// 007fafc3  897c2414             mov dword ptr [esp + 0x14], edi
// 007fafc7  83c302               add ebx, 2
// 007fafca  eb0f                 jmp 0x7fafdb
// 007fafcc  89742410             mov dword ptr [esp + 0x10], esi
// 007fafd0  2bf3                 sub esi, ebx
// 007fafd2  03f7                 add esi, edi
// 007fafd4  89742414             mov dword ptr [esp + 0x14], esi
// 007fafd8  83c502               add ebp, 2
// 007fafdb  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fafdf  8d4c2410             lea ecx, [esp + 0x10]
// 007fafe3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007fafe7  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fafeb  8b11                 mov edx, dword ptr [ecx]
// 007fafed  8910                 mov dword ptr [eax], edx
// 007fafef  8b5104               mov edx, dword ptr [ecx + 4]
// 007faff2  5f                   pop edi
// 007faff3  895004               mov dword ptr [eax + 4], edx
// 007faff6  8b5108               mov edx, dword ptr [ecx + 8]
// 007faff9  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007faffc  5e                   pop esi
// 007faffd  5d                   pop ebp
// 007faffe  895008               mov dword ptr [eax + 8], edx
// 007fb001  89480c               mov dword ptr [eax + 0xc], ecx
// 007fb004  5b                   pop ebx
// 007fb005  83c410               add esp, 0x10
// 007fb008  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

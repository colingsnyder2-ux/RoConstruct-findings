// roc 2010-06 00889cd0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00889cd0
//
// 00889cd0  83ec10               sub esp, 0x10
// 00889cd3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00889cd7  53                   push ebx
// 00889cd8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00889cdb  55                   push ebp
// 00889cdc  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00889cdf  56                   push esi
// 00889ce0  8b7044               mov esi, dword ptr [eax + 0x44]
// 00889ce3  57                   push edi
// 00889ce4  8b7848               mov edi, dword ptr [eax + 0x48]
// 00889ce7  8b4060               mov eax, dword ptr [eax + 0x60]
// 00889cea  8b10                 mov edx, dword ptr [eax]
// 00889cec  89442428             mov dword ptr [esp + 0x28], eax
// 00889cf0  8bc8                 mov ecx, eax
// 00889cf2  8b4248               mov eax, dword ptr [edx + 0x48]
// 00889cf5  ffd0                 call eax
// 00889cf7  83f802               cmp eax, 2
// 00889cfa  740f                 je 0x889d0b
// 00889cfc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889d00  8b11                 mov edx, dword ptr [ecx]
// 00889d02  8b4248               mov eax, dword ptr [edx + 0x48]
// 00889d05  ffd0                 call eax
// 00889d07  85c0                 test eax, eax
// 00889d09  7511                 jne 0x889d1c
// 00889d0b  2bf5                 sub esi, ebp
// 00889d0d  03f7                 add esi, edi
// 00889d0f  89742410             mov dword ptr [esp + 0x10], esi
// 00889d13  897c2414             mov dword ptr [esp + 0x14], edi
// 00889d17  83c302               add ebx, 2
// 00889d1a  eb0f                 jmp 0x889d2b
// 00889d1c  89742410             mov dword ptr [esp + 0x10], esi
// 00889d20  2bf3                 sub esi, ebx
// 00889d22  03f7                 add esi, edi
// 00889d24  89742414             mov dword ptr [esp + 0x14], esi
// 00889d28  83c502               add ebp, 2
// 00889d2b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889d2f  8d4c2410             lea ecx, [esp + 0x10]
// 00889d33  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00889d37  895c2418             mov dword ptr [esp + 0x18], ebx
// 00889d3b  8b11                 mov edx, dword ptr [ecx]
// 00889d3d  8910                 mov dword ptr [eax], edx
// 00889d3f  8b5104               mov edx, dword ptr [ecx + 4]
// 00889d42  5f                   pop edi
// 00889d43  895004               mov dword ptr [eax + 4], edx
// 00889d46  8b5108               mov edx, dword ptr [ecx + 8]
// 00889d49  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00889d4c  5e                   pop esi
// 00889d4d  5d                   pop ebp
// 00889d4e  895008               mov dword ptr [eax + 8], edx
// 00889d51  89480c               mov dword ptr [eax + 0xc], ecx
// 00889d54  5b                   pop ebx
// 00889d55  83c410               add esp, 0x10
// 00889d58  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

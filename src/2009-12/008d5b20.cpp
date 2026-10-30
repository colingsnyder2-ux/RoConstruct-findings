// roc 2009-12 008d5b20  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d5b20
//
// 008d5b20  83ec10               sub esp, 0x10
// 008d5b23  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d5b27  53                   push ebx
// 008d5b28  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 008d5b2b  55                   push ebp
// 008d5b2c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 008d5b2f  56                   push esi
// 008d5b30  8b7044               mov esi, dword ptr [eax + 0x44]
// 008d5b33  57                   push edi
// 008d5b34  8b7848               mov edi, dword ptr [eax + 0x48]
// 008d5b37  8b4060               mov eax, dword ptr [eax + 0x60]
// 008d5b3a  8b10                 mov edx, dword ptr [eax]
// 008d5b3c  89442428             mov dword ptr [esp + 0x28], eax
// 008d5b40  8bc8                 mov ecx, eax
// 008d5b42  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d5b45  ffd0                 call eax
// 008d5b47  83f802               cmp eax, 2
// 008d5b4a  740f                 je 0x8d5b5b
// 008d5b4c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d5b50  8b11                 mov edx, dword ptr [ecx]
// 008d5b52  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d5b55  ffd0                 call eax
// 008d5b57  85c0                 test eax, eax
// 008d5b59  7511                 jne 0x8d5b6c
// 008d5b5b  2bf5                 sub esi, ebp
// 008d5b5d  03f7                 add esi, edi
// 008d5b5f  89742410             mov dword ptr [esp + 0x10], esi
// 008d5b63  897c2414             mov dword ptr [esp + 0x14], edi
// 008d5b67  83c302               add ebx, 2
// 008d5b6a  eb0f                 jmp 0x8d5b7b
// 008d5b6c  89742410             mov dword ptr [esp + 0x10], esi
// 008d5b70  2bf3                 sub esi, ebx
// 008d5b72  03f7                 add esi, edi
// 008d5b74  89742414             mov dword ptr [esp + 0x14], esi
// 008d5b78  83c502               add ebp, 2
// 008d5b7b  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d5b7f  8d4c2410             lea ecx, [esp + 0x10]
// 008d5b83  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008d5b87  895c2418             mov dword ptr [esp + 0x18], ebx
// 008d5b8b  8b11                 mov edx, dword ptr [ecx]
// 008d5b8d  8910                 mov dword ptr [eax], edx
// 008d5b8f  8b5104               mov edx, dword ptr [ecx + 4]
// 008d5b92  5f                   pop edi
// 008d5b93  895004               mov dword ptr [eax + 4], edx
// 008d5b96  8b5108               mov edx, dword ptr [ecx + 8]
// 008d5b99  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d5b9c  5e                   pop esi
// 008d5b9d  5d                   pop ebp
// 008d5b9e  895008               mov dword ptr [eax + 8], edx
// 008d5ba1  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5ba4  5b                   pop ebx
// 008d5ba5  83c410               add esp, 0x10
// 008d5ba8  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

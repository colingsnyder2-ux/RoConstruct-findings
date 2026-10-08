// from server: 100% by auto
// roc 2007-08 00704f40  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00704f40
//
// 00704f40  83ec10               sub esp, 0x10
// 00704f43  8b442418             mov eax, dword ptr [esp + 0x18]
// 00704f47  53                   push ebx
// 00704f48  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00704f4b  55                   push ebp
// 00704f4c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00704f4f  56                   push esi
// 00704f50  8b7044               mov esi, dword ptr [eax + 0x44]
// 00704f53  57                   push edi
// 00704f54  8b7848               mov edi, dword ptr [eax + 0x48]
// 00704f57  8b4060               mov eax, dword ptr [eax + 0x60]
// 00704f5a  8b10                 mov edx, dword ptr [eax]
// 00704f5c  89442428             mov dword ptr [esp + 0x28], eax
// 00704f60  8bc8                 mov ecx, eax
// 00704f62  8b4248               mov eax, dword ptr [edx + 0x48]
// 00704f65  ffd0                 call eax
// 00704f67  83f802               cmp eax, 2
// 00704f6a  740f                 je 0x704f7b
// 00704f6c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00704f70  8b11                 mov edx, dword ptr [ecx]
// 00704f72  8b4248               mov eax, dword ptr [edx + 0x48]
// 00704f75  ffd0                 call eax
// 00704f77  85c0                 test eax, eax
// 00704f79  7511                 jne 0x704f8c
// 00704f7b  2bf5                 sub esi, ebp
// 00704f7d  03f7                 add esi, edi
// 00704f7f  89742410             mov dword ptr [esp + 0x10], esi
// 00704f83  897c2414             mov dword ptr [esp + 0x14], edi
// 00704f87  83c302               add ebx, 2
// 00704f8a  eb0f                 jmp 0x704f9b
// 00704f8c  89742410             mov dword ptr [esp + 0x10], esi
// 00704f90  2bf3                 sub esi, ebx
// 00704f92  03f7                 add esi, edi
// 00704f94  89742414             mov dword ptr [esp + 0x14], esi
// 00704f98  83c502               add ebp, 2
// 00704f9b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00704f9f  8d4c2410             lea ecx, [esp + 0x10]
// 00704fa3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00704fa7  895c2418             mov dword ptr [esp + 0x18], ebx
// 00704fab  8b11                 mov edx, dword ptr [ecx]
// 00704fad  8910                 mov dword ptr [eax], edx
// 00704faf  8b5104               mov edx, dword ptr [ecx + 4]
// 00704fb2  5f                   pop edi
// 00704fb3  895004               mov dword ptr [eax + 4], edx
// 00704fb6  8b5108               mov edx, dword ptr [ecx + 8]
// 00704fb9  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00704fbc  5e                   pop esi
// 00704fbd  5d                   pop ebp
// 00704fbe  895008               mov dword ptr [eax + 8], edx
// 00704fc1  89480c               mov dword ptr [eax + 0xc], ecx
// 00704fc4  5b                   pop ebx
// 00704fc5  83c410               add esp, 0x10
// 00704fc8  c20800               ret 8
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp

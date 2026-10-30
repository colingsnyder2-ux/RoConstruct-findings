// roc 2012-06 00a52f10  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52f10
//
// 00a52f10  83ec10               sub esp, 0x10
// 00a52f13  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a52f17  53                   push ebx
// 00a52f18  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00a52f1b  55                   push ebp
// 00a52f1c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00a52f1f  56                   push esi
// 00a52f20  8b7044               mov esi, dword ptr [eax + 0x44]
// 00a52f23  57                   push edi
// 00a52f24  8b7848               mov edi, dword ptr [eax + 0x48]
// 00a52f27  8b4060               mov eax, dword ptr [eax + 0x60]
// 00a52f2a  8b10                 mov edx, dword ptr [eax]
// 00a52f2c  89442428             mov dword ptr [esp + 0x28], eax
// 00a52f30  8bc8                 mov ecx, eax
// 00a52f32  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a52f35  ffd0                 call eax
// 00a52f37  83f802               cmp eax, 2
// 00a52f3a  740f                 je 0xa52f4b
// 00a52f3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a52f40  8b11                 mov edx, dword ptr [ecx]
// 00a52f42  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a52f45  ffd0                 call eax
// 00a52f47  85c0                 test eax, eax
// 00a52f49  7511                 jne 0xa52f5c
// 00a52f4b  2bf5                 sub esi, ebp
// 00a52f4d  03f7                 add esi, edi
// 00a52f4f  89742410             mov dword ptr [esp + 0x10], esi
// 00a52f53  897c2414             mov dword ptr [esp + 0x14], edi
// 00a52f57  83c302               add ebx, 2
// 00a52f5a  eb0f                 jmp 0xa52f6b
// 00a52f5c  89742410             mov dword ptr [esp + 0x10], esi
// 00a52f60  2bf3                 sub esi, ebx
// 00a52f62  03f7                 add esi, edi
// 00a52f64  89742414             mov dword ptr [esp + 0x14], esi
// 00a52f68  83c502               add ebp, 2
// 00a52f6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a52f6f  8d4c2410             lea ecx, [esp + 0x10]
// 00a52f73  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a52f77  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a52f7b  8b11                 mov edx, dword ptr [ecx]
// 00a52f7d  8910                 mov dword ptr [eax], edx
// 00a52f7f  8b5104               mov edx, dword ptr [ecx + 4]
// 00a52f82  5f                   pop edi
// 00a52f83  895004               mov dword ptr [eax + 4], edx
// 00a52f86  8b5108               mov edx, dword ptr [ecx + 8]
// 00a52f89  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a52f8c  5e                   pop esi
// 00a52f8d  5d                   pop ebp
// 00a52f8e  895008               mov dword ptr [eax + 8], edx
// 00a52f91  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52f94  5b                   pop ebx
// 00a52f95  83c410               add esp, 0x10
// 00a52f98  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

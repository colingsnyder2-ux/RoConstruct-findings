// from server: 100% by auto
// roc 2008-06 007828c0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007828c0
//
// 007828c0  83ec10               sub esp, 0x10
// 007828c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007828c7  53                   push ebx
// 007828c8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 007828cb  55                   push ebp
// 007828cc  8b6850               mov ebp, dword ptr [eax + 0x50]
// 007828cf  56                   push esi
// 007828d0  8b7044               mov esi, dword ptr [eax + 0x44]
// 007828d3  57                   push edi
// 007828d4  8b7848               mov edi, dword ptr [eax + 0x48]
// 007828d7  8b4060               mov eax, dword ptr [eax + 0x60]
// 007828da  8b10                 mov edx, dword ptr [eax]
// 007828dc  89442428             mov dword ptr [esp + 0x28], eax
// 007828e0  8bc8                 mov ecx, eax
// 007828e2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007828e5  ffd0                 call eax
// 007828e7  83f802               cmp eax, 2
// 007828ea  740f                 je 0x7828fb
// 007828ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007828f0  8b11                 mov edx, dword ptr [ecx]
// 007828f2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007828f5  ffd0                 call eax
// 007828f7  85c0                 test eax, eax
// 007828f9  7511                 jne 0x78290c
// 007828fb  2bf5                 sub esi, ebp
// 007828fd  03f7                 add esi, edi
// 007828ff  89742410             mov dword ptr [esp + 0x10], esi
// 00782903  897c2414             mov dword ptr [esp + 0x14], edi
// 00782907  83c302               add ebx, 2
// 0078290a  eb0f                 jmp 0x78291b
// 0078290c  89742410             mov dword ptr [esp + 0x10], esi
// 00782910  2bf3                 sub esi, ebx
// 00782912  03f7                 add esi, edi
// 00782914  89742414             mov dword ptr [esp + 0x14], esi
// 00782918  83c502               add ebp, 2
// 0078291b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0078291f  8d4c2410             lea ecx, [esp + 0x10]
// 00782923  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00782927  895c2418             mov dword ptr [esp + 0x18], ebx
// 0078292b  8b11                 mov edx, dword ptr [ecx]
// 0078292d  8910                 mov dword ptr [eax], edx
// 0078292f  8b5104               mov edx, dword ptr [ecx + 4]
// 00782932  5f                   pop edi
// 00782933  895004               mov dword ptr [eax + 4], edx
// 00782936  8b5108               mov edx, dword ptr [ecx + 8]
// 00782939  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0078293c  5e                   pop esi
// 0078293d  5d                   pop ebp
// 0078293e  895008               mov dword ptr [eax + 8], edx
// 00782941  89480c               mov dword ptr [eax + 0xc], ecx
// 00782944  5b                   pop ebx
// 00782945  83c410               add esp, 0x10
// 00782948  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

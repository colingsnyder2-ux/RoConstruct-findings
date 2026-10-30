// roc 2009-06 007fc050  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fc050
//
// 007fc050  83ec10               sub esp, 0x10
// 007fc053  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fc057  53                   push ebx
// 007fc058  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 007fc05b  55                   push ebp
// 007fc05c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 007fc05f  56                   push esi
// 007fc060  8b7044               mov esi, dword ptr [eax + 0x44]
// 007fc063  57                   push edi
// 007fc064  8b7848               mov edi, dword ptr [eax + 0x48]
// 007fc067  8b4060               mov eax, dword ptr [eax + 0x60]
// 007fc06a  8b10                 mov edx, dword ptr [eax]
// 007fc06c  89442428             mov dword ptr [esp + 0x28], eax
// 007fc070  8bc8                 mov ecx, eax
// 007fc072  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fc075  ffd0                 call eax
// 007fc077  83f802               cmp eax, 2
// 007fc07a  740f                 je 0x7fc08b
// 007fc07c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fc080  8b11                 mov edx, dword ptr [ecx]
// 007fc082  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fc085  ffd0                 call eax
// 007fc087  85c0                 test eax, eax
// 007fc089  7517                 jne 0x7fc0a2
// 007fc08b  8bc5                 mov eax, ebp
// 007fc08d  2bc7                 sub eax, edi
// 007fc08f  99                   cdq 
// 007fc090  2bc2                 sub eax, edx
// 007fc092  d1f8                 sar eax, 1
// 007fc094  2bf0                 sub esi, eax
// 007fc096  03c3                 add eax, ebx
// 007fc098  89442418             mov dword ptr [esp + 0x18], eax
// 007fc09c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007fc0a0  eb15                 jmp 0x7fc0b7
// 007fc0a2  8bc3                 mov eax, ebx
// 007fc0a4  2bc6                 sub eax, esi
// 007fc0a6  99                   cdq 
// 007fc0a7  2bc2                 sub eax, edx
// 007fc0a9  d1f8                 sar eax, 1
// 007fc0ab  2bf8                 sub edi, eax
// 007fc0ad  03c5                 add eax, ebp
// 007fc0af  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fc0b3  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fc0b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fc0bb  8d4c2410             lea ecx, [esp + 0x10]
// 007fc0bf  897c2414             mov dword ptr [esp + 0x14], edi
// 007fc0c3  89742410             mov dword ptr [esp + 0x10], esi
// 007fc0c7  8b11                 mov edx, dword ptr [ecx]
// 007fc0c9  8910                 mov dword ptr [eax], edx
// 007fc0cb  8b5104               mov edx, dword ptr [ecx + 4]
// 007fc0ce  5f                   pop edi
// 007fc0cf  895004               mov dword ptr [eax + 4], edx
// 007fc0d2  8b5108               mov edx, dword ptr [ecx + 8]
// 007fc0d5  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007fc0d8  5e                   pop esi
// 007fc0d9  5d                   pop ebp
// 007fc0da  895008               mov dword ptr [eax + 8], edx
// 007fc0dd  89480c               mov dword ptr [eax + 0xc], ecx
// 007fc0e0  5b                   pop ebx
// 007fc0e1  83c410               add esp, 0x10
// 007fc0e4  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

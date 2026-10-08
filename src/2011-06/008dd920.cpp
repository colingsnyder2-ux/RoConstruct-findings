// roc 2011-06 008dd920  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dd920
//
// 008dd920  83ec10               sub esp, 0x10
// 008dd923  8b442418             mov eax, dword ptr [esp + 0x18]
// 008dd927  53                   push ebx
// 008dd928  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 008dd92b  55                   push ebp
// 008dd92c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 008dd92f  56                   push esi
// 008dd930  8b7044               mov esi, dword ptr [eax + 0x44]
// 008dd933  57                   push edi
// 008dd934  8b7848               mov edi, dword ptr [eax + 0x48]
// 008dd937  8b4060               mov eax, dword ptr [eax + 0x60]
// 008dd93a  8b10                 mov edx, dword ptr [eax]
// 008dd93c  89442428             mov dword ptr [esp + 0x28], eax
// 008dd940  8bc8                 mov ecx, eax
// 008dd942  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dd945  ffd0                 call eax
// 008dd947  83f802               cmp eax, 2
// 008dd94a  740f                 je 0x8dd95b
// 008dd94c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dd950  8b11                 mov edx, dword ptr [ecx]
// 008dd952  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dd955  ffd0                 call eax
// 008dd957  85c0                 test eax, eax
// 008dd959  7517                 jne 0x8dd972
// 008dd95b  8bc5                 mov eax, ebp
// 008dd95d  2bc7                 sub eax, edi
// 008dd95f  99                   cdq 
// 008dd960  2bc2                 sub eax, edx
// 008dd962  d1f8                 sar eax, 1
// 008dd964  2bf0                 sub esi, eax
// 008dd966  03c3                 add eax, ebx
// 008dd968  89442418             mov dword ptr [esp + 0x18], eax
// 008dd96c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008dd970  eb15                 jmp 0x8dd987
// 008dd972  8bc3                 mov eax, ebx
// 008dd974  2bc6                 sub eax, esi
// 008dd976  99                   cdq 
// 008dd977  2bc2                 sub eax, edx
// 008dd979  d1f8                 sar eax, 1
// 008dd97b  2bf8                 sub edi, eax
// 008dd97d  03c5                 add eax, ebp
// 008dd97f  895c2418             mov dword ptr [esp + 0x18], ebx
// 008dd983  8944241c             mov dword ptr [esp + 0x1c], eax
// 008dd987  8b442424             mov eax, dword ptr [esp + 0x24]
// 008dd98b  8d4c2410             lea ecx, [esp + 0x10]
// 008dd98f  897c2414             mov dword ptr [esp + 0x14], edi
// 008dd993  89742410             mov dword ptr [esp + 0x10], esi
// 008dd997  8b11                 mov edx, dword ptr [ecx]
// 008dd999  8910                 mov dword ptr [eax], edx
// 008dd99b  8b5104               mov edx, dword ptr [ecx + 4]
// 008dd99e  5f                   pop edi
// 008dd99f  895004               mov dword ptr [eax + 4], edx
// 008dd9a2  8b5108               mov edx, dword ptr [ecx + 8]
// 008dd9a5  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008dd9a8  5e                   pop esi
// 008dd9a9  5d                   pop ebp
// 008dd9aa  895008               mov dword ptr [eax + 8], edx
// 008dd9ad  89480c               mov dword ptr [eax + 0xc], ecx
// 008dd9b0  5b                   pop ebx
// 008dd9b1  83c410               add esp, 0x10
// 008dd9b4  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

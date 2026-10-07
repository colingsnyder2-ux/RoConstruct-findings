// roc 2008-06 00783990  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00783990
//
// 00783990  83ec10               sub esp, 0x10
// 00783993  8b442418             mov eax, dword ptr [esp + 0x18]
// 00783997  53                   push ebx
// 00783998  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 0078399b  55                   push ebp
// 0078399c  8b6850               mov ebp, dword ptr [eax + 0x50]
// 0078399f  56                   push esi
// 007839a0  8b7044               mov esi, dword ptr [eax + 0x44]
// 007839a3  57                   push edi
// 007839a4  8b7848               mov edi, dword ptr [eax + 0x48]
// 007839a7  8b4060               mov eax, dword ptr [eax + 0x60]
// 007839aa  8b10                 mov edx, dword ptr [eax]
// 007839ac  89442428             mov dword ptr [esp + 0x28], eax
// 007839b0  8bc8                 mov ecx, eax
// 007839b2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007839b5  ffd0                 call eax
// 007839b7  83f802               cmp eax, 2
// 007839ba  740f                 je 0x7839cb
// 007839bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007839c0  8b11                 mov edx, dword ptr [ecx]
// 007839c2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007839c5  ffd0                 call eax
// 007839c7  85c0                 test eax, eax
// 007839c9  7517                 jne 0x7839e2
// 007839cb  8bc5                 mov eax, ebp
// 007839cd  2bc7                 sub eax, edi
// 007839cf  99                   cdq 
// 007839d0  2bc2                 sub eax, edx
// 007839d2  d1f8                 sar eax, 1
// 007839d4  2bf0                 sub esi, eax
// 007839d6  03c3                 add eax, ebx
// 007839d8  89442418             mov dword ptr [esp + 0x18], eax
// 007839dc  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007839e0  eb15                 jmp 0x7839f7
// 007839e2  8bc3                 mov eax, ebx
// 007839e4  2bc6                 sub eax, esi
// 007839e6  99                   cdq 
// 007839e7  2bc2                 sub eax, edx
// 007839e9  d1f8                 sar eax, 1
// 007839eb  2bf8                 sub edi, eax
// 007839ed  03c5                 add eax, ebp
// 007839ef  895c2418             mov dword ptr [esp + 0x18], ebx
// 007839f3  8944241c             mov dword ptr [esp + 0x1c], eax
// 007839f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007839fb  8d4c2410             lea ecx, [esp + 0x10]
// 007839ff  897c2414             mov dword ptr [esp + 0x14], edi
// 00783a03  89742410             mov dword ptr [esp + 0x10], esi
// 00783a07  8b11                 mov edx, dword ptr [ecx]
// 00783a09  8910                 mov dword ptr [eax], edx
// 00783a0b  8b5104               mov edx, dword ptr [ecx + 4]
// 00783a0e  5f                   pop edi
// 00783a0f  895004               mov dword ptr [eax + 4], edx
// 00783a12  8b5108               mov edx, dword ptr [ecx + 8]
// 00783a15  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00783a18  5e                   pop esi
// 00783a19  5d                   pop ebp
// 00783a1a  895008               mov dword ptr [eax + 8], edx
// 00783a1d  89480c               mov dword ptr [eax + 0xc], ecx
// 00783a20  5b                   pop ebx
// 00783a21  83c410               add esp, 0x10
// 00783a24  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

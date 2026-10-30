// roc 2010-06 0088ada0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088ada0
//
// 0088ada0  83ec10               sub esp, 0x10
// 0088ada3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088ada7  53                   push ebx
// 0088ada8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 0088adab  55                   push ebp
// 0088adac  8b6850               mov ebp, dword ptr [eax + 0x50]
// 0088adaf  56                   push esi
// 0088adb0  8b7044               mov esi, dword ptr [eax + 0x44]
// 0088adb3  57                   push edi
// 0088adb4  8b7848               mov edi, dword ptr [eax + 0x48]
// 0088adb7  8b4060               mov eax, dword ptr [eax + 0x60]
// 0088adba  8b10                 mov edx, dword ptr [eax]
// 0088adbc  89442428             mov dword ptr [esp + 0x28], eax
// 0088adc0  8bc8                 mov ecx, eax
// 0088adc2  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088adc5  ffd0                 call eax
// 0088adc7  83f802               cmp eax, 2
// 0088adca  740f                 je 0x88addb
// 0088adcc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088add0  8b11                 mov edx, dword ptr [ecx]
// 0088add2  8b4248               mov eax, dword ptr [edx + 0x48]
// 0088add5  ffd0                 call eax
// 0088add7  85c0                 test eax, eax
// 0088add9  7517                 jne 0x88adf2
// 0088addb  8bc5                 mov eax, ebp
// 0088addd  2bc7                 sub eax, edi
// 0088addf  99                   cdq 
// 0088ade0  2bc2                 sub eax, edx
// 0088ade2  d1f8                 sar eax, 1
// 0088ade4  2bf0                 sub esi, eax
// 0088ade6  03c3                 add eax, ebx
// 0088ade8  89442418             mov dword ptr [esp + 0x18], eax
// 0088adec  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0088adf0  eb15                 jmp 0x88ae07
// 0088adf2  8bc3                 mov eax, ebx
// 0088adf4  2bc6                 sub eax, esi
// 0088adf6  99                   cdq 
// 0088adf7  2bc2                 sub eax, edx
// 0088adf9  d1f8                 sar eax, 1
// 0088adfb  2bf8                 sub edi, eax
// 0088adfd  03c5                 add eax, ebp
// 0088adff  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088ae03  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088ae07  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088ae0b  8d4c2410             lea ecx, [esp + 0x10]
// 0088ae0f  897c2414             mov dword ptr [esp + 0x14], edi
// 0088ae13  89742410             mov dword ptr [esp + 0x10], esi
// 0088ae17  8b11                 mov edx, dword ptr [ecx]
// 0088ae19  8910                 mov dword ptr [eax], edx
// 0088ae1b  8b5104               mov edx, dword ptr [ecx + 4]
// 0088ae1e  5f                   pop edi
// 0088ae1f  895004               mov dword ptr [eax + 4], edx
// 0088ae22  8b5108               mov edx, dword ptr [ecx + 8]
// 0088ae25  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0088ae28  5e                   pop esi
// 0088ae29  5d                   pop ebp
// 0088ae2a  895008               mov dword ptr [eax + 8], edx
// 0088ae2d  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ae30  5b                   pop ebx
// 0088ae31  83c410               add esp, 0x10
// 0088ae34  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

// from server: 100% by auto
// roc 2007-08 00707ca0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00707ca0
//
// 00707ca0  83ec10               sub esp, 0x10
// 00707ca3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00707ca7  53                   push ebx
// 00707ca8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00707cab  55                   push ebp
// 00707cac  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00707caf  56                   push esi
// 00707cb0  8b7044               mov esi, dword ptr [eax + 0x44]
// 00707cb3  57                   push edi
// 00707cb4  8b7848               mov edi, dword ptr [eax + 0x48]
// 00707cb7  8b4060               mov eax, dword ptr [eax + 0x60]
// 00707cba  8b10                 mov edx, dword ptr [eax]
// 00707cbc  89442428             mov dword ptr [esp + 0x28], eax
// 00707cc0  8bc8                 mov ecx, eax
// 00707cc2  8b4248               mov eax, dword ptr [edx + 0x48]
// 00707cc5  ffd0                 call eax
// 00707cc7  83f802               cmp eax, 2
// 00707cca  740f                 je 0x707cdb
// 00707ccc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00707cd0  8b11                 mov edx, dword ptr [ecx]
// 00707cd2  8b4248               mov eax, dword ptr [edx + 0x48]
// 00707cd5  ffd0                 call eax
// 00707cd7  85c0                 test eax, eax
// 00707cd9  7517                 jne 0x707cf2
// 00707cdb  8bc5                 mov eax, ebp
// 00707cdd  2bc7                 sub eax, edi
// 00707cdf  99                   cdq 
// 00707ce0  2bc2                 sub eax, edx
// 00707ce2  d1f8                 sar eax, 1
// 00707ce4  2bf0                 sub esi, eax
// 00707ce6  03c3                 add eax, ebx
// 00707ce8  89442418             mov dword ptr [esp + 0x18], eax
// 00707cec  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00707cf0  eb15                 jmp 0x707d07
// 00707cf2  8bc3                 mov eax, ebx
// 00707cf4  2bc6                 sub eax, esi
// 00707cf6  99                   cdq 
// 00707cf7  2bc2                 sub eax, edx
// 00707cf9  d1f8                 sar eax, 1
// 00707cfb  2bf8                 sub edi, eax
// 00707cfd  03c5                 add eax, ebp
// 00707cff  895c2418             mov dword ptr [esp + 0x18], ebx
// 00707d03  8944241c             mov dword ptr [esp + 0x1c], eax
// 00707d07  8b442424             mov eax, dword ptr [esp + 0x24]
// 00707d0b  8d4c2410             lea ecx, [esp + 0x10]
// 00707d0f  897c2414             mov dword ptr [esp + 0x14], edi
// 00707d13  89742410             mov dword ptr [esp + 0x10], esi
// 00707d17  8b11                 mov edx, dword ptr [ecx]
// 00707d19  8910                 mov dword ptr [eax], edx
// 00707d1b  8b5104               mov edx, dword ptr [ecx + 4]
// 00707d1e  5f                   pop edi
// 00707d1f  895004               mov dword ptr [eax + 4], edx
// 00707d22  8b5108               mov edx, dword ptr [ecx + 8]
// 00707d25  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00707d28  5e                   pop esi
// 00707d29  5d                   pop ebp
// 00707d2a  895008               mov dword ptr [eax + 8], edx
// 00707d2d  89480c               mov dword ptr [eax + 0xc], ecx
// 00707d30  5b                   pop ebx
// 00707d31  83c410               add esp, 0x10
// 00707d34  c20800               ret 8
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp

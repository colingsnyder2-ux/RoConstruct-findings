// roc 2009-12 008d6bf0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d6bf0
//
// 008d6bf0  83ec10               sub esp, 0x10
// 008d6bf3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d6bf7  53                   push ebx
// 008d6bf8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 008d6bfb  55                   push ebp
// 008d6bfc  8b6850               mov ebp, dword ptr [eax + 0x50]
// 008d6bff  56                   push esi
// 008d6c00  8b7044               mov esi, dword ptr [eax + 0x44]
// 008d6c03  57                   push edi
// 008d6c04  8b7848               mov edi, dword ptr [eax + 0x48]
// 008d6c07  8b4060               mov eax, dword ptr [eax + 0x60]
// 008d6c0a  8b10                 mov edx, dword ptr [eax]
// 008d6c0c  89442428             mov dword ptr [esp + 0x28], eax
// 008d6c10  8bc8                 mov ecx, eax
// 008d6c12  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d6c15  ffd0                 call eax
// 008d6c17  83f802               cmp eax, 2
// 008d6c1a  740f                 je 0x8d6c2b
// 008d6c1c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d6c20  8b11                 mov edx, dword ptr [ecx]
// 008d6c22  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d6c25  ffd0                 call eax
// 008d6c27  85c0                 test eax, eax
// 008d6c29  7517                 jne 0x8d6c42
// 008d6c2b  8bc5                 mov eax, ebp
// 008d6c2d  2bc7                 sub eax, edi
// 008d6c2f  99                   cdq 
// 008d6c30  2bc2                 sub eax, edx
// 008d6c32  d1f8                 sar eax, 1
// 008d6c34  2bf0                 sub esi, eax
// 008d6c36  03c3                 add eax, ebx
// 008d6c38  89442418             mov dword ptr [esp + 0x18], eax
// 008d6c3c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008d6c40  eb15                 jmp 0x8d6c57
// 008d6c42  8bc3                 mov eax, ebx
// 008d6c44  2bc6                 sub eax, esi
// 008d6c46  99                   cdq 
// 008d6c47  2bc2                 sub eax, edx
// 008d6c49  d1f8                 sar eax, 1
// 008d6c4b  2bf8                 sub edi, eax
// 008d6c4d  03c5                 add eax, ebp
// 008d6c4f  895c2418             mov dword ptr [esp + 0x18], ebx
// 008d6c53  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d6c57  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d6c5b  8d4c2410             lea ecx, [esp + 0x10]
// 008d6c5f  897c2414             mov dword ptr [esp + 0x14], edi
// 008d6c63  89742410             mov dword ptr [esp + 0x10], esi
// 008d6c67  8b11                 mov edx, dword ptr [ecx]
// 008d6c69  8910                 mov dword ptr [eax], edx
// 008d6c6b  8b5104               mov edx, dword ptr [ecx + 4]
// 008d6c6e  5f                   pop edi
// 008d6c6f  895004               mov dword ptr [eax + 4], edx
// 008d6c72  8b5108               mov edx, dword ptr [ecx + 8]
// 008d6c75  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d6c78  5e                   pop esi
// 008d6c79  5d                   pop ebp
// 008d6c7a  895008               mov dword ptr [eax + 8], edx
// 008d6c7d  89480c               mov dword ptr [eax + 0xc], ecx
// 008d6c80  5b                   pop ebx
// 008d6c81  83c410               add esp, 0x10
// 008d6c84  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

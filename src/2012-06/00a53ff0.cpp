// roc 2012-06 00a53ff0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a53ff0
//
// 00a53ff0  83ec10               sub esp, 0x10
// 00a53ff3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a53ff7  53                   push ebx
// 00a53ff8  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00a53ffb  55                   push ebp
// 00a53ffc  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00a53fff  56                   push esi
// 00a54000  8b7044               mov esi, dword ptr [eax + 0x44]
// 00a54003  57                   push edi
// 00a54004  8b7848               mov edi, dword ptr [eax + 0x48]
// 00a54007  8b4060               mov eax, dword ptr [eax + 0x60]
// 00a5400a  8b10                 mov edx, dword ptr [eax]
// 00a5400c  89442428             mov dword ptr [esp + 0x28], eax
// 00a54010  8bc8                 mov ecx, eax
// 00a54012  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a54015  ffd0                 call eax
// 00a54017  83f802               cmp eax, 2
// 00a5401a  740f                 je 0xa5402b
// 00a5401c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a54020  8b11                 mov edx, dword ptr [ecx]
// 00a54022  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a54025  ffd0                 call eax
// 00a54027  85c0                 test eax, eax
// 00a54029  7517                 jne 0xa54042
// 00a5402b  8bc5                 mov eax, ebp
// 00a5402d  2bc7                 sub eax, edi
// 00a5402f  99                   cdq 
// 00a54030  2bc2                 sub eax, edx
// 00a54032  d1f8                 sar eax, 1
// 00a54034  2bf0                 sub esi, eax
// 00a54036  03c3                 add eax, ebx
// 00a54038  89442418             mov dword ptr [esp + 0x18], eax
// 00a5403c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a54040  eb15                 jmp 0xa54057
// 00a54042  8bc3                 mov eax, ebx
// 00a54044  2bc6                 sub eax, esi
// 00a54046  99                   cdq 
// 00a54047  2bc2                 sub eax, edx
// 00a54049  d1f8                 sar eax, 1
// 00a5404b  2bf8                 sub edi, eax
// 00a5404d  03c5                 add eax, ebp
// 00a5404f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a54053  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a54057  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5405b  8d4c2410             lea ecx, [esp + 0x10]
// 00a5405f  897c2414             mov dword ptr [esp + 0x14], edi
// 00a54063  89742410             mov dword ptr [esp + 0x10], esi
// 00a54067  8b11                 mov edx, dword ptr [ecx]
// 00a54069  8910                 mov dword ptr [eax], edx
// 00a5406b  8b5104               mov edx, dword ptr [ecx + 4]
// 00a5406e  5f                   pop edi
// 00a5406f  895004               mov dword ptr [eax + 4], edx
// 00a54072  8b5108               mov edx, dword ptr [ecx + 8]
// 00a54075  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a54078  5e                   pop esi
// 00a54079  5d                   pop ebp
// 00a5407a  895008               mov dword ptr [eax + 8], edx
// 00a5407d  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54080  5b                   pop ebx
// 00a54081  83c410               add esp, 0x10
// 00a54084  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

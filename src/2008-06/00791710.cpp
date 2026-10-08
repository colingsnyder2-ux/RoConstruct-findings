// from server: 100% by auto
// roc 2008-06 00791710  unit: CXTCaptionTheme  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791710
//
// 00791710  83ec10               sub esp, 0x10
// 00791713  57                   push edi
// 00791714  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00791718  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 0079171e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00791722  85c0                 test eax, eax
// 00791724  0f8480000000         je 0x7917aa
// 0079172a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079172e  8b5104               mov edx, dword ptr [ecx + 4]
// 00791731  8b01                 mov eax, dword ptr [ecx]
// 00791733  89542408             mov dword ptr [esp + 8], edx
// 00791737  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0079173a  89442404             mov dword ptr [esp + 4], eax
// 0079173e  8b4108               mov eax, dword ptr [ecx + 8]
// 00791741  53                   push ebx
// 00791742  89542414             mov dword ptr [esp + 0x14], edx
// 00791746  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00791749  55                   push ebp
// 0079174a  8baf90000000         mov ebp, dword ptr [edi + 0x90]
// 00791750  2bc2                 sub eax, edx
// 00791752  2bc5                 sub eax, ebp
// 00791754  83e802               sub eax, 2
// 00791757  56                   push esi
// 00791758  8bf0                 mov esi, eax
// 0079175a  3bf2                 cmp esi, edx
// 0079175c  7d02                 jge 0x791760
// 0079175e  8bf2                 mov esi, edx
// 00791760  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00791763  2b4104               sub eax, dword ptr [ecx + 4]
// 00791766  8b9f94000000         mov ebx, dword ptr [edi + 0x94]
// 0079176c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0079176f  2b4f6c               sub ecx, dword ptr [edi + 0x6c]
// 00791772  2bc3                 sub eax, ebx
// 00791774  99                   cdq 
// 00791775  2bc2                 sub eax, edx
// 00791777  d1f8                 sar eax, 1
// 00791779  8d142e               lea edx, [esi + ebp]
// 0079177c  03d8                 add ebx, eax
// 0079177e  3bd1                 cmp edx, ecx
// 00791780  7d25                 jge 0x7917a7
// 00791782  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00791786  85c9                 test ecx, ecx
// 00791788  7403                 je 0x79178d
// 0079178a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0079178d  6a03                 push 3
// 0079178f  6a00                 push 0
// 00791791  6a00                 push 0
// 00791793  2bd8                 sub ebx, eax
// 00791795  53                   push ebx
// 00791796  2bd6                 sub edx, esi
// 00791798  52                   push edx
// 00791799  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0079179d  52                   push edx
// 0079179e  50                   push eax
// 0079179f  56                   push esi
// 007917a0  51                   push ecx
// 007917a1  ff15982b8000         call dword ptr [0x802b98]
// 007917a7  5e                   pop esi
// 007917a8  5d                   pop ebp
// 007917a9  5b                   pop ebx
// 007917aa  5f                   pop edi
// 007917ab  83c410               add esp, 0x10
// 007917ae  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionIcon@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp

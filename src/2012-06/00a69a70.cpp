// roc 2012-06 00a69a70  unit: CXTCaptionTheme  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69a70
//
// 00a69a70  83ec10               sub esp, 0x10
// 00a69a73  57                   push edi
// 00a69a74  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a69a78  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a69a7e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a69a82  85c0                 test eax, eax
// 00a69a84  0f8480000000         je 0xa69b0a
// 00a69a8a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a69a8e  8b5104               mov edx, dword ptr [ecx + 4]
// 00a69a91  8b01                 mov eax, dword ptr [ecx]
// 00a69a93  89542408             mov dword ptr [esp + 8], edx
// 00a69a97  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00a69a9a  89442404             mov dword ptr [esp + 4], eax
// 00a69a9e  8b4108               mov eax, dword ptr [ecx + 8]
// 00a69aa1  53                   push ebx
// 00a69aa2  89542414             mov dword ptr [esp + 0x14], edx
// 00a69aa6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a69aa9  55                   push ebp
// 00a69aaa  8baf90000000         mov ebp, dword ptr [edi + 0x90]
// 00a69ab0  2bc2                 sub eax, edx
// 00a69ab2  2bc5                 sub eax, ebp
// 00a69ab4  83e802               sub eax, 2
// 00a69ab7  56                   push esi
// 00a69ab8  8bf0                 mov esi, eax
// 00a69aba  3bf2                 cmp esi, edx
// 00a69abc  7d02                 jge 0xa69ac0
// 00a69abe  8bf2                 mov esi, edx
// 00a69ac0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a69ac3  2b4104               sub eax, dword ptr [ecx + 4]
// 00a69ac6  8b9f94000000         mov ebx, dword ptr [edi + 0x94]
// 00a69acc  8b4908               mov ecx, dword ptr [ecx + 8]
// 00a69acf  2b4f6c               sub ecx, dword ptr [edi + 0x6c]
// 00a69ad2  2bc3                 sub eax, ebx
// 00a69ad4  99                   cdq 
// 00a69ad5  2bc2                 sub eax, edx
// 00a69ad7  d1f8                 sar eax, 1
// 00a69ad9  8d142e               lea edx, [esi + ebp]
// 00a69adc  03d8                 add ebx, eax
// 00a69ade  3bd1                 cmp edx, ecx
// 00a69ae0  7d25                 jge 0xa69b07
// 00a69ae2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a69ae6  85c9                 test ecx, ecx
// 00a69ae8  7403                 je 0xa69aed
// 00a69aea  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a69aed  6a03                 push 3
// 00a69aef  6a00                 push 0
// 00a69af1  6a00                 push 0
// 00a69af3  2bd8                 sub ebx, eax
// 00a69af5  53                   push ebx
// 00a69af6  2bd6                 sub edx, esi
// 00a69af8  52                   push edx
// 00a69af9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a69afd  52                   push edx
// 00a69afe  50                   push eax
// 00a69aff  56                   push esi
// 00a69b00  51                   push ecx
// 00a69b01  ff15383db200         call dword ptr [0xb23d38]
// 00a69b07  5e                   pop esi
// 00a69b08  5d                   pop ebp
// 00a69b09  5b                   pop ebx
// 00a69b0a  5f                   pop edi
// 00a69b0b  83c410               add esp, 0x10
// 00a69b0e  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionIcon@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp

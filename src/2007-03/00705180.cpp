// roc 2007-03 00705180  unit: seg_00700000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705180
//
// 00705180  83ec10               sub esp, 0x10
// 00705183  57                   push edi
// 00705184  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00705188  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 0070518e  85c0                 test eax, eax
// 00705190  8944241c             mov dword ptr [esp + 0x1c], eax
// 00705194  0f8480000000         je 0x70521a
// 0070519a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070519e  8b5104               mov edx, dword ptr [ecx + 4]
// 007051a1  8b01                 mov eax, dword ptr [ecx]
// 007051a3  89542408             mov dword ptr [esp + 8], edx
// 007051a7  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007051aa  89442404             mov dword ptr [esp + 4], eax
// 007051ae  8b4108               mov eax, dword ptr [ecx + 8]
// 007051b1  53                   push ebx
// 007051b2  89542414             mov dword ptr [esp + 0x14], edx
// 007051b6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007051b9  55                   push ebp
// 007051ba  8baf90000000         mov ebp, dword ptr [edi + 0x90]
// 007051c0  2bc2                 sub eax, edx
// 007051c2  2bc5                 sub eax, ebp
// 007051c4  83e802               sub eax, 2
// 007051c7  56                   push esi
// 007051c8  8bf0                 mov esi, eax
// 007051ca  3bf2                 cmp esi, edx
// 007051cc  7d02                 jge 0x7051d0
// 007051ce  8bf2                 mov esi, edx
// 007051d0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007051d3  2b4104               sub eax, dword ptr [ecx + 4]
// 007051d6  8b9f94000000         mov ebx, dword ptr [edi + 0x94]
// 007051dc  8b4908               mov ecx, dword ptr [ecx + 8]
// 007051df  2b4f6c               sub ecx, dword ptr [edi + 0x6c]
// 007051e2  2bc3                 sub eax, ebx
// 007051e4  99                   cdq 
// 007051e5  2bc2                 sub eax, edx
// 007051e7  d1f8                 sar eax, 1
// 007051e9  8d142e               lea edx, [esi + ebp]
// 007051ec  03d8                 add ebx, eax
// 007051ee  3bd1                 cmp edx, ecx
// 007051f0  7d25                 jge 0x705217
// 007051f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007051f6  85c9                 test ecx, ecx
// 007051f8  7403                 je 0x7051fd
// 007051fa  8b4904               mov ecx, dword ptr [ecx + 4]
// 007051fd  6a03                 push 3
// 007051ff  6a00                 push 0
// 00705201  6a00                 push 0
// 00705203  2bd8                 sub ebx, eax
// 00705205  53                   push ebx
// 00705206  2bd6                 sub edx, esi
// 00705208  52                   push edx
// 00705209  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0070520d  52                   push edx
// 0070520e  50                   push eax
// 0070520f  56                   push esi
// 00705210  51                   push ecx
// 00705211  ff1504ef7700         call dword ptr [0x77ef04]
// 00705217  5e                   pop esi
// 00705218  5d                   pop ebp
// 00705219  5b                   pop ebx
// 0070521a  5f                   pop edi
// 0070521b  83c410               add esp, 0x10
// 0070521e  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionIcon@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp

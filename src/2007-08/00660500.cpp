// from server: 100% by auto
// roc 2007-08 00660500  unit: CXTPReportHeader  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00660500
//
// 00660500  8b442408             mov eax, dword ptr [esp + 8]
// 00660504  83f801               cmp eax, 1
// 00660507  53                   push ebx
// 00660508  55                   push ebp
// 00660509  56                   push esi
// 0066050a  57                   push edi
// 0066050b  8be9                 mov ebp, ecx
// 0066050d  754b                 jne 0x66055a
// 0066050f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00660512  8b742414             mov esi, dword ptr [esp + 0x14]
// 00660516  8b5830               mov ebx, dword ptr [eax + 0x30]
// 00660519  83c601               add esi, 1
// 0066051c  3bf3                 cmp esi, ebx
// 0066051e  7d6d                 jge 0x66058d
// 00660520  85f6                 test esi, esi
// 00660522  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00660525  7c1a                 jl 0x660541
// 00660527  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0066052a  7d15                 jge 0x660541
// 0066052c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0066052f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00660532  85ff                 test edi, edi
// 00660534  740b                 je 0x660541
// 00660536  8bcf                 mov ecx, edi
// 00660538  e873e0ffff           call 0x65e5b0
// 0066053d  85c0                 test eax, eax
// 0066053f  7510                 jne 0x660551
// 00660541  83c601               add esi, 1
// 00660544  3bf3                 cmp esi, ebx
// 00660546  7cd8                 jl 0x660520
// 00660548  5f                   pop edi
// 00660549  5e                   pop esi
// 0066054a  5d                   pop ebp
// 0066054b  33c0                 xor eax, eax
// 0066054d  5b                   pop ebx
// 0066054e  c20800               ret 8
// 00660551  8bc7                 mov eax, edi
// 00660553  5f                   pop edi
// 00660554  5e                   pop esi
// 00660555  5d                   pop ebp
// 00660556  5b                   pop ebx
// 00660557  c20800               ret 8
// 0066055a  83f8ff               cmp eax, -1
// 0066055d  752e                 jne 0x66058d
// 0066055f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00660563  03f0                 add esi, eax
// 00660565  7826                 js 0x66058d
// 00660567  85f6                 test esi, esi
// 00660569  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0066056c  7c1a                 jl 0x660588
// 0066056e  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00660571  7d15                 jge 0x660588
// 00660573  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00660576  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 00660579  85ff                 test edi, edi
// 0066057b  740b                 je 0x660588
// 0066057d  8bcf                 mov ecx, edi
// 0066057f  e82ce0ffff           call 0x65e5b0
// 00660584  85c0                 test eax, eax
// 00660586  75c9                 jne 0x660551
// 00660588  83ee01               sub esi, 1
// 0066058b  79da                 jns 0x660567
// 0066058d  5f                   pop edi
// 0066058e  5e                   pop esi
// 0066058f  5d                   pop ebp
// 00660590  33c0                 xor eax, eax
// 00660592  5b                   pop ebx
// 00660593  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp

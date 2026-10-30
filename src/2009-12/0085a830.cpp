// roc 2009-12 0085a830  unit: CXTPStatusBar  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a830
//
// 0085a830  8b442408             mov eax, dword ptr [esp + 8]
// 0085a834  83ec0c               sub esp, 0xc
// 0085a837  56                   push esi
// 0085a838  57                   push edi
// 0085a839  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0085a83d  50                   push eax
// 0085a83e  57                   push edi
// 0085a83f  8bf1                 mov esi, ecx
// 0085a841  e89cc10c00           call 0x9269e2
// 0085a846  8bce                 mov ecx, esi
// 0085a848  e825bc0c00           call 0x926472
// 0085a84d  a900010000           test eax, 0x100
// 0085a852  744d                 je 0x85a8a1
// 0085a854  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085a857  51                   push ecx
// 0085a858  ff15bccb9800         call dword ptr [0x98cbbc]
// 0085a85e  50                   push eax
// 0085a85f  ff15f8cb9800         call dword ptr [0x98cbf8]
// 0085a865  85c0                 test eax, eax
// 0085a867  7538                 jne 0x85a8a1
// 0085a869  8b16                 mov edx, dword ptr [esi]
// 0085a86b  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0085a871  53                   push ebx
// 0085a872  8d44240c             lea eax, [esp + 0xc]
// 0085a876  50                   push eax
// 0085a877  6a00                 push 0
// 0085a879  6807040000           push 0x407
// 0085a87e  8bce                 mov ecx, esi
// 0085a880  ffd2                 call edx
// 0085a882  8b1ddccb9800         mov ebx, dword ptr [0x98cbdc]
// 0085a888  6a05                 push 5
// 0085a88a  ffd3                 call ebx
// 0085a88c  8b7708               mov esi, dword ptr [edi + 8]
// 0085a88f  03c0                 add eax, eax
// 0085a891  2bf0                 sub esi, eax
// 0085a893  2b74240c             sub esi, dword ptr [esp + 0xc]
// 0085a897  6a02                 push 2
// 0085a899  ffd3                 call ebx
// 0085a89b  2bf0                 sub esi, eax
// 0085a89d  897708               mov dword ptr [edi + 8], esi
// 0085a8a0  5b                   pop ebx
// 0085a8a1  5f                   pop edi
// 0085a8a2  5e                   pop esi
// 0085a8a3  83c40c               add esp, 0xc
// 0085a8a6  c20800               ret 8
// copied from an identical function in another client (function ?CalcInsideRect@CXTPStatusBar@@MBEXAAVCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
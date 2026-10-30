// roc 2009-12 008bd150  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd150
//
// 008bd150  83ec14               sub esp, 0x14
// 008bd153  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008bd159  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd15d  56                   push esi
// 008bd15e  57                   push edi
// 008bd15f  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 008bd165  51                   push ecx
// 008bd166  8d4c2410             lea ecx, [esp + 0x10]
// 008bd16a  897c240c             mov dword ptr [esp + 0xc], edi
// 008bd16e  e8fde0f8ff           call 0x84b270
// 008bd173  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bd177  8b742420             mov esi, dword ptr [esp + 0x20]
// 008bd17b  2bd7                 sub edx, edi
// 008bd17d  39560c               cmp dword ptr [esi + 0xc], edx
// 008bd180  0f8c31010000         jl 0x8bd2b7
// 008bd186  8b4604               mov eax, dword ptr [esi + 4]
// 008bd189  55                   push ebp
// 008bd18a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008bd18e  8d0c2f               lea ecx, [edi + ebp]
// 008bd191  3bc1                 cmp eax, ecx
// 008bd193  0f8f1d010000         jg 0x8bd2b6
// 008bd199  53                   push ebx
// 008bd19a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd19e  8bd3                 mov edx, ebx
// 008bd1a0  2bd7                 sub edx, edi
// 008bd1a2  395608               cmp dword ptr [esi + 8], edx
// 008bd1a5  0f8c0a010000         jl 0x8bd2b5
// 008bd1ab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd1af  8d1439               lea edx, [ecx + edi]
// 008bd1b2  3916                 cmp dword ptr [esi], edx
// 008bd1b4  0f8ffb000000         jg 0x8bd2b5
// 008bd1ba  2be8                 sub ebp, eax
// 008bd1bc  8bc5                 mov eax, ebp
// 008bd1be  99                   cdq 
// 008bd1bf  33c2                 xor eax, edx
// 008bd1c1  2bc2                 sub eax, edx
// 008bd1c3  3bc7                 cmp eax, edi
// 008bd1c5  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 008bd1cb  7d0e                 jge 0x8bd1db
// 008bd1cd  55                   push ebp
// 008bd1ce  6a00                 push 0
// 008bd1d0  56                   push esi
// 008bd1d1  ffd7                 call edi
// 008bd1d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd1d7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd1db  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 008bd1de  8bc5                 mov eax, ebp
// 008bd1e0  2b442418             sub eax, dword ptr [esp + 0x18]
// 008bd1e4  99                   cdq 
// 008bd1e5  33c2                 xor eax, edx
// 008bd1e7  2bc2                 sub eax, edx
// 008bd1e9  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008bd1ed  7d14                 jge 0x8bd203
// 008bd1ef  8b442418             mov eax, dword ptr [esp + 0x18]
// 008bd1f3  2bc5                 sub eax, ebp
// 008bd1f5  50                   push eax
// 008bd1f6  6a00                 push 0
// 008bd1f8  56                   push esi
// 008bd1f9  ffd7                 call edi
// 008bd1fb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd1ff  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd203  8beb                 mov ebp, ebx
// 008bd205  2b6e08               sub ebp, dword ptr [esi + 8]
// 008bd208  8bc5                 mov eax, ebp
// 008bd20a  99                   cdq 
// 008bd20b  33c2                 xor eax, edx
// 008bd20d  2bc2                 sub eax, edx
// 008bd20f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008bd213  7d0e                 jge 0x8bd223
// 008bd215  6a00                 push 0
// 008bd217  55                   push ebp
// 008bd218  56                   push esi
// 008bd219  ffd7                 call edi
// 008bd21b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd21f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd223  8b2e                 mov ebp, dword ptr [esi]
// 008bd225  8bc5                 mov eax, ebp
// 008bd227  2bc1                 sub eax, ecx
// 008bd229  99                   cdq 
// 008bd22a  33c2                 xor eax, edx
// 008bd22c  2bc2                 sub eax, edx
// 008bd22e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008bd232  7d10                 jge 0x8bd244
// 008bd234  6a00                 push 0
// 008bd236  2bcd                 sub ecx, ebp
// 008bd238  51                   push ecx
// 008bd239  56                   push esi
// 008bd23a  ffd7                 call edi
// 008bd23c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd240  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008bd244  8b2e                 mov ebp, dword ptr [esi]
// 008bd246  8bc5                 mov eax, ebp
// 008bd248  2bc3                 sub eax, ebx
// 008bd24a  99                   cdq 
// 008bd24b  33c2                 xor eax, edx
// 008bd24d  2bc2                 sub eax, edx
// 008bd24f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008bd253  7d0c                 jge 0x8bd261
// 008bd255  6a00                 push 0
// 008bd257  2bdd                 sub ebx, ebp
// 008bd259  53                   push ebx
// 008bd25a  56                   push esi
// 008bd25b  ffd7                 call edi
// 008bd25d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd261  8b5e08               mov ebx, dword ptr [esi + 8]
// 008bd264  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008bd268  8bc3                 mov eax, ebx
// 008bd26a  2bc1                 sub eax, ecx
// 008bd26c  99                   cdq 
// 008bd26d  33c2                 xor eax, edx
// 008bd26f  2bc2                 sub eax, edx
// 008bd271  3bc5                 cmp eax, ebp
// 008bd273  7d08                 jge 0x8bd27d
// 008bd275  6a00                 push 0
// 008bd277  2bcb                 sub ecx, ebx
// 008bd279  51                   push ecx
// 008bd27a  56                   push esi
// 008bd27b  ffd7                 call edi
// 008bd27d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008bd280  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008bd284  8bc3                 mov eax, ebx
// 008bd286  2bc1                 sub eax, ecx
// 008bd288  99                   cdq 
// 008bd289  33c2                 xor eax, edx
// 008bd28b  2bc2                 sub eax, edx
// 008bd28d  3bc5                 cmp eax, ebp
// 008bd28f  7d08                 jge 0x8bd299
// 008bd291  2bcb                 sub ecx, ebx
// 008bd293  51                   push ecx
// 008bd294  6a00                 push 0
// 008bd296  56                   push esi
// 008bd297  ffd7                 call edi
// 008bd299  8b5e04               mov ebx, dword ptr [esi + 4]
// 008bd29c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bd2a0  8bc3                 mov eax, ebx
// 008bd2a2  2bc1                 sub eax, ecx
// 008bd2a4  99                   cdq 
// 008bd2a5  33c2                 xor eax, edx
// 008bd2a7  2bc2                 sub eax, edx
// 008bd2a9  3bc5                 cmp eax, ebp
// 008bd2ab  7d08                 jge 0x8bd2b5
// 008bd2ad  2bcb                 sub ecx, ebx
// 008bd2af  51                   push ecx
// 008bd2b0  6a00                 push 0
// 008bd2b2  56                   push esi
// 008bd2b3  ffd7                 call edi
// 008bd2b5  5b                   pop ebx
// 008bd2b6  5d                   pop ebp
// 008bd2b7  5f                   pop edi
// 008bd2b8  5e                   pop esi
// 008bd2b9  83c414               add esp, 0x14
// 008bd2bc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

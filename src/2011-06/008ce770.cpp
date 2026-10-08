// roc 2011-06 008ce770  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ce770
//
// 008ce770  83ec14               sub esp, 0x14
// 008ce773  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008ce779  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce77d  56                   push esi
// 008ce77e  57                   push edi
// 008ce77f  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 008ce785  51                   push ecx
// 008ce786  8d4c2410             lea ecx, [esp + 0x10]
// 008ce78a  897c240c             mov dword ptr [esp + 0xc], edi
// 008ce78e  e89de5f8ff           call 0x85cd30
// 008ce793  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ce797  8b742420             mov esi, dword ptr [esp + 0x20]
// 008ce79b  2bd7                 sub edx, edi
// 008ce79d  39560c               cmp dword ptr [esi + 0xc], edx
// 008ce7a0  0f8c31010000         jl 0x8ce8d7
// 008ce7a6  8b4604               mov eax, dword ptr [esi + 4]
// 008ce7a9  55                   push ebp
// 008ce7aa  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008ce7ae  8d0c2f               lea ecx, [edi + ebp]
// 008ce7b1  3bc1                 cmp eax, ecx
// 008ce7b3  0f8f1d010000         jg 0x8ce8d6
// 008ce7b9  53                   push ebx
// 008ce7ba  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce7be  8bd3                 mov edx, ebx
// 008ce7c0  2bd7                 sub edx, edi
// 008ce7c2  395608               cmp dword ptr [esi + 8], edx
// 008ce7c5  0f8c0a010000         jl 0x8ce8d5
// 008ce7cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce7cf  8d1439               lea edx, [ecx + edi]
// 008ce7d2  3916                 cmp dword ptr [esi], edx
// 008ce7d4  0f8ffb000000         jg 0x8ce8d5
// 008ce7da  2be8                 sub ebp, eax
// 008ce7dc  8bc5                 mov eax, ebp
// 008ce7de  99                   cdq 
// 008ce7df  33c2                 xor eax, edx
// 008ce7e1  2bc2                 sub eax, edx
// 008ce7e3  3bc7                 cmp eax, edi
// 008ce7e5  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008ce7eb  7d0e                 jge 0x8ce7fb
// 008ce7ed  55                   push ebp
// 008ce7ee  6a00                 push 0
// 008ce7f0  56                   push esi
// 008ce7f1  ffd7                 call edi
// 008ce7f3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce7f7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce7fb  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 008ce7fe  8bc5                 mov eax, ebp
// 008ce800  2b442418             sub eax, dword ptr [esp + 0x18]
// 008ce804  99                   cdq 
// 008ce805  33c2                 xor eax, edx
// 008ce807  2bc2                 sub eax, edx
// 008ce809  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008ce80d  7d14                 jge 0x8ce823
// 008ce80f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ce813  2bc5                 sub eax, ebp
// 008ce815  50                   push eax
// 008ce816  6a00                 push 0
// 008ce818  56                   push esi
// 008ce819  ffd7                 call edi
// 008ce81b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce81f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce823  8beb                 mov ebp, ebx
// 008ce825  2b6e08               sub ebp, dword ptr [esi + 8]
// 008ce828  8bc5                 mov eax, ebp
// 008ce82a  99                   cdq 
// 008ce82b  33c2                 xor eax, edx
// 008ce82d  2bc2                 sub eax, edx
// 008ce82f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008ce833  7d0e                 jge 0x8ce843
// 008ce835  6a00                 push 0
// 008ce837  55                   push ebp
// 008ce838  56                   push esi
// 008ce839  ffd7                 call edi
// 008ce83b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce83f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce843  8b2e                 mov ebp, dword ptr [esi]
// 008ce845  8bc5                 mov eax, ebp
// 008ce847  2bc1                 sub eax, ecx
// 008ce849  99                   cdq 
// 008ce84a  33c2                 xor eax, edx
// 008ce84c  2bc2                 sub eax, edx
// 008ce84e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008ce852  7d10                 jge 0x8ce864
// 008ce854  6a00                 push 0
// 008ce856  2bcd                 sub ecx, ebp
// 008ce858  51                   push ecx
// 008ce859  56                   push esi
// 008ce85a  ffd7                 call edi
// 008ce85c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce860  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ce864  8b2e                 mov ebp, dword ptr [esi]
// 008ce866  8bc5                 mov eax, ebp
// 008ce868  2bc3                 sub eax, ebx
// 008ce86a  99                   cdq 
// 008ce86b  33c2                 xor eax, edx
// 008ce86d  2bc2                 sub eax, edx
// 008ce86f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008ce873  7d0c                 jge 0x8ce881
// 008ce875  6a00                 push 0
// 008ce877  2bdd                 sub ebx, ebp
// 008ce879  53                   push ebx
// 008ce87a  56                   push esi
// 008ce87b  ffd7                 call edi
// 008ce87d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce881  8b5e08               mov ebx, dword ptr [esi + 8]
// 008ce884  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ce888  8bc3                 mov eax, ebx
// 008ce88a  2bc1                 sub eax, ecx
// 008ce88c  99                   cdq 
// 008ce88d  33c2                 xor eax, edx
// 008ce88f  2bc2                 sub eax, edx
// 008ce891  3bc5                 cmp eax, ebp
// 008ce893  7d08                 jge 0x8ce89d
// 008ce895  6a00                 push 0
// 008ce897  2bcb                 sub ecx, ebx
// 008ce899  51                   push ecx
// 008ce89a  56                   push esi
// 008ce89b  ffd7                 call edi
// 008ce89d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008ce8a0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ce8a4  8bc3                 mov eax, ebx
// 008ce8a6  2bc1                 sub eax, ecx
// 008ce8a8  99                   cdq 
// 008ce8a9  33c2                 xor eax, edx
// 008ce8ab  2bc2                 sub eax, edx
// 008ce8ad  3bc5                 cmp eax, ebp
// 008ce8af  7d08                 jge 0x8ce8b9
// 008ce8b1  2bcb                 sub ecx, ebx
// 008ce8b3  51                   push ecx
// 008ce8b4  6a00                 push 0
// 008ce8b6  56                   push esi
// 008ce8b7  ffd7                 call edi
// 008ce8b9  8b5e04               mov ebx, dword ptr [esi + 4]
// 008ce8bc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ce8c0  8bc3                 mov eax, ebx
// 008ce8c2  2bc1                 sub eax, ecx
// 008ce8c4  99                   cdq 
// 008ce8c5  33c2                 xor eax, edx
// 008ce8c7  2bc2                 sub eax, edx
// 008ce8c9  3bc5                 cmp eax, ebp
// 008ce8cb  7d08                 jge 0x8ce8d5
// 008ce8cd  2bcb                 sub ecx, ebx
// 008ce8cf  51                   push ecx
// 008ce8d0  6a00                 push 0
// 008ce8d2  56                   push esi
// 008ce8d3  ffd7                 call edi
// 008ce8d5  5b                   pop ebx
// 008ce8d6  5d                   pop ebp
// 008ce8d7  5f                   pop edi
// 008ce8d8  5e                   pop esi
// 008ce8d9  83c414               add esp, 0x14
// 008ce8dc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

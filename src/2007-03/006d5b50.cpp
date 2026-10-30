// roc 2007-03 006d5b50  unit: seg_006d0000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d5b50
//
// 006d5b50  83ec14               sub esp, 0x14
// 006d5b53  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 006d5b59  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5b5d  56                   push esi
// 006d5b5e  57                   push edi
// 006d5b5f  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 006d5b65  51                   push ecx
// 006d5b66  8d4c2410             lea ecx, [esp + 0x10]
// 006d5b6a  897c240c             mov dword ptr [esp + 0xc], edi
// 006d5b6e  e85d5cf9ff           call 0x66b7d0
// 006d5b73  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d5b77  8b742420             mov esi, dword ptr [esp + 0x20]
// 006d5b7b  2bd7                 sub edx, edi
// 006d5b7d  39560c               cmp dword ptr [esi + 0xc], edx
// 006d5b80  0f8c31010000         jl 0x6d5cb7
// 006d5b86  8b4604               mov eax, dword ptr [esi + 4]
// 006d5b89  55                   push ebp
// 006d5b8a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006d5b8e  8d0c2f               lea ecx, [edi + ebp]
// 006d5b91  3bc1                 cmp eax, ecx
// 006d5b93  0f8f1d010000         jg 0x6d5cb6
// 006d5b99  53                   push ebx
// 006d5b9a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5b9e  8bd3                 mov edx, ebx
// 006d5ba0  2bd7                 sub edx, edi
// 006d5ba2  395608               cmp dword ptr [esi + 8], edx
// 006d5ba5  0f8c0a010000         jl 0x6d5cb5
// 006d5bab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5baf  8d1439               lea edx, [ecx + edi]
// 006d5bb2  3916                 cmp dword ptr [esi], edx
// 006d5bb4  0f8ffb000000         jg 0x6d5cb5
// 006d5bba  2be8                 sub ebp, eax
// 006d5bbc  8bc5                 mov eax, ebp
// 006d5bbe  99                   cdq 
// 006d5bbf  33c2                 xor eax, edx
// 006d5bc1  2bc2                 sub eax, edx
// 006d5bc3  3bc7                 cmp eax, edi
// 006d5bc5  8b3d58ed7700         mov edi, dword ptr [0x77ed58]
// 006d5bcb  7d0e                 jge 0x6d5bdb
// 006d5bcd  55                   push ebp
// 006d5bce  6a00                 push 0
// 006d5bd0  56                   push esi
// 006d5bd1  ffd7                 call edi
// 006d5bd3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5bd7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5bdb  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006d5bde  8bc5                 mov eax, ebp
// 006d5be0  2b442418             sub eax, dword ptr [esp + 0x18]
// 006d5be4  99                   cdq 
// 006d5be5  33c2                 xor eax, edx
// 006d5be7  2bc2                 sub eax, edx
// 006d5be9  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006d5bed  7d14                 jge 0x6d5c03
// 006d5bef  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d5bf3  2bc5                 sub eax, ebp
// 006d5bf5  50                   push eax
// 006d5bf6  6a00                 push 0
// 006d5bf8  56                   push esi
// 006d5bf9  ffd7                 call edi
// 006d5bfb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5bff  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5c03  8beb                 mov ebp, ebx
// 006d5c05  2b6e08               sub ebp, dword ptr [esi + 8]
// 006d5c08  8bc5                 mov eax, ebp
// 006d5c0a  99                   cdq 
// 006d5c0b  33c2                 xor eax, edx
// 006d5c0d  2bc2                 sub eax, edx
// 006d5c0f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006d5c13  7d0e                 jge 0x6d5c23
// 006d5c15  6a00                 push 0
// 006d5c17  55                   push ebp
// 006d5c18  56                   push esi
// 006d5c19  ffd7                 call edi
// 006d5c1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5c1f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5c23  8b2e                 mov ebp, dword ptr [esi]
// 006d5c25  8bc5                 mov eax, ebp
// 006d5c27  2bc1                 sub eax, ecx
// 006d5c29  99                   cdq 
// 006d5c2a  33c2                 xor eax, edx
// 006d5c2c  2bc2                 sub eax, edx
// 006d5c2e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006d5c32  7d10                 jge 0x6d5c44
// 006d5c34  6a00                 push 0
// 006d5c36  2bcd                 sub ecx, ebp
// 006d5c38  51                   push ecx
// 006d5c39  56                   push esi
// 006d5c3a  ffd7                 call edi
// 006d5c3c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5c40  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d5c44  8b2e                 mov ebp, dword ptr [esi]
// 006d5c46  8bc5                 mov eax, ebp
// 006d5c48  2bc3                 sub eax, ebx
// 006d5c4a  99                   cdq 
// 006d5c4b  33c2                 xor eax, edx
// 006d5c4d  2bc2                 sub eax, edx
// 006d5c4f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006d5c53  7d0c                 jge 0x6d5c61
// 006d5c55  6a00                 push 0
// 006d5c57  2bdd                 sub ebx, ebp
// 006d5c59  53                   push ebx
// 006d5c5a  56                   push esi
// 006d5c5b  ffd7                 call edi
// 006d5c5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5c61  8b5e08               mov ebx, dword ptr [esi + 8]
// 006d5c64  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006d5c68  8bc3                 mov eax, ebx
// 006d5c6a  2bc1                 sub eax, ecx
// 006d5c6c  99                   cdq 
// 006d5c6d  33c2                 xor eax, edx
// 006d5c6f  2bc2                 sub eax, edx
// 006d5c71  3bc5                 cmp eax, ebp
// 006d5c73  7d08                 jge 0x6d5c7d
// 006d5c75  6a00                 push 0
// 006d5c77  2bcb                 sub ecx, ebx
// 006d5c79  51                   push ecx
// 006d5c7a  56                   push esi
// 006d5c7b  ffd7                 call edi
// 006d5c7d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006d5c80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006d5c84  8bc3                 mov eax, ebx
// 006d5c86  2bc1                 sub eax, ecx
// 006d5c88  99                   cdq 
// 006d5c89  33c2                 xor eax, edx
// 006d5c8b  2bc2                 sub eax, edx
// 006d5c8d  3bc5                 cmp eax, ebp
// 006d5c8f  7d08                 jge 0x6d5c99
// 006d5c91  2bcb                 sub ecx, ebx
// 006d5c93  51                   push ecx
// 006d5c94  6a00                 push 0
// 006d5c96  56                   push esi
// 006d5c97  ffd7                 call edi
// 006d5c99  8b5e04               mov ebx, dword ptr [esi + 4]
// 006d5c9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d5ca0  8bc3                 mov eax, ebx
// 006d5ca2  2bc1                 sub eax, ecx
// 006d5ca4  99                   cdq 
// 006d5ca5  33c2                 xor eax, edx
// 006d5ca7  2bc2                 sub eax, edx
// 006d5ca9  3bc5                 cmp eax, ebp
// 006d5cab  7d08                 jge 0x6d5cb5
// 006d5cad  2bcb                 sub ecx, ebx
// 006d5caf  51                   push ecx
// 006d5cb0  6a00                 push 0
// 006d5cb2  56                   push esi
// 006d5cb3  ffd7                 call edi
// 006d5cb5  5b                   pop ebx
// 006d5cb6  5d                   pop ebp
// 006d5cb7  5f                   pop edi
// 006d5cb8  5e                   pop esi
// 006d5cb9  83c414               add esp, 0x14
// 006d5cbc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

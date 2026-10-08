// roc 2012-06 00a46ac0  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46ac0
//
// 00a46ac0  83ec14               sub esp, 0x14
// 00a46ac3  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00a46ac9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46acd  56                   push esi
// 00a46ace  57                   push edi
// 00a46acf  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 00a46ad5  51                   push ecx
// 00a46ad6  8d4c2410             lea ecx, [esp + 0x10]
// 00a46ada  897c240c             mov dword ptr [esp + 0xc], edi
// 00a46ade  e85de6f8ff           call 0x9d5140
// 00a46ae3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a46ae7  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a46aeb  2bd7                 sub edx, edi
// 00a46aed  39560c               cmp dword ptr [esi + 0xc], edx
// 00a46af0  0f8c31010000         jl 0xa46c27
// 00a46af6  8b4604               mov eax, dword ptr [esi + 4]
// 00a46af9  55                   push ebp
// 00a46afa  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a46afe  8d0c2f               lea ecx, [edi + ebp]
// 00a46b01  3bc1                 cmp eax, ecx
// 00a46b03  0f8f1d010000         jg 0xa46c26
// 00a46b09  53                   push ebx
// 00a46b0a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46b0e  8bd3                 mov edx, ebx
// 00a46b10  2bd7                 sub edx, edi
// 00a46b12  395608               cmp dword ptr [esi + 8], edx
// 00a46b15  0f8c0a010000         jl 0xa46c25
// 00a46b1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46b1f  8d1439               lea edx, [ecx + edi]
// 00a46b22  3916                 cmp dword ptr [esi], edx
// 00a46b24  0f8ffb000000         jg 0xa46c25
// 00a46b2a  2be8                 sub ebp, eax
// 00a46b2c  8bc5                 mov eax, ebp
// 00a46b2e  99                   cdq 
// 00a46b2f  33c2                 xor eax, edx
// 00a46b31  2bc2                 sub eax, edx
// 00a46b33  3bc7                 cmp eax, edi
// 00a46b35  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a46b3b  7d0e                 jge 0xa46b4b
// 00a46b3d  55                   push ebp
// 00a46b3e  6a00                 push 0
// 00a46b40  56                   push esi
// 00a46b41  ffd7                 call edi
// 00a46b43  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46b47  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46b4b  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00a46b4e  8bc5                 mov eax, ebp
// 00a46b50  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a46b54  99                   cdq 
// 00a46b55  33c2                 xor eax, edx
// 00a46b57  2bc2                 sub eax, edx
// 00a46b59  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00a46b5d  7d14                 jge 0xa46b73
// 00a46b5f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a46b63  2bc5                 sub eax, ebp
// 00a46b65  50                   push eax
// 00a46b66  6a00                 push 0
// 00a46b68  56                   push esi
// 00a46b69  ffd7                 call edi
// 00a46b6b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46b6f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46b73  8beb                 mov ebp, ebx
// 00a46b75  2b6e08               sub ebp, dword ptr [esi + 8]
// 00a46b78  8bc5                 mov eax, ebp
// 00a46b7a  99                   cdq 
// 00a46b7b  33c2                 xor eax, edx
// 00a46b7d  2bc2                 sub eax, edx
// 00a46b7f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00a46b83  7d0e                 jge 0xa46b93
// 00a46b85  6a00                 push 0
// 00a46b87  55                   push ebp
// 00a46b88  56                   push esi
// 00a46b89  ffd7                 call edi
// 00a46b8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46b8f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46b93  8b2e                 mov ebp, dword ptr [esi]
// 00a46b95  8bc5                 mov eax, ebp
// 00a46b97  2bc1                 sub eax, ecx
// 00a46b99  99                   cdq 
// 00a46b9a  33c2                 xor eax, edx
// 00a46b9c  2bc2                 sub eax, edx
// 00a46b9e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00a46ba2  7d10                 jge 0xa46bb4
// 00a46ba4  6a00                 push 0
// 00a46ba6  2bcd                 sub ecx, ebp
// 00a46ba8  51                   push ecx
// 00a46ba9  56                   push esi
// 00a46baa  ffd7                 call edi
// 00a46bac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46bb0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46bb4  8b2e                 mov ebp, dword ptr [esi]
// 00a46bb6  8bc5                 mov eax, ebp
// 00a46bb8  2bc3                 sub eax, ebx
// 00a46bba  99                   cdq 
// 00a46bbb  33c2                 xor eax, edx
// 00a46bbd  2bc2                 sub eax, edx
// 00a46bbf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00a46bc3  7d0c                 jge 0xa46bd1
// 00a46bc5  6a00                 push 0
// 00a46bc7  2bdd                 sub ebx, ebp
// 00a46bc9  53                   push ebx
// 00a46bca  56                   push esi
// 00a46bcb  ffd7                 call edi
// 00a46bcd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46bd1  8b5e08               mov ebx, dword ptr [esi + 8]
// 00a46bd4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a46bd8  8bc3                 mov eax, ebx
// 00a46bda  2bc1                 sub eax, ecx
// 00a46bdc  99                   cdq 
// 00a46bdd  33c2                 xor eax, edx
// 00a46bdf  2bc2                 sub eax, edx
// 00a46be1  3bc5                 cmp eax, ebp
// 00a46be3  7d08                 jge 0xa46bed
// 00a46be5  6a00                 push 0
// 00a46be7  2bcb                 sub ecx, ebx
// 00a46be9  51                   push ecx
// 00a46bea  56                   push esi
// 00a46beb  ffd7                 call edi
// 00a46bed  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00a46bf0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a46bf4  8bc3                 mov eax, ebx
// 00a46bf6  2bc1                 sub eax, ecx
// 00a46bf8  99                   cdq 
// 00a46bf9  33c2                 xor eax, edx
// 00a46bfb  2bc2                 sub eax, edx
// 00a46bfd  3bc5                 cmp eax, ebp
// 00a46bff  7d08                 jge 0xa46c09
// 00a46c01  2bcb                 sub ecx, ebx
// 00a46c03  51                   push ecx
// 00a46c04  6a00                 push 0
// 00a46c06  56                   push esi
// 00a46c07  ffd7                 call edi
// 00a46c09  8b5e04               mov ebx, dword ptr [esi + 4]
// 00a46c0c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a46c10  8bc3                 mov eax, ebx
// 00a46c12  2bc1                 sub eax, ecx
// 00a46c14  99                   cdq 
// 00a46c15  33c2                 xor eax, edx
// 00a46c17  2bc2                 sub eax, edx
// 00a46c19  3bc5                 cmp eax, ebp
// 00a46c1b  7d08                 jge 0xa46c25
// 00a46c1d  2bcb                 sub ecx, ebx
// 00a46c1f  51                   push ecx
// 00a46c20  6a00                 push 0
// 00a46c22  56                   push esi
// 00a46c23  ffd7                 call edi
// 00a46c25  5b                   pop ebx
// 00a46c26  5d                   pop ebp
// 00a46c27  5f                   pop edi
// 00a46c28  5e                   pop esi
// 00a46c29  83c414               add esp, 0x14
// 00a46c2c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

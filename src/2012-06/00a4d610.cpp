// roc 2012-06 00a4d610  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4d610
//
// 00a4d610  83ec3c               sub esp, 0x3c
// 00a4d613  53                   push ebx
// 00a4d614  55                   push ebp
// 00a4d615  56                   push esi
// 00a4d616  8bf1                 mov esi, ecx
// 00a4d618  8b06                 mov eax, dword ptr [esi]
// 00a4d61a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4d61d  57                   push edi
// 00a4d61e  ffd2                 call edx
// 00a4d620  83782000             cmp dword ptr [eax + 0x20], 0
// 00a4d624  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00a4d628  7403                 je 0xa4d62d
// 00a4d62a  897e08               mov dword ptr [esi + 8], edi
// 00a4d62d  8b06                 mov eax, dword ptr [esi]
// 00a4d62f  8b5004               mov edx, dword ptr [eax + 4]
// 00a4d632  8bce                 mov ecx, esi
// 00a4d634  897e0c               mov dword ptr [esi + 0xc], edi
// 00a4d637  bb01000000           mov ebx, 1
// 00a4d63c  ffd2                 call edx
// 00a4d63e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00a4d642  55                   push ebp
// 00a4d643  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00a4d64b  ff15803ab200         call dword ptr [0xb23a80]
// 00a4d651  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a4d657  3bc5                 cmp eax, ebp
// 00a4d659  0f851c010000         jne 0xa4d77b
// 00a4d65f  90                   nop 
// 00a4d660  6a00                 push 0
// 00a4d662  6a00                 push 0
// 00a4d664  6a00                 push 0
// 00a4d666  8d44243c             lea eax, [esp + 0x3c]
// 00a4d66a  50                   push eax
// 00a4d66b  ff15343bb200         call dword ptr [0xb23b34]
// 00a4d671  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a4d677  3bc5                 cmp eax, ebp
// 00a4d679  0f85e7000000         jne 0xa4d766
// 00a4d67f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a4d683  3d00020000           cmp eax, 0x200
// 00a4d688  0f87b1000000         ja 0xa4d73f
// 00a4d68e  7424                 je 0xa4d6b4
// 00a4d690  83f81f               cmp eax, 0x1f
// 00a4d693  0f84e2000000         je 0xa4d77b
// 00a4d699  3d00010000           cmp eax, 0x100
// 00a4d69e  0f85a7000000         jne 0xa4d74b
// 00a4d6a4  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 00a4d6a9  0f84cc000000         je 0xa4d77b
// 00a4d6af  e9a2000000           jmp 0xa4d756
// 00a4d6b4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4d6b8  8b5744               mov edx, dword ptr [edi + 0x44]
// 00a4d6bb  0fbfc8               movsx ecx, ax
// 00a4d6be  c1e810               shr eax, 0x10
// 00a4d6c1  98                   cwde 
// 00a4d6c2  89542410             mov dword ptr [esp + 0x10], edx
// 00a4d6c6  8b5748               mov edx, dword ptr [edi + 0x48]
// 00a4d6c9  89542414             mov dword ptr [esp + 0x14], edx
// 00a4d6cd  8b574c               mov edx, dword ptr [edi + 0x4c]
// 00a4d6d0  50                   push eax
// 00a4d6d1  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a4d6d5  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a4d6d9  8b5750               mov edx, dword ptr [edi + 0x50]
// 00a4d6dc  51                   push ecx
// 00a4d6dd  8d442418             lea eax, [esp + 0x18]
// 00a4d6e1  50                   push eax
// 00a4d6e2  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a4d6e6  89542428             mov dword ptr [esp + 0x28], edx
// 00a4d6ea  ff15483bb200         call dword ptr [0xb23b48]
// 00a4d6f0  8b16                 mov edx, dword ptr [esi]
// 00a4d6f2  8bd8                 mov ebx, eax
// 00a4d6f4  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00a4d6f7  8bce                 mov ecx, esi
// 00a4d6f9  ffd0                 call eax
// 00a4d6fb  83782000             cmp dword ptr [eax + 0x20], 0
// 00a4d6ff  7455                 je 0xa4d756
// 00a4d701  8bc3                 mov eax, ebx
// 00a4d703  f7d8                 neg eax
// 00a4d705  1bc0                 sbb eax, eax
// 00a4d707  23c7                 and eax, edi
// 00a4d709  3b4608               cmp eax, dword ptr [esi + 8]
// 00a4d70c  7448                 je 0xa4d756
// 00a4d70e  894608               mov dword ptr [esi + 8], eax
// 00a4d711  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a4d714  8b5748               mov edx, dword ptr [edi + 0x48]
// 00a4d717  8b474c               mov eax, dword ptr [edi + 0x4c]
// 00a4d71a  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a4d71e  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 00a4d721  89542424             mov dword ptr [esp + 0x24], edx
// 00a4d725  8b16                 mov edx, dword ptr [esi]
// 00a4d727  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4d72a  89442428             mov dword ptr [esp + 0x28], eax
// 00a4d72e  6a01                 push 1
// 00a4d730  8d442424             lea eax, [esp + 0x24]
// 00a4d734  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a4d738  50                   push eax
// 00a4d739  8bce                 mov ecx, esi
// 00a4d73b  ffd2                 call edx
// 00a4d73d  eb17                 jmp 0xa4d756
// 00a4d73f  2d02020000           sub eax, 0x202
// 00a4d744  742d                 je 0xa4d773
// 00a4d746  83e802               sub eax, 2
// 00a4d749  7430                 je 0xa4d77b
// 00a4d74b  8d442430             lea eax, [esp + 0x30]
// 00a4d74f  50                   push eax
// 00a4d750  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4d756  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a4d75c  3bc5                 cmp eax, ebp
// 00a4d75e  0f84fcfeffff         je 0xa4d660
// 00a4d764  eb15                 jmp 0xa4d77b
// 00a4d766  8d4c2430             lea ecx, [esp + 0x30]
// 00a4d76a  51                   push ecx
// 00a4d76b  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4d771  eb08                 jmp 0xa4d77b
// 00a4d773  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 00a4d77b  ff15743ab200         call dword ptr [0xb23a74]
// 00a4d781  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a4d785  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a4d789  52                   push edx
// 00a4d78a  50                   push eax
// 00a4d78b  55                   push ebp
// 00a4d78c  8bce                 mov ecx, esi
// 00a4d78e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00a4d795  e8c6f6ffff           call 0xa4ce60
// 00a4d79a  8b16                 mov edx, dword ptr [esi]
// 00a4d79c  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a4d79f  6a00                 push 0
// 00a4d7a1  6a00                 push 0
// 00a4d7a3  8bce                 mov ecx, esi
// 00a4d7a5  ffd0                 call eax
// 00a4d7a7  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00a4d7ac  740e                 je 0xa4d7bc
// 00a4d7ae  85db                 test ebx, ebx
// 00a4d7b0  740a                 je 0xa4d7bc
// 00a4d7b2  8b16                 mov edx, dword ptr [esi]
// 00a4d7b4  8b4260               mov eax, dword ptr [edx + 0x60]
// 00a4d7b7  57                   push edi
// 00a4d7b8  8bce                 mov ecx, esi
// 00a4d7ba  ffd0                 call eax
// 00a4d7bc  5f                   pop edi
// 00a4d7bd  5e                   pop esi
// 00a4d7be  5d                   pop ebp
// 00a4d7bf  5b                   pop ebx
// 00a4d7c0  83c43c               add esp, 0x3c
// 00a4d7c3  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

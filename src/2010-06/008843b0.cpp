// roc 2010-06 008843b0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008843b0
//
// 008843b0  83ec3c               sub esp, 0x3c
// 008843b3  53                   push ebx
// 008843b4  55                   push ebp
// 008843b5  56                   push esi
// 008843b6  8bf1                 mov esi, ecx
// 008843b8  8b06                 mov eax, dword ptr [esi]
// 008843ba  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008843bd  57                   push edi
// 008843be  ffd2                 call edx
// 008843c0  83782000             cmp dword ptr [eax + 0x20], 0
// 008843c4  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008843c8  7403                 je 0x8843cd
// 008843ca  897e08               mov dword ptr [esi + 8], edi
// 008843cd  8b06                 mov eax, dword ptr [esi]
// 008843cf  8b5004               mov edx, dword ptr [eax + 4]
// 008843d2  8bce                 mov ecx, esi
// 008843d4  897e0c               mov dword ptr [esi + 0xc], edi
// 008843d7  bb01000000           mov ebx, 1
// 008843dc  ffd2                 call edx
// 008843de  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008843e2  55                   push ebp
// 008843e3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008843eb  ff1580bc9e00         call dword ptr [0x9ebc80]
// 008843f1  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008843f7  3bc5                 cmp eax, ebp
// 008843f9  0f851c010000         jne 0x88451b
// 008843ff  90                   nop 
// 00884400  6a00                 push 0
// 00884402  6a00                 push 0
// 00884404  6a00                 push 0
// 00884406  8d44243c             lea eax, [esp + 0x3c]
// 0088440a  50                   push eax
// 0088440b  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 00884411  ff1584bc9e00         call dword ptr [0x9ebc84]
// 00884417  3bc5                 cmp eax, ebp
// 00884419  0f85e7000000         jne 0x884506
// 0088441f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00884423  3d00020000           cmp eax, 0x200
// 00884428  0f87b1000000         ja 0x8844df
// 0088442e  7424                 je 0x884454
// 00884430  83f81f               cmp eax, 0x1f
// 00884433  0f84e2000000         je 0x88451b
// 00884439  3d00010000           cmp eax, 0x100
// 0088443e  0f85a7000000         jne 0x8844eb
// 00884444  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 00884449  0f84cc000000         je 0x88451b
// 0088444f  e9a2000000           jmp 0x8844f6
// 00884454  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00884458  8b5744               mov edx, dword ptr [edi + 0x44]
// 0088445b  0fbfc8               movsx ecx, ax
// 0088445e  c1e810               shr eax, 0x10
// 00884461  98                   cwde 
// 00884462  89542410             mov dword ptr [esp + 0x10], edx
// 00884466  8b5748               mov edx, dword ptr [edi + 0x48]
// 00884469  89542414             mov dword ptr [esp + 0x14], edx
// 0088446d  8b574c               mov edx, dword ptr [edi + 0x4c]
// 00884470  50                   push eax
// 00884471  8944245c             mov dword ptr [esp + 0x5c], eax
// 00884475  8954241c             mov dword ptr [esp + 0x1c], edx
// 00884479  8b5750               mov edx, dword ptr [edi + 0x50]
// 0088447c  51                   push ecx
// 0088447d  8d442418             lea eax, [esp + 0x18]
// 00884481  50                   push eax
// 00884482  894c2460             mov dword ptr [esp + 0x60], ecx
// 00884486  89542428             mov dword ptr [esp + 0x28], edx
// 0088448a  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00884490  8b16                 mov edx, dword ptr [esi]
// 00884492  8bd8                 mov ebx, eax
// 00884494  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00884497  8bce                 mov ecx, esi
// 00884499  ffd0                 call eax
// 0088449b  83782000             cmp dword ptr [eax + 0x20], 0
// 0088449f  7455                 je 0x8844f6
// 008844a1  8bc3                 mov eax, ebx
// 008844a3  f7d8                 neg eax
// 008844a5  1bc0                 sbb eax, eax
// 008844a7  23c7                 and eax, edi
// 008844a9  3b4608               cmp eax, dword ptr [esi + 8]
// 008844ac  7448                 je 0x8844f6
// 008844ae  894608               mov dword ptr [esi + 8], eax
// 008844b1  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 008844b4  8b5748               mov edx, dword ptr [edi + 0x48]
// 008844b7  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008844ba  894c2420             mov dword ptr [esp + 0x20], ecx
// 008844be  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 008844c1  89542424             mov dword ptr [esp + 0x24], edx
// 008844c5  8b16                 mov edx, dword ptr [esi]
// 008844c7  8b5234               mov edx, dword ptr [edx + 0x34]
// 008844ca  89442428             mov dword ptr [esp + 0x28], eax
// 008844ce  6a01                 push 1
// 008844d0  8d442424             lea eax, [esp + 0x24]
// 008844d4  894c2430             mov dword ptr [esp + 0x30], ecx
// 008844d8  50                   push eax
// 008844d9  8bce                 mov ecx, esi
// 008844db  ffd2                 call edx
// 008844dd  eb17                 jmp 0x8844f6
// 008844df  2d02020000           sub eax, 0x202
// 008844e4  742d                 je 0x884513
// 008844e6  83e802               sub eax, 2
// 008844e9  7430                 je 0x88451b
// 008844eb  8d442430             lea eax, [esp + 0x30]
// 008844ef  50                   push eax
// 008844f0  ff1508bc9e00         call dword ptr [0x9ebc08]
// 008844f6  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008844fc  3bc5                 cmp eax, ebp
// 008844fe  0f84fcfeffff         je 0x884400
// 00884504  eb15                 jmp 0x88451b
// 00884506  8d4c2430             lea ecx, [esp + 0x30]
// 0088450a  51                   push ecx
// 0088450b  ff1508bc9e00         call dword ptr [0x9ebc08]
// 00884511  eb08                 jmp 0x88451b
// 00884513  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0088451b  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 00884521  8b542458             mov edx, dword ptr [esp + 0x58]
// 00884525  8b442454             mov eax, dword ptr [esp + 0x54]
// 00884529  52                   push edx
// 0088452a  50                   push eax
// 0088452b  55                   push ebp
// 0088452c  8bce                 mov ecx, esi
// 0088452e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00884535  e8e6f6ffff           call 0x883c20
// 0088453a  8b16                 mov edx, dword ptr [esi]
// 0088453c  8b4234               mov eax, dword ptr [edx + 0x34]
// 0088453f  6a00                 push 0
// 00884541  6a00                 push 0
// 00884543  8bce                 mov ecx, esi
// 00884545  ffd0                 call eax
// 00884547  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0088454c  740e                 je 0x88455c
// 0088454e  85db                 test ebx, ebx
// 00884550  740a                 je 0x88455c
// 00884552  8b16                 mov edx, dword ptr [esi]
// 00884554  8b4260               mov eax, dword ptr [edx + 0x60]
// 00884557  57                   push edi
// 00884558  8bce                 mov ecx, esi
// 0088455a  ffd0                 call eax
// 0088455c  5f                   pop edi
// 0088455d  5e                   pop esi
// 0088455e  5d                   pop ebp
// 0088455f  5b                   pop ebx
// 00884560  83c43c               add esp, 0x3c
// 00884563  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

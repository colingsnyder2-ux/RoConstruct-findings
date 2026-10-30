// roc 2009-12 008d01f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d01f0
//
// 008d01f0  83ec3c               sub esp, 0x3c
// 008d01f3  53                   push ebx
// 008d01f4  55                   push ebp
// 008d01f5  56                   push esi
// 008d01f6  8bf1                 mov esi, ecx
// 008d01f8  8b06                 mov eax, dword ptr [esi]
// 008d01fa  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d01fd  57                   push edi
// 008d01fe  ffd2                 call edx
// 008d0200  83782000             cmp dword ptr [eax + 0x20], 0
// 008d0204  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008d0208  7403                 je 0x8d020d
// 008d020a  897e08               mov dword ptr [esi + 8], edi
// 008d020d  8b06                 mov eax, dword ptr [esi]
// 008d020f  8b5004               mov edx, dword ptr [eax + 4]
// 008d0212  8bce                 mov ecx, esi
// 008d0214  897e0c               mov dword ptr [esi + 0xc], edi
// 008d0217  bb01000000           mov ebx, 1
// 008d021c  ffd2                 call edx
// 008d021e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008d0222  55                   push ebp
// 008d0223  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008d022b  ff152ccc9800         call dword ptr [0x98cc2c]
// 008d0231  ff1528cc9800         call dword ptr [0x98cc28]
// 008d0237  3bc5                 cmp eax, ebp
// 008d0239  0f851c010000         jne 0x8d035b
// 008d023f  90                   nop 
// 008d0240  6a00                 push 0
// 008d0242  6a00                 push 0
// 008d0244  6a00                 push 0
// 008d0246  8d44243c             lea eax, [esp + 0x3c]
// 008d024a  50                   push eax
// 008d024b  ff15b0ca9800         call dword ptr [0x98cab0]
// 008d0251  ff1528cc9800         call dword ptr [0x98cc28]
// 008d0257  3bc5                 cmp eax, ebp
// 008d0259  0f85e7000000         jne 0x8d0346
// 008d025f  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d0263  3d00020000           cmp eax, 0x200
// 008d0268  0f87b1000000         ja 0x8d031f
// 008d026e  7424                 je 0x8d0294
// 008d0270  83f81f               cmp eax, 0x1f
// 008d0273  0f84e2000000         je 0x8d035b
// 008d0279  3d00010000           cmp eax, 0x100
// 008d027e  0f85a7000000         jne 0x8d032b
// 008d0284  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 008d0289  0f84cc000000         je 0x8d035b
// 008d028f  e9a2000000           jmp 0x8d0336
// 008d0294  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d0298  8b5744               mov edx, dword ptr [edi + 0x44]
// 008d029b  0fbfc8               movsx ecx, ax
// 008d029e  c1e810               shr eax, 0x10
// 008d02a1  98                   cwde 
// 008d02a2  89542410             mov dword ptr [esp + 0x10], edx
// 008d02a6  8b5748               mov edx, dword ptr [edi + 0x48]
// 008d02a9  89542414             mov dword ptr [esp + 0x14], edx
// 008d02ad  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008d02b0  50                   push eax
// 008d02b1  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d02b5  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d02b9  8b5750               mov edx, dword ptr [edi + 0x50]
// 008d02bc  51                   push ecx
// 008d02bd  8d442418             lea eax, [esp + 0x18]
// 008d02c1  50                   push eax
// 008d02c2  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d02c6  89542428             mov dword ptr [esp + 0x28], edx
// 008d02ca  ff155cca9800         call dword ptr [0x98ca5c]
// 008d02d0  8b16                 mov edx, dword ptr [esi]
// 008d02d2  8bd8                 mov ebx, eax
// 008d02d4  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008d02d7  8bce                 mov ecx, esi
// 008d02d9  ffd0                 call eax
// 008d02db  83782000             cmp dword ptr [eax + 0x20], 0
// 008d02df  7455                 je 0x8d0336
// 008d02e1  8bc3                 mov eax, ebx
// 008d02e3  f7d8                 neg eax
// 008d02e5  1bc0                 sbb eax, eax
// 008d02e7  23c7                 and eax, edi
// 008d02e9  3b4608               cmp eax, dword ptr [esi + 8]
// 008d02ec  7448                 je 0x8d0336
// 008d02ee  894608               mov dword ptr [esi + 8], eax
// 008d02f1  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 008d02f4  8b5748               mov edx, dword ptr [edi + 0x48]
// 008d02f7  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008d02fa  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d02fe  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 008d0301  89542424             mov dword ptr [esp + 0x24], edx
// 008d0305  8b16                 mov edx, dword ptr [esi]
// 008d0307  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d030a  89442428             mov dword ptr [esp + 0x28], eax
// 008d030e  6a01                 push 1
// 008d0310  8d442424             lea eax, [esp + 0x24]
// 008d0314  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d0318  50                   push eax
// 008d0319  8bce                 mov ecx, esi
// 008d031b  ffd2                 call edx
// 008d031d  eb17                 jmp 0x8d0336
// 008d031f  2d02020000           sub eax, 0x202
// 008d0324  742d                 je 0x8d0353
// 008d0326  83e802               sub eax, 2
// 008d0329  7430                 je 0x8d035b
// 008d032b  8d442430             lea eax, [esp + 0x30]
// 008d032f  50                   push eax
// 008d0330  ff1594ca9800         call dword ptr [0x98ca94]
// 008d0336  ff1528cc9800         call dword ptr [0x98cc28]
// 008d033c  3bc5                 cmp eax, ebp
// 008d033e  0f84fcfeffff         je 0x8d0240
// 008d0344  eb15                 jmp 0x8d035b
// 008d0346  8d4c2430             lea ecx, [esp + 0x30]
// 008d034a  51                   push ecx
// 008d034b  ff1594ca9800         call dword ptr [0x98ca94]
// 008d0351  eb08                 jmp 0x8d035b
// 008d0353  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 008d035b  ff1520cc9800         call dword ptr [0x98cc20]
// 008d0361  8b542458             mov edx, dword ptr [esp + 0x58]
// 008d0365  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d0369  52                   push edx
// 008d036a  50                   push eax
// 008d036b  55                   push ebp
// 008d036c  8bce                 mov ecx, esi
// 008d036e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008d0375  e8c6f6ffff           call 0x8cfa40
// 008d037a  8b16                 mov edx, dword ptr [esi]
// 008d037c  8b4234               mov eax, dword ptr [edx + 0x34]
// 008d037f  6a00                 push 0
// 008d0381  6a00                 push 0
// 008d0383  8bce                 mov ecx, esi
// 008d0385  ffd0                 call eax
// 008d0387  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 008d038c  740e                 je 0x8d039c
// 008d038e  85db                 test ebx, ebx
// 008d0390  740a                 je 0x8d039c
// 008d0392  8b16                 mov edx, dword ptr [esi]
// 008d0394  8b4260               mov eax, dword ptr [edx + 0x60]
// 008d0397  57                   push edi
// 008d0398  8bce                 mov ecx, esi
// 008d039a  ffd0                 call eax
// 008d039c  5f                   pop edi
// 008d039d  5e                   pop esi
// 008d039e  5d                   pop ebp
// 008d039f  5b                   pop ebx
// 008d03a0  83c43c               add esp, 0x3c
// 008d03a3  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

// roc 2009-06 007f64e0  unit: CXTPTabPaintManager  size: 881 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f64e0
//
// 007f64e0  6aff                 push -1
// 007f64e2  68780f8800           push 0x880f78
// 007f64e7  64a100000000         mov eax, dword ptr fs:[0]
// 007f64ed  50                   push eax
// 007f64ee  83ec18               sub esp, 0x18
// 007f64f1  53                   push ebx
// 007f64f2  55                   push ebp
// 007f64f3  56                   push esi
// 007f64f4  57                   push edi
// 007f64f5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f64fa  33c4                 xor eax, esp
// 007f64fc  50                   push eax
// 007f64fd  8d44242c             lea eax, [esp + 0x2c]
// 007f6501  64a300000000         mov dword ptr fs:[0], eax
// 007f6507  8bf1                 mov esi, ecx
// 007f6509  89742414             mov dword ptr [esp + 0x14], esi
// 007f650d  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007f6511  6a00                 push 0
// 007f6513  6a5c                 push 0x5c
// 007f6515  8bcd                 mov ecx, ebp
// 007f6517  ff1500008a00         call dword ptr [0x8a0000]
// 007f651d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007f6521  83f8ff               cmp eax, -1
// 007f6524  7431                 je 0x7f6557
// 007f6526  8b442454             mov eax, dword ptr [esp + 0x54]
// 007f652a  8b37                 mov esi, dword ptr [edi]
// 007f652c  0d00400000           or eax, 0x4000
// 007f6531  50                   push eax
// 007f6532  8d4c2448             lea ecx, [esp + 0x48]
// 007f6536  51                   push ecx
// 007f6537  8bcd                 mov ecx, ebp
// 007f6539  83c670               add esi, 0x70
// 007f653c  ff1554fb8900         call dword ptr [0x89fb54]
// 007f6542  50                   push eax
// 007f6543  8bcd                 mov ecx, ebp
// 007f6545  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f654b  8b16                 mov edx, dword ptr [esi]
// 007f654d  50                   push eax
// 007f654e  8bcf                 mov ecx, edi
// 007f6550  ffd2                 call edx
// 007f6552  e9e4020000           jmp 0x7f683b
// 007f6557  8b4f08               mov ecx, dword ptr [edi + 8]
// 007f655a  8d44241c             lea eax, [esp + 0x1c]
// 007f655e  50                   push eax
// 007f655f  6a03                 push 3
// 007f6561  68a4c48e00           push 0x8ec4a4
// 007f6566  51                   push ecx
// 007f6567  ff1550e18900         call dword ptr [0x89e150]
// 007f656d  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f6571  53                   push ebx
// 007f6572  55                   push ebp
// 007f6573  57                   push edi
// 007f6574  8bce                 mov ecx, esi
// 007f6576  e895feffff           call 0x7f6410
// 007f657b  8bf0                 mov esi, eax
// 007f657d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007f6581  2b442444             sub eax, dword ptr [esp + 0x44]
// 007f6585  3bf0                 cmp esi, eax
// 007f6587  7f28                 jg 0x7f65b1
// 007f6589  8b37                 mov esi, dword ptr [edi]
// 007f658b  53                   push ebx
// 007f658c  8d542448             lea edx, [esp + 0x48]
// 007f6590  52                   push edx
// 007f6591  8bcd                 mov ecx, ebp
// 007f6593  83c670               add esi, 0x70
// 007f6596  ff1554fb8900         call dword ptr [0x89fb54]
// 007f659c  50                   push eax
// 007f659d  8bcd                 mov ecx, ebp
// 007f659f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f65a5  50                   push eax
// 007f65a6  8b06                 mov eax, dword ptr [esi]
// 007f65a8  8bcf                 mov ecx, edi
// 007f65aa  ffd0                 call eax
// 007f65ac  e98a020000           jmp 0x7f683b
// 007f65b1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f65b5  3bc1                 cmp eax, ecx
// 007f65b7  7f1b                 jg 0x7f65d4
// 007f65b9  8b17                 mov edx, dword ptr [edi]
// 007f65bb  8b5270               mov edx, dword ptr [edx + 0x70]
// 007f65be  53                   push ebx
// 007f65bf  8d442448             lea eax, [esp + 0x48]
// 007f65c3  50                   push eax
// 007f65c4  6a03                 push 3
// 007f65c6  68a4c48e00           push 0x8ec4a4
// 007f65cb  8bcf                 mov ecx, edi
// 007f65cd  ffd2                 call edx
// 007f65cf  e967020000           jmp 0x7f683b
// 007f65d4  2bc1                 sub eax, ecx
// 007f65d6  8bd8                 mov ebx, eax
// 007f65d8  8bcd                 mov ecx, ebp
// 007f65da  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007f65de  ff1554fb8900         call dword ptr [0x89fb54]
// 007f65e4  0fafc3               imul eax, ebx
// 007f65e7  99                   cdq 
// 007f65e8  f7fe                 idiv esi
// 007f65ea  8d4c2418             lea ecx, [esp + 0x18]
// 007f65ee  8bf0                 mov esi, eax
// 007f65f0  99                   cdq 
// 007f65f1  2bc2                 sub eax, edx
// 007f65f3  8bd8                 mov ebx, eax
// 007f65f5  d1fb                 sar ebx, 1
// 007f65f7  8bc6                 mov eax, esi
// 007f65f9  2bc3                 sub eax, ebx
// 007f65fb  50                   push eax
// 007f65fc  51                   push ecx
// 007f65fd  8bcd                 mov ecx, ebp
// 007f65ff  ff1510f48900         call dword ptr [0x89f410]
// 007f6605  53                   push ebx
// 007f6606  8d542444             lea edx, [esp + 0x44]
// 007f660a  52                   push edx
// 007f660b  8bcd                 mov ecx, ebp
// 007f660d  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007f6615  ff1518fe8900         call dword ptr [0x89fe18]
// 007f661b  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f661f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f6623  53                   push ebx
// 007f6624  8d442444             lea eax, [esp + 0x44]
// 007f6628  50                   push eax
// 007f6629  57                   push edi
// 007f662a  c644244001           mov byte ptr [esp + 0x40], 1
// 007f662f  e8dcfdffff           call 0x7f6410
// 007f6634  53                   push ebx
// 007f6635  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6639  51                   push ecx
// 007f663a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f663e  57                   push edi
// 007f663f  89442428             mov dword ptr [esp + 0x28], eax
// 007f6643  e8c8fdffff           call 0x7f6410
// 007f6648  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f664c  03c8                 add ecx, eax
// 007f664e  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 007f6652  0f8da0000000         jge 0x7f66f8
// 007f6658  46                   inc esi
// 007f6659  8bc6                 mov eax, esi
// 007f665b  99                   cdq 
// 007f665c  2bc2                 sub eax, edx
// 007f665e  8bd8                 mov ebx, eax
// 007f6660  d1fb                 sar ebx, 1
// 007f6662  8bd6                 mov edx, esi
// 007f6664  2bd3                 sub edx, ebx
// 007f6666  52                   push edx
// 007f6667  8d442420             lea eax, [esp + 0x20]
// 007f666b  50                   push eax
// 007f666c  8bcd                 mov ecx, ebp
// 007f666e  ff1510f48900         call dword ptr [0x89f410]
// 007f6674  50                   push eax
// 007f6675  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6679  c644243802           mov byte ptr [esp + 0x38], 2
// 007f667e  ff1508fa8900         call dword ptr [0x89fa08]
// 007f6684  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6688  c644243401           mov byte ptr [esp + 0x34], 1
// 007f668d  ff1510fd8900         call dword ptr [0x89fd10]
// 007f6693  53                   push ebx
// 007f6694  8d4c2428             lea ecx, [esp + 0x28]
// 007f6698  51                   push ecx
// 007f6699  8bcd                 mov ecx, ebp
// 007f669b  ff1518fe8900         call dword ptr [0x89fe18]
// 007f66a1  50                   push eax
// 007f66a2  8d4c2444             lea ecx, [esp + 0x44]
// 007f66a6  c644243803           mov byte ptr [esp + 0x38], 3
// 007f66ab  ff1508fa8900         call dword ptr [0x89fa08]
// 007f66b1  8d4c2424             lea ecx, [esp + 0x24]
// 007f66b5  c644243401           mov byte ptr [esp + 0x34], 1
// 007f66ba  ff1510fd8900         call dword ptr [0x89fd10]
// 007f66c0  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f66c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f66c8  53                   push ebx
// 007f66c9  8d542444             lea edx, [esp + 0x44]
// 007f66cd  52                   push edx
// 007f66ce  57                   push edi
// 007f66cf  e83cfdffff           call 0x7f6410
// 007f66d4  53                   push ebx
// 007f66d5  8d4c241c             lea ecx, [esp + 0x1c]
// 007f66d9  51                   push ecx
// 007f66da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f66de  57                   push edi
// 007f66df  89442434             mov dword ptr [esp + 0x34], eax
// 007f66e3  e828fdffff           call 0x7f6410
// 007f66e8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f66ec  03c8                 add ecx, eax
// 007f66ee  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 007f66f2  0f8c60ffffff         jl 0x7f6658
// 007f66f8  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f66fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f6700  53                   push ebx
// 007f6701  8d542444             lea edx, [esp + 0x44]
// 007f6705  52                   push edx
// 007f6706  57                   push edi
// 007f6707  e804fdffff           call 0x7f6410
// 007f670c  53                   push ebx
// 007f670d  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6711  51                   push ecx
// 007f6712  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f6716  57                   push edi
// 007f6717  89442434             mov dword ptr [esp + 0x34], eax
// 007f671b  e8f0fcffff           call 0x7f6410
// 007f6720  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f6724  03c8                 add ecx, eax
// 007f6726  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 007f672a  0f8ea0000000         jle 0x7f67d0
// 007f6730  4e                   dec esi
// 007f6731  8bc6                 mov eax, esi
// 007f6733  99                   cdq 
// 007f6734  2bc2                 sub eax, edx
// 007f6736  8bd8                 mov ebx, eax
// 007f6738  d1fb                 sar ebx, 1
// 007f673a  8bd6                 mov edx, esi
// 007f673c  2bd3                 sub edx, ebx
// 007f673e  52                   push edx
// 007f673f  8d44242c             lea eax, [esp + 0x2c]
// 007f6743  50                   push eax
// 007f6744  8bcd                 mov ecx, ebp
// 007f6746  ff1510f48900         call dword ptr [0x89f410]
// 007f674c  50                   push eax
// 007f674d  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6751  c644243804           mov byte ptr [esp + 0x38], 4
// 007f6756  ff1508fa8900         call dword ptr [0x89fa08]
// 007f675c  8d4c2428             lea ecx, [esp + 0x28]
// 007f6760  c644243401           mov byte ptr [esp + 0x34], 1
// 007f6765  ff1510fd8900         call dword ptr [0x89fd10]
// 007f676b  53                   push ebx
// 007f676c  8d4c2428             lea ecx, [esp + 0x28]
// 007f6770  51                   push ecx
// 007f6771  8bcd                 mov ecx, ebp
// 007f6773  ff1518fe8900         call dword ptr [0x89fe18]
// 007f6779  50                   push eax
// 007f677a  8d4c2444             lea ecx, [esp + 0x44]
// 007f677e  c644243805           mov byte ptr [esp + 0x38], 5
// 007f6783  ff1508fa8900         call dword ptr [0x89fa08]
// 007f6789  8d4c2424             lea ecx, [esp + 0x24]
// 007f678d  c644243401           mov byte ptr [esp + 0x34], 1
// 007f6792  ff1510fd8900         call dword ptr [0x89fd10]
// 007f6798  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f679c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f67a0  53                   push ebx
// 007f67a1  8d542444             lea edx, [esp + 0x44]
// 007f67a5  52                   push edx
// 007f67a6  57                   push edi
// 007f67a7  e864fcffff           call 0x7f6410
// 007f67ac  53                   push ebx
// 007f67ad  8d4c241c             lea ecx, [esp + 0x1c]
// 007f67b1  51                   push ecx
// 007f67b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f67b6  57                   push edi
// 007f67b7  89442428             mov dword ptr [esp + 0x28], eax
// 007f67bb  e850fcffff           call 0x7f6410
// 007f67c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f67c4  03c8                 add ecx, eax
// 007f67c6  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 007f67ca  0f8f60ffffff         jg 0x7f6730
// 007f67d0  68a4c48e00           push 0x8ec4a4
// 007f67d5  8d54241c             lea edx, [esp + 0x1c]
// 007f67d9  52                   push edx
// 007f67da  8d44242c             lea eax, [esp + 0x2c]
// 007f67de  50                   push eax
// 007f67df  e83c66c1ff           call 0x40ce20
// 007f67e4  8d4c244c             lea ecx, [esp + 0x4c]
// 007f67e8  51                   push ecx
// 007f67e9  50                   push eax
// 007f67ea  8d54243c             lea edx, [esp + 0x3c]
// 007f67ee  52                   push edx
// 007f67ef  c644244c06           mov byte ptr [esp + 0x4c], 6
// 007f67f4  e857dbc5ff           call 0x454350
// 007f67f9  83c418               add esp, 0x18
// 007f67fc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007f6800  51                   push ecx
// 007f6801  8d542448             lea edx, [esp + 0x48]
// 007f6805  52                   push edx
// 007f6806  50                   push eax
// 007f6807  8bcf                 mov ecx, edi
// 007f6809  c644244007           mov byte ptr [esp + 0x40], 7
// 007f680e  e87d51f2ff           call 0x71b990
// 007f6813  8d4c2428             lea ecx, [esp + 0x28]
// 007f6817  ff1510fd8900         call dword ptr [0x89fd10]
// 007f681d  8d4c2424             lea ecx, [esp + 0x24]
// 007f6821  ff1510fd8900         call dword ptr [0x89fd10]
// 007f6827  8d4c2440             lea ecx, [esp + 0x40]
// 007f682b  ff1510fd8900         call dword ptr [0x89fd10]
// 007f6831  8d4c2418             lea ecx, [esp + 0x18]
// 007f6835  ff1510fd8900         call dword ptr [0x89fd10]
// 007f683b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f683f  64890d00000000       mov dword ptr fs:[0], ecx
// 007f6846  59                   pop ecx
// 007f6847  5f                   pop edi
// 007f6848  5e                   pop esi
// 007f6849  5d                   pop ebp
// 007f684a  5b                   pop ebx
// 007f684b  83c424               add esp, 0x24
// 007f684e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawTextPathEllipsis@CXTPTabPaintManager@@IAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp
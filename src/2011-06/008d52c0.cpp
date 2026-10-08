// roc 2011-06 008d52c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d52c0
//
// 008d52c0  83ec3c               sub esp, 0x3c
// 008d52c3  53                   push ebx
// 008d52c4  55                   push ebp
// 008d52c5  56                   push esi
// 008d52c6  8bf1                 mov esi, ecx
// 008d52c8  8b06                 mov eax, dword ptr [esi]
// 008d52ca  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d52cd  57                   push edi
// 008d52ce  ffd2                 call edx
// 008d52d0  83782000             cmp dword ptr [eax + 0x20], 0
// 008d52d4  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008d52d8  7403                 je 0x8d52dd
// 008d52da  897e08               mov dword ptr [esi + 8], edi
// 008d52dd  8b06                 mov eax, dword ptr [esi]
// 008d52df  8b5004               mov edx, dword ptr [eax + 4]
// 008d52e2  8bce                 mov ecx, esi
// 008d52e4  897e0c               mov dword ptr [esi + 0xc], edi
// 008d52e7  bb01000000           mov ebx, 1
// 008d52ec  ffd2                 call edx
// 008d52ee  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008d52f2  55                   push ebp
// 008d52f3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 008d52fb  ff15341ba400         call dword ptr [0xa41b34]
// 008d5301  ff15381ba400         call dword ptr [0xa41b38]
// 008d5307  3bc5                 cmp eax, ebp
// 008d5309  0f851c010000         jne 0x8d542b
// 008d530f  90                   nop 
// 008d5310  6a00                 push 0
// 008d5312  6a00                 push 0
// 008d5314  6a00                 push 0
// 008d5316  8d44243c             lea eax, [esp + 0x3c]
// 008d531a  50                   push eax
// 008d531b  ff15281ca400         call dword ptr [0xa41c28]
// 008d5321  ff15381ba400         call dword ptr [0xa41b38]
// 008d5327  3bc5                 cmp eax, ebp
// 008d5329  0f85e7000000         jne 0x8d5416
// 008d532f  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d5333  3d00020000           cmp eax, 0x200
// 008d5338  0f87b1000000         ja 0x8d53ef
// 008d533e  7424                 je 0x8d5364
// 008d5340  83f81f               cmp eax, 0x1f
// 008d5343  0f84e2000000         je 0x8d542b
// 008d5349  3d00010000           cmp eax, 0x100
// 008d534e  0f85a7000000         jne 0x8d53fb
// 008d5354  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 008d5359  0f84cc000000         je 0x8d542b
// 008d535f  e9a2000000           jmp 0x8d5406
// 008d5364  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d5368  8b5744               mov edx, dword ptr [edi + 0x44]
// 008d536b  0fbfc8               movsx ecx, ax
// 008d536e  c1e810               shr eax, 0x10
// 008d5371  98                   cwde 
// 008d5372  89542410             mov dword ptr [esp + 0x10], edx
// 008d5376  8b5748               mov edx, dword ptr [edi + 0x48]
// 008d5379  89542414             mov dword ptr [esp + 0x14], edx
// 008d537d  8b574c               mov edx, dword ptr [edi + 0x4c]
// 008d5380  50                   push eax
// 008d5381  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d5385  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d5389  8b5750               mov edx, dword ptr [edi + 0x50]
// 008d538c  51                   push ecx
// 008d538d  8d442418             lea eax, [esp + 0x18]
// 008d5391  50                   push eax
// 008d5392  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d5396  89542428             mov dword ptr [esp + 0x28], edx
// 008d539a  ff15101ca400         call dword ptr [0xa41c10]
// 008d53a0  8b16                 mov edx, dword ptr [esi]
// 008d53a2  8bd8                 mov ebx, eax
// 008d53a4  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008d53a7  8bce                 mov ecx, esi
// 008d53a9  ffd0                 call eax
// 008d53ab  83782000             cmp dword ptr [eax + 0x20], 0
// 008d53af  7455                 je 0x8d5406
// 008d53b1  8bc3                 mov eax, ebx
// 008d53b3  f7d8                 neg eax
// 008d53b5  1bc0                 sbb eax, eax
// 008d53b7  23c7                 and eax, edi
// 008d53b9  3b4608               cmp eax, dword ptr [esi + 8]
// 008d53bc  7448                 je 0x8d5406
// 008d53be  894608               mov dword ptr [esi + 8], eax
// 008d53c1  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 008d53c4  8b5748               mov edx, dword ptr [edi + 0x48]
// 008d53c7  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008d53ca  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d53ce  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 008d53d1  89542424             mov dword ptr [esp + 0x24], edx
// 008d53d5  8b16                 mov edx, dword ptr [esi]
// 008d53d7  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d53da  89442428             mov dword ptr [esp + 0x28], eax
// 008d53de  6a01                 push 1
// 008d53e0  8d442424             lea eax, [esp + 0x24]
// 008d53e4  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d53e8  50                   push eax
// 008d53e9  8bce                 mov ecx, esi
// 008d53eb  ffd2                 call edx
// 008d53ed  eb17                 jmp 0x8d5406
// 008d53ef  2d02020000           sub eax, 0x202
// 008d53f4  742d                 je 0x8d5423
// 008d53f6  83e802               sub eax, 2
// 008d53f9  7430                 je 0x8d542b
// 008d53fb  8d442430             lea eax, [esp + 0x30]
// 008d53ff  50                   push eax
// 008d5400  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d5406  ff15381ba400         call dword ptr [0xa41b38]
// 008d540c  3bc5                 cmp eax, ebp
// 008d540e  0f84fcfeffff         je 0x8d5310
// 008d5414  eb15                 jmp 0x8d542b
// 008d5416  8d4c2430             lea ecx, [esp + 0x30]
// 008d541a  51                   push ecx
// 008d541b  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d5421  eb08                 jmp 0x8d542b
// 008d5423  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 008d542b  ff15401ba400         call dword ptr [0xa41b40]
// 008d5431  8b542458             mov edx, dword ptr [esp + 0x58]
// 008d5435  8b442454             mov eax, dword ptr [esp + 0x54]
// 008d5439  52                   push edx
// 008d543a  50                   push eax
// 008d543b  55                   push ebp
// 008d543c  8bce                 mov ecx, esi
// 008d543e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008d5445  e8c6f6ffff           call 0x8d4b10
// 008d544a  8b16                 mov edx, dword ptr [esi]
// 008d544c  8b4234               mov eax, dword ptr [edx + 0x34]
// 008d544f  6a00                 push 0
// 008d5451  6a00                 push 0
// 008d5453  8bce                 mov ecx, esi
// 008d5455  ffd0                 call eax
// 008d5457  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 008d545c  740e                 je 0x8d546c
// 008d545e  85db                 test ebx, ebx
// 008d5460  740a                 je 0x8d546c
// 008d5462  8b16                 mov edx, dword ptr [esi]
// 008d5464  8b4260               mov eax, dword ptr [edx + 0x60]
// 008d5467  57                   push edi
// 008d5468  8bce                 mov ecx, esi
// 008d546a  ffd0                 call eax
// 008d546c  5f                   pop edi
// 008d546d  5e                   pop esi
// 008d546e  5d                   pop ebp
// 008d546f  5b                   pop ebx
// 008d5470  83c43c               add esp, 0x3c
// 008d5473  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

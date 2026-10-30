// from server: 100% by auto
// roc 2008-06 0077cf80  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077cf80
//
// 0077cf80  83ec3c               sub esp, 0x3c
// 0077cf83  53                   push ebx
// 0077cf84  55                   push ebp
// 0077cf85  56                   push esi
// 0077cf86  8bf1                 mov esi, ecx
// 0077cf88  8b06                 mov eax, dword ptr [esi]
// 0077cf8a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077cf8d  57                   push edi
// 0077cf8e  ffd2                 call edx
// 0077cf90  83782000             cmp dword ptr [eax + 0x20], 0
// 0077cf94  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0077cf98  7403                 je 0x77cf9d
// 0077cf9a  897e08               mov dword ptr [esi + 8], edi
// 0077cf9d  8b06                 mov eax, dword ptr [esi]
// 0077cf9f  8b5004               mov edx, dword ptr [eax + 4]
// 0077cfa2  8bce                 mov ecx, esi
// 0077cfa4  897e0c               mov dword ptr [esi + 0xc], edi
// 0077cfa7  bb01000000           mov ebx, 1
// 0077cfac  ffd2                 call edx
// 0077cfae  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 0077cfb2  55                   push ebp
// 0077cfb3  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0077cfbb  ff15a82d8000         call dword ptr [0x802da8]
// 0077cfc1  ff15ac2d8000         call dword ptr [0x802dac]
// 0077cfc7  3bc5                 cmp eax, ebp
// 0077cfc9  0f851c010000         jne 0x77d0eb
// 0077cfcf  90                   nop 
// 0077cfd0  6a00                 push 0
// 0077cfd2  6a00                 push 0
// 0077cfd4  6a00                 push 0
// 0077cfd6  8d44243c             lea eax, [esp + 0x3c]
// 0077cfda  50                   push eax
// 0077cfdb  ff15782c8000         call dword ptr [0x802c78]
// 0077cfe1  ff15ac2d8000         call dword ptr [0x802dac]
// 0077cfe7  3bc5                 cmp eax, ebp
// 0077cfe9  0f85e7000000         jne 0x77d0d6
// 0077cfef  8b442434             mov eax, dword ptr [esp + 0x34]
// 0077cff3  3d00020000           cmp eax, 0x200
// 0077cff8  0f87b1000000         ja 0x77d0af
// 0077cffe  7424                 je 0x77d024
// 0077d000  83f81f               cmp eax, 0x1f
// 0077d003  0f84e2000000         je 0x77d0eb
// 0077d009  3d00010000           cmp eax, 0x100
// 0077d00e  0f85a7000000         jne 0x77d0bb
// 0077d014  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 0077d019  0f84cc000000         je 0x77d0eb
// 0077d01f  e9a2000000           jmp 0x77d0c6
// 0077d024  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0077d028  8b5744               mov edx, dword ptr [edi + 0x44]
// 0077d02b  0fbfc8               movsx ecx, ax
// 0077d02e  c1e810               shr eax, 0x10
// 0077d031  98                   cwde 
// 0077d032  89542410             mov dword ptr [esp + 0x10], edx
// 0077d036  8b5748               mov edx, dword ptr [edi + 0x48]
// 0077d039  89542414             mov dword ptr [esp + 0x14], edx
// 0077d03d  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0077d040  50                   push eax
// 0077d041  8944245c             mov dword ptr [esp + 0x5c], eax
// 0077d045  8954241c             mov dword ptr [esp + 0x1c], edx
// 0077d049  8b5750               mov edx, dword ptr [edi + 0x50]
// 0077d04c  51                   push ecx
// 0077d04d  8d442418             lea eax, [esp + 0x18]
// 0077d051  50                   push eax
// 0077d052  894c2460             mov dword ptr [esp + 0x60], ecx
// 0077d056  89542428             mov dword ptr [esp + 0x28], edx
// 0077d05a  ff152c2d8000         call dword ptr [0x802d2c]
// 0077d060  8b16                 mov edx, dword ptr [esi]
// 0077d062  8bd8                 mov ebx, eax
// 0077d064  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0077d067  8bce                 mov ecx, esi
// 0077d069  ffd0                 call eax
// 0077d06b  83782000             cmp dword ptr [eax + 0x20], 0
// 0077d06f  7455                 je 0x77d0c6
// 0077d071  8bc3                 mov eax, ebx
// 0077d073  f7d8                 neg eax
// 0077d075  1bc0                 sbb eax, eax
// 0077d077  23c7                 and eax, edi
// 0077d079  3b4608               cmp eax, dword ptr [esi + 8]
// 0077d07c  7448                 je 0x77d0c6
// 0077d07e  894608               mov dword ptr [esi + 8], eax
// 0077d081  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0077d084  8b5748               mov edx, dword ptr [edi + 0x48]
// 0077d087  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0077d08a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0077d08e  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 0077d091  89542424             mov dword ptr [esp + 0x24], edx
// 0077d095  8b16                 mov edx, dword ptr [esi]
// 0077d097  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077d09a  89442428             mov dword ptr [esp + 0x28], eax
// 0077d09e  6a01                 push 1
// 0077d0a0  8d442424             lea eax, [esp + 0x24]
// 0077d0a4  894c2430             mov dword ptr [esp + 0x30], ecx
// 0077d0a8  50                   push eax
// 0077d0a9  8bce                 mov ecx, esi
// 0077d0ab  ffd2                 call edx
// 0077d0ad  eb17                 jmp 0x77d0c6
// 0077d0af  2d02020000           sub eax, 0x202
// 0077d0b4  742d                 je 0x77d0e3
// 0077d0b6  83e802               sub eax, 2
// 0077d0b9  7430                 je 0x77d0eb
// 0077d0bb  8d442430             lea eax, [esp + 0x30]
// 0077d0bf  50                   push eax
// 0077d0c0  ff15c82c8000         call dword ptr [0x802cc8]
// 0077d0c6  ff15ac2d8000         call dword ptr [0x802dac]
// 0077d0cc  3bc5                 cmp eax, ebp
// 0077d0ce  0f84fcfeffff         je 0x77cfd0
// 0077d0d4  eb15                 jmp 0x77d0eb
// 0077d0d6  8d4c2430             lea ecx, [esp + 0x30]
// 0077d0da  51                   push ecx
// 0077d0db  ff15c82c8000         call dword ptr [0x802cc8]
// 0077d0e1  eb08                 jmp 0x77d0eb
// 0077d0e3  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0077d0eb  ff15b42d8000         call dword ptr [0x802db4]
// 0077d0f1  8b542458             mov edx, dword ptr [esp + 0x58]
// 0077d0f5  8b442454             mov eax, dword ptr [esp + 0x54]
// 0077d0f9  52                   push edx
// 0077d0fa  50                   push eax
// 0077d0fb  55                   push ebp
// 0077d0fc  8bce                 mov ecx, esi
// 0077d0fe  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0077d105  e8c6f6ffff           call 0x77c7d0
// 0077d10a  8b16                 mov edx, dword ptr [esi]
// 0077d10c  8b4234               mov eax, dword ptr [edx + 0x34]
// 0077d10f  6a00                 push 0
// 0077d111  6a00                 push 0
// 0077d113  8bce                 mov ecx, esi
// 0077d115  ffd0                 call eax
// 0077d117  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0077d11c  740e                 je 0x77d12c
// 0077d11e  85db                 test ebx, ebx
// 0077d120  740a                 je 0x77d12c
// 0077d122  8b16                 mov edx, dword ptr [esi]
// 0077d124  8b4260               mov eax, dword ptr [edx + 0x60]
// 0077d127  57                   push edi
// 0077d128  8bce                 mov ecx, esi
// 0077d12a  ffd0                 call eax
// 0077d12c  5f                   pop edi
// 0077d12d  5e                   pop esi
// 0077d12e  5d                   pop ebp
// 0077d12f  5b                   pop ebx
// 0077d130  83c43c               add esp, 0x3c
// 0077d133  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

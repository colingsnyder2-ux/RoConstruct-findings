// roc 2008-06 007257c0  unit: CXTPRibbonBar  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007257c0
//
// 007257c0  83ec10               sub esp, 0x10
// 007257c3  53                   push ebx
// 007257c4  8bd9                 mov ebx, ecx
// 007257c6  83bb4c02000000       cmp dword ptr [ebx + 0x24c], 0
// 007257cd  0f84e3000000         je 0x7258b6
// 007257d3  56                   push esi
// 007257d4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007257d8  56                   push esi
// 007257d9  e8e289fcff           call 0x6ee1c0
// 007257de  50                   push eax
// 007257df  e842b4f7ff           call 0x6a0c26
// 007257e4  83c408               add esp, 8
// 007257e7  85c0                 test eax, eax
// 007257e9  7426                 je 0x725811
// 007257eb  8b8080010000         mov eax, dword ptr [eax + 0x180]
// 007257f1  85c0                 test eax, eax
// 007257f3  741c                 je 0x725811
// 007257f5  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007257fb  3d83250000           cmp eax, 0x2583
// 00725800  0f84af000000         je 0x7258b5
// 00725806  3d8b250000           cmp eax, 0x258b
// 0072580b  0f84a4000000         je 0x7258b5
// 00725811  6a00                 push 0
// 00725813  6aff                 push -1
// 00725815  8bce                 mov ecx, esi
// 00725817  e8b416f9ff           call 0x6b6ed0
// 0072581c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00725820  8b542420             mov edx, dword ptr [esp + 0x20]
// 00725824  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0072582a  50                   push eax
// 0072582b  52                   push edx
// 0072582c  e8cfc6fcff           call 0x6f1f00
// 00725831  85c0                 test eax, eax
// 00725833  741a                 je 0x72584f
// 00725835  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00725839  50                   push eax
// 0072583a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072583e  50                   push eax
// 0072583f  51                   push ecx
// 00725840  8bcb                 mov ecx, ebx
// 00725842  e8b9efffff           call 0x724800
// 00725847  5e                   pop esi
// 00725848  5b                   pop ebx
// 00725849  83c410               add esp, 0x10
// 0072584c  c20c00               ret 0xc
// 0072584f  56                   push esi
// 00725850  e86b1b0700           call 0x7973c0
// 00725855  83c404               add esp, 4
// 00725858  85c0                 test eax, eax
// 0072585a  7459                 je 0x7258b5
// 0072585c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00725860  8b10                 mov edx, dword ptr [eax]
// 00725862  8b5208               mov edx, dword ptr [edx + 8]
// 00725865  51                   push ecx
// 00725866  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072586a  51                   push ecx
// 0072586b  8bc8                 mov ecx, eax
// 0072586d  ffd2                 call edx
// 0072586f  8bf0                 mov esi, eax
// 00725871  85f6                 test esi, esi
// 00725873  7440                 je 0x7258b5
// 00725875  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00725878  8b4634               mov eax, dword ptr [esi + 0x34]
// 0072587b  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0072587e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00725882  57                   push edi
// 00725883  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00725886  8bcb                 mov ecx, ebx
// 00725888  8944240c             mov dword ptr [esp + 0xc], eax
// 0072588c  89542414             mov dword ptr [esp + 0x14], edx
// 00725890  e82bc8ffff           call 0x7220c0
// 00725895  2bb860060000         sub edi, dword ptr [eax + 0x660]
// 0072589b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072589f  3bf8                 cmp edi, eax
// 007258a1  5f                   pop edi
// 007258a2  7d11                 jge 0x7258b5
// 007258a4  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007258a7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007258ab  51                   push ecx
// 007258ac  50                   push eax
// 007258ad  52                   push edx
// 007258ae  8bcb                 mov ecx, ebx
// 007258b0  e84befffff           call 0x724800
// 007258b5  5e                   pop esi
// 007258b6  5b                   pop ebx
// 007258b7  83c410               add esp, 0x10
// 007258ba  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnPopupRButtonUp@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp

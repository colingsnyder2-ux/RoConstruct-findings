// roc 2008-06 00713340  unit: CXTPPropertyGridItem  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00713340
//
// 00713340  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00713344  56                   push esi
// 00713345  8bf1                 mov esi, ecx
// 00713347  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071334b  50                   push eax
// 0071334c  51                   push ecx
// 0071334d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00713353  e848ff0500           call 0x7732a0
// 00713358  85c0                 test eax, eax
// 0071335a  7420                 je 0x71337c
// 0071335c  8b16                 mov edx, dword ptr [esi]
// 0071335e  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00713364  8bce                 mov ecx, esi
// 00713366  ffd0                 call eax
// 00713368  85c0                 test eax, eax
// 0071336a  7410                 je 0x71337c
// 0071336c  8b16                 mov edx, dword ptr [esi]
// 0071336e  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00713374  8bce                 mov ecx, esi
// 00713376  ffd0                 call eax
// 00713378  5e                   pop esi
// 00713379  c20c00               ret 0xc
// 0071337c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00713382  83792800             cmp dword ptr [ecx + 0x28], 0
// 00713386  7426                 je 0x7133ae
// 00713388  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0071338f  741d                 je 0x7133ae
// 00713391  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00713398  8bce                 mov ecx, esi
// 0071339a  7409                 je 0x7133a5
// 0071339c  e8dfe3ffff           call 0x711780
// 007133a1  5e                   pop esi
// 007133a2  c20c00               ret 0xc
// 007133a5  e836e4ffff           call 0x7117e0
// 007133aa  5e                   pop esi
// 007133ab  c20c00               ret 0xc
// 007133ae  8b16                 mov edx, dword ptr [esi]
// 007133b0  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 007133b6  8bce                 mov ecx, esi
// 007133b8  ffd0                 call eax
// 007133ba  f6868c00000001       test byte ptr [esi + 0x8c], 1
// 007133c1  8bce                 mov ecx, esi
// 007133c3  0f8495000000         je 0x71345e
// 007133c9  8b16                 mov edx, dword ptr [esi]
// 007133cb  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007133d1  57                   push edi
// 007133d2  ffd0                 call eax
// 007133d4  8bf8                 mov edi, eax
// 007133d6  85ff                 test edi, edi
// 007133d8  7456                 je 0x713430
// 007133da  8b4720               mov eax, dword ptr [edi + 0x20]
// 007133dd  85c0                 test eax, eax
// 007133df  744f                 je 0x713430
// 007133e1  50                   push eax
// 007133e2  ff153c2d8000         call dword ptr [0x802d3c]
// 007133e8  85c0                 test eax, eax
// 007133ea  7444                 je 0x713430
// 007133ec  39b7a0000000         cmp dword ptr [edi + 0xa0], esi
// 007133f2  753c                 jne 0x713430
// 007133f4  8bcf                 mov ecx, edi
// 007133f6  e82dd6f8ff           call 0x6a0a28
// 007133fb  39b7a0000000         cmp dword ptr [edi + 0xa0], esi
// 00713401  7532                 jne 0x713435
// 00713403  8b16                 mov edx, dword ptr [esi]
// 00713405  8b4258               mov eax, dword ptr [edx + 0x58]
// 00713408  8bce                 mov ecx, esi
// 0071340a  ffd0                 call eax
// 0071340c  85c0                 test eax, eax
// 0071340e  7525                 jne 0x713435
// 00713410  8b17                 mov edx, dword ptr [edi]
// 00713412  8b8270010000         mov eax, dword ptr [edx + 0x170]
// 00713418  6a01                 push 1
// 0071341a  6a01                 push 1
// 0071341c  8bcf                 mov ecx, edi
// 0071341e  ffd0                 call eax
// 00713420  85c0                 test eax, eax
// 00713422  7411                 je 0x713435
// 00713424  8b16                 mov edx, dword ptr [esi]
// 00713426  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0071342c  8bce                 mov ecx, esi
// 0071342e  ffd0                 call eax
// 00713430  5f                   pop edi
// 00713431  5e                   pop esi
// 00713432  c20c00               ret 0xc
// 00713435  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00713438  8b35142e8000         mov esi, dword ptr [0x802e14]
// 0071343e  6aff                 push -1
// 00713440  6a00                 push 0
// 00713442  68b1000000           push 0xb1
// 00713447  51                   push ecx
// 00713448  ffd6                 call esi
// 0071344a  8b5720               mov edx, dword ptr [edi + 0x20]
// 0071344d  6a00                 push 0
// 0071344f  6a00                 push 0
// 00713451  68b7000000           push 0xb7
// 00713456  52                   push edx
// 00713457  ffd6                 call esi
// 00713459  5f                   pop edi
// 0071345a  5e                   pop esi
// 0071345b  c20c00               ret 0xc
// 0071345e  8b06                 mov eax, dword ptr [esi]
// 00713460  8b5058               mov edx, dword ptr [eax + 0x58]
// 00713463  ffd2                 call edx
// 00713465  85c0                 test eax, eax
// 00713467  75c8                 jne 0x713431
// 00713469  8bce                 mov ecx, esi
// 0071346b  e8c0f5ffff           call 0x712a30
// 00713470  5e                   pop esi
// 00713471  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnLButtonDblClk@CXTPPropertyGridItem@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp

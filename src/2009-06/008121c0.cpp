// roc 2009-06 008121c0  unit: PAVCXTPRibbonGroup::?$CArray  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008121c0
//
// 008121c0  55                   push ebp
// 008121c1  57                   push edi
// 008121c2  8be9                 mov ebp, ecx
// 008121c4  e847ffffff           call 0x812110
// 008121c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008121cd  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008121d0  33ff                 xor edi, edi
// 008121d2  85c0                 test eax, eax
// 008121d4  7e4e                 jle 0x812224
// 008121d6  53                   push ebx
// 008121d7  56                   push esi
// 008121d8  85ff                 test edi, edi
// 008121da  7c11                 jl 0x8121ed
// 008121dc  3bf8                 cmp edi, eax
// 008121de  7d0d                 jge 0x8121ed
// 008121e0  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 008121e3  7d44                 jge 0x812229
// 008121e5  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008121e8  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008121eb  eb02                 jmp 0x8121ef
// 008121ed  33db                 xor ebx, ebx
// 008121ef  8b13                 mov edx, dword ptr [ebx]
// 008121f1  8b02                 mov eax, dword ptr [edx]
// 008121f3  8bcb                 mov ecx, ebx
// 008121f5  ffd0                 call eax
// 008121f7  8bc8                 mov ecx, eax
// 008121f9  e83672f0ff           call 0x719434
// 008121fe  8bf0                 mov esi, eax
// 00812200  56                   push esi
// 00812201  57                   push edi
// 00812202  8bcd                 mov ecx, ebp
// 00812204  e867ffffff           call 0x812170
// 00812209  8b16                 mov edx, dword ptr [esi]
// 0081220b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081220e  53                   push ebx
// 0081220f  8bce                 mov ecx, esi
// 00812211  ffd0                 call eax
// 00812213  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812217  896e30               mov dword ptr [esi + 0x30], ebp
// 0081221a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0081221d  47                   inc edi
// 0081221e  3bf8                 cmp edi, eax
// 00812220  7cb6                 jl 0x8121d8
// 00812222  5e                   pop esi
// 00812223  5b                   pop ebx
// 00812224  5f                   pop edi
// 00812225  5d                   pop ebp
// 00812226  c20400               ret 4
// 00812229  e8b66af0ff           call 0x718ce4
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroups@@QAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp
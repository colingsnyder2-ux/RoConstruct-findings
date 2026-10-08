// roc 2010-06 00885600  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00885600
//
// 00885600  83ec14               sub esp, 0x14
// 00885603  53                   push ebx
// 00885604  55                   push ebp
// 00885605  56                   push esi
// 00885606  8b742424             mov esi, dword ptr [esp + 0x24]
// 0088560a  8b06                 mov eax, dword ptr [esi]
// 0088560c  8b5040               mov edx, dword ptr [eax + 0x40]
// 0088560f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00885613  57                   push edi
// 00885614  8bce                 mov ecx, esi
// 00885616  ffd2                 call edx
// 00885618  85c0                 test eax, eax
// 0088561a  7437                 je 0x885653
// 0088561c  8b06                 mov eax, dword ptr [esi]
// 0088561e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00885621  bd02000000           mov ebp, 2
// 00885626  8bce                 mov ecx, esi
// 00885628  8bfd                 mov edi, ebp
// 0088562a  8d5dff               lea ebx, [ebp - 1]
// 0088562d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00885631  ffd2                 call edx
// 00885633  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00885637  50                   push eax
// 00885638  83ec10               sub esp, 0x10
// 0088563b  8bc4                 mov eax, esp
// 0088563d  8938                 mov dword ptr [eax], edi
// 0088563f  895804               mov dword ptr [eax + 4], ebx
// 00885642  8bcd                 mov ecx, ebp
// 00885644  896808               mov dword ptr [eax + 8], ebp
// 00885647  52                   push edx
// 00885648  89480c               mov dword ptr [eax + 0xc], ecx
// 0088564b  e8e0320000           call 0x888930
// 00885650  83c418               add esp, 0x18
// 00885653  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00885657  7e17                 jle 0x885670
// 00885659  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088565d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00885663  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00885667  8b11                 mov edx, dword ptr [ecx]
// 00885669  8b5230               mov edx, dword ptr [edx + 0x30]
// 0088566c  50                   push eax
// 0088566d  56                   push esi
// 0088566e  ffd2                 call edx
// 00885670  5f                   pop edi
// 00885671  5e                   pop esi
// 00885672  5d                   pop ebp
// 00885673  5b                   pop ebx
// 00885674  83c414               add esp, 0x14
// 00885677  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

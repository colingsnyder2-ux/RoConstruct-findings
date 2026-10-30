// roc 2009-12 008d1450  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1450
//
// 008d1450  83ec14               sub esp, 0x14
// 008d1453  53                   push ebx
// 008d1454  55                   push ebp
// 008d1455  56                   push esi
// 008d1456  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d145a  8b06                 mov eax, dword ptr [esi]
// 008d145c  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d145f  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d1463  57                   push edi
// 008d1464  8bce                 mov ecx, esi
// 008d1466  ffd2                 call edx
// 008d1468  85c0                 test eax, eax
// 008d146a  7437                 je 0x8d14a3
// 008d146c  8b06                 mov eax, dword ptr [esi]
// 008d146e  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d1471  bd02000000           mov ebp, 2
// 008d1476  8bce                 mov ecx, esi
// 008d1478  8bfd                 mov edi, ebp
// 008d147a  8d5dff               lea ebx, [ebp - 1]
// 008d147d  896c2420             mov dword ptr [esp + 0x20], ebp
// 008d1481  ffd2                 call edx
// 008d1483  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d1487  50                   push eax
// 008d1488  83ec10               sub esp, 0x10
// 008d148b  8bc4                 mov eax, esp
// 008d148d  8938                 mov dword ptr [eax], edi
// 008d148f  895804               mov dword ptr [eax + 4], ebx
// 008d1492  8bcd                 mov ecx, ebp
// 008d1494  896808               mov dword ptr [eax + 8], ebp
// 008d1497  52                   push edx
// 008d1498  89480c               mov dword ptr [eax + 0xc], ecx
// 008d149b  e8e0320000           call 0x8d4780
// 008d14a0  83c418               add esp, 0x18
// 008d14a3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d14a7  7e17                 jle 0x8d14c0
// 008d14a9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d14ad  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008d14b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d14b7  8b11                 mov edx, dword ptr [ecx]
// 008d14b9  8b5230               mov edx, dword ptr [edx + 0x30]
// 008d14bc  50                   push eax
// 008d14bd  56                   push esi
// 008d14be  ffd2                 call edx
// 008d14c0  5f                   pop edi
// 008d14c1  5e                   pop esi
// 008d14c2  5d                   pop ebp
// 008d14c3  5b                   pop ebx
// 008d14c4  83c414               add esp, 0x14
// 008d14c7  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

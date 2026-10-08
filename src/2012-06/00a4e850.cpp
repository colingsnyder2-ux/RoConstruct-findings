// roc 2012-06 00a4e850  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4e850
//
// 00a4e850  83ec14               sub esp, 0x14
// 00a4e853  53                   push ebx
// 00a4e854  55                   push ebp
// 00a4e855  56                   push esi
// 00a4e856  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a4e85a  8b06                 mov eax, dword ptr [esi]
// 00a4e85c  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a4e85f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a4e863  57                   push edi
// 00a4e864  8bce                 mov ecx, esi
// 00a4e866  ffd2                 call edx
// 00a4e868  85c0                 test eax, eax
// 00a4e86a  7437                 je 0xa4e8a3
// 00a4e86c  8b06                 mov eax, dword ptr [esi]
// 00a4e86e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4e871  bd02000000           mov ebp, 2
// 00a4e876  8bce                 mov ecx, esi
// 00a4e878  8bfd                 mov edi, ebp
// 00a4e87a  8d5dff               lea ebx, [ebp - 1]
// 00a4e87d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a4e881  ffd2                 call edx
// 00a4e883  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a4e887  50                   push eax
// 00a4e888  83ec10               sub esp, 0x10
// 00a4e88b  8bc4                 mov eax, esp
// 00a4e88d  8938                 mov dword ptr [eax], edi
// 00a4e88f  895804               mov dword ptr [eax + 4], ebx
// 00a4e892  8bcd                 mov ecx, ebp
// 00a4e894  896808               mov dword ptr [eax + 8], ebp
// 00a4e897  52                   push edx
// 00a4e898  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4e89b  e8e0320000           call 0xa51b80
// 00a4e8a0  83c418               add esp, 0x18
// 00a4e8a3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a4e8a7  7e17                 jle 0xa4e8c0
// 00a4e8a9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4e8ad  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00a4e8b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a4e8b7  8b11                 mov edx, dword ptr [ecx]
// 00a4e8b9  8b5230               mov edx, dword ptr [edx + 0x30]
// 00a4e8bc  50                   push eax
// 00a4e8bd  56                   push esi
// 00a4e8be  ffd2                 call edx
// 00a4e8c0  5f                   pop edi
// 00a4e8c1  5e                   pop esi
// 00a4e8c2  5d                   pop ebp
// 00a4e8c3  5b                   pop ebx
// 00a4e8c4  83c414               add esp, 0x14
// 00a4e8c7  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

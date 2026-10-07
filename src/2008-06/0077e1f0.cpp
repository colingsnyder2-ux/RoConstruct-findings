// roc 2008-06 0077e1f0  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e1f0
//
// 0077e1f0  83ec14               sub esp, 0x14
// 0077e1f3  53                   push ebx
// 0077e1f4  55                   push ebp
// 0077e1f5  56                   push esi
// 0077e1f6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0077e1fa  8b06                 mov eax, dword ptr [esi]
// 0077e1fc  8b5040               mov edx, dword ptr [eax + 0x40]
// 0077e1ff  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077e203  57                   push edi
// 0077e204  8bce                 mov ecx, esi
// 0077e206  ffd2                 call edx
// 0077e208  85c0                 test eax, eax
// 0077e20a  7437                 je 0x77e243
// 0077e20c  8b06                 mov eax, dword ptr [esi]
// 0077e20e  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077e211  bd02000000           mov ebp, 2
// 0077e216  8bce                 mov ecx, esi
// 0077e218  8bfd                 mov edi, ebp
// 0077e21a  8d5dff               lea ebx, [ebp - 1]
// 0077e21d  896c2420             mov dword ptr [esp + 0x20], ebp
// 0077e221  ffd2                 call edx
// 0077e223  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077e227  50                   push eax
// 0077e228  83ec10               sub esp, 0x10
// 0077e22b  8bc4                 mov eax, esp
// 0077e22d  8938                 mov dword ptr [eax], edi
// 0077e22f  895804               mov dword ptr [eax + 4], ebx
// 0077e232  8bcd                 mov ecx, ebp
// 0077e234  896808               mov dword ptr [eax + 8], ebp
// 0077e237  52                   push edx
// 0077e238  89480c               mov dword ptr [eax + 0xc], ecx
// 0077e23b  e820330000           call 0x781560
// 0077e240  83c418               add esp, 0x18
// 0077e243  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0077e247  7e17                 jle 0x77e260
// 0077e249  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077e24d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0077e253  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0077e257  8b11                 mov edx, dword ptr [ecx]
// 0077e259  8b5230               mov edx, dword ptr [edx + 0x30]
// 0077e25c  50                   push eax
// 0077e25d  56                   push esi
// 0077e25e  ffd2                 call edx
// 0077e260  5f                   pop edi
// 0077e261  5e                   pop esi
// 0077e262  5d                   pop ebp
// 0077e263  5b                   pop ebx
// 0077e264  83c414               add esp, 0x14
// 0077e267  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

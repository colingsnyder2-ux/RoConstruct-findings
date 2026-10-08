// roc 2011-06 008d6540  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6540
//
// 008d6540  83ec14               sub esp, 0x14
// 008d6543  53                   push ebx
// 008d6544  55                   push ebp
// 008d6545  56                   push esi
// 008d6546  8b742424             mov esi, dword ptr [esp + 0x24]
// 008d654a  8b06                 mov eax, dword ptr [esi]
// 008d654c  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d654f  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d6553  57                   push edi
// 008d6554  8bce                 mov ecx, esi
// 008d6556  ffd2                 call edx
// 008d6558  85c0                 test eax, eax
// 008d655a  7437                 je 0x8d6593
// 008d655c  8b06                 mov eax, dword ptr [esi]
// 008d655e  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d6561  bd02000000           mov ebp, 2
// 008d6566  8bce                 mov ecx, esi
// 008d6568  8bfd                 mov edi, ebp
// 008d656a  8d5dff               lea ebx, [ebp - 1]
// 008d656d  896c2420             mov dword ptr [esp + 0x20], ebp
// 008d6571  ffd2                 call edx
// 008d6573  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d6577  50                   push eax
// 008d6578  83ec10               sub esp, 0x10
// 008d657b  8bc4                 mov eax, esp
// 008d657d  8938                 mov dword ptr [eax], edi
// 008d657f  895804               mov dword ptr [eax + 4], ebx
// 008d6582  8bcd                 mov ecx, ebp
// 008d6584  896808               mov dword ptr [eax + 8], ebp
// 008d6587  52                   push edx
// 008d6588  89480c               mov dword ptr [eax + 0xc], ecx
// 008d658b  e820330000           call 0x8d98b0
// 008d6590  83c418               add esp, 0x18
// 008d6593  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d6597  7e17                 jle 0x8d65b0
// 008d6599  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d659d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008d65a3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d65a7  8b11                 mov edx, dword ptr [ecx]
// 008d65a9  8b5230               mov edx, dword ptr [edx + 0x30]
// 008d65ac  50                   push eax
// 008d65ad  56                   push esi
// 008d65ae  ffd2                 call edx
// 008d65b0  5f                   pop edi
// 008d65b1  5e                   pop esi
// 008d65b2  5d                   pop ebp
// 008d65b3  5b                   pop ebx
// 008d65b4  83c414               add esp, 0x14
// 008d65b7  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

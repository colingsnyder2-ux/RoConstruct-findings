// roc 2009-06 007f68b0  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f68b0
//
// 007f68b0  83ec14               sub esp, 0x14
// 007f68b3  53                   push ebx
// 007f68b4  55                   push ebp
// 007f68b5  56                   push esi
// 007f68b6  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f68ba  8b06                 mov eax, dword ptr [esi]
// 007f68bc  8b5040               mov edx, dword ptr [eax + 0x40]
// 007f68bf  894c240c             mov dword ptr [esp + 0xc], ecx
// 007f68c3  57                   push edi
// 007f68c4  8bce                 mov ecx, esi
// 007f68c6  ffd2                 call edx
// 007f68c8  85c0                 test eax, eax
// 007f68ca  7437                 je 0x7f6903
// 007f68cc  8b06                 mov eax, dword ptr [esi]
// 007f68ce  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f68d1  bd02000000           mov ebp, 2
// 007f68d6  8bce                 mov ecx, esi
// 007f68d8  8bfd                 mov edi, ebp
// 007f68da  8d5dff               lea ebx, [ebp - 1]
// 007f68dd  896c2420             mov dword ptr [esp + 0x20], ebp
// 007f68e1  ffd2                 call edx
// 007f68e3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f68e7  50                   push eax
// 007f68e8  83ec10               sub esp, 0x10
// 007f68eb  8bc4                 mov eax, esp
// 007f68ed  8938                 mov dword ptr [eax], edi
// 007f68ef  895804               mov dword ptr [eax + 4], ebx
// 007f68f2  8bcd                 mov ecx, ebp
// 007f68f4  896808               mov dword ptr [eax + 8], ebp
// 007f68f7  52                   push edx
// 007f68f8  89480c               mov dword ptr [eax + 0xc], ecx
// 007f68fb  e8e0320000           call 0x7f9be0
// 007f6900  83c418               add esp, 0x18
// 007f6903  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007f6907  7e17                 jle 0x7f6920
// 007f6909  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f690d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 007f6913  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f6917  8b11                 mov edx, dword ptr [ecx]
// 007f6919  8b5230               mov edx, dword ptr [edx + 0x30]
// 007f691c  50                   push eax
// 007f691d  56                   push esi
// 007f691e  ffd2                 call edx
// 007f6920  5f                   pop edi
// 007f6921  5e                   pop esi
// 007f6922  5d                   pop ebp
// 007f6923  5b                   pop ebx
// 007f6924  83c414               add esp, 0x14
// 007f6927  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

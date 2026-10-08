// roc 2007-08 007006e0  unit: CXTPTabPaintManager  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007006e0
//
// 007006e0  83ec14               sub esp, 0x14
// 007006e3  53                   push ebx
// 007006e4  55                   push ebp
// 007006e5  56                   push esi
// 007006e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 007006ea  8b06                 mov eax, dword ptr [esi]
// 007006ec  8b5040               mov edx, dword ptr [eax + 0x40]
// 007006ef  894c240c             mov dword ptr [esp + 0xc], ecx
// 007006f3  57                   push edi
// 007006f4  8bce                 mov ecx, esi
// 007006f6  ffd2                 call edx
// 007006f8  85c0                 test eax, eax
// 007006fa  7437                 je 0x700733
// 007006fc  8b06                 mov eax, dword ptr [esi]
// 007006fe  8b5048               mov edx, dword ptr [eax + 0x48]
// 00700701  bd02000000           mov ebp, 2
// 00700706  8bce                 mov ecx, esi
// 00700708  8bfd                 mov edi, ebp
// 0070070a  8d5dff               lea ebx, [ebp - 1]
// 0070070d  896c2420             mov dword ptr [esp + 0x20], ebp
// 00700711  ffd2                 call edx
// 00700713  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00700717  50                   push eax
// 00700718  83ec10               sub esp, 0x10
// 0070071b  8bc4                 mov eax, esp
// 0070071d  8938                 mov dword ptr [eax], edi
// 0070071f  895804               mov dword ptr [eax + 4], ebx
// 00700722  8bcd                 mov ecx, ebp
// 00700724  896808               mov dword ptr [eax + 8], ebp
// 00700727  52                   push edx
// 00700728  89480c               mov dword ptr [eax + 0xc], ecx
// 0070072b  e850340000           call 0x703b80
// 00700730  83c418               add esp, 0x18
// 00700733  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00700737  7e17                 jle 0x700750
// 00700739  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070073d  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00700743  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00700747  8b11                 mov edx, dword ptr [ecx]
// 00700749  8b5230               mov edx, dword ptr [edx + 0x30]
// 0070074c  50                   push eax
// 0070074d  56                   push esi
// 0070074e  ffd2                 call edx
// 00700750  5f                   pop edi
// 00700751  5e                   pop esi
// 00700752  5d                   pop ebp
// 00700753  5b                   pop ebx
// 00700754  83c414               add esp, 0x14
// 00700757  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?AdjustClientRect@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp

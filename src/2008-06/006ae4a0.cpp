// roc 2008-06 006ae4a0  unit: CXTPPaintManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae4a0
//
// 006ae4a0  83ec24               sub esp, 0x24
// 006ae4a3  53                   push ebx
// 006ae4a4  55                   push ebp
// 006ae4a5  56                   push esi
// 006ae4a6  8b742438             mov esi, dword ptr [esp + 0x38]
// 006ae4aa  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006ae4b0  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 006ae4b6  894c2410             mov dword ptr [esp + 0x10], ecx
// 006ae4ba  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006ae4c0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 006ae4c6  57                   push edi
// 006ae4c7  894c2418             mov dword ptr [esp + 0x18], ecx
// 006ae4cb  8954241c             mov dword ptr [esp + 0x1c], edx
// 006ae4cf  83f8ff               cmp eax, -1
// 006ae4d2  750d                 jne 0x6ae4e1
// 006ae4d4  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ae4da  85c9                 test ecx, ecx
// 006ae4dc  7403                 je 0x6ae4e1
// 006ae4de  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006ae4e1  8944243c             mov dword ptr [esp + 0x3c], eax
// 006ae4e5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006ae4eb  83f8ff               cmp eax, -1
// 006ae4ee  750f                 jne 0x6ae4ff
// 006ae4f0  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ae4f6  85c9                 test ecx, ecx
// 006ae4f8  7405                 je 0x6ae4ff
// 006ae4fa  e8c1d2ffff           call 0x6ab7c0
// 006ae4ff  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 006ae505  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ae509  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 006ae50f  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 006ae515  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 006ae51b  89442410             mov dword ptr [esp + 0x10], eax
// 006ae51f  8b02                 mov eax, dword ptr [edx]
// 006ae521  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006ae525  894c2430             mov dword ptr [esp + 0x30], ecx
// 006ae529  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ae52d  51                   push ecx
// 006ae52e  89442424             mov dword ptr [esp + 0x24], eax
// 006ae532  8b06                 mov eax, dword ptr [esi]
// 006ae534  52                   push edx
// 006ae535  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 006ae53b  8bce                 mov ecx, esi
// 006ae53d  ffd2                 call edx
// 006ae53f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ae543  8b16                 mov edx, dword ptr [esi]
// 006ae545  50                   push eax
// 006ae546  8b442448             mov eax, dword ptr [esp + 0x48]
// 006ae54a  50                   push eax
// 006ae54b  8b4278               mov eax, dword ptr [edx + 0x78]
// 006ae54e  51                   push ecx
// 006ae54f  8bce                 mov ecx, esi
// 006ae551  ffd0                 call eax
// 006ae553  8b16                 mov edx, dword ptr [esi]
// 006ae555  50                   push eax
// 006ae556  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006ae559  8bce                 mov ecx, esi
// 006ae55b  ffd0                 call eax
// 006ae55d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006ae561  8b542450             mov edx, dword ptr [esp + 0x50]
// 006ae565  50                   push eax
// 006ae566  83ec10               sub esp, 0x10
// 006ae569  8bc4                 mov eax, esp
// 006ae56b  8938                 mov dword ptr [eax], edi
// 006ae56d  895804               mov dword ptr [eax + 4], ebx
// 006ae570  896808               mov dword ptr [eax + 8], ebp
// 006ae573  89480c               mov dword ptr [eax + 0xc], ecx
// 006ae576  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006ae57a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006ae57e  52                   push edx
// 006ae57f  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 006ae585  ffd2                 call edx
// 006ae587  5f                   pop edi
// 006ae588  5e                   pop esi
// 006ae589  5d                   pop ebp
// 006ae58a  5b                   pop ebx
// 006ae58b  83c424               add esp, 0x24
// 006ae58e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlEntry@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp

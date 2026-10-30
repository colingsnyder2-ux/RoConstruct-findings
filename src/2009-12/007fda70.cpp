// roc 2009-12 007fda70  unit: CXTPPaintManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fda70
//
// 007fda70  83ec24               sub esp, 0x24
// 007fda73  53                   push ebx
// 007fda74  55                   push ebp
// 007fda75  56                   push esi
// 007fda76  8b742438             mov esi, dword ptr [esp + 0x38]
// 007fda7a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007fda80  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 007fda86  894c2410             mov dword ptr [esp + 0x10], ecx
// 007fda8a  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007fda90  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007fda96  57                   push edi
// 007fda97  894c2418             mov dword ptr [esp + 0x18], ecx
// 007fda9b  8954241c             mov dword ptr [esp + 0x1c], edx
// 007fda9f  83f8ff               cmp eax, -1
// 007fdaa2  750d                 jne 0x7fdab1
// 007fdaa4  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fdaaa  85c9                 test ecx, ecx
// 007fdaac  7403                 je 0x7fdab1
// 007fdaae  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007fdab1  8944243c             mov dword ptr [esp + 0x3c], eax
// 007fdab5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fdabb  83f8ff               cmp eax, -1
// 007fdabe  750f                 jne 0x7fdacf
// 007fdac0  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fdac6  85c9                 test ecx, ecx
// 007fdac8  7405                 je 0x7fdacf
// 007fdaca  e8e18affff           call 0x7f65b0
// 007fdacf  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007fdad5  8b542414             mov edx, dword ptr [esp + 0x14]
// 007fdad9  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 007fdadf  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 007fdae5  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 007fdaeb  89442410             mov dword ptr [esp + 0x10], eax
// 007fdaef  8b02                 mov eax, dword ptr [edx]
// 007fdaf1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fdaf5  894c2430             mov dword ptr [esp + 0x30], ecx
// 007fdaf9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fdafd  51                   push ecx
// 007fdafe  89442424             mov dword ptr [esp + 0x24], eax
// 007fdb02  8b06                 mov eax, dword ptr [esi]
// 007fdb04  52                   push edx
// 007fdb05  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007fdb0b  8bce                 mov ecx, esi
// 007fdb0d  ffd2                 call edx
// 007fdb0f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fdb13  8b16                 mov edx, dword ptr [esi]
// 007fdb15  50                   push eax
// 007fdb16  8b442448             mov eax, dword ptr [esp + 0x48]
// 007fdb1a  50                   push eax
// 007fdb1b  8b4278               mov eax, dword ptr [edx + 0x78]
// 007fdb1e  51                   push ecx
// 007fdb1f  8bce                 mov ecx, esi
// 007fdb21  ffd0                 call eax
// 007fdb23  8b16                 mov edx, dword ptr [esi]
// 007fdb25  50                   push eax
// 007fdb26  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007fdb29  8bce                 mov ecx, esi
// 007fdb2b  ffd0                 call eax
// 007fdb2d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fdb31  8b542450             mov edx, dword ptr [esp + 0x50]
// 007fdb35  50                   push eax
// 007fdb36  83ec10               sub esp, 0x10
// 007fdb39  8bc4                 mov eax, esp
// 007fdb3b  8938                 mov dword ptr [eax], edi
// 007fdb3d  895804               mov dword ptr [eax + 4], ebx
// 007fdb40  896808               mov dword ptr [eax + 8], ebp
// 007fdb43  89480c               mov dword ptr [eax + 0xc], ecx
// 007fdb46  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007fdb4a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fdb4e  52                   push edx
// 007fdb4f  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 007fdb55  ffd2                 call edx
// 007fdb57  5f                   pop edi
// 007fdb58  5e                   pop esi
// 007fdb59  5d                   pop ebp
// 007fdb5a  5b                   pop ebx
// 007fdb5b  83c424               add esp, 0x24
// 007fdb5e  c20800               ret 8
// copied from an identical function in another client (function ?DrawControlEntry@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
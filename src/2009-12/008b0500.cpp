// roc 2009-12 008b0500  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0500
//
// 008b0500  83ec20               sub esp, 0x20
// 008b0503  56                   push esi
// 008b0504  8bf1                 mov esi, ecx
// 008b0506  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008b050c  85c0                 test eax, eax
// 008b050e  0f84e6000000         je 0x8b05fa
// 008b0514  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 008b051b  0f85d9000000         jne 0x8b05fa
// 008b0521  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 008b0528  8d4820               lea ecx, [eax + 0x20]
// 008b052b  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 008b0535  8b01                 mov eax, dword ptr [ecx]
// 008b0537  8b5014               mov edx, dword ptr [eax + 0x14]
// 008b053a  ffd2                 call edx
// 008b053c  85c0                 test eax, eax
// 008b053e  741f                 je 0x8b055f
// 008b0540  6a00                 push 0
// 008b0542  8bce                 mov ecx, esi
// 008b0544  e8ff35f4ff           call 0x7f3b48
// 008b0549  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008b0550  0f8488000000         je 0x8b05de
// 008b0556  8bce                 mov ecx, esi
// 008b0558  e8f3fdffff           call 0x8b0350
// 008b055d  eb7f                 jmp 0x8b05de
// 008b055f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b0562  8d442408             lea eax, [esp + 8]
// 008b0566  50                   push eax
// 008b0567  51                   push ecx
// 008b0568  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008b0570  ff1550cc9800         call dword ptr [0x98cc50]
// 008b0576  6a08                 push 8
// 008b0578  ff1574cb9800         call dword ptr [0x98cb74]
// 008b057e  8d542404             lea edx, [esp + 4]
// 008b0582  52                   push edx
// 008b0583  83ec10               sub esp, 0x10
// 008b0586  89442418             mov dword ptr [esp + 0x18], eax
// 008b058a  8bc4                 mov eax, esp
// 008b058c  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0590  51                   push ecx
// 008b0591  50                   push eax
// 008b0592  ff1564cc9800         call dword ptr [0x98cc64]
// 008b0598  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008b059e  8b5020               mov edx, dword ptr [eax + 0x20]
// 008b05a1  8d4820               lea ecx, [eax + 0x20]
// 008b05a4  8b4224               mov eax, dword ptr [edx + 0x24]
// 008b05a7  56                   push esi
// 008b05a8  ffd0                 call eax
// 008b05aa  8b442404             mov eax, dword ptr [esp + 4]
// 008b05ae  85c0                 test eax, eax
// 008b05b0  7407                 je 0x8b05b9
// 008b05b2  50                   push eax
// 008b05b3  ff156ccb9800         call dword ptr [0x98cb6c]
// 008b05b9  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008b05bf  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b05c2  83c13c               add ecx, 0x3c
// 008b05c5  51                   push ecx
// 008b05c6  52                   push edx
// 008b05c7  ff1570cc9800         call dword ptr [0x98cc70]
// 008b05cd  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008b05d3  83c03c               add eax, 0x3c
// 008b05d6  50                   push eax
// 008b05d7  8bce                 mov ecx, esi
// 008b05d9  e8fa41f4ff           call 0x7f47d8
// 008b05de  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008b05e4  e857020000           call 0x8b0840
// 008b05e9  8bc8                 mov ecx, eax
// 008b05eb  e82084f8ff           call 0x838a10
// 008b05f0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 008b05fa  5e                   pop esi
// 008b05fb  83c420               add esp, 0x20
// 008b05fe  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp

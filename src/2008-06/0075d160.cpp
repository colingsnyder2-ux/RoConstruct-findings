// roc 2008-06 0075d160  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d160
//
// 0075d160  83ec20               sub esp, 0x20
// 0075d163  56                   push esi
// 0075d164  8bf1                 mov esi, ecx
// 0075d166  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075d16c  85c0                 test eax, eax
// 0075d16e  0f84e6000000         je 0x75d25a
// 0075d174  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 0075d17b  0f85d9000000         jne 0x75d25a
// 0075d181  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 0075d188  8d4820               lea ecx, [eax + 0x20]
// 0075d18b  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 0075d195  8b01                 mov eax, dword ptr [ecx]
// 0075d197  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075d19a  ffd2                 call edx
// 0075d19c  85c0                 test eax, eax
// 0075d19e  741f                 je 0x75d1bf
// 0075d1a0  6a00                 push 0
// 0075d1a2  8bce                 mov ecx, esi
// 0075d1a4  e8c537f4ff           call 0x6a096e
// 0075d1a9  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0075d1b0  0f8488000000         je 0x75d23e
// 0075d1b6  8bce                 mov ecx, esi
// 0075d1b8  e8f3fdffff           call 0x75cfb0
// 0075d1bd  eb7f                 jmp 0x75d23e
// 0075d1bf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075d1c2  8d442408             lea eax, [esp + 8]
// 0075d1c6  50                   push eax
// 0075d1c7  51                   push ecx
// 0075d1c8  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0075d1d0  ff15842d8000         call dword ptr [0x802d84]
// 0075d1d6  6a08                 push 8
// 0075d1d8  ff15f82b8000         call dword ptr [0x802bf8]
// 0075d1de  8d542404             lea edx, [esp + 4]
// 0075d1e2  52                   push edx
// 0075d1e3  83ec10               sub esp, 0x10
// 0075d1e6  89442418             mov dword ptr [esp + 0x18], eax
// 0075d1ea  8bc4                 mov eax, esp
// 0075d1ec  8d4c241c             lea ecx, [esp + 0x1c]
// 0075d1f0  51                   push ecx
// 0075d1f1  50                   push eax
// 0075d1f2  ff15702d8000         call dword ptr [0x802d70]
// 0075d1f8  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075d1fe  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075d201  8d4820               lea ecx, [eax + 0x20]
// 0075d204  8b4224               mov eax, dword ptr [edx + 0x24]
// 0075d207  56                   push esi
// 0075d208  ffd0                 call eax
// 0075d20a  8b442404             mov eax, dword ptr [esp + 4]
// 0075d20e  85c0                 test eax, eax
// 0075d210  7407                 je 0x75d219
// 0075d212  50                   push eax
// 0075d213  ff15f02b8000         call dword ptr [0x802bf0]
// 0075d219  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0075d21f  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075d222  83c13c               add ecx, 0x3c
// 0075d225  51                   push ecx
// 0075d226  52                   push edx
// 0075d227  ff15342e8000         call dword ptr [0x802e34]
// 0075d22d  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0075d233  83c03c               add eax, 0x3c
// 0075d236  50                   push eax
// 0075d237  8bce                 mov ecx, esi
// 0075d239  e85e42f4ff           call 0x6a149c
// 0075d23e  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075d244  e857020000           call 0x75d4a0
// 0075d249  8bc8                 mov ecx, eax
// 0075d24b  e8e080f8ff           call 0x6e5330
// 0075d250  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 0075d25a  5e                   pop esi
// 0075d25b  83c420               add esp, 0x20
// 0075d25e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp

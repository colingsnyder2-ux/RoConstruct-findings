// roc 2009-06 007d59c0  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d59c0
//
// 007d59c0  83ec20               sub esp, 0x20
// 007d59c3  56                   push esi
// 007d59c4  8bf1                 mov esi, ecx
// 007d59c6  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 007d59cc  85c0                 test eax, eax
// 007d59ce  0f84e6000000         je 0x7d5aba
// 007d59d4  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 007d59db  0f85d9000000         jne 0x7d5aba
// 007d59e1  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 007d59e8  8d4820               lea ecx, [eax + 0x20]
// 007d59eb  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 007d59f5  8b01                 mov eax, dword ptr [ecx]
// 007d59f7  8b5014               mov edx, dword ptr [eax + 0x14]
// 007d59fa  ffd2                 call edx
// 007d59fc  85c0                 test eax, eax
// 007d59fe  741f                 je 0x7d5a1f
// 007d5a00  6a00                 push 0
// 007d5a02  8bce                 mov ecx, esi
// 007d5a04  e81733f4ff           call 0x718d20
// 007d5a09  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 007d5a10  0f8488000000         je 0x7d5a9e
// 007d5a16  8bce                 mov ecx, esi
// 007d5a18  e8f3fdffff           call 0x7d5810
// 007d5a1d  eb7f                 jmp 0x7d5a9e
// 007d5a1f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d5a22  8d442408             lea eax, [esp + 8]
// 007d5a26  50                   push eax
// 007d5a27  51                   push ecx
// 007d5a28  c744242801000000     mov dword ptr [esp + 0x28], 1
// 007d5a30  ff1514ee8900         call dword ptr [0x89ee14]
// 007d5a36  6a08                 push 8
// 007d5a38  ff15bcec8900         call dword ptr [0x89ecbc]
// 007d5a3e  8d542404             lea edx, [esp + 4]
// 007d5a42  52                   push edx
// 007d5a43  83ec10               sub esp, 0x10
// 007d5a46  89442418             mov dword ptr [esp + 0x18], eax
// 007d5a4a  8bc4                 mov eax, esp
// 007d5a4c  8d4c241c             lea ecx, [esp + 0x1c]
// 007d5a50  51                   push ecx
// 007d5a51  50                   push eax
// 007d5a52  ff1500ee8900         call dword ptr [0x89ee00]
// 007d5a58  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 007d5a5e  8b5020               mov edx, dword ptr [eax + 0x20]
// 007d5a61  8d4820               lea ecx, [eax + 0x20]
// 007d5a64  8b4224               mov eax, dword ptr [edx + 0x24]
// 007d5a67  56                   push esi
// 007d5a68  ffd0                 call eax
// 007d5a6a  8b442404             mov eax, dword ptr [esp + 4]
// 007d5a6e  85c0                 test eax, eax
// 007d5a70  7407                 je 0x7d5a79
// 007d5a72  50                   push eax
// 007d5a73  ff15c4ec8900         call dword ptr [0x89ecc4]
// 007d5a79  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 007d5a7f  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d5a82  83c13c               add ecx, 0x3c
// 007d5a85  51                   push ecx
// 007d5a86  52                   push edx
// 007d5a87  ff15f4ed8900         call dword ptr [0x89edf4]
// 007d5a8d  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 007d5a93  83c03c               add eax, 0x3c
// 007d5a96  50                   push eax
// 007d5a97  8bce                 mov ecx, esi
// 007d5a99  e8063ff4ff           call 0x7199a4
// 007d5a9e  8d8ef8000000         lea ecx, [esi + 0xf8]
// 007d5aa4  e857020000           call 0x7d5d00
// 007d5aa9  8bc8                 mov ecx, eax
// 007d5aab  e8a081f8ff           call 0x75dc50
// 007d5ab0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 007d5aba  5e                   pop esi
// 007d5abb  83c420               add esp, 0x20
// 007d5abe  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp

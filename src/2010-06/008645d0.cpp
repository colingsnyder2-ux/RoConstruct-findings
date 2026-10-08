// roc 2010-06 008645d0  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008645d0
//
// 008645d0  83ec20               sub esp, 0x20
// 008645d3  56                   push esi
// 008645d4  8bf1                 mov esi, ecx
// 008645d6  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008645dc  85c0                 test eax, eax
// 008645de  0f84e6000000         je 0x8646ca
// 008645e4  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 008645eb  0f85d9000000         jne 0x8646ca
// 008645f1  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 008645f8  8d4820               lea ecx, [eax + 0x20]
// 008645fb  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 00864605  8b01                 mov eax, dword ptr [ecx]
// 00864607  8b5014               mov edx, dword ptr [eax + 0x14]
// 0086460a  ffd2                 call edx
// 0086460c  85c0                 test eax, eax
// 0086460e  741f                 je 0x86462f
// 00864610  6a00                 push 0
// 00864612  8bce                 mov ecx, esi
// 00864614  e86f36f4ff           call 0x7a7c88
// 00864619  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00864620  0f8488000000         je 0x8646ae
// 00864626  8bce                 mov ecx, esi
// 00864628  e8f3fdffff           call 0x864420
// 0086462d  eb7f                 jmp 0x8646ae
// 0086462f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00864632  8d442408             lea eax, [esp + 8]
// 00864636  50                   push eax
// 00864637  51                   push ecx
// 00864638  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00864640  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 00864646  6a08                 push 8
// 00864648  ff1530ba9e00         call dword ptr [0x9eba30]
// 0086464e  8d542404             lea edx, [esp + 4]
// 00864652  52                   push edx
// 00864653  83ec10               sub esp, 0x10
// 00864656  89442418             mov dword ptr [esp + 0x18], eax
// 0086465a  8bc4                 mov eax, esp
// 0086465c  8d4c241c             lea ecx, [esp + 0x1c]
// 00864660  51                   push ecx
// 00864661  50                   push eax
// 00864662  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00864668  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0086466e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00864671  8d4820               lea ecx, [eax + 0x20]
// 00864674  8b4224               mov eax, dword ptr [edx + 0x24]
// 00864677  56                   push esi
// 00864678  ffd0                 call eax
// 0086467a  8b442404             mov eax, dword ptr [esp + 4]
// 0086467e  85c0                 test eax, eax
// 00864680  7407                 je 0x864689
// 00864682  50                   push eax
// 00864683  ff1528ba9e00         call dword ptr [0x9eba28]
// 00864689  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0086468f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00864692  83c13c               add ecx, 0x3c
// 00864695  51                   push ecx
// 00864696  52                   push edx
// 00864697  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 0086469d  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008646a3  83c03c               add eax, 0x3c
// 008646a6  50                   push eax
// 008646a7  8bce                 mov ecx, esi
// 008646a9  e86442f4ff           call 0x7a8912
// 008646ae  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008646b4  e857020000           call 0x864910
// 008646b9  8bc8                 mov ecx, eax
// 008646bb  e8b084f8ff           call 0x7ecb70
// 008646c0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 008646ca  5e                   pop esi
// 008646cb  83c420               add esp, 0x20
// 008646ce  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp

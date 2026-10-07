// roc 2007-08 006d7d90  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7d90
//
// 006d7d90  8b442408             mov eax, dword ptr [esp + 8]
// 006d7d94  57                   push edi
// 006d7d95  8b7804               mov edi, dword ptr [eax + 4]
// 006d7d98  85ff                 test edi, edi
// 006d7d9a  744d                 je 0x6d7de9
// 006d7d9c  53                   push ebx
// 006d7d9d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006d7da1  55                   push ebp
// 006d7da2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006d7da6  56                   push esi
// 006d7da7  8bc7                 mov eax, edi
// 006d7da9  8b4008               mov eax, dword ptr [eax + 8]
// 006d7dac  85c0                 test eax, eax
// 006d7dae  8b3f                 mov edi, dword ptr [edi]
// 006d7db0  7405                 je 0x6d7db7
// 006d7db2  8d70e0               lea esi, [eax - 0x20]
// 006d7db5  eb02                 jmp 0x6d7db9
// 006d7db7  33f6                 xor esi, esi
// 006d7db9  8bce                 mov ecx, esi
// 006d7dbb  e82078fbff           call 0x68f5e0
// 006d7dc0  85c5                 test ebp, eax
// 006d7dc2  751e                 jne 0x6d7de2
// 006d7dc4  837e3000             cmp dword ptr [esi + 0x30], 0
// 006d7dc8  740e                 je 0x6d7dd8
// 006d7dca  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006d7dcd  8b11                 mov edx, dword ptr [ecx]
// 006d7dcf  8b5248               mov edx, dword ptr [edx + 0x48]
// 006d7dd2  8d4620               lea eax, [esi + 0x20]
// 006d7dd5  50                   push eax
// 006d7dd6  ffd2                 call edx
// 006d7dd8  6a01                 push 1
// 006d7dda  56                   push esi
// 006d7ddb  8bcb                 mov ecx, ebx
// 006d7ddd  e8eead0000           call 0x6e2bd0
// 006d7de2  85ff                 test edi, edi
// 006d7de4  75c1                 jne 0x6d7da7
// 006d7de6  5e                   pop esi
// 006d7de7  5d                   pop ebp
// 006d7de8  5b                   pop ebx
// 006d7de9  5f                   pop edi
// 006d7dea  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp

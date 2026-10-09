// roc 2007-03 006c0f80  unit: seg_006c0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c0f80
//
// 006c0f80  8b442408             mov eax, dword ptr [esp + 8]
// 006c0f84  57                   push edi
// 006c0f85  8b7804               mov edi, dword ptr [eax + 4]
// 006c0f88  85ff                 test edi, edi
// 006c0f8a  744d                 je 0x6c0fd9
// 006c0f8c  53                   push ebx
// 006c0f8d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006c0f91  55                   push ebp
// 006c0f92  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006c0f96  56                   push esi
// 006c0f97  8bc7                 mov eax, edi
// 006c0f99  8b4008               mov eax, dword ptr [eax + 8]
// 006c0f9c  85c0                 test eax, eax
// 006c0f9e  8b3f                 mov edi, dword ptr [edi]
// 006c0fa0  7405                 je 0x6c0fa7
// 006c0fa2  8d70e0               lea esi, [eax - 0x20]
// 006c0fa5  eb02                 jmp 0x6c0fa9
// 006c0fa7  33f6                 xor esi, esi
// 006c0fa9  8bce                 mov ecx, esi
// 006c0fab  e85081fbff           call 0x679100
// 006c0fb0  85c5                 test ebp, eax
// 006c0fb2  751e                 jne 0x6c0fd2
// 006c0fb4  837e3000             cmp dword ptr [esi + 0x30], 0
// 006c0fb8  740e                 je 0x6c0fc8
// 006c0fba  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006c0fbd  8b11                 mov edx, dword ptr [ecx]
// 006c0fbf  8b5248               mov edx, dword ptr [edx + 0x48]
// 006c0fc2  8d4620               lea eax, [esi + 0x20]
// 006c0fc5  50                   push eax
// 006c0fc6  ffd2                 call edx
// 006c0fc8  6a01                 push 1
// 006c0fca  56                   push esi
// 006c0fcb  8bcb                 mov ecx, ebx
// 006c0fcd  e85eac0000           call 0x6cbc30
// 006c0fd2  85ff                 test edi, edi
// 006c0fd4  75c1                 jne 0x6c0f97
// 006c0fd6  5e                   pop esi
// 006c0fd7  5d                   pop ebp
// 006c0fd8  5b                   pop ebx
// 006c0fd9  5f                   pop edi
// 006c0fda  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp

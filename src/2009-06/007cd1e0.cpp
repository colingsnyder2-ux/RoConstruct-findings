// roc 2009-06 007cd1e0  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cd1e0
//
// 007cd1e0  8b442408             mov eax, dword ptr [esp + 8]
// 007cd1e4  57                   push edi
// 007cd1e5  8b7804               mov edi, dword ptr [eax + 4]
// 007cd1e8  85ff                 test edi, edi
// 007cd1ea  744d                 je 0x7cd239
// 007cd1ec  53                   push ebx
// 007cd1ed  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007cd1f1  55                   push ebp
// 007cd1f2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007cd1f6  56                   push esi
// 007cd1f7  8bc7                 mov eax, edi
// 007cd1f9  8b4008               mov eax, dword ptr [eax + 8]
// 007cd1fc  8b3f                 mov edi, dword ptr [edi]
// 007cd1fe  85c0                 test eax, eax
// 007cd200  7405                 je 0x7cd207
// 007cd202  8d70e0               lea esi, [eax - 0x20]
// 007cd205  eb02                 jmp 0x7cd209
// 007cd207  33f6                 xor esi, esi
// 007cd209  8bce                 mov ecx, esi
// 007cd20b  e82049fbff           call 0x781b30
// 007cd210  85c5                 test ebp, eax
// 007cd212  751e                 jne 0x7cd232
// 007cd214  837e3000             cmp dword ptr [esi + 0x30], 0
// 007cd218  740e                 je 0x7cd228
// 007cd21a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007cd21d  8b11                 mov edx, dword ptr [ecx]
// 007cd21f  8d4620               lea eax, [esi + 0x20]
// 007cd222  50                   push eax
// 007cd223  8b4248               mov eax, dword ptr [edx + 0x48]
// 007cd226  ffd0                 call eax
// 007cd228  6a01                 push 1
// 007cd22a  56                   push esi
// 007cd22b  8bcb                 mov ecx, ebx
// 007cd22d  e8deb20000           call 0x7d8510
// 007cd232  85ff                 test edi, edi
// 007cd234  75c1                 jne 0x7cd1f7
// 007cd236  5e                   pop esi
// 007cd237  5d                   pop ebp
// 007cd238  5b                   pop ebx
// 007cd239  5f                   pop edi
// 007cd23a  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp

// roc 2012-06 00a317d0  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a317d0
//
// 00a317d0  8b442408             mov eax, dword ptr [esp + 8]
// 00a317d4  57                   push edi
// 00a317d5  8b7804               mov edi, dword ptr [eax + 4]
// 00a317d8  85ff                 test edi, edi
// 00a317da  744d                 je 0xa31829
// 00a317dc  53                   push ebx
// 00a317dd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a317e1  55                   push ebp
// 00a317e2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a317e6  56                   push esi
// 00a317e7  8bc7                 mov eax, edi
// 00a317e9  8b4008               mov eax, dword ptr [eax + 8]
// 00a317ec  8b3f                 mov edi, dword ptr [edi]
// 00a317ee  85c0                 test eax, eax
// 00a317f0  7405                 je 0xa317f7
// 00a317f2  8d70e0               lea esi, [eax - 0x20]
// 00a317f5  eb02                 jmp 0xa317f9
// 00a317f7  33f6                 xor esi, esi
// 00a317f9  8bce                 mov ecx, esi
// 00a317fb  e89028fbff           call 0x9e4090
// 00a31800  85c5                 test ebp, eax
// 00a31802  751e                 jne 0xa31822
// 00a31804  837e3000             cmp dword ptr [esi + 0x30], 0
// 00a31808  740e                 je 0xa31818
// 00a3180a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00a3180d  8b11                 mov edx, dword ptr [ecx]
// 00a3180f  8d4620               lea eax, [esi + 0x20]
// 00a31812  50                   push eax
// 00a31813  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a31816  ffd0                 call eax
// 00a31818  6a01                 push 1
// 00a3181a  56                   push esi
// 00a3181b  8bcb                 mov ecx, ebx
// 00a3181d  e88eb10000           call 0xa3c9b0
// 00a31822  85ff                 test edi, edi
// 00a31824  75c1                 jne 0xa317e7
// 00a31826  5e                   pop esi
// 00a31827  5d                   pop ebp
// 00a31828  5b                   pop ebx
// 00a31829  5f                   pop edi
// 00a3182a  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp

// roc 2011-06 008c27d0  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c27d0
//
// 008c27d0  56                   push esi
// 008c27d1  8bf1                 mov esi, ecx
// 008c27d3  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008c27d6  57                   push edi
// 008c27d7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c27db  897e14               mov dword ptr [esi + 0x14], edi
// 008c27de  85c0                 test eax, eax
// 008c27e0  742d                 je 0x8c280f
// 008c27e2  50                   push eax
// 008c27e3  ff15b819a400         call dword ptr [0xa419b8]
// 008c27e9  50                   push eax
// 008c27ea  e8397bf4ff           call 0x80a328
// 008c27ef  3bc7                 cmp eax, edi
// 008c27f1  741c                 je 0x8c280f
// 008c27f3  85ff                 test edi, edi
// 008c27f5  7504                 jne 0x8c27fb
// 008c27f7  33c0                 xor eax, eax
// 008c27f9  eb03                 jmp 0x8c27fe
// 008c27fb  8b4720               mov eax, dword ptr [edi + 0x20]
// 008c27fe  50                   push eax
// 008c27ff  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008c2802  50                   push eax
// 008c2803  ff15a01aa400         call dword ptr [0xa41aa0]
// 008c2809  50                   push eax
// 008c280a  e8197bf4ff           call 0x80a328
// 008c280f  8bce                 mov ecx, esi
// 008c2811  e82aa4f9ff           call 0x85cc40
// 008c2816  8944240c             mov dword ptr [esp + 0xc], eax
// 008c281a  85c0                 test eax, eax
// 008c281c  742c                 je 0x8c284a
// 008c281e  8bff                 mov edi, edi
// 008c2820  8d4c240c             lea ecx, [esp + 0xc]
// 008c2824  51                   push ecx
// 008c2825  8bce                 mov ecx, esi
// 008c2827  e804df0300           call 0x900730
// 008c282c  85c0                 test eax, eax
// 008c282e  7405                 je 0x8c2835
// 008c2830  83c0e0               add eax, -0x20
// 008c2833  eb02                 jmp 0x8c2837
// 008c2835  33c0                 xor eax, eax
// 008c2837  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c283a  8d4820               lea ecx, [eax + 0x20]
// 008c283d  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008c2840  57                   push edi
// 008c2841  ffd0                 call eax
// 008c2843  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008c2848  75d6                 jne 0x8c2820
// 008c284a  5f                   pop edi
// 008c284b  5e                   pop esi
// 008c284c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

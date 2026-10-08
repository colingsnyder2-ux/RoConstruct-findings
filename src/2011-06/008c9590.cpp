// roc 2011-06 008c9590  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c9590
//
// 008c9590  56                   push esi
// 008c9591  57                   push edi
// 008c9592  8bf1                 mov esi, ecx
// 008c9594  e827e3ffff           call 0x8c78c0
// 008c9599  688018ad00           push 0xad1880
// 008c959e  8dbef0010000         lea edi, [esi + 0x1f0]
// 008c95a4  6a00                 push 0
// 008c95a6  8bcf                 mov ecx, edi
// 008c95a8  e8633efbff           call 0x87d410
// 008c95ad  8bcf                 mov ecx, edi
// 008c95af  e81c3dfbff           call 0x87d2d0
// 008c95b4  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c95ba  85c0                 test eax, eax
// 008c95bc  7448                 je 0x8c9606
// 008c95be  6a00                 push 0
// 008c95c0  e87bee0000           call 0x8d8440
// 008c95c5  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c95cb  6a08                 push 8
// 008c95cd  e87ed20000           call 0x8d6850
// 008c95d2  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008c95d8  bf01000000           mov edi, 1
// 008c95dd  897820               mov dword ptr [eax + 0x20], edi
// 008c95e0  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c95e6  6a00                 push 0
// 008c95e8  e853ee0000           call 0x8d8440
// 008c95ed  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c95f3  6a08                 push 8
// 008c95f5  e856d20000           call 0x8d6850
// 008c95fa  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c9600  897920               mov dword ptr [ecx + 0x20], edi
// 008c9603  5f                   pop edi
// 008c9604  5e                   pop esi
// 008c9605  c3                   ret 
// 008c9606  6a06                 push 6
// 008c9608  e833ee0000           call 0x8d8440
// 008c960d  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008c9613  c7422000000000       mov dword ptr [edx + 0x20], 0
// 008c961a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c9620  6a05                 push 5
// 008c9622  e819ee0000           call 0x8d8440
// 008c9627  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008c962d  5f                   pop edi
// 008c962e  c7402000000000       mov dword ptr [eax + 0x20], 0
// 008c9635  5e                   pop esi
// 008c9636  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

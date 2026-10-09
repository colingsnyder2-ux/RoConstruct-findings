// roc 2009-12 008b7fe0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b7fe0
//
// 008b7fe0  56                   push esi
// 008b7fe1  57                   push edi
// 008b7fe2  8bf1                 mov esi, ecx
// 008b7fe4  e847e3ffff           call 0x8b6330
// 008b7fe9  68d82ba000           push 0xa02bd8
// 008b7fee  8dbef0010000         lea edi, [esi + 0x1f0]
// 008b7ff4  6a00                 push 0
// 008b7ff6  8bcf                 mov ecx, edi
// 008b7ff8  e8033dfbff           call 0x86bd00
// 008b7ffd  8bcf                 mov ecx, edi
// 008b7fff  e8bc3bfbff           call 0x86bbc0
// 008b8004  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008b800a  85c0                 test eax, eax
// 008b800c  7448                 je 0x8b8056
// 008b800e  6a00                 push 0
// 008b8010  e83bb30100           call 0x8d3350
// 008b8015  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008b801b  6a08                 push 8
// 008b801d  e83e970100           call 0x8d1760
// 008b8022  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008b8028  bf01000000           mov edi, 1
// 008b802d  897820               mov dword ptr [eax + 0x20], edi
// 008b8030  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b8036  6a00                 push 0
// 008b8038  e813b30100           call 0x8d3350
// 008b803d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b8043  6a08                 push 8
// 008b8045  e816970100           call 0x8d1760
// 008b804a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b8050  897920               mov dword ptr [ecx + 0x20], edi
// 008b8053  5f                   pop edi
// 008b8054  5e                   pop esi
// 008b8055  c3                   ret 
// 008b8056  6a06                 push 6
// 008b8058  e8f3b20100           call 0x8d3350
// 008b805d  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 008b8063  c7422000000000       mov dword ptr [edx + 0x20], 0
// 008b806a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b8070  6a05                 push 5
// 008b8072  e8d9b20100           call 0x8d3350
// 008b8077  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008b807d  5f                   pop edi
// 008b807e  c7402000000000       mov dword ptr [eax + 0x20], 0
// 008b8085  5e                   pop esi
// 008b8086  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

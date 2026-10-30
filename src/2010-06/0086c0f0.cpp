// roc 2010-06 0086c0f0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086c0f0
//
// 0086c0f0  56                   push esi
// 0086c0f1  57                   push edi
// 0086c0f2  8bf1                 mov esi, ecx
// 0086c0f4  e827e3ffff           call 0x86a420
// 0086c0f9  68606ea600           push 0xa66e60
// 0086c0fe  8dbef0010000         lea edi, [esi + 0x1f0]
// 0086c104  6a00                 push 0
// 0086c106  8bcf                 mov ecx, edi
// 0086c108  e8f33bfbff           call 0x81fd00
// 0086c10d  8bcf                 mov ecx, edi
// 0086c10f  e8ac3afbff           call 0x81fbc0
// 0086c114  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0086c11a  85c0                 test eax, eax
// 0086c11c  7448                 je 0x86c166
// 0086c11e  6a00                 push 0
// 0086c120  e8dbb30100           call 0x887500
// 0086c125  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0086c12b  6a08                 push 8
// 0086c12d  e8de970100           call 0x885910
// 0086c132  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0086c138  bf01000000           mov edi, 1
// 0086c13d  897820               mov dword ptr [eax + 0x20], edi
// 0086c140  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0086c146  6a00                 push 0
// 0086c148  e8b3b30100           call 0x887500
// 0086c14d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0086c153  6a08                 push 8
// 0086c155  e8b6970100           call 0x885910
// 0086c15a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0086c160  897920               mov dword ptr [ecx + 0x20], edi
// 0086c163  5f                   pop edi
// 0086c164  5e                   pop esi
// 0086c165  c3                   ret 
// 0086c166  6a06                 push 6
// 0086c168  e893b30100           call 0x887500
// 0086c16d  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0086c173  c7422000000000       mov dword ptr [edx + 0x20], 0
// 0086c17a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0086c180  6a05                 push 5
// 0086c182  e879b30100           call 0x887500
// 0086c187  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0086c18d  5f                   pop edi
// 0086c18e  c7402000000000       mov dword ptr [eax + 0x20], 0
// 0086c195  5e                   pop esi
// 0086c196  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

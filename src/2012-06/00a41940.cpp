// roc 2012-06 00a41940  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a41940
//
// 00a41940  56                   push esi
// 00a41941  57                   push edi
// 00a41942  8bf1                 mov esi, ecx
// 00a41944  e847e3ffff           call 0xa3fc90
// 00a41949  6830cfc100           push 0xc1cf30
// 00a4194e  8dbef0010000         lea edi, [esi + 0x1f0]
// 00a41954  6a00                 push 0
// 00a41956  8bcf                 mov ecx, edi
// 00a41958  e85340fbff           call 0x9f59b0
// 00a4195d  8bcf                 mov ecx, edi
// 00a4195f  e80c3ffbff           call 0x9f5870
// 00a41964  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a4196a  85c0                 test eax, eax
// 00a4196c  7448                 je 0xa419b6
// 00a4196e  6a00                 push 0
// 00a41970  e8dbed0000           call 0xa50750
// 00a41975  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a4197b  6a08                 push 8
// 00a4197d  e8ded10000           call 0xa4eb60
// 00a41982  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00a41988  bf01000000           mov edi, 1
// 00a4198d  897820               mov dword ptr [eax + 0x20], edi
// 00a41990  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a41996  6a00                 push 0
// 00a41998  e8b3ed0000           call 0xa50750
// 00a4199d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a419a3  6a08                 push 8
// 00a419a5  e8b6d10000           call 0xa4eb60
// 00a419aa  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a419b0  897920               mov dword ptr [ecx + 0x20], edi
// 00a419b3  5f                   pop edi
// 00a419b4  5e                   pop esi
// 00a419b5  c3                   ret 
// 00a419b6  6a06                 push 6
// 00a419b8  e893ed0000           call 0xa50750
// 00a419bd  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00a419c3  c7422000000000       mov dword ptr [edx + 0x20], 0
// 00a419ca  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00a419d0  6a05                 push 5
// 00a419d2  e879ed0000           call 0xa50750
// 00a419d7  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00a419dd  5f                   pop edi
// 00a419de  c7402000000000       mov dword ptr [eax + 0x20], 0
// 00a419e5  5e                   pop esi
// 00a419e6  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

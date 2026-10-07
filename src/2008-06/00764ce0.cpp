// roc 2008-06 00764ce0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00764ce0
//
// 00764ce0  56                   push esi
// 00764ce1  57                   push edi
// 00764ce2  8bf1                 mov esi, ecx
// 00764ce4  e827e3ffff           call 0x763010
// 00764ce9  68b0348600           push 0x8634b0
// 00764cee  8dbef0010000         lea edi, [esi + 0x1f0]
// 00764cf4  6a00                 push 0
// 00764cf6  8bcf                 mov ecx, edi
// 00764cf8  e87338fbff           call 0x718570
// 00764cfd  8bcf                 mov ecx, edi
// 00764cff  e82c37fbff           call 0x718430
// 00764d04  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00764d0a  85c0                 test eax, eax
// 00764d0c  7448                 je 0x764d56
// 00764d0e  6a00                 push 0
// 00764d10  e8dbb30100           call 0x7800f0
// 00764d15  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00764d1b  6a08                 push 8
// 00764d1d  e8de970100           call 0x77e500
// 00764d22  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00764d28  bf01000000           mov edi, 1
// 00764d2d  897820               mov dword ptr [eax + 0x20], edi
// 00764d30  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00764d36  6a00                 push 0
// 00764d38  e8b3b30100           call 0x7800f0
// 00764d3d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00764d43  6a08                 push 8
// 00764d45  e8b6970100           call 0x77e500
// 00764d4a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00764d50  897920               mov dword ptr [ecx + 0x20], edi
// 00764d53  5f                   pop edi
// 00764d54  5e                   pop esi
// 00764d55  c3                   ret 
// 00764d56  6a06                 push 6
// 00764d58  e893b30100           call 0x7800f0
// 00764d5d  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00764d63  c7422000000000       mov dword ptr [edx + 0x20], 0
// 00764d6a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00764d70  6a05                 push 5
// 00764d72  e879b30100           call 0x7800f0
// 00764d77  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00764d7d  5f                   pop edi
// 00764d7e  c7402000000000       mov dword ptr [eax + 0x20], 0
// 00764d85  5e                   pop esi
// 00764d86  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

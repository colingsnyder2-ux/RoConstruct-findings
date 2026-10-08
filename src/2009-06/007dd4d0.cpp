// roc 2009-06 007dd4d0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneExplorerTheme  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007dd4d0
//
// 007dd4d0  56                   push esi
// 007dd4d1  57                   push edi
// 007dd4d2  8bf1                 mov esi, ecx
// 007dd4d4  e827e3ffff           call 0x7db800
// 007dd4d9  6858279000           push 0x902758
// 007dd4de  8dbef0010000         lea edi, [esi + 0x1f0]
// 007dd4e4  6a00                 push 0
// 007dd4e6  8bcf                 mov ecx, edi
// 007dd4e8  e8f337fbff           call 0x790ce0
// 007dd4ed  8bcf                 mov ecx, edi
// 007dd4ef  e8ac36fbff           call 0x790ba0
// 007dd4f4  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007dd4fa  85c0                 test eax, eax
// 007dd4fc  7448                 je 0x7dd546
// 007dd4fe  6a00                 push 0
// 007dd500  e8abb20100           call 0x7f87b0
// 007dd505  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007dd50b  6a08                 push 8
// 007dd50d  e8ae960100           call 0x7f6bc0
// 007dd512  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007dd518  bf01000000           mov edi, 1
// 007dd51d  897820               mov dword ptr [eax + 0x20], edi
// 007dd520  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007dd526  6a00                 push 0
// 007dd528  e883b20100           call 0x7f87b0
// 007dd52d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007dd533  6a08                 push 8
// 007dd535  e886960100           call 0x7f6bc0
// 007dd53a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007dd540  897920               mov dword ptr [ecx + 0x20], edi
// 007dd543  5f                   pop edi
// 007dd544  5e                   pop esi
// 007dd545  c3                   ret 
// 007dd546  6a06                 push 6
// 007dd548  e863b20100           call 0x7f87b0
// 007dd54d  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 007dd553  c7422000000000       mov dword ptr [edx + 0x20], 0
// 007dd55a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007dd560  6a05                 push 5
// 007dd562  e849b20100           call 0x7f87b0
// 007dd567  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007dd56d  5f                   pop edi
// 007dd56e  c7402000000000       mov dword ptr [eax + 0x20], 0
// 007dd575  5e                   pop esi
// 007dd576  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CXTPDockingPaneExplorerTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

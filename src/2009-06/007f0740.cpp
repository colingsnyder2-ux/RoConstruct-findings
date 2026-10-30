// roc 2009-06 007f0740  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f0740
//
// 007f0740  56                   push esi
// 007f0741  8bf1                 mov esi, ecx
// 007f0743  e828eaffff           call 0x7ef170
// 007f0748  e8d343f6ff           call 0x754b20
// 007f074d  8bc8                 mov ecx, eax
// 007f074f  e87c41f6ff           call 0x7548d0
// 007f0754  48                   dec eax
// 007f0755  83f803               cmp eax, 3
// 007f0758  7717                 ja 0x7f0771
// 007f075a  ff248574077f00       jmp dword ptr [eax*4 + 0x7f0774]
// 007f0761  c746407f9db900       mov dword ptr [esi + 0x40], 0xb99d7f
// 007f0768  5e                   pop esi
// 007f0769  c3                   ret 
// 007f076a  c74640a4b97f00       mov dword ptr [esi + 0x40], 0x7fb9a4
// 007f0771  5e                   pop esi
// 007f0772  c3                   ret 
// 007f0773  90                   nop 
// 007f0774  61                   popal 
// 007f0775  07                   pop es
// 007f0776  7f00                 jg 0x7f0778
// 007f0778  6a07                 push 7
// 007f077a  7f00                 jg 0x7f077c
// 007f077c  61                   popal 
// 007f077d  07                   pop es
// 007f077e  7f00                 jg 0x7f0780
// 007f0780  61                   popal 
// 007f0781  07                   pop es
// 007f0782  7f00                 jg 0x7f0784
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp

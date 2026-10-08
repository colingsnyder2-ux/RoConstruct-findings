// roc 2010-06 0087f490  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087f490
//
// 0087f490  56                   push esi
// 0087f491  8bf1                 mov esi, ecx
// 0087f493  e828eaffff           call 0x87dec0
// 0087f498  e88346f6ff           call 0x7e3b20
// 0087f49d  8bc8                 mov ecx, eax
// 0087f49f  e82c44f6ff           call 0x7e38d0
// 0087f4a4  48                   dec eax
// 0087f4a5  83f803               cmp eax, 3
// 0087f4a8  7717                 ja 0x87f4c1
// 0087f4aa  ff2485c4f48700       jmp dword ptr [eax*4 + 0x87f4c4]
// 0087f4b1  c746407f9db900       mov dword ptr [esi + 0x40], 0xb99d7f
// 0087f4b8  5e                   pop esi
// 0087f4b9  c3                   ret 
// 0087f4ba  c74640a4b97f00       mov dword ptr [esi + 0x40], 0x7fb9a4
// 0087f4c1  5e                   pop esi
// 0087f4c2  c3                   ret 
// 0087f4c3  90                   nop 
// 0087f4c4  b1f4                 mov cl, 0xf4
// 0087f4c6  8700                 xchg dword ptr [eax], eax
// 0087f4c8  baf48700b1           mov edx, 0xb10087f4
// 0087f4cd  f4                   hlt 
// 0087f4ce  8700                 xchg dword ptr [eax], eax
// 0087f4d0  b1f4                 mov cl, 0xf4
// 0087f4d2  8700                 xchg dword ptr [eax], eax
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp

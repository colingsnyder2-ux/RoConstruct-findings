// roc 2008-06 006bd260  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bd260
//
// 006bd260  83ec0c               sub esp, 0xc
// 006bd263  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006bd266  f7d8                 neg eax
// 006bd268  1bc0                 sbb eax, eax
// 006bd26a  890424               mov dword ptr [esp], eax
// 006bd26d  742b                 je 0x6bd29a
// 006bd26f  56                   push esi
// 006bd270  8d7120               lea esi, [ecx + 0x20]
// 006bd273  8d442408             lea eax, [esp + 8]
// 006bd277  50                   push eax
// 006bd278  8d4c2410             lea ecx, [esp + 0x10]
// 006bd27c  51                   push ecx
// 006bd27d  8d54240c             lea edx, [esp + 0xc]
// 006bd281  52                   push edx
// 006bd282  8bce                 mov ecx, esi
// 006bd284  e8c7bb0a00           call 0x768e50
// 006bd289  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bd28d  e8cefeffff           call 0x6bd160
// 006bd292  837c240400           cmp dword ptr [esp + 4], 0
// 006bd297  75da                 jne 0x6bd273
// 006bd299  5e                   pop esi
// 006bd29a  83c40c               add esp, 0xc
// 006bd29d  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?RefreshAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp

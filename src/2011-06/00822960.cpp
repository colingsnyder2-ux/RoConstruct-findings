// from server: 100% by auto
// roc 2011-06 00822960  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822960
//
// 00822960  83ec0c               sub esp, 0xc
// 00822963  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00822966  f7d8                 neg eax
// 00822968  1bc0                 sbb eax, eax
// 0082296a  890424               mov dword ptr [esp], eax
// 0082296d  742b                 je 0x82299a
// 0082296f  56                   push esi
// 00822970  8d7120               lea esi, [ecx + 0x20]
// 00822973  8d442408             lea eax, [esp + 8]
// 00822977  50                   push eax
// 00822978  8d4c2410             lea ecx, [esp + 0x10]
// 0082297c  51                   push ecx
// 0082297d  8d54240c             lea edx, [esp + 0xc]
// 00822981  52                   push edx
// 00822982  8bce                 mov ecx, esi
// 00822984  e857ad0a00           call 0x8cd6e0
// 00822989  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082298d  e8cefeffff           call 0x822860
// 00822992  837c240400           cmp dword ptr [esp + 4], 0
// 00822997  75da                 jne 0x822973
// 00822999  5e                   pop esi
// 0082299a  83c40c               add esp, 0xc
// 0082299d  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RefreshAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

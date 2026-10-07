// roc 2012-06 0099ae60  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099ae60
//
// 0099ae60  83ec0c               sub esp, 0xc
// 0099ae63  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0099ae66  f7d8                 neg eax
// 0099ae68  1bc0                 sbb eax, eax
// 0099ae6a  890424               mov dword ptr [esp], eax
// 0099ae6d  742b                 je 0x99ae9a
// 0099ae6f  56                   push esi
// 0099ae70  8d7120               lea esi, [ecx + 0x20]
// 0099ae73  8d442408             lea eax, [esp + 8]
// 0099ae77  50                   push eax
// 0099ae78  8d4c2410             lea ecx, [esp + 0x10]
// 0099ae7c  51                   push ecx
// 0099ae7d  8d54240c             lea edx, [esp + 0xc]
// 0099ae81  52                   push edx
// 0099ae82  8bce                 mov ecx, esi
// 0099ae84  e8d7d2ffff           call 0x998160
// 0099ae89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0099ae8d  e8cefeffff           call 0x99ad60
// 0099ae92  837c240400           cmp dword ptr [esp + 4], 0
// 0099ae97  75da                 jne 0x99ae73
// 0099ae99  5e                   pop esi
// 0099ae9a  83c40c               add esp, 0xc
// 0099ae9d  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RefreshAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

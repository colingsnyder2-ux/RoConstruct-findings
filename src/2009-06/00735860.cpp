// roc 2009-06 00735860  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00735860
//
// 00735860  83ec0c               sub esp, 0xc
// 00735863  56                   push esi
// 00735864  57                   push edi
// 00735865  8bf9                 mov edi, ecx
// 00735867  8b4734               mov eax, dword ptr [edi + 0x34]
// 0073586a  f7d8                 neg eax
// 0073586c  1bc0                 sbb eax, eax
// 0073586e  89442408             mov dword ptr [esp + 8], eax
// 00735872  7429                 je 0x73589d
// 00735874  8d7728               lea esi, [edi + 0x28]
// 00735877  8d44240c             lea eax, [esp + 0xc]
// 0073587b  50                   push eax
// 0073587c  8d4c2414             lea ecx, [esp + 0x14]
// 00735880  51                   push ecx
// 00735881  8d542410             lea edx, [esp + 0x10]
// 00735885  52                   push edx
// 00735886  8bce                 mov ecx, esi
// 00735888  e8e3d70500           call 0x793070
// 0073588d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00735891  e89afeffff           call 0x735730
// 00735896  837c240800           cmp dword ptr [esp + 8], 0
// 0073589b  75da                 jne 0x735877
// 0073589d  33f6                 xor esi, esi
// 0073589f  39774c               cmp dword ptr [edi + 0x4c], esi
// 007358a2  7e1a                 jle 0x7358be
// 007358a4  85f6                 test esi, esi
// 007358a6  7c1c                 jl 0x7358c4
// 007358a8  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007358ab  7d17                 jge 0x7358c4
// 007358ad  8b4748               mov eax, dword ptr [edi + 0x48]
// 007358b0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007358b3  e898d9ffff           call 0x733250
// 007358b8  46                   inc esi
// 007358b9  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007358bc  7ce6                 jl 0x7358a4
// 007358be  5f                   pop edi
// 007358bf  5e                   pop esi
// 007358c0  83c40c               add esp, 0xc
// 007358c3  c3                   ret 
// 007358c4  e81b34feff           call 0x718ce4
// copied from an identical function in another client (function ?RefreshAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
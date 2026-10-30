// roc 2011-06 00822a90  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822a90
//
// 00822a90  83ec0c               sub esp, 0xc
// 00822a93  56                   push esi
// 00822a94  57                   push edi
// 00822a95  8bf9                 mov edi, ecx
// 00822a97  8b4734               mov eax, dword ptr [edi + 0x34]
// 00822a9a  f7d8                 neg eax
// 00822a9c  1bc0                 sbb eax, eax
// 00822a9e  89442408             mov dword ptr [esp + 8], eax
// 00822aa2  7429                 je 0x822acd
// 00822aa4  8d7728               lea esi, [edi + 0x28]
// 00822aa7  8d44240c             lea eax, [esp + 0xc]
// 00822aab  50                   push eax
// 00822aac  8d4c2414             lea ecx, [esp + 0x14]
// 00822ab0  51                   push ecx
// 00822ab1  8d542410             lea edx, [esp + 0x10]
// 00822ab5  52                   push edx
// 00822ab6  8bce                 mov ecx, esi
// 00822ab8  e823ac0a00           call 0x8cd6e0
// 00822abd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00822ac1  e89afeffff           call 0x822960
// 00822ac6  837c240800           cmp dword ptr [esp + 8], 0
// 00822acb  75da                 jne 0x822aa7
// 00822acd  33f6                 xor esi, esi
// 00822acf  39774c               cmp dword ptr [edi + 0x4c], esi
// 00822ad2  7e1a                 jle 0x822aee
// 00822ad4  85f6                 test esi, esi
// 00822ad6  7c1c                 jl 0x822af4
// 00822ad8  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00822adb  7d17                 jge 0x822af4
// 00822add  8b4748               mov eax, dword ptr [edi + 0x48]
// 00822ae0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00822ae3  e8e8dcffff           call 0x8207d0
// 00822ae8  46                   inc esi
// 00822ae9  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00822aec  7ce6                 jl 0x822ad4
// 00822aee  5f                   pop edi
// 00822aef  5e                   pop esi
// 00822af0  83c40c               add esp, 0xc
// 00822af3  c3                   ret 
// 00822af4  e81178feff           call 0x80a30a
// copied from an identical function in another client (function ?RefreshAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
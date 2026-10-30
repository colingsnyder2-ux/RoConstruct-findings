// roc 2009-12 0080c910  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c910
//
// 0080c910  83ec0c               sub esp, 0xc
// 0080c913  56                   push esi
// 0080c914  57                   push edi
// 0080c915  8bf9                 mov edi, ecx
// 0080c917  8b4734               mov eax, dword ptr [edi + 0x34]
// 0080c91a  f7d8                 neg eax
// 0080c91c  1bc0                 sbb eax, eax
// 0080c91e  89442408             mov dword ptr [esp + 8], eax
// 0080c922  7429                 je 0x80c94d
// 0080c924  8d7728               lea esi, [edi + 0x28]
// 0080c927  8d44240c             lea eax, [esp + 0xc]
// 0080c92b  50                   push eax
// 0080c92c  8d4c2414             lea ecx, [esp + 0x14]
// 0080c930  51                   push ecx
// 0080c931  8d542410             lea edx, [esp + 0x10]
// 0080c935  52                   push edx
// 0080c936  8bce                 mov ecx, esi
// 0080c938  e8e3ceffff           call 0x809820
// 0080c93d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080c941  e89afeffff           call 0x80c7e0
// 0080c946  837c240800           cmp dword ptr [esp + 8], 0
// 0080c94b  75da                 jne 0x80c927
// 0080c94d  33f6                 xor esi, esi
// 0080c94f  39774c               cmp dword ptr [edi + 0x4c], esi
// 0080c952  7e1a                 jle 0x80c96e
// 0080c954  85f6                 test esi, esi
// 0080c956  7c1c                 jl 0x80c974
// 0080c958  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0080c95b  7d17                 jge 0x80c974
// 0080c95d  8b4748               mov eax, dword ptr [edi + 0x48]
// 0080c960  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0080c963  e878d9ffff           call 0x80a2e0
// 0080c968  46                   inc esi
// 0080c969  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0080c96c  7ce6                 jl 0x80c954
// 0080c96e  5f                   pop edi
// 0080c96f  5e                   pop esi
// 0080c970  83c40c               add esp, 0xc
// 0080c973  c3                   ret 
// 0080c974  e89371feff           call 0x7f3b0c
// copied from an identical function in another client (function ?RefreshAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
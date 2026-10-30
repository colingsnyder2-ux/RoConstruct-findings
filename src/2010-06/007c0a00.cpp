// roc 2010-06 007c0a00  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c0a00
//
// 007c0a00  83ec0c               sub esp, 0xc
// 007c0a03  56                   push esi
// 007c0a04  57                   push edi
// 007c0a05  8bf9                 mov edi, ecx
// 007c0a07  8b4734               mov eax, dword ptr [edi + 0x34]
// 007c0a0a  f7d8                 neg eax
// 007c0a0c  1bc0                 sbb eax, eax
// 007c0a0e  89442408             mov dword ptr [esp + 8], eax
// 007c0a12  7429                 je 0x7c0a3d
// 007c0a14  8d7728               lea esi, [edi + 0x28]
// 007c0a17  8d44240c             lea eax, [esp + 0xc]
// 007c0a1b  50                   push eax
// 007c0a1c  8d4c2414             lea ecx, [esp + 0x14]
// 007c0a20  51                   push ecx
// 007c0a21  8d542410             lea edx, [esp + 0x10]
// 007c0a25  52                   push edx
// 007c0a26  8bce                 mov ecx, esi
// 007c0a28  e863f80a00           call 0x870290
// 007c0a2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c0a31  e89afeffff           call 0x7c08d0
// 007c0a36  837c240800           cmp dword ptr [esp + 8], 0
// 007c0a3b  75da                 jne 0x7c0a17
// 007c0a3d  33f6                 xor esi, esi
// 007c0a3f  39774c               cmp dword ptr [edi + 0x4c], esi
// 007c0a42  7e1a                 jle 0x7c0a5e
// 007c0a44  85f6                 test esi, esi
// 007c0a46  7c1c                 jl 0x7c0a64
// 007c0a48  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007c0a4b  7d17                 jge 0x7c0a64
// 007c0a4d  8b4748               mov eax, dword ptr [edi + 0x48]
// 007c0a50  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007c0a53  e8e8d9ffff           call 0x7be440
// 007c0a58  46                   inc esi
// 007c0a59  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 007c0a5c  7ce6                 jl 0x7c0a44
// 007c0a5e  5f                   pop edi
// 007c0a5f  5e                   pop esi
// 007c0a60  83c40c               add esp, 0xc
// 007c0a63  c3                   ret 
// 007c0a64  e8e371feff           call 0x7a7c4c
// copied from an identical function in another client (function ?RefreshAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
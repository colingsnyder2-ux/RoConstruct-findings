// roc 2012-06 0099af90  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099af90
//
// 0099af90  83ec0c               sub esp, 0xc
// 0099af93  56                   push esi
// 0099af94  57                   push edi
// 0099af95  8bf9                 mov edi, ecx
// 0099af97  8b4734               mov eax, dword ptr [edi + 0x34]
// 0099af9a  f7d8                 neg eax
// 0099af9c  1bc0                 sbb eax, eax
// 0099af9e  89442408             mov dword ptr [esp + 8], eax
// 0099afa2  7429                 je 0x99afcd
// 0099afa4  8d7728               lea esi, [edi + 0x28]
// 0099afa7  8d44240c             lea eax, [esp + 0xc]
// 0099afab  50                   push eax
// 0099afac  8d4c2414             lea ecx, [esp + 0x14]
// 0099afb0  51                   push ecx
// 0099afb1  8d542410             lea edx, [esp + 0x10]
// 0099afb5  52                   push edx
// 0099afb6  8bce                 mov ecx, esi
// 0099afb8  e8a3d1ffff           call 0x998160
// 0099afbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0099afc1  e89afeffff           call 0x99ae60
// 0099afc6  837c240800           cmp dword ptr [esp + 8], 0
// 0099afcb  75da                 jne 0x99afa7
// 0099afcd  33f6                 xor esi, esi
// 0099afcf  39774c               cmp dword ptr [edi + 0x4c], esi
// 0099afd2  7e1a                 jle 0x99afee
// 0099afd4  85f6                 test esi, esi
// 0099afd6  7c1c                 jl 0x99aff4
// 0099afd8  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0099afdb  7d17                 jge 0x99aff4
// 0099afdd  8b4748               mov eax, dword ptr [edi + 0x48]
// 0099afe0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0099afe3  e838deffff           call 0x998e20
// 0099afe8  46                   inc esi
// 0099afe9  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 0099afec  7ce6                 jl 0x99afd4
// 0099afee  5f                   pop edi
// 0099afef  5e                   pop esi
// 0099aff0  83c40c               add esp, 0xc
// 0099aff3  c3                   ret 
// 0099aff4  e8c773feff           call 0x9823c0
// copied from an identical function in another client (function ?RefreshAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
// roc 2007-03 0052fb80  unit: seg_00520000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052fb80
//
// 0052fb80  56                   push esi
// 0052fb81  8bf1                 mov esi, ecx
// 0052fb83  833e00               cmp dword ptr [esi], 0
// 0052fb86  57                   push edi
// 0052fb87  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 0052fb8d  7502                 jne 0x52fb91
// 0052fb8f  ffd7                 call edi
// 0052fb91  8b4604               mov eax, dword ptr [esi + 4]
// 0052fb94  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fb98  7411                 je 0x52fbab
// 0052fb9a  8b4008               mov eax, dword ptr [eax + 8]
// 0052fb9d  894604               mov dword ptr [esi + 4], eax
// 0052fba0  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fba4  745b                 je 0x52fc01
// 0052fba6  ffd7                 call edi
// 0052fba8  5f                   pop edi
// 0052fba9  5e                   pop esi
// 0052fbaa  c3                   ret 
// 0052fbab  8b08                 mov ecx, dword ptr [eax]
// 0052fbad  80791500             cmp byte ptr [ecx + 0x15], 0
// 0052fbb1  751e                 jne 0x52fbd1
// 0052fbb3  8b4108               mov eax, dword ptr [ecx + 8]
// 0052fbb6  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fbba  750f                 jne 0x52fbcb
// 0052fbbc  8d642400             lea esp, [esp]
// 0052fbc0  8bc8                 mov ecx, eax
// 0052fbc2  8b4108               mov eax, dword ptr [ecx + 8]
// 0052fbc5  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fbc9  74f5                 je 0x52fbc0
// 0052fbcb  5f                   pop edi
// 0052fbcc  894e04               mov dword ptr [esi + 4], ecx
// 0052fbcf  5e                   pop esi
// 0052fbd0  c3                   ret 
// 0052fbd1  8b4004               mov eax, dword ptr [eax + 4]
// 0052fbd4  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fbd8  751b                 jne 0x52fbf5
// 0052fbda  8d9b00000000         lea ebx, [ebx]
// 0052fbe0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052fbe3  3b08                 cmp ecx, dword ptr [eax]
// 0052fbe5  750e                 jne 0x52fbf5
// 0052fbe7  894604               mov dword ptr [esi + 4], eax
// 0052fbea  8bd0                 mov edx, eax
// 0052fbec  8b4204               mov eax, dword ptr [edx + 4]
// 0052fbef  80781500             cmp byte ptr [eax + 0x15], 0
// 0052fbf3  74eb                 je 0x52fbe0
// 0052fbf5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052fbf8  80791500             cmp byte ptr [ecx + 0x15], 0
// 0052fbfc  75a8                 jne 0x52fba6
// 0052fbfe  894604               mov dword ptr [esi + 4], eax
// 0052fc01  5f                   pop edi
// 0052fc02  5e                   pop esi
// 0052fc03  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

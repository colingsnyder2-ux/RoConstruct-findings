// roc 2008-06 006d54f0  unit: CXTPReportHeader  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d54f0
//
// 006d54f0  83ec08               sub esp, 8
// 006d54f3  53                   push ebx
// 006d54f4  55                   push ebp
// 006d54f5  56                   push esi
// 006d54f6  8bd9                 mov ebx, ecx
// 006d54f8  33f6                 xor esi, esi
// 006d54fa  57                   push edi
// 006d54fb  39b38c000000         cmp dword ptr [ebx + 0x8c], esi
// 006d5501  0f8442010000         je 0x6d5649
// 006d5507  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d550b  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d550e  33ed                 xor ebp, ebp
// 006d5510  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006d5513  89742414             mov dword ptr [esp + 0x14], esi
// 006d5517  0f8d19010000         jge 0x6d5636
// 006d551d  8d4900               lea ecx, [ecx]
// 006d5520  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d5523  85ff                 test edi, edi
// 006d5525  7c0d                 jl 0x6d5534
// 006d5527  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006d552a  7d08                 jge 0x6d5534
// 006d552c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006d552f  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 006d5532  eb02                 jmp 0x6d5536
// 006d5534  33f6                 xor esi, esi
// 006d5536  8bce                 mov ecx, esi
// 006d5538  e8a3f0ffff           call 0x6d45e0
// 006d553d  85c0                 test eax, eax
// 006d553f  7420                 je 0x6d5561
// 006d5541  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 006d5548  740c                 je 0x6d5556
// 006d554a  03aea0000000         add ebp, dword ptr [esi + 0xa0]
// 006d5550  89742414             mov dword ptr [esp + 0x14], esi
// 006d5554  eb0b                 jmp 0x6d5561
// 006d5556  8bce                 mov ecx, esi
// 006d5558  e8f3f6ffff           call 0x6d4c50
// 006d555d  2944241c             sub dword ptr [esp + 0x1c], eax
// 006d5561  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006d5564  47                   inc edi
// 006d5565  3b7a30               cmp edi, dword ptr [edx + 0x30]
// 006d5568  7cb6                 jl 0x6d5520
// 006d556a  837c241400           cmp dword ptr [esp + 0x14], 0
// 006d556f  896c2410             mov dword ptr [esp + 0x10], ebp
// 006d5573  0f84bd000000         je 0x6d5636
// 006d5579  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006d557d  85ff                 test edi, edi
// 006d557f  0f8eb1000000         jle 0x6d5636
// 006d5585  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006d5589  8bc2                 mov eax, edx
// 006d558b  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 006d558e  0f8da2000000         jge 0x6d5636
// 006d5594  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d5597  85ed                 test ebp, ebp
// 006d5599  7c0d                 jl 0x6d55a8
// 006d559b  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 006d559e  7d08                 jge 0x6d55a8
// 006d55a0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006d55a3  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 006d55a6  eb02                 jmp 0x6d55aa
// 006d55a8  33f6                 xor esi, esi
// 006d55aa  8bce                 mov ecx, esi
// 006d55ac  e82ff0ffff           call 0x6d45e0
// 006d55b1  85c0                 test eax, eax
// 006d55b3  7474                 je 0x6d5629
// 006d55b5  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 006d55bc  746b                 je 0x6d5629
// 006d55be  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006d55c2  7518                 jne 0x6d55dc
// 006d55c4  8bce                 mov ecx, esi
// 006d55c6  e855f4ffff           call 0x6d4a20
// 006d55cb  3bf8                 cmp edi, eax
// 006d55cd  7e04                 jle 0x6d55d3
// 006d55cf  8bc7                 mov eax, edi
// 006d55d1  eb50                 jmp 0x6d5623
// 006d55d3  8bce                 mov ecx, esi
// 006d55d5  e846f4ffff           call 0x6d4a20
// 006d55da  eb47                 jmp 0x6d5623
// 006d55dc  b801000000           mov eax, 1
// 006d55e1  39442410             cmp dword ptr [esp + 0x10], eax
// 006d55e5  7d04                 jge 0x6d55eb
// 006d55e7  89442410             mov dword ptr [esp + 0x10], eax
// 006d55eb  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 006d55f1  0fafc7               imul eax, edi
// 006d55f4  99                   cdq 
// 006d55f5  f77c2410             idiv dword ptr [esp + 0x10]
// 006d55f9  8bce                 mov ecx, esi
// 006d55fb  8bf8                 mov edi, eax
// 006d55fd  e81ef4ffff           call 0x6d4a20
// 006d5602  3bf8                 cmp edi, eax
// 006d5604  7e04                 jle 0x6d560a
// 006d5606  8bc7                 mov eax, edi
// 006d5608  eb07                 jmp 0x6d5611
// 006d560a  8bce                 mov ecx, esi
// 006d560c  e80ff4ffff           call 0x6d4a20
// 006d5611  2944241c             sub dword ptr [esp + 0x1c], eax
// 006d5615  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 006d561b  29542410             sub dword ptr [esp + 0x10], edx
// 006d561f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006d5623  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 006d5629  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d562c  45                   inc ebp
// 006d562d  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 006d5630  0f8c5effffff         jl 0x6d5594
// 006d5636  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006d5639  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006d563c  83c070               add eax, 0x70
// 006d563f  2b08                 sub ecx, dword ptr [eax]
// 006d5641  898b9c000000         mov dword ptr [ebx + 0x9c], ecx
// 006d5647  eb65                 jmp 0x6d56ae
// 006d5649  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006d564c  89b39c000000         mov dword ptr [ebx + 0x9c], esi
// 006d5652  397230               cmp dword ptr [edx + 0x30], esi
// 006d5655  7e37                 jle 0x6d568e
// 006d5657  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d565a  85f6                 test esi, esi
// 006d565c  7c27                 jl 0x6d5685
// 006d565e  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d5661  7d22                 jge 0x6d5685
// 006d5663  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006d5666  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 006d5669  85ff                 test edi, edi
// 006d566b  7418                 je 0x6d5685
// 006d566d  8bcf                 mov ecx, edi
// 006d566f  e86cefffff           call 0x6d45e0
// 006d5674  85c0                 test eax, eax
// 006d5676  740d                 je 0x6d5685
// 006d5678  8bcf                 mov ecx, edi
// 006d567a  e8d1f5ffff           call 0x6d4c50
// 006d567f  01839c000000         add dword ptr [ebx + 0x9c], eax
// 006d5685  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006d5688  46                   inc esi
// 006d5689  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 006d568c  7cc9                 jl 0x6d5657
// 006d568e  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 006d5695  750a                 jne 0x6d56a1
// 006d5697  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d569b  89939c000000         mov dword ptr [ebx + 0x9c], edx
// 006d56a1  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006d56a4  8b01                 mov eax, dword ptr [ecx]
// 006d56a6  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006d56ac  ffd2                 call edx
// 006d56ae  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006d56b1  6a00                 push 0
// 006d56b3  6abc                 push -0x44
// 006d56b5  e866a6ffff           call 0x6cfd20
// 006d56ba  5f                   pop edi
// 006d56bb  5e                   pop esi
// 006d56bc  5d                   pop ebp
// 006d56bd  5b                   pop ebx
// 006d56be  83c408               add esp, 8
// 006d56c1  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportHeader.cpp (function ?AdjustColumnsWidth@CXTPReportHeader@@IAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp

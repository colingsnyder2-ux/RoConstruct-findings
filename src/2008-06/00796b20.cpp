// roc 2008-06 00796b20  unit: CXTPRibbonGroupPopupToolBar  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796b20
//
// 00796b20  83ec10               sub esp, 0x10
// 00796b23  53                   push ebx
// 00796b24  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00796b28  56                   push esi
// 00796b29  8b7338               mov esi, dword ptr [ebx + 0x38]
// 00796b2c  57                   push edi
// 00796b2d  8bf9                 mov edi, ecx
// 00796b2f  8b07                 mov eax, dword ptr [edi]
// 00796b31  8b5004               mov edx, dword ptr [eax + 4]
// 00796b34  8d4c240c             lea ecx, [esp + 0xc]
// 00796b38  51                   push ecx
// 00796b39  8bcf                 mov ecx, edi
// 00796b3b  ffd2                 call edx
// 00796b3d  837c24240c           cmp dword ptr [esp + 0x24], 0xc
// 00796b42  7d1d                 jge 0x796b61
// 00796b44  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00796b47  8b01                 mov eax, dword ptr [ecx]
// 00796b49  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00796b4f  6a00                 push 0
// 00796b51  ffd2                 call edx
// 00796b53  85c0                 test eax, eax
// 00796b55  740a                 je 0x796b61
// 00796b57  8b442424             mov eax, dword ptr [esp + 0x24]
// 00796b5b  8d7406f4             lea esi, [esi + eax - 0xc]
// 00796b5f  eb2d                 jmp 0x796b8e
// 00796b61  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00796b65  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00796b69  7e29                 jle 0x796b94
// 00796b6b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00796b6e  8b11                 mov edx, dword ptr [ecx]
// 00796b70  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00796b76  6a00                 push 0
// 00796b78  ffd0                 call eax
// 00796b7a  85c0                 test eax, eax
// 00796b7c  7416                 je 0x796b94
// 00796b7e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00796b82  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00796b86  034c242c             add ecx, dword ptr [esp + 0x2c]
// 00796b8a  8d740e0c             lea esi, [esi + ecx + 0xc]
// 00796b8e  85f6                 test esi, esi
// 00796b90  7d02                 jge 0x796b94
// 00796b92  33f6                 xor esi, esi
// 00796b94  3b7704               cmp esi, dword ptr [edi + 4]
// 00796b97  7416                 je 0x796baf
// 00796b99  897704               mov dword ptr [edi + 4], esi
// 00796b9c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00796b9f  8b8a8c000000         mov ecx, dword ptr [edx + 0x8c]
// 00796ba5  8b01                 mov eax, dword ptr [ecx]
// 00796ba7  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00796bad  ffd2                 call edx
// 00796baf  5f                   pop edi
// 00796bb0  5e                   pop esi
// 00796bb1  5b                   pop ebx
// 00796bb2  83c410               add esp, 0x10
// 00796bb5  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?ShowScrollableRect@CXTPRibbonScrollableBar@@IAEXPAVCXTPRibbonGroups@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp

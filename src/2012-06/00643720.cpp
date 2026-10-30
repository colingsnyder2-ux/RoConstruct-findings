// from server: 100% by auto
// roc 2012-06 00643720  unit: seg_00640000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643720
//
// 00643720  53                   push ebx
// 00643721  55                   push ebp
// 00643722  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00643726  56                   push esi
// 00643727  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0064372a  8b1e                 mov ebx, dword ptr [esi]
// 0064372c  57                   push edi
// 0064372d  8b7e04               mov edi, dword ptr [esi + 4]
// 00643730  85ff                 test edi, edi
// 00643732  7519                 jne 0x64374d
// 00643734  8b460c               mov eax, dword ptr [esi + 0xc]
// 00643737  55                   push ebp
// 00643738  ffd0                 call eax
// 0064373a  83c404               add esp, 4
// 0064373d  84c0                 test al, al
// 0064373f  7507                 jne 0x643748
// 00643741  5f                   pop edi
// 00643742  5e                   pop esi
// 00643743  5d                   pop ebp
// 00643744  32c0                 xor al, al
// 00643746  5b                   pop ebx
// 00643747  c3                   ret 
// 00643748  8b1e                 mov ebx, dword ptr [esi]
// 0064374a  8b7e04               mov edi, dword ptr [esi + 4]
// 0064374d  0fb60b               movzx ecx, byte ptr [ebx]
// 00643750  4f                   dec edi
// 00643751  43                   inc ebx
// 00643752  894c2414             mov dword ptr [esp + 0x14], ecx
// 00643756  85ff                 test edi, edi
// 00643758  7516                 jne 0x643770
// 0064375a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0064375d  55                   push ebp
// 0064375e  ffd1                 call ecx
// 00643760  83c404               add esp, 4
// 00643763  84c0                 test al, al
// 00643765  74da                 je 0x643741
// 00643767  8b1e                 mov ebx, dword ptr [esi]
// 00643769  8b7e04               mov edi, dword ptr [esi + 4]
// 0064376c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00643770  0fb603               movzx eax, byte ptr [ebx]
// 00643773  4f                   dec edi
// 00643774  43                   inc ebx
// 00643775  89442414             mov dword ptr [esp + 0x14], eax
// 00643779  81f9ff000000         cmp ecx, 0xff
// 0064377f  7507                 jne 0x643788
// 00643781  3dd8000000           cmp eax, 0xd8
// 00643786  7425                 je 0x6437ad
// 00643788  8b5500               mov edx, dword ptr [ebp]
// 0064378b  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 00643792  8b5500               mov edx, dword ptr [ebp]
// 00643795  894a18               mov dword ptr [edx + 0x18], ecx
// 00643798  8b4d00               mov ecx, dword ptr [ebp]
// 0064379b  89411c               mov dword ptr [ecx + 0x1c], eax
// 0064379e  8b5500               mov edx, dword ptr [ebp]
// 006437a1  8b02                 mov eax, dword ptr [edx]
// 006437a3  55                   push ebp
// 006437a4  ffd0                 call eax
// 006437a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006437aa  83c404               add esp, 4
// 006437ad  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 006437b3  897e04               mov dword ptr [esi + 4], edi
// 006437b6  5f                   pop edi
// 006437b7  891e                 mov dword ptr [esi], ebx
// 006437b9  5e                   pop esi
// 006437ba  5d                   pop ebp
// 006437bb  b001                 mov al, 1
// 006437bd  5b                   pop ebx
// 006437be  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c

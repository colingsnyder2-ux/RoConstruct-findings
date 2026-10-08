// roc 2009-12 00600020  unit: G3D::_internal::DialogTemplate  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600020
//
// 00600020  53                   push ebx
// 00600021  55                   push ebp
// 00600022  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00600026  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00600029  56                   push esi
// 0060002a  8b33                 mov esi, dword ptr [ebx]
// 0060002c  57                   push edi
// 0060002d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00600030  85ff                 test edi, edi
// 00600032  7519                 jne 0x60004d
// 00600034  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00600037  55                   push ebp
// 00600038  ffd0                 call eax
// 0060003a  83c404               add esp, 4
// 0060003d  84c0                 test al, al
// 0060003f  7507                 jne 0x600048
// 00600041  5f                   pop edi
// 00600042  5e                   pop esi
// 00600043  5d                   pop ebp
// 00600044  32c0                 xor al, al
// 00600046  5b                   pop ebx
// 00600047  c3                   ret 
// 00600048  8b33                 mov esi, dword ptr [ebx]
// 0060004a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0060004d  0fb606               movzx eax, byte ptr [esi]
// 00600050  4f                   dec edi
// 00600051  c1e008               shl eax, 8
// 00600054  46                   inc esi
// 00600055  89442414             mov dword ptr [esp + 0x14], eax
// 00600059  85ff                 test edi, edi
// 0060005b  7516                 jne 0x600073
// 0060005d  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00600060  55                   push ebp
// 00600061  ffd1                 call ecx
// 00600063  83c404               add esp, 4
// 00600066  84c0                 test al, al
// 00600068  74d7                 je 0x600041
// 0060006a  8b33                 mov esi, dword ptr [ebx]
// 0060006c  8b7b04               mov edi, dword ptr [ebx + 4]
// 0060006f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00600073  0fb616               movzx edx, byte ptr [esi]
// 00600076  03c2                 add eax, edx
// 00600078  4f                   dec edi
// 00600079  46                   inc esi
// 0060007a  83f804               cmp eax, 4
// 0060007d  7415                 je 0x600094
// 0060007f  8b4500               mov eax, dword ptr [ebp]
// 00600082  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00600089  8b4d00               mov ecx, dword ptr [ebp]
// 0060008c  8b11                 mov edx, dword ptr [ecx]
// 0060008e  55                   push ebp
// 0060008f  ffd2                 call edx
// 00600091  83c404               add esp, 4
// 00600094  85ff                 test edi, edi
// 00600096  7512                 jne 0x6000aa
// 00600098  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0060009b  55                   push ebp
// 0060009c  ffd0                 call eax
// 0060009e  83c404               add esp, 4
// 006000a1  84c0                 test al, al
// 006000a3  749c                 je 0x600041
// 006000a5  8b33                 mov esi, dword ptr [ebx]
// 006000a7  8b7b04               mov edi, dword ptr [ebx + 4]
// 006000aa  0fb606               movzx eax, byte ptr [esi]
// 006000ad  4f                   dec edi
// 006000ae  c1e008               shl eax, 8
// 006000b1  46                   inc esi
// 006000b2  89442414             mov dword ptr [esp + 0x14], eax
// 006000b6  85ff                 test edi, edi
// 006000b8  751a                 jne 0x6000d4
// 006000ba  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006000bd  55                   push ebp
// 006000be  ffd1                 call ecx
// 006000c0  83c404               add esp, 4
// 006000c3  84c0                 test al, al
// 006000c5  0f8476ffffff         je 0x600041
// 006000cb  8b33                 mov esi, dword ptr [ebx]
// 006000cd  8b7b04               mov edi, dword ptr [ebx + 4]
// 006000d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006000d4  0fb616               movzx edx, byte ptr [esi]
// 006000d7  8b4d00               mov ecx, dword ptr [ebp]
// 006000da  03c2                 add eax, edx
// 006000dc  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 006000e3  8b5500               mov edx, dword ptr [ebp]
// 006000e6  894218               mov dword ptr [edx + 0x18], eax
// 006000e9  89442414             mov dword ptr [esp + 0x14], eax
// 006000ed  8b4500               mov eax, dword ptr [ebp]
// 006000f0  8b4804               mov ecx, dword ptr [eax + 4]
// 006000f3  6a01                 push 1
// 006000f5  55                   push ebp
// 006000f6  ffd1                 call ecx
// 006000f8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006000fc  83c408               add esp, 8
// 006000ff  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 00600105  4f                   dec edi
// 00600106  46                   inc esi
// 00600107  897b04               mov dword ptr [ebx + 4], edi
// 0060010a  5f                   pop edi
// 0060010b  8933                 mov dword ptr [ebx], esi
// 0060010d  5e                   pop esi
// 0060010e  5d                   pop ebp
// 0060010f  b001                 mov al, 1
// 00600111  5b                   pop ebx
// 00600112  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c

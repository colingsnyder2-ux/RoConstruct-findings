// roc 2012-06 00642fe0  unit: seg_00640000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00642fe0
//
// 00642fe0  53                   push ebx
// 00642fe1  55                   push ebp
// 00642fe2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00642fe6  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00642fe9  56                   push esi
// 00642fea  8b33                 mov esi, dword ptr [ebx]
// 00642fec  57                   push edi
// 00642fed  8b7b04               mov edi, dword ptr [ebx + 4]
// 00642ff0  85ff                 test edi, edi
// 00642ff2  7519                 jne 0x64300d
// 00642ff4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00642ff7  55                   push ebp
// 00642ff8  ffd0                 call eax
// 00642ffa  83c404               add esp, 4
// 00642ffd  84c0                 test al, al
// 00642fff  7507                 jne 0x643008
// 00643001  5f                   pop edi
// 00643002  5e                   pop esi
// 00643003  5d                   pop ebp
// 00643004  32c0                 xor al, al
// 00643006  5b                   pop ebx
// 00643007  c3                   ret 
// 00643008  8b33                 mov esi, dword ptr [ebx]
// 0064300a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0064300d  0fb606               movzx eax, byte ptr [esi]
// 00643010  4f                   dec edi
// 00643011  c1e008               shl eax, 8
// 00643014  46                   inc esi
// 00643015  89442414             mov dword ptr [esp + 0x14], eax
// 00643019  85ff                 test edi, edi
// 0064301b  7516                 jne 0x643033
// 0064301d  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00643020  55                   push ebp
// 00643021  ffd1                 call ecx
// 00643023  83c404               add esp, 4
// 00643026  84c0                 test al, al
// 00643028  74d7                 je 0x643001
// 0064302a  8b33                 mov esi, dword ptr [ebx]
// 0064302c  8b7b04               mov edi, dword ptr [ebx + 4]
// 0064302f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00643033  0fb616               movzx edx, byte ptr [esi]
// 00643036  03c2                 add eax, edx
// 00643038  4f                   dec edi
// 00643039  46                   inc esi
// 0064303a  83f804               cmp eax, 4
// 0064303d  7415                 je 0x643054
// 0064303f  8b4500               mov eax, dword ptr [ebp]
// 00643042  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00643049  8b4d00               mov ecx, dword ptr [ebp]
// 0064304c  8b11                 mov edx, dword ptr [ecx]
// 0064304e  55                   push ebp
// 0064304f  ffd2                 call edx
// 00643051  83c404               add esp, 4
// 00643054  85ff                 test edi, edi
// 00643056  7512                 jne 0x64306a
// 00643058  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0064305b  55                   push ebp
// 0064305c  ffd0                 call eax
// 0064305e  83c404               add esp, 4
// 00643061  84c0                 test al, al
// 00643063  749c                 je 0x643001
// 00643065  8b33                 mov esi, dword ptr [ebx]
// 00643067  8b7b04               mov edi, dword ptr [ebx + 4]
// 0064306a  0fb606               movzx eax, byte ptr [esi]
// 0064306d  4f                   dec edi
// 0064306e  c1e008               shl eax, 8
// 00643071  46                   inc esi
// 00643072  89442414             mov dword ptr [esp + 0x14], eax
// 00643076  85ff                 test edi, edi
// 00643078  751a                 jne 0x643094
// 0064307a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0064307d  55                   push ebp
// 0064307e  ffd1                 call ecx
// 00643080  83c404               add esp, 4
// 00643083  84c0                 test al, al
// 00643085  0f8476ffffff         je 0x643001
// 0064308b  8b33                 mov esi, dword ptr [ebx]
// 0064308d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00643090  8b442414             mov eax, dword ptr [esp + 0x14]
// 00643094  0fb616               movzx edx, byte ptr [esi]
// 00643097  8b4d00               mov ecx, dword ptr [ebp]
// 0064309a  03c2                 add eax, edx
// 0064309c  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 006430a3  8b5500               mov edx, dword ptr [ebp]
// 006430a6  894218               mov dword ptr [edx + 0x18], eax
// 006430a9  89442414             mov dword ptr [esp + 0x14], eax
// 006430ad  8b4500               mov eax, dword ptr [ebp]
// 006430b0  8b4804               mov ecx, dword ptr [eax + 4]
// 006430b3  6a01                 push 1
// 006430b5  55                   push ebp
// 006430b6  ffd1                 call ecx
// 006430b8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006430bc  83c408               add esp, 8
// 006430bf  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 006430c5  4f                   dec edi
// 006430c6  46                   inc esi
// 006430c7  897b04               mov dword ptr [ebx + 4], edi
// 006430ca  5f                   pop edi
// 006430cb  8933                 mov dword ptr [ebx], esi
// 006430cd  5e                   pop esi
// 006430ce  5d                   pop ebp
// 006430cf  b001                 mov al, 1
// 006430d1  5b                   pop ebx
// 006430d2  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c

// roc 2007-08 00528720  unit: seg_00520000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528720
//
// 00528720  56                   push esi
// 00528721  8b742408             mov esi, dword ptr [esp + 8]
// 00528725  8b4604               mov eax, dword ptr [esi + 4]
// 00528728  8b08                 mov ecx, dword ptr [eax]
// 0052872a  57                   push edi
// 0052872b  6a18                 push 0x18
// 0052872d  6a01                 push 1
// 0052872f  56                   push esi
// 00528730  ffd1                 call ecx
// 00528732  8bf8                 mov edi, eax
// 00528734  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0052873a  c70720cc4000         mov dword ptr [edi], 0x40cc20
// 00528740  8b4628               mov eax, dword ptr [esi + 0x28]
// 00528743  83c0ff               add eax, -1
// 00528746  83c40c               add esp, 0xc
// 00528749  83f804               cmp eax, 4
// 0052874c  771f                 ja 0x52876d
// 0052874e  ff248590885200       jmp dword ptr [eax*4 + 0x528890]
// 00528755  837e2401             cmp dword ptr [esi + 0x24], 1
// 00528759  742b                 je 0x528786
// 0052875b  eb16                 jmp 0x528773
// 0052875d  837e2403             cmp dword ptr [esi + 0x24], 3
// 00528761  7423                 je 0x528786
// 00528763  eb0e                 jmp 0x528773
// 00528765  837e2404             cmp dword ptr [esi + 0x24], 4
// 00528769  741b                 je 0x528786
// 0052876b  eb06                 jmp 0x528773
// 0052876d  837e2401             cmp dword ptr [esi + 0x24], 1
// 00528771  7d13                 jge 0x528786
// 00528773  8b16                 mov edx, dword ptr [esi]
// 00528775  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0052877c  8b06                 mov eax, dword ptr [esi]
// 0052877e  8b08                 mov ecx, dword ptr [eax]
// 00528780  56                   push esi
// 00528781  ffd1                 call ecx
// 00528783  83c404               add esp, 4
// 00528786  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00528789  8bc1                 mov eax, ecx
// 0052878b  ba01000000           mov edx, 1
// 00528790  2bc2                 sub eax, edx
// 00528792  0f8491000000         je 0x528829
// 00528798  2bc2                 sub eax, edx
// 0052879a  7453                 je 0x5287ef
// 0052879c  83e802               sub eax, 2
// 0052879f  741b                 je 0x5287bc
// 005287a1  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 005287a4  0f858e000000         jne 0x528838
// 005287aa  8b5624               mov edx, dword ptr [esi + 0x24]
// 005287ad  895664               mov dword ptr [esi + 0x64], edx
// 005287b0  c74704a0845200       mov dword ptr [edi + 4], 0x5284a0
// 005287b7  e9b9000000           jmp 0x528875
// 005287bc  8b4628               mov eax, dword ptr [esi + 0x28]
// 005287bf  83f805               cmp eax, 5
// 005287c2  c7466404000000       mov dword ptr [esi + 0x64], 4
// 005287c9  7513                 jne 0x5287de
// 005287cb  8bc6                 mov eax, esi
// 005287cd  c74704c0855200       mov dword ptr [edi + 4], 0x5285c0
// 005287d4  e8d7faffff           call 0x5282b0
// 005287d9  e997000000           jmp 0x528875
// 005287de  83f804               cmp eax, 4
// 005287e1  7555                 jne 0x528838
// 005287e3  c74704a0845200       mov dword ptr [edi + 4], 0x5284a0
// 005287ea  e986000000           jmp 0x528875
// 005287ef  8b4628               mov eax, dword ptr [esi + 0x28]
// 005287f2  83f803               cmp eax, 3
// 005287f5  c7466403000000       mov dword ptr [esi + 0x64], 3
// 005287fc  7510                 jne 0x52880e
// 005287fe  8bc6                 mov eax, esi
// 00528800  c7470480835200       mov dword ptr [edi + 4], 0x528380
// 00528807  e8a4faffff           call 0x5282b0
// 0052880c  eb67                 jmp 0x528875
// 0052880e  3bc2                 cmp eax, edx
// 00528810  7509                 jne 0x52881b
// 00528812  c7470460855200       mov dword ptr [edi + 4], 0x528560
// 00528819  eb5a                 jmp 0x528875
// 0052881b  83f802               cmp eax, 2
// 0052881e  7518                 jne 0x528838
// 00528820  c74704a0845200       mov dword ptr [edi + 4], 0x5284a0
// 00528827  eb4c                 jmp 0x528875
// 00528829  8b4628               mov eax, dword ptr [esi + 0x28]
// 0052882c  3bc2                 cmp eax, edx
// 0052882e  895664               mov dword ptr [esi + 0x64], edx
// 00528831  741a                 je 0x52884d
// 00528833  83f803               cmp eax, 3
// 00528836  7415                 je 0x52884d
// 00528838  8b06                 mov eax, dword ptr [esi]
// 0052883a  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 00528841  8b0e                 mov ecx, dword ptr [esi]
// 00528843  8b11                 mov edx, dword ptr [ecx]
// 00528845  56                   push esi
// 00528846  ffd2                 call edx
// 00528848  83c404               add esp, 4
// 0052884b  eb28                 jmp 0x528875
// 0052884d  c7470430855200       mov dword ptr [edi + 4], 0x528530
// 00528854  395624               cmp dword ptr [esi + 0x24], edx
// 00528857  8bc2                 mov eax, edx
// 00528859  7e1a                 jle 0x528875
// 0052885b  b954000000           mov ecx, 0x54
// 00528860  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00528866  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 0052886b  03c2                 add eax, edx
// 0052886d  83c154               add ecx, 0x54
// 00528870  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00528873  7ceb                 jl 0x528860
// 00528875  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00528879  740a                 je 0x528885
// 0052887b  5f                   pop edi
// 0052887c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00528883  5e                   pop esi
// 00528884  c3                   ret 
// 00528885  8b4664               mov eax, dword ptr [esi + 0x64]
// 00528888  5f                   pop edi
// 00528889  894668               mov dword ptr [esi + 0x68], eax
// 0052888c  5e                   pop esi
// 0052888d  c3                   ret 
// 0052888e  8bff                 mov edi, edi
// 00528890  55                   push ebp
// 00528891  875200               xchg dword ptr [edx], edx
// 00528894  5d                   pop ebp
// 00528895  875200               xchg dword ptr [edx], edx
// 00528898  5d                   pop ebp
// 00528899  875200               xchg dword ptr [edx], edx
// 0052889c  65875200             xchg dword ptr gs:[edx], edx
// 005288a0  65875200             xchg dword ptr gs:[edx], edx
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c

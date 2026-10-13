// roc 2008-06 005348c0  unit: seg_00530000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005348c0
//
// 005348c0  56                   push esi
// 005348c1  8b742408             mov esi, dword ptr [esp + 8]
// 005348c5  8b4604               mov eax, dword ptr [esi + 4]
// 005348c8  8b08                 mov ecx, dword ptr [eax]
// 005348ca  57                   push edi
// 005348cb  6a18                 push 0x18
// 005348cd  6a01                 push 1
// 005348cf  56                   push esi
// 005348d0  ffd1                 call ecx
// 005348d2  8bf8                 mov edi, eax
// 005348d4  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 005348da  c70710d44700         mov dword ptr [edi], 0x47d410
// 005348e0  8b4628               mov eax, dword ptr [esi + 0x28]
// 005348e3  48                   dec eax
// 005348e4  83c40c               add esp, 0xc
// 005348e7  83f804               cmp eax, 4
// 005348ea  771f                 ja 0x53490b
// 005348ec  ff2485304a5300       jmp dword ptr [eax*4 + 0x534a30]
// 005348f3  837e2401             cmp dword ptr [esi + 0x24], 1
// 005348f7  742b                 je 0x534924
// 005348f9  eb16                 jmp 0x534911
// 005348fb  837e2403             cmp dword ptr [esi + 0x24], 3
// 005348ff  7423                 je 0x534924
// 00534901  eb0e                 jmp 0x534911
// 00534903  837e2404             cmp dword ptr [esi + 0x24], 4
// 00534907  741b                 je 0x534924
// 00534909  eb06                 jmp 0x534911
// 0053490b  837e2401             cmp dword ptr [esi + 0x24], 1
// 0053490f  7d13                 jge 0x534924
// 00534911  8b16                 mov edx, dword ptr [esi]
// 00534913  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0053491a  8b06                 mov eax, dword ptr [esi]
// 0053491c  8b08                 mov ecx, dword ptr [eax]
// 0053491e  56                   push esi
// 0053491f  ffd1                 call ecx
// 00534921  83c404               add esp, 4
// 00534924  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00534927  8bc1                 mov eax, ecx
// 00534929  ba01000000           mov edx, 1
// 0053492e  2bc2                 sub eax, edx
// 00534930  0f8491000000         je 0x5349c7
// 00534936  2bc2                 sub eax, edx
// 00534938  7453                 je 0x53498d
// 0053493a  83e802               sub eax, 2
// 0053493d  741b                 je 0x53495a
// 0053493f  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 00534942  0f858e000000         jne 0x5349d6
// 00534948  8b5624               mov edx, dword ptr [esi + 0x24]
// 0053494b  895664               mov dword ptr [esi + 0x64], edx
// 0053494e  c7470450465300       mov dword ptr [edi + 4], 0x534650
// 00534955  e9bb000000           jmp 0x534a15
// 0053495a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0053495d  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00534964  83f805               cmp eax, 5
// 00534967  7513                 jne 0x53497c
// 00534969  8bc6                 mov eax, esi
// 0053496b  c7470470475300       mov dword ptr [edi + 4], 0x534770
// 00534972  e8e9faffff           call 0x534460
// 00534977  e999000000           jmp 0x534a15
// 0053497c  83f804               cmp eax, 4
// 0053497f  7555                 jne 0x5349d6
// 00534981  c7470450465300       mov dword ptr [edi + 4], 0x534650
// 00534988  e988000000           jmp 0x534a15
// 0053498d  8b4628               mov eax, dword ptr [esi + 0x28]
// 00534990  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00534997  83f803               cmp eax, 3
// 0053499a  7510                 jne 0x5349ac
// 0053499c  8bc6                 mov eax, esi
// 0053499e  c7470430455300       mov dword ptr [edi + 4], 0x534530
// 005349a5  e8b6faffff           call 0x534460
// 005349aa  eb69                 jmp 0x534a15
// 005349ac  3bc2                 cmp eax, edx
// 005349ae  7509                 jne 0x5349b9
// 005349b0  c7470410475300       mov dword ptr [edi + 4], 0x534710
// 005349b7  eb5c                 jmp 0x534a15
// 005349b9  83f802               cmp eax, 2
// 005349bc  7518                 jne 0x5349d6
// 005349be  c7470450465300       mov dword ptr [edi + 4], 0x534650
// 005349c5  eb4e                 jmp 0x534a15
// 005349c7  8b4628               mov eax, dword ptr [esi + 0x28]
// 005349ca  895664               mov dword ptr [esi + 0x64], edx
// 005349cd  3bc2                 cmp eax, edx
// 005349cf  741a                 je 0x5349eb
// 005349d1  83f803               cmp eax, 3
// 005349d4  7415                 je 0x5349eb
// 005349d6  8b06                 mov eax, dword ptr [esi]
// 005349d8  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 005349df  8b0e                 mov ecx, dword ptr [esi]
// 005349e1  8b11                 mov edx, dword ptr [ecx]
// 005349e3  56                   push esi
// 005349e4  ffd2                 call edx
// 005349e6  83c404               add esp, 4
// 005349e9  eb2a                 jmp 0x534a15
// 005349eb  c74704e0465300       mov dword ptr [edi + 4], 0x5346e0
// 005349f2  395624               cmp dword ptr [esi + 0x24], edx
// 005349f5  8bc2                 mov eax, edx
// 005349f7  7e1c                 jle 0x534a15
// 005349f9  b954000000           mov ecx, 0x54
// 005349fe  8bff                 mov edi, edi
// 00534a00  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00534a06  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 00534a0b  03c2                 add eax, edx
// 00534a0d  83c154               add ecx, 0x54
// 00534a10  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00534a13  7ceb                 jl 0x534a00
// 00534a15  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00534a19  740a                 je 0x534a25
// 00534a1b  5f                   pop edi
// 00534a1c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00534a23  5e                   pop esi
// 00534a24  c3                   ret 
// 00534a25  8b4664               mov eax, dword ptr [esi + 0x64]
// 00534a28  5f                   pop edi
// 00534a29  894668               mov dword ptr [esi + 0x68], eax
// 00534a2c  5e                   pop esi
// 00534a2d  c3                   ret 
// 00534a2e  8bff                 mov edi, edi
// 00534a30  f348                 dec eax
// 00534a32  53                   push ebx
// 00534a33  00fb                 add bl, bh
// 00534a35  48                   dec eax
// 00534a36  53                   push ebx
// 00534a37  00fb                 add bl, bh
// 00534a39  48                   dec eax
// 00534a3a  53                   push ebx
// 00534a3b  0003                 add byte ptr [ebx], al
// 00534a3d  49                   dec ecx
// 00534a3e  53                   push ebx
// 00534a3f  0003                 add byte ptr [ebx], al
// 00534a41  49                   dec ecx
// 00534a42  53                   push ebx
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c

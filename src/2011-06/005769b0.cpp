// roc 2011-06 005769b0  unit: seg_00570000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005769b0
//
// 005769b0  51                   push ecx
// 005769b1  53                   push ebx
// 005769b2  55                   push ebp
// 005769b3  56                   push esi
// 005769b4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005769b8  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 005769bf  57                   push edi
// 005769c0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005769c6  751b                 jne 0x5769e3
// 005769c8  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 005769cf  7512                 jne 0x5769e3
// 005769d1  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005769d8  7509                 jne 0x5769e3
// 005769da  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 005769e1  7416                 je 0x5769f9
// 005769e3  8b06                 mov eax, dword ptr [esi]
// 005769e5  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 005769ec  8b0e                 mov ecx, dword ptr [esi]
// 005769ee  8b5104               mov edx, dword ptr [ecx + 4]
// 005769f1  6aff                 push -1
// 005769f3  56                   push esi
// 005769f4  ffd2                 call edx
// 005769f6  83c408               add esp, 8
// 005769f9  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 00576a00  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00576a08  7e59                 jle 0x576a63
// 00576a0a  8d4714               lea eax, [edi + 0x14]
// 00576a0d  89442410             mov dword ptr [esp + 0x10], eax
// 00576a11  8d9e28010000         lea ebx, [esi + 0x128]
// 00576a17  8b03                 mov eax, dword ptr [ebx]
// 00576a19  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00576a1c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00576a1f  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 00576a23  52                   push edx
// 00576a24  51                   push ecx
// 00576a25  6a01                 push 1
// 00576a27  56                   push esi
// 00576a28  e823f6ffff           call 0x576050
// 00576a2d  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 00576a31  50                   push eax
// 00576a32  55                   push ebp
// 00576a33  6a00                 push 0
// 00576a35  56                   push esi
// 00576a36  e815f6ffff           call 0x576050
// 00576a3b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00576a3f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00576a43  c70100000000         mov dword ptr [ecx], 0
// 00576a49  40                   inc eax
// 00576a4a  83c104               add ecx, 4
// 00576a4d  83c420               add esp, 0x20
// 00576a50  83c304               add ebx, 4
// 00576a53  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00576a59  89442418             mov dword ptr [esp + 0x18], eax
// 00576a5d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00576a61  7cb4                 jl 0x576a17
// 00576a63  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00576a6a  7e72                 jle 0x576ade
// 00576a6c  b868ffffff           mov eax, 0xffffff68
// 00576a71  2bc7                 sub eax, edi
// 00576a73  8d8f98000000         lea ecx, [edi + 0x98]
// 00576a79  8d5770               lea edx, [edi + 0x70]
// 00576a7c  8dae44010000         lea ebp, [esi + 0x144]
// 00576a82  89442418             mov dword ptr [esp + 0x18], eax
// 00576a86  eb08                 jmp 0x576a90
// 00576a88  8da42400000000       lea esp, [esp]
// 00576a8f  90                   nop 
// 00576a90  8b4500               mov eax, dword ptr [ebp]
// 00576a93  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 00576a9a  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00576a9d  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 00576aa1  895ad8               mov dword ptr [edx - 0x28], ebx
// 00576aa4  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00576aa7  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 00576aab  891a                 mov dword ptr [edx], ebx
// 00576aad  80783000             cmp byte ptr [eax + 0x30], 0
// 00576ab1  740f                 je 0x576ac2
// 00576ab3  c60101               mov byte ptr [ecx], 1
// 00576ab6  83782401             cmp dword ptr [eax + 0x24], 1
// 00576aba  0f9fc0               setg al
// 00576abd  88410a               mov byte ptr [ecx + 0xa], al
// 00576ac0  eb07                 jmp 0x576ac9
// 00576ac2  c6410a00             mov byte ptr [ecx + 0xa], 0
// 00576ac6  c60100               mov byte ptr [ecx], 0
// 00576ac9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576acd  41                   inc ecx
// 00576ace  03c1                 add eax, ecx
// 00576ad0  83c504               add ebp, 4
// 00576ad3  83c204               add edx, 4
// 00576ad6  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 00576adc  7cb2                 jl 0x576a90
// 00576ade  33c0                 xor eax, eax
// 00576ae0  894710               mov dword ptr [edi + 0x10], eax
// 00576ae3  89470c               mov dword ptr [edi + 0xc], eax
// 00576ae6  884708               mov byte ptr [edi + 8], al
// 00576ae9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00576aef  894f24               mov dword ptr [edi + 0x24], ecx
// 00576af2  5f                   pop edi
// 00576af3  5e                   pop esi
// 00576af4  5d                   pop ebp
// 00576af5  5b                   pop ebx
// 00576af6  59                   pop ecx
// 00576af7  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

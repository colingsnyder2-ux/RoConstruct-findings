// from server: 100% by auto
// roc 2009-06 0059cb70  unit: seg_00590000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059cb70
//
// 0059cb70  51                   push ecx
// 0059cb71  53                   push ebx
// 0059cb72  55                   push ebp
// 0059cb73  56                   push esi
// 0059cb74  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059cb78  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0059cb7f  57                   push edi
// 0059cb80  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059cb86  751b                 jne 0x59cba3
// 0059cb88  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 0059cb8f  7512                 jne 0x59cba3
// 0059cb91  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0059cb98  7509                 jne 0x59cba3
// 0059cb9a  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0059cba1  7416                 je 0x59cbb9
// 0059cba3  8b06                 mov eax, dword ptr [esi]
// 0059cba5  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 0059cbac  8b0e                 mov ecx, dword ptr [esi]
// 0059cbae  8b5104               mov edx, dword ptr [ecx + 4]
// 0059cbb1  6aff                 push -1
// 0059cbb3  56                   push esi
// 0059cbb4  ffd2                 call edx
// 0059cbb6  83c408               add esp, 8
// 0059cbb9  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 0059cbc0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059cbc8  7e59                 jle 0x59cc23
// 0059cbca  8d4714               lea eax, [edi + 0x14]
// 0059cbcd  89442410             mov dword ptr [esp + 0x10], eax
// 0059cbd1  8d9e28010000         lea ebx, [esi + 0x128]
// 0059cbd7  8b03                 mov eax, dword ptr [ebx]
// 0059cbd9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0059cbdc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0059cbdf  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 0059cbe3  52                   push edx
// 0059cbe4  51                   push ecx
// 0059cbe5  6a01                 push 1
// 0059cbe7  56                   push esi
// 0059cbe8  e823f6ffff           call 0x59c210
// 0059cbed  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 0059cbf1  50                   push eax
// 0059cbf2  55                   push ebp
// 0059cbf3  6a00                 push 0
// 0059cbf5  56                   push esi
// 0059cbf6  e815f6ffff           call 0x59c210
// 0059cbfb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059cbff  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059cc03  c70100000000         mov dword ptr [ecx], 0
// 0059cc09  40                   inc eax
// 0059cc0a  83c104               add ecx, 4
// 0059cc0d  83c420               add esp, 0x20
// 0059cc10  83c304               add ebx, 4
// 0059cc13  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0059cc19  89442418             mov dword ptr [esp + 0x18], eax
// 0059cc1d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059cc21  7cb4                 jl 0x59cbd7
// 0059cc23  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0059cc2a  7e72                 jle 0x59cc9e
// 0059cc2c  b868ffffff           mov eax, 0xffffff68
// 0059cc31  2bc7                 sub eax, edi
// 0059cc33  8d8f98000000         lea ecx, [edi + 0x98]
// 0059cc39  8d5770               lea edx, [edi + 0x70]
// 0059cc3c  8dae44010000         lea ebp, [esi + 0x144]
// 0059cc42  89442418             mov dword ptr [esp + 0x18], eax
// 0059cc46  eb08                 jmp 0x59cc50
// 0059cc48  8da42400000000       lea esp, [esp]
// 0059cc4f  90                   nop 
// 0059cc50  8b4500               mov eax, dword ptr [ebp]
// 0059cc53  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 0059cc5a  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0059cc5d  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 0059cc61  895ad8               mov dword ptr [edx - 0x28], ebx
// 0059cc64  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0059cc67  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 0059cc6b  891a                 mov dword ptr [edx], ebx
// 0059cc6d  80783000             cmp byte ptr [eax + 0x30], 0
// 0059cc71  740f                 je 0x59cc82
// 0059cc73  c60101               mov byte ptr [ecx], 1
// 0059cc76  83782401             cmp dword ptr [eax + 0x24], 1
// 0059cc7a  0f9fc0               setg al
// 0059cc7d  88410a               mov byte ptr [ecx + 0xa], al
// 0059cc80  eb07                 jmp 0x59cc89
// 0059cc82  c6410a00             mov byte ptr [ecx + 0xa], 0
// 0059cc86  c60100               mov byte ptr [ecx], 0
// 0059cc89  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059cc8d  41                   inc ecx
// 0059cc8e  03c1                 add eax, ecx
// 0059cc90  83c504               add ebp, 4
// 0059cc93  83c204               add edx, 4
// 0059cc96  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 0059cc9c  7cb2                 jl 0x59cc50
// 0059cc9e  33c0                 xor eax, eax
// 0059cca0  894710               mov dword ptr [edi + 0x10], eax
// 0059cca3  89470c               mov dword ptr [edi + 0xc], eax
// 0059cca6  884708               mov byte ptr [edi + 8], al
// 0059cca9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0059ccaf  894f24               mov dword ptr [edi + 0x24], ecx
// 0059ccb2  5f                   pop edi
// 0059ccb3  5e                   pop esi
// 0059ccb4  5d                   pop ebp
// 0059ccb5  5b                   pop ebx
// 0059ccb6  59                   pop ecx
// 0059ccb7  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

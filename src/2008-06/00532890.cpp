// from server: 100% by auto
// roc 2008-06 00532890  unit: seg_00530000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532890
//
// 00532890  51                   push ecx
// 00532891  53                   push ebx
// 00532892  55                   push ebp
// 00532893  56                   push esi
// 00532894  8b742414             mov esi, dword ptr [esp + 0x14]
// 00532898  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0053289f  57                   push edi
// 005328a0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005328a6  751b                 jne 0x5328c3
// 005328a8  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 005328af  7512                 jne 0x5328c3
// 005328b1  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005328b8  7509                 jne 0x5328c3
// 005328ba  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 005328c1  7416                 je 0x5328d9
// 005328c3  8b06                 mov eax, dword ptr [esi]
// 005328c5  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 005328cc  8b0e                 mov ecx, dword ptr [esi]
// 005328ce  8b5104               mov edx, dword ptr [ecx + 4]
// 005328d1  6aff                 push -1
// 005328d3  56                   push esi
// 005328d4  ffd2                 call edx
// 005328d6  83c408               add esp, 8
// 005328d9  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 005328e0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005328e8  7e59                 jle 0x532943
// 005328ea  8d4714               lea eax, [edi + 0x14]
// 005328ed  89442410             mov dword ptr [esp + 0x10], eax
// 005328f1  8d9e28010000         lea ebx, [esi + 0x128]
// 005328f7  8b03                 mov eax, dword ptr [ebx]
// 005328f9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005328fc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005328ff  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 00532903  52                   push edx
// 00532904  51                   push ecx
// 00532905  6a01                 push 1
// 00532907  56                   push esi
// 00532908  e823f6ffff           call 0x531f30
// 0053290d  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 00532911  50                   push eax
// 00532912  55                   push ebp
// 00532913  6a00                 push 0
// 00532915  56                   push esi
// 00532916  e815f6ffff           call 0x531f30
// 0053291b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053291f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00532923  c70100000000         mov dword ptr [ecx], 0
// 00532929  40                   inc eax
// 0053292a  83c104               add ecx, 4
// 0053292d  83c420               add esp, 0x20
// 00532930  83c304               add ebx, 4
// 00532933  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00532939  89442418             mov dword ptr [esp + 0x18], eax
// 0053293d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00532941  7cb4                 jl 0x5328f7
// 00532943  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0053294a  7e72                 jle 0x5329be
// 0053294c  b868ffffff           mov eax, 0xffffff68
// 00532951  2bc7                 sub eax, edi
// 00532953  8d8f98000000         lea ecx, [edi + 0x98]
// 00532959  8d5770               lea edx, [edi + 0x70]
// 0053295c  8dae44010000         lea ebp, [esi + 0x144]
// 00532962  89442418             mov dword ptr [esp + 0x18], eax
// 00532966  eb08                 jmp 0x532970
// 00532968  8da42400000000       lea esp, [esp]
// 0053296f  90                   nop 
// 00532970  8b4500               mov eax, dword ptr [ebp]
// 00532973  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 0053297a  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0053297d  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 00532981  895ad8               mov dword ptr [edx - 0x28], ebx
// 00532984  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00532987  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 0053298b  891a                 mov dword ptr [edx], ebx
// 0053298d  80783000             cmp byte ptr [eax + 0x30], 0
// 00532991  740f                 je 0x5329a2
// 00532993  c60101               mov byte ptr [ecx], 1
// 00532996  83782401             cmp dword ptr [eax + 0x24], 1
// 0053299a  0f9fc0               setg al
// 0053299d  88410a               mov byte ptr [ecx + 0xa], al
// 005329a0  eb07                 jmp 0x5329a9
// 005329a2  c6410a00             mov byte ptr [ecx + 0xa], 0
// 005329a6  c60100               mov byte ptr [ecx], 0
// 005329a9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005329ad  41                   inc ecx
// 005329ae  03c1                 add eax, ecx
// 005329b0  83c504               add ebp, 4
// 005329b3  83c204               add edx, 4
// 005329b6  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 005329bc  7cb2                 jl 0x532970
// 005329be  33c0                 xor eax, eax
// 005329c0  894710               mov dword ptr [edi + 0x10], eax
// 005329c3  89470c               mov dword ptr [edi + 0xc], eax
// 005329c6  884708               mov byte ptr [edi + 8], al
// 005329c9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 005329cf  894f24               mov dword ptr [edi + 0x24], ecx
// 005329d2  5f                   pop edi
// 005329d3  5e                   pop esi
// 005329d4  5d                   pop ebp
// 005329d5  5b                   pop ebx
// 005329d6  59                   pop ecx
// 005329d7  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

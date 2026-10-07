// roc 2010-06 00580700  unit: seg_00580000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580700
//
// 00580700  51                   push ecx
// 00580701  53                   push ebx
// 00580702  55                   push ebp
// 00580703  56                   push esi
// 00580704  8b742414             mov esi, dword ptr [esp + 0x14]
// 00580708  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0058070f  57                   push edi
// 00580710  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00580716  751b                 jne 0x580733
// 00580718  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 0058071f  7512                 jne 0x580733
// 00580721  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 00580728  7509                 jne 0x580733
// 0058072a  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 00580731  7416                 je 0x580749
// 00580733  8b06                 mov eax, dword ptr [esi]
// 00580735  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 0058073c  8b0e                 mov ecx, dword ptr [esi]
// 0058073e  8b5104               mov edx, dword ptr [ecx + 4]
// 00580741  6aff                 push -1
// 00580743  56                   push esi
// 00580744  ffd2                 call edx
// 00580746  83c408               add esp, 8
// 00580749  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 00580750  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00580758  7e59                 jle 0x5807b3
// 0058075a  8d4714               lea eax, [edi + 0x14]
// 0058075d  89442410             mov dword ptr [esp + 0x10], eax
// 00580761  8d9e28010000         lea ebx, [esi + 0x128]
// 00580767  8b03                 mov eax, dword ptr [ebx]
// 00580769  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0058076c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0058076f  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 00580773  52                   push edx
// 00580774  51                   push ecx
// 00580775  6a01                 push 1
// 00580777  56                   push esi
// 00580778  e823f6ffff           call 0x57fda0
// 0058077d  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 00580781  50                   push eax
// 00580782  55                   push ebp
// 00580783  6a00                 push 0
// 00580785  56                   push esi
// 00580786  e815f6ffff           call 0x57fda0
// 0058078b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058078f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00580793  c70100000000         mov dword ptr [ecx], 0
// 00580799  40                   inc eax
// 0058079a  83c104               add ecx, 4
// 0058079d  83c420               add esp, 0x20
// 005807a0  83c304               add ebx, 4
// 005807a3  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005807a9  89442418             mov dword ptr [esp + 0x18], eax
// 005807ad  894c2410             mov dword ptr [esp + 0x10], ecx
// 005807b1  7cb4                 jl 0x580767
// 005807b3  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 005807ba  7e72                 jle 0x58082e
// 005807bc  b868ffffff           mov eax, 0xffffff68
// 005807c1  2bc7                 sub eax, edi
// 005807c3  8d8f98000000         lea ecx, [edi + 0x98]
// 005807c9  8d5770               lea edx, [edi + 0x70]
// 005807cc  8dae44010000         lea ebp, [esi + 0x144]
// 005807d2  89442418             mov dword ptr [esp + 0x18], eax
// 005807d6  eb08                 jmp 0x5807e0
// 005807d8  8da42400000000       lea esp, [esp]
// 005807df  90                   nop 
// 005807e0  8b4500               mov eax, dword ptr [ebp]
// 005807e3  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 005807ea  8b5814               mov ebx, dword ptr [eax + 0x14]
// 005807ed  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 005807f1  895ad8               mov dword ptr [edx - 0x28], ebx
// 005807f4  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005807f7  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 005807fb  891a                 mov dword ptr [edx], ebx
// 005807fd  80783000             cmp byte ptr [eax + 0x30], 0
// 00580801  740f                 je 0x580812
// 00580803  c60101               mov byte ptr [ecx], 1
// 00580806  83782401             cmp dword ptr [eax + 0x24], 1
// 0058080a  0f9fc0               setg al
// 0058080d  88410a               mov byte ptr [ecx + 0xa], al
// 00580810  eb07                 jmp 0x580819
// 00580812  c6410a00             mov byte ptr [ecx + 0xa], 0
// 00580816  c60100               mov byte ptr [ecx], 0
// 00580819  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058081d  41                   inc ecx
// 0058081e  03c1                 add eax, ecx
// 00580820  83c504               add ebp, 4
// 00580823  83c204               add edx, 4
// 00580826  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 0058082c  7cb2                 jl 0x5807e0
// 0058082e  33c0                 xor eax, eax
// 00580830  894710               mov dword ptr [edi + 0x10], eax
// 00580833  89470c               mov dword ptr [edi + 0xc], eax
// 00580836  884708               mov byte ptr [edi + 8], al
// 00580839  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0058083f  894f24               mov dword ptr [edi + 0x24], ecx
// 00580842  5f                   pop edi
// 00580843  5e                   pop esi
// 00580844  5d                   pop ebp
// 00580845  5b                   pop ebx
// 00580846  59                   pop ecx
// 00580847  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

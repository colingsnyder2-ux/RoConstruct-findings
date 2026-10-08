// from server: 100% by auto
// roc 2012-06 00661a20  unit: seg_00660000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661a20
//
// 00661a20  53                   push ebx
// 00661a21  55                   push ebp
// 00661a22  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00661a26  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00661a29  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00661a30  56                   push esi
// 00661a31  8b7500               mov esi, dword ptr [ebp]
// 00661a34  57                   push edi
// 00661a35  8b7d04               mov edi, dword ptr [ebp + 4]
// 00661a38  0f8597000000         jne 0x661ad5
// 00661a3e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00661a43  0f8dd7000000         jge 0x661b20
// 00661a49  8da42400000000       lea esp, [esp]
// 00661a50  85ff                 test edi, edi
// 00661a52  7518                 jne 0x661a6c
// 00661a54  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00661a57  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00661a5a  53                   push ebx
// 00661a5b  ffd1                 call ecx
// 00661a5d  83c404               add esp, 4
// 00661a60  84c0                 test al, al
// 00661a62  7464                 je 0x661ac8
// 00661a64  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00661a67  8b30                 mov esi, dword ptr [eax]
// 00661a69  8b7804               mov edi, dword ptr [eax + 4]
// 00661a6c  0fb606               movzx eax, byte ptr [esi]
// 00661a6f  4f                   dec edi
// 00661a70  46                   inc esi
// 00661a71  3dff000000           cmp eax, 0xff
// 00661a76  7531                 jne 0x661aa9
// 00661a78  85ff                 test edi, edi
// 00661a7a  7518                 jne 0x661a94
// 00661a7c  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00661a7f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00661a82  53                   push ebx
// 00661a83  ffd0                 call eax
// 00661a85  83c404               add esp, 4
// 00661a88  84c0                 test al, al
// 00661a8a  743c                 je 0x661ac8
// 00661a8c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00661a8f  8b30                 mov esi, dword ptr [eax]
// 00661a91  8b7804               mov edi, dword ptr [eax + 4]
// 00661a94  0fb606               movzx eax, byte ptr [esi]
// 00661a97  4f                   dec edi
// 00661a98  46                   inc esi
// 00661a99  3dff000000           cmp eax, 0xff
// 00661a9e  74d8                 je 0x661a78
// 00661aa0  85c0                 test eax, eax
// 00661aa2  752b                 jne 0x661acf
// 00661aa4  b8ff000000           mov eax, 0xff
// 00661aa9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00661aad  c1e108               shl ecx, 8
// 00661ab0  0bc8                 or ecx, eax
// 00661ab2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00661ab6  83c008               add eax, 8
// 00661ab9  83f819               cmp eax, 0x19
// 00661abc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00661ac0  8944241c             mov dword ptr [esp + 0x1c], eax
// 00661ac4  7c8a                 jl 0x661a50
// 00661ac6  eb58                 jmp 0x661b20
// 00661ac8  5f                   pop edi
// 00661ac9  5e                   pop esi
// 00661aca  5d                   pop ebp
// 00661acb  32c0                 xor al, al
// 00661acd  5b                   pop ebx
// 00661ace  c3                   ret 
// 00661acf  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 00661ad5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00661ad9  39542420             cmp dword ptr [esp + 0x20], edx
// 00661add  7e41                 jle 0x661b20
// 00661adf  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 00661ae5  80780800             cmp byte ptr [eax + 8], 0
// 00661ae9  7520                 jne 0x661b0b
// 00661aeb  8b0b                 mov ecx, dword ptr [ebx]
// 00661aed  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 00661af4  8b13                 mov edx, dword ptr [ebx]
// 00661af6  8b4204               mov eax, dword ptr [edx + 4]
// 00661af9  6aff                 push -1
// 00661afb  53                   push ebx
// 00661afc  ffd0                 call eax
// 00661afe  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 00661b04  83c408               add esp, 8
// 00661b07  c6410801             mov byte ptr [ecx + 8], 1
// 00661b0b  b919000000           mov ecx, 0x19
// 00661b10  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00661b14  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 00661b1c  d3642418             shl dword ptr [esp + 0x18], cl
// 00661b20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00661b24  8b542418             mov edx, dword ptr [esp + 0x18]
// 00661b28  897d04               mov dword ptr [ebp + 4], edi
// 00661b2b  5f                   pop edi
// 00661b2c  897500               mov dword ptr [ebp], esi
// 00661b2f  5e                   pop esi
// 00661b30  89450c               mov dword ptr [ebp + 0xc], eax
// 00661b33  895508               mov dword ptr [ebp + 8], edx
// 00661b36  5d                   pop ebp
// 00661b37  b001                 mov al, 1
// 00661b39  5b                   pop ebx
// 00661b3a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

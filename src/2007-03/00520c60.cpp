// roc 2007-03 00520c60  unit: seg_00520000  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00520c60
//
// 00520c60  53                   push ebx
// 00520c61  55                   push ebp
// 00520c62  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00520c66  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00520c69  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00520c70  56                   push esi
// 00520c71  8b7500               mov esi, dword ptr [ebp]
// 00520c74  57                   push edi
// 00520c75  8b7d04               mov edi, dword ptr [ebp + 4]
// 00520c78  0f85a7000000         jne 0x520d25
// 00520c7e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00520c83  0f8de7000000         jge 0x520d70
// 00520c89  8da42400000000       lea esp, [esp]
// 00520c90  85ff                 test edi, edi
// 00520c92  7518                 jne 0x520cac
// 00520c94  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00520c97  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00520c9a  53                   push ebx
// 00520c9b  ffd1                 call ecx
// 00520c9d  83c404               add esp, 4
// 00520ca0  84c0                 test al, al
// 00520ca2  7474                 je 0x520d18
// 00520ca4  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00520ca7  8b30                 mov esi, dword ptr [eax]
// 00520ca9  8b7804               mov edi, dword ptr [eax + 4]
// 00520cac  0fb606               movzx eax, byte ptr [esi]
// 00520caf  83ef01               sub edi, 1
// 00520cb2  83c601               add esi, 1
// 00520cb5  3dff000000           cmp eax, 0xff
// 00520cba  7539                 jne 0x520cf5
// 00520cbc  8d642400             lea esp, [esp]
// 00520cc0  85ff                 test edi, edi
// 00520cc2  7518                 jne 0x520cdc
// 00520cc4  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00520cc7  8b420c               mov eax, dword ptr [edx + 0xc]
// 00520cca  53                   push ebx
// 00520ccb  ffd0                 call eax
// 00520ccd  83c404               add esp, 4
// 00520cd0  84c0                 test al, al
// 00520cd2  7444                 je 0x520d18
// 00520cd4  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00520cd7  8b30                 mov esi, dword ptr [eax]
// 00520cd9  8b7804               mov edi, dword ptr [eax + 4]
// 00520cdc  0fb606               movzx eax, byte ptr [esi]
// 00520cdf  83ef01               sub edi, 1
// 00520ce2  83c601               add esi, 1
// 00520ce5  3dff000000           cmp eax, 0xff
// 00520cea  74d4                 je 0x520cc0
// 00520cec  85c0                 test eax, eax
// 00520cee  752f                 jne 0x520d1f
// 00520cf0  b8ff000000           mov eax, 0xff
// 00520cf5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00520cf9  c1e108               shl ecx, 8
// 00520cfc  0bc8                 or ecx, eax
// 00520cfe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00520d02  83c008               add eax, 8
// 00520d05  83f819               cmp eax, 0x19
// 00520d08  894c2418             mov dword ptr [esp + 0x18], ecx
// 00520d0c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00520d10  0f8c7affffff         jl 0x520c90
// 00520d16  eb58                 jmp 0x520d70
// 00520d18  5f                   pop edi
// 00520d19  5e                   pop esi
// 00520d1a  5d                   pop ebp
// 00520d1b  32c0                 xor al, al
// 00520d1d  5b                   pop ebx
// 00520d1e  c3                   ret 
// 00520d1f  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 00520d25  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00520d29  39542420             cmp dword ptr [esp + 0x20], edx
// 00520d2d  7e41                 jle 0x520d70
// 00520d2f  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 00520d35  80780800             cmp byte ptr [eax + 8], 0
// 00520d39  7520                 jne 0x520d5b
// 00520d3b  8b0b                 mov ecx, dword ptr [ebx]
// 00520d3d  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 00520d44  8b13                 mov edx, dword ptr [ebx]
// 00520d46  8b4204               mov eax, dword ptr [edx + 4]
// 00520d49  6aff                 push -1
// 00520d4b  53                   push ebx
// 00520d4c  ffd0                 call eax
// 00520d4e  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 00520d54  83c408               add esp, 8
// 00520d57  c6410801             mov byte ptr [ecx + 8], 1
// 00520d5b  b919000000           mov ecx, 0x19
// 00520d60  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00520d64  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 00520d6c  d3642418             shl dword ptr [esp + 0x18], cl
// 00520d70  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00520d74  8b542418             mov edx, dword ptr [esp + 0x18]
// 00520d78  897d04               mov dword ptr [ebp + 4], edi
// 00520d7b  5f                   pop edi
// 00520d7c  897500               mov dword ptr [ebp], esi
// 00520d7f  5e                   pop esi
// 00520d80  89450c               mov dword ptr [ebp + 0xc], eax
// 00520d83  895508               mov dword ptr [ebp + 8], edx
// 00520d86  5d                   pop ebp
// 00520d87  b001                 mov al, 1
// 00520d89  5b                   pop ebx
// 00520d8a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

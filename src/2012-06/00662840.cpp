// roc 2012-06 00662840  unit: seg_00660000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662840
//
// 00662840  81ec3c010000         sub esp, 0x13c
// 00662846  53                   push ebx
// 00662847  55                   push ebp
// 00662848  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 0066284f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00662855  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 0066285b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00662861  89442414             mov dword ptr [esp + 0x14], eax
// 00662865  b801000000           mov eax, 1
// 0066286a  d3e0                 shl eax, cl
// 0066286c  56                   push esi
// 0066286d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00662871  89442440             mov dword ptr [esp + 0x40], eax
// 00662875  83c8ff               or eax, 0xffffffff
// 00662878  d3e0                 shl eax, cl
// 0066287a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00662881  8944243c             mov dword ptr [esp + 0x3c], eax
// 00662885  741b                 je 0x6628a2
// 00662887  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0066288b  7515                 jne 0x6628a2
// 0066288d  8bf5                 mov esi, ebp
// 0066288f  e8ccf9ffff           call 0x662260
// 00662894  84c0                 test al, al
// 00662896  750a                 jne 0x6628a2
// 00662898  5e                   pop esi
// 00662899  5d                   pop ebp
// 0066289a  5b                   pop ebx
// 0066289b  81c43c010000         add esp, 0x13c
// 006628a1  c3                   ret 
// 006628a2  807b0800             cmp byte ptr [ebx + 8], 0
// 006628a6  57                   push edi
// 006628a7  0f855d020000         jne 0x662b0a
// 006628ad  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006628b0  896c2438             mov dword ptr [esp + 0x38], ebp
// 006628b4  8b08                 mov ecx, dword ptr [eax]
// 006628b6  894c2428             mov dword ptr [esp + 0x28], ecx
// 006628ba  8b5004               mov edx, dword ptr [eax + 4]
// 006628bd  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 006628c4  8954242c             mov dword ptr [esp + 0x2c], edx
// 006628c8  8b11                 mov edx, dword ptr [ecx]
// 006628ca  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006628cd  8b4314               mov eax, dword ptr [ebx + 0x14]
// 006628d0  8b730c               mov esi, dword ptr [ebx + 0xc]
// 006628d3  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 006628d6  894c2448             mov dword ptr [esp + 0x48], ecx
// 006628da  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 006628e0  89442410             mov dword ptr [esp + 0x10], eax
// 006628e4  89542420             mov dword ptr [esp + 0x20], edx
// 006628e8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006628f0  894c2414             mov dword ptr [esp + 0x14], ecx
// 006628f4  85c0                 test eax, eax
// 006628f6  0f855f010000         jne 0x662a5b
// 006628fc  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00662900  0f8fe4010000         jg 0x662aea
// 00662906  83ff08               cmp edi, 8
// 00662909  7d2d                 jge 0x662938
// 0066290b  6a00                 push 0
// 0066290d  57                   push edi
// 0066290e  8d542430             lea edx, [esp + 0x30]
// 00662912  56                   push esi
// 00662913  52                   push edx
// 00662914  e807f1ffff           call 0x661a20
// 00662919  83c410               add esp, 0x10
// 0066291c  84c0                 test al, al
// 0066291e  0f84cb020000         je 0x662bef
// 00662924  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00662928  83ff08               cmp edi, 8
// 0066292b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0066292f  7d07                 jge 0x662938
// 00662931  b801000000           mov eax, 1
// 00662936  eb2c                 jmp 0x662964
// 00662938  8b542448             mov edx, dword ptr [esp + 0x48]
// 0066293c  8d4ff8               lea ecx, [edi - 8]
// 0066293f  8bc6                 mov eax, esi
// 00662941  d3f8                 sar eax, cl
// 00662943  25ff000000           and eax, 0xff
// 00662948  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 0066294f  85c9                 test ecx, ecx
// 00662951  740c                 je 0x66295f
// 00662953  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 0066295b  2bf9                 sub edi, ecx
// 0066295d  eb2c                 jmp 0x66298b
// 0066295f  b809000000           mov eax, 9
// 00662964  50                   push eax
// 00662965  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00662969  50                   push eax
// 0066296a  57                   push edi
// 0066296b  8d4c2434             lea ecx, [esp + 0x34]
// 0066296f  56                   push esi
// 00662970  51                   push ecx
// 00662971  e8caf1ffff           call 0x661b40
// 00662976  8be8                 mov ebp, eax
// 00662978  83c414               add esp, 0x14
// 0066297b  85ed                 test ebp, ebp
// 0066297d  0f8c6c020000         jl 0x662bef
// 00662983  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662987  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0066298b  8bcd                 mov ecx, ebp
// 0066298d  c1f904               sar ecx, 4
// 00662990  83e50f               and ebp, 0xf
// 00662993  894c2418             mov dword ptr [esp + 0x18], ecx
// 00662997  746a                 je 0x662a03
// 00662999  83fd01               cmp ebp, 1
// 0066299c  741d                 je 0x6629bb
// 0066299e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 006629a5  8b10                 mov edx, dword ptr [eax]
// 006629a7  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 006629ae  8b08                 mov ecx, dword ptr [eax]
// 006629b0  8b5104               mov edx, dword ptr [ecx + 4]
// 006629b3  6aff                 push -1
// 006629b5  50                   push eax
// 006629b6  ffd2                 call edx
// 006629b8  83c408               add esp, 8
// 006629bb  83ff01               cmp edi, 1
// 006629be  7d21                 jge 0x6629e1
// 006629c0  6a01                 push 1
// 006629c2  57                   push edi
// 006629c3  8d442430             lea eax, [esp + 0x30]
// 006629c7  56                   push esi
// 006629c8  50                   push eax
// 006629c9  e852f0ffff           call 0x661a20
// 006629ce  83c410               add esp, 0x10
// 006629d1  84c0                 test al, al
// 006629d3  0f8416020000         je 0x662bef
// 006629d9  8b742430             mov esi, dword ptr [esp + 0x30]
// 006629dd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006629e1  4f                   dec edi
// 006629e2  8bcf                 mov ecx, edi
// 006629e4  8bd6                 mov edx, esi
// 006629e6  d3fa                 sar edx, cl
// 006629e8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006629ec  f6c201               test dl, 1
// 006629ef  7409                 je 0x6629fa
// 006629f1  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 006629f5  e92a010000           jmp 0x662b24
// 006629fa  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 006629fe  e921010000           jmp 0x662b24
// 00662a03  83f90f               cmp ecx, 0xf
// 00662a06  0f8418010000         je 0x662b24
// 00662a0c  bb01000000           mov ebx, 1
// 00662a11  d3e3                 shl ebx, cl
// 00662a13  895c2410             mov dword ptr [esp + 0x10], ebx
// 00662a17  85c9                 test ecx, ecx
// 00662a19  7435                 je 0x662a50
// 00662a1b  3bf9                 cmp edi, ecx
// 00662a1d  7d20                 jge 0x662a3f
// 00662a1f  51                   push ecx
// 00662a20  57                   push edi
// 00662a21  8d542430             lea edx, [esp + 0x30]
// 00662a25  56                   push esi
// 00662a26  52                   push edx
// 00662a27  e8f4efffff           call 0x661a20
// 00662a2c  83c410               add esp, 0x10
// 00662a2f  84c0                 test al, al
// 00662a31  0f84b8010000         je 0x662bef
// 00662a37  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662a3b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00662a3f  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00662a43  8bc6                 mov eax, esi
// 00662a45  8bcf                 mov ecx, edi
// 00662a47  d3f8                 sar eax, cl
// 00662a49  4b                   dec ebx
// 00662a4a  23c3                 and eax, ebx
// 00662a4c  01442410             add dword ptr [esp + 0x10], eax
// 00662a50  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00662a54  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 00662a5b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00662a60  0f8684000000         jbe 0x662aea
// 00662a66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00662a6a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00662a6e  7f76                 jg 0x662ae6
// 00662a70  8b0c854097b800       mov ecx, dword ptr [eax*4 + 0xb89740]
// 00662a77  8b542420             mov edx, dword ptr [esp + 0x20]
// 00662a7b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00662a80  8d1c4a               lea ebx, [edx + ecx*2]
// 00662a83  744e                 je 0x662ad3
// 00662a85  83ff01               cmp edi, 1
// 00662a88  7d21                 jge 0x662aab
// 00662a8a  6a01                 push 1
// 00662a8c  57                   push edi
// 00662a8d  8d442430             lea eax, [esp + 0x30]
// 00662a91  56                   push esi
// 00662a92  50                   push eax
// 00662a93  e888efffff           call 0x661a20
// 00662a98  83c410               add esp, 0x10
// 00662a9b  84c0                 test al, al
// 00662a9d  0f844c010000         je 0x662bef
// 00662aa3  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662aa7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00662aab  4f                   dec edi
// 00662aac  8bd6                 mov edx, esi
// 00662aae  8bcf                 mov ecx, edi
// 00662ab0  d3fa                 sar edx, cl
// 00662ab2  f6c201               test dl, 1
// 00662ab5  741c                 je 0x662ad3
// 00662ab7  0fb703               movzx eax, word ptr [ebx]
// 00662aba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00662abe  0fbfd0               movsx edx, ax
// 00662ac1  85d1                 test ecx, edx
// 00662ac3  750e                 jne 0x662ad3
// 00662ac5  6685c0               test ax, ax
// 00662ac8  7d04                 jge 0x662ace
// 00662aca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00662ace  03c1                 add eax, ecx
// 00662ad0  668903               mov word ptr [ebx], ax
// 00662ad3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00662ad7  40                   inc eax
// 00662ad8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00662adc  89442414             mov dword ptr [esp + 0x14], eax
// 00662ae0  7e8e                 jle 0x662a70
// 00662ae2  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00662ae6  ff4c2410             dec dword ptr [esp + 0x10]
// 00662aea  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00662aed  8b442428             mov eax, dword ptr [esp + 0x28]
// 00662af1  8902                 mov dword ptr [edx], eax
// 00662af3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00662af6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00662afa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00662afe  895104               mov dword ptr [ecx + 4], edx
// 00662b01  89730c               mov dword ptr [ebx + 0xc], esi
// 00662b04  897b10               mov dword ptr [ebx + 0x10], edi
// 00662b07  894314               mov dword ptr [ebx + 0x14], eax
// 00662b0a  ff4b28               dec dword ptr [ebx + 0x28]
// 00662b0d  5f                   pop edi
// 00662b0e  5e                   pop esi
// 00662b0f  5d                   pop ebp
// 00662b10  b001                 mov al, 1
// 00662b12  5b                   pop ebx
// 00662b13  81c43c010000         add esp, 0x13c
// 00662b19  c3                   ret 
// 00662b1a  8d9b00000000         lea ebx, [ebx]
// 00662b20  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00662b24  8b542414             mov edx, dword ptr [esp + 0x14]
// 00662b28  8b04954097b800       mov eax, dword ptr [edx*4 + 0xb89740]
// 00662b2f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00662b33  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00662b38  8d1c43               lea ebx, [ebx + eax*2]
// 00662b3b  7457                 je 0x662b94
// 00662b3d  83ff01               cmp edi, 1
// 00662b40  7d21                 jge 0x662b63
// 00662b42  6a01                 push 1
// 00662b44  57                   push edi
// 00662b45  8d4c2430             lea ecx, [esp + 0x30]
// 00662b49  56                   push esi
// 00662b4a  51                   push ecx
// 00662b4b  e8d0eeffff           call 0x661a20
// 00662b50  83c410               add esp, 0x10
// 00662b53  84c0                 test al, al
// 00662b55  0f8494000000         je 0x662bef
// 00662b5b  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662b5f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00662b63  4f                   dec edi
// 00662b64  8bd6                 mov edx, esi
// 00662b66  8bcf                 mov ecx, edi
// 00662b68  d3fa                 sar edx, cl
// 00662b6a  f6c201               test dl, 1
// 00662b6d  742e                 je 0x662b9d
// 00662b6f  0fb703               movzx eax, word ptr [ebx]
// 00662b72  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00662b76  0fbfd0               movsx edx, ax
// 00662b79  85d1                 test ecx, edx
// 00662b7b  7520                 jne 0x662b9d
// 00662b7d  6685c0               test ax, ax
// 00662b80  7c07                 jl 0x662b89
// 00662b82  03c1                 add eax, ecx
// 00662b84  668903               mov word ptr [ebx], ax
// 00662b87  eb14                 jmp 0x662b9d
// 00662b89  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00662b8d  03c1                 add eax, ecx
// 00662b8f  668903               mov word ptr [ebx], ax
// 00662b92  eb09                 jmp 0x662b9d
// 00662b94  83e901               sub ecx, 1
// 00662b97  894c2418             mov dword ptr [esp + 0x18], ecx
// 00662b9b  7813                 js 0x662bb0
// 00662b9d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00662ba1  42                   inc edx
// 00662ba2  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00662ba6  89542414             mov dword ptr [esp + 0x14], edx
// 00662baa  0f8e70ffffff         jle 0x662b20
// 00662bb0  85ed                 test ebp, ebp
// 00662bb2  741c                 je 0x662bd0
// 00662bb4  8b04954097b800       mov eax, dword ptr [edx*4 + 0xb89740]
// 00662bbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00662bbf  66892c41             mov word ptr [ecx + eax*2], bp
// 00662bc3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00662bc7  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 00662bcb  41                   inc ecx
// 00662bcc  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00662bd0  42                   inc edx
// 00662bd1  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00662bd5  89542414             mov dword ptr [esp + 0x14], edx
// 00662bd9  0f8e27fdffff         jle 0x662906
// 00662bdf  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 00662be6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00662bea  e9fbfeffff           jmp 0x662aea
// 00662bef  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00662bf3  85c0                 test eax, eax
// 00662bf5  7e13                 jle 0x662c0a
// 00662bf7  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 00662bfb  8b742420             mov esi, dword ptr [esp + 0x20]
// 00662bff  48                   dec eax
// 00662c00  33c9                 xor ecx, ecx
// 00662c02  66890c56             mov word ptr [esi + edx*2], cx
// 00662c06  85c0                 test eax, eax
// 00662c08  7fed                 jg 0x662bf7
// 00662c0a  5f                   pop edi
// 00662c0b  5e                   pop esi
// 00662c0c  5d                   pop ebp
// 00662c0d  32c0                 xor al, al
// 00662c0f  5b                   pop ebx
// 00662c10  81c43c010000         add esp, 0x13c
// 00662c16  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

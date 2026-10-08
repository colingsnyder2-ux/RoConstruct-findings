// roc 2007-03 00521ad0  unit: seg_00520000  size: 1010 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00521ad0
//
// 00521ad0  81ec3c010000         sub esp, 0x13c
// 00521ad6  53                   push ebx
// 00521ad7  55                   push ebp
// 00521ad8  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 00521adf  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00521ae5  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 00521aeb  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00521af1  89442414             mov dword ptr [esp + 0x14], eax
// 00521af5  b801000000           mov eax, 1
// 00521afa  d3e0                 shl eax, cl
// 00521afc  56                   push esi
// 00521afd  895c2420             mov dword ptr [esp + 0x20], ebx
// 00521b01  89442440             mov dword ptr [esp + 0x40], eax
// 00521b05  83c8ff               or eax, 0xffffffff
// 00521b08  d3e0                 shl eax, cl
// 00521b0a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00521b11  8944243c             mov dword ptr [esp + 0x3c], eax
// 00521b15  741b                 je 0x521b32
// 00521b17  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00521b1b  7515                 jne 0x521b32
// 00521b1d  8bf5                 mov esi, ebp
// 00521b1f  e89cf9ffff           call 0x5214c0
// 00521b24  84c0                 test al, al
// 00521b26  750a                 jne 0x521b32
// 00521b28  5e                   pop esi
// 00521b29  5d                   pop ebp
// 00521b2a  5b                   pop ebx
// 00521b2b  81c43c010000         add esp, 0x13c
// 00521b31  c3                   ret 
// 00521b32  807b0800             cmp byte ptr [ebx + 8], 0
// 00521b36  57                   push edi
// 00521b37  0f8572020000         jne 0x521daf
// 00521b3d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00521b40  896c2438             mov dword ptr [esp + 0x38], ebp
// 00521b44  8b08                 mov ecx, dword ptr [eax]
// 00521b46  894c2428             mov dword ptr [esp + 0x28], ecx
// 00521b4a  8b5004               mov edx, dword ptr [eax + 4]
// 00521b4d  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00521b54  8954242c             mov dword ptr [esp + 0x2c], edx
// 00521b58  8b11                 mov edx, dword ptr [ecx]
// 00521b5a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00521b5d  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00521b60  85c0                 test eax, eax
// 00521b62  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00521b65  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00521b68  894c2448             mov dword ptr [esp + 0x48], ecx
// 00521b6c  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 00521b72  89442410             mov dword ptr [esp + 0x10], eax
// 00521b76  89542420             mov dword ptr [esp + 0x20], edx
// 00521b7a  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00521b82  894c2414             mov dword ptr [esp + 0x14], ecx
// 00521b86  0f8563010000         jne 0x521cef
// 00521b8c  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00521b90  0f8ff9010000         jg 0x521d8f
// 00521b96  83ff08               cmp edi, 8
// 00521b99  7d2d                 jge 0x521bc8
// 00521b9b  6a00                 push 0
// 00521b9d  57                   push edi
// 00521b9e  8d542430             lea edx, [esp + 0x30]
// 00521ba2  56                   push esi
// 00521ba3  52                   push edx
// 00521ba4  e8b7f0ffff           call 0x520c60
// 00521ba9  83c410               add esp, 0x10
// 00521bac  84c0                 test al, al
// 00521bae  0f84e3020000         je 0x521e97
// 00521bb4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521bb8  83ff08               cmp edi, 8
// 00521bbb  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521bbf  7d07                 jge 0x521bc8
// 00521bc1  b801000000           mov eax, 1
// 00521bc6  eb2c                 jmp 0x521bf4
// 00521bc8  8b542448             mov edx, dword ptr [esp + 0x48]
// 00521bcc  8d4ff8               lea ecx, [edi - 8]
// 00521bcf  8bc6                 mov eax, esi
// 00521bd1  d3f8                 sar eax, cl
// 00521bd3  25ff000000           and eax, 0xff
// 00521bd8  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 00521bdf  85c9                 test ecx, ecx
// 00521be1  740c                 je 0x521bef
// 00521be3  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 00521beb  2bf9                 sub edi, ecx
// 00521bed  eb2c                 jmp 0x521c1b
// 00521bef  b809000000           mov eax, 9
// 00521bf4  50                   push eax
// 00521bf5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00521bf9  50                   push eax
// 00521bfa  57                   push edi
// 00521bfb  8d4c2434             lea ecx, [esp + 0x34]
// 00521bff  56                   push esi
// 00521c00  51                   push ecx
// 00521c01  e88af1ffff           call 0x520d90
// 00521c06  8be8                 mov ebp, eax
// 00521c08  83c414               add esp, 0x14
// 00521c0b  85ed                 test ebp, ebp
// 00521c0d  0f8c84020000         jl 0x521e97
// 00521c13  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521c17  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521c1b  8bcd                 mov ecx, ebp
// 00521c1d  c1f904               sar ecx, 4
// 00521c20  83e50f               and ebp, 0xf
// 00521c23  894c2418             mov dword ptr [esp + 0x18], ecx
// 00521c27  746c                 je 0x521c95
// 00521c29  83fd01               cmp ebp, 1
// 00521c2c  741d                 je 0x521c4b
// 00521c2e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 00521c35  8b10                 mov edx, dword ptr [eax]
// 00521c37  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00521c3e  8b08                 mov ecx, dword ptr [eax]
// 00521c40  8b5104               mov edx, dword ptr [ecx + 4]
// 00521c43  6aff                 push -1
// 00521c45  50                   push eax
// 00521c46  ffd2                 call edx
// 00521c48  83c408               add esp, 8
// 00521c4b  83ff01               cmp edi, 1
// 00521c4e  7d21                 jge 0x521c71
// 00521c50  6a01                 push 1
// 00521c52  57                   push edi
// 00521c53  8d442430             lea eax, [esp + 0x30]
// 00521c57  56                   push esi
// 00521c58  50                   push eax
// 00521c59  e802f0ffff           call 0x520c60
// 00521c5e  83c410               add esp, 0x10
// 00521c61  84c0                 test al, al
// 00521c63  0f842e020000         je 0x521e97
// 00521c69  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521c6d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521c71  83ef01               sub edi, 1
// 00521c74  8bcf                 mov ecx, edi
// 00521c76  8bd6                 mov edx, esi
// 00521c78  d3fa                 sar edx, cl
// 00521c7a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00521c7e  f6c201               test dl, 1
// 00521c81  7409                 je 0x521c8c
// 00521c83  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00521c87  e938010000           jmp 0x521dc4
// 00521c8c  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00521c90  e92f010000           jmp 0x521dc4
// 00521c95  83f90f               cmp ecx, 0xf
// 00521c98  0f8426010000         je 0x521dc4
// 00521c9e  bb01000000           mov ebx, 1
// 00521ca3  d3e3                 shl ebx, cl
// 00521ca5  85c9                 test ecx, ecx
// 00521ca7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00521cab  7437                 je 0x521ce4
// 00521cad  3bf9                 cmp edi, ecx
// 00521caf  7d20                 jge 0x521cd1
// 00521cb1  51                   push ecx
// 00521cb2  57                   push edi
// 00521cb3  8d542430             lea edx, [esp + 0x30]
// 00521cb7  56                   push esi
// 00521cb8  52                   push edx
// 00521cb9  e8a2efffff           call 0x520c60
// 00521cbe  83c410               add esp, 0x10
// 00521cc1  84c0                 test al, al
// 00521cc3  0f84ce010000         je 0x521e97
// 00521cc9  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521ccd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521cd1  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00521cd5  8bc6                 mov eax, esi
// 00521cd7  8bcf                 mov ecx, edi
// 00521cd9  d3f8                 sar eax, cl
// 00521cdb  83c3ff               add ebx, -1
// 00521cde  23c3                 and eax, ebx
// 00521ce0  01442410             add dword ptr [esp + 0x10], eax
// 00521ce4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00521ce8  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 00521cef  837c241000           cmp dword ptr [esp + 0x10], 0
// 00521cf4  0f8695000000         jbe 0x521d8f
// 00521cfa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00521cfe  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00521d02  0f8f82000000         jg 0x521d8a
// 00521d08  eb06                 jmp 0x521d10
// 00521d0a  8d9b00000000         lea ebx, [ebx]
// 00521d10  8b0c85202c7a00       mov ecx, dword ptr [eax*4 + 0x7a2c20]
// 00521d17  8b542420             mov edx, dword ptr [esp + 0x20]
// 00521d1b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00521d20  8d1c4a               lea ebx, [edx + ecx*2]
// 00521d23  7450                 je 0x521d75
// 00521d25  83ff01               cmp edi, 1
// 00521d28  7d21                 jge 0x521d4b
// 00521d2a  6a01                 push 1
// 00521d2c  57                   push edi
// 00521d2d  8d442430             lea eax, [esp + 0x30]
// 00521d31  56                   push esi
// 00521d32  50                   push eax
// 00521d33  e828efffff           call 0x520c60
// 00521d38  83c410               add esp, 0x10
// 00521d3b  84c0                 test al, al
// 00521d3d  0f8454010000         je 0x521e97
// 00521d43  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521d47  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521d4b  83ef01               sub edi, 1
// 00521d4e  8bd6                 mov edx, esi
// 00521d50  8bcf                 mov ecx, edi
// 00521d52  d3fa                 sar edx, cl
// 00521d54  f6c201               test dl, 1
// 00521d57  741c                 je 0x521d75
// 00521d59  0fb703               movzx eax, word ptr [ebx]
// 00521d5c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00521d60  0fbfd0               movsx edx, ax
// 00521d63  85d1                 test ecx, edx
// 00521d65  750e                 jne 0x521d75
// 00521d67  6685c0               test ax, ax
// 00521d6a  7d04                 jge 0x521d70
// 00521d6c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00521d70  03c1                 add eax, ecx
// 00521d72  668903               mov word ptr [ebx], ax
// 00521d75  8b442414             mov eax, dword ptr [esp + 0x14]
// 00521d79  83c001               add eax, 1
// 00521d7c  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00521d80  89442414             mov dword ptr [esp + 0x14], eax
// 00521d84  7e8a                 jle 0x521d10
// 00521d86  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00521d8a  836c241001           sub dword ptr [esp + 0x10], 1
// 00521d8f  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00521d92  8b442428             mov eax, dword ptr [esp + 0x28]
// 00521d96  8902                 mov dword ptr [edx], eax
// 00521d98  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00521d9b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00521d9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00521da3  895104               mov dword ptr [ecx + 4], edx
// 00521da6  89730c               mov dword ptr [ebx + 0xc], esi
// 00521da9  897b10               mov dword ptr [ebx + 0x10], edi
// 00521dac  894314               mov dword ptr [ebx + 0x14], eax
// 00521daf  834328ff             add dword ptr [ebx + 0x28], -1
// 00521db3  5f                   pop edi
// 00521db4  5e                   pop esi
// 00521db5  5d                   pop ebp
// 00521db6  b001                 mov al, 1
// 00521db8  5b                   pop ebx
// 00521db9  81c43c010000         add esp, 0x13c
// 00521dbf  c3                   ret 
// 00521dc0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00521dc4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00521dc8  8b0495202c7a00       mov eax, dword ptr [edx*4 + 0x7a2c20]
// 00521dcf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00521dd3  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00521dd8  8d1c43               lea ebx, [ebx + eax*2]
// 00521ddb  7459                 je 0x521e36
// 00521ddd  83ff01               cmp edi, 1
// 00521de0  7d21                 jge 0x521e03
// 00521de2  6a01                 push 1
// 00521de4  57                   push edi
// 00521de5  8d4c2430             lea ecx, [esp + 0x30]
// 00521de9  56                   push esi
// 00521dea  51                   push ecx
// 00521deb  e870eeffff           call 0x520c60
// 00521df0  83c410               add esp, 0x10
// 00521df3  84c0                 test al, al
// 00521df5  0f849c000000         je 0x521e97
// 00521dfb  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521dff  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00521e03  83ef01               sub edi, 1
// 00521e06  8bd6                 mov edx, esi
// 00521e08  8bcf                 mov ecx, edi
// 00521e0a  d3fa                 sar edx, cl
// 00521e0c  f6c201               test dl, 1
// 00521e0f  742e                 je 0x521e3f
// 00521e11  0fb703               movzx eax, word ptr [ebx]
// 00521e14  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00521e18  0fbfd0               movsx edx, ax
// 00521e1b  85d1                 test ecx, edx
// 00521e1d  7520                 jne 0x521e3f
// 00521e1f  6685c0               test ax, ax
// 00521e22  7c07                 jl 0x521e2b
// 00521e24  03c1                 add eax, ecx
// 00521e26  668903               mov word ptr [ebx], ax
// 00521e29  eb14                 jmp 0x521e3f
// 00521e2b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00521e2f  03c1                 add eax, ecx
// 00521e31  668903               mov word ptr [ebx], ax
// 00521e34  eb09                 jmp 0x521e3f
// 00521e36  83e901               sub ecx, 1
// 00521e39  894c2418             mov dword ptr [esp + 0x18], ecx
// 00521e3d  7815                 js 0x521e54
// 00521e3f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00521e43  83c201               add edx, 1
// 00521e46  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00521e4a  89542414             mov dword ptr [esp + 0x14], edx
// 00521e4e  0f8e6cffffff         jle 0x521dc0
// 00521e54  85ed                 test ebp, ebp
// 00521e56  741e                 je 0x521e76
// 00521e58  8b0495202c7a00       mov eax, dword ptr [edx*4 + 0x7a2c20]
// 00521e5f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521e63  66892c41             mov word ptr [ecx + eax*2], bp
// 00521e67  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00521e6b  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 00521e6f  83c101               add ecx, 1
// 00521e72  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00521e76  83c201               add edx, 1
// 00521e79  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00521e7d  89542414             mov dword ptr [esp + 0x14], edx
// 00521e81  0f8e0ffdffff         jle 0x521b96
// 00521e87  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 00521e8e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00521e92  e9f8feffff           jmp 0x521d8f
// 00521e97  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00521e9b  85c0                 test eax, eax
// 00521e9d  7e16                 jle 0x521eb5
// 00521e9f  90                   nop 
// 00521ea0  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 00521ea4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521ea8  83e801               sub eax, 1
// 00521eab  85c0                 test eax, eax
// 00521ead  66c704510000         mov word ptr [ecx + edx*2], 0
// 00521eb3  7feb                 jg 0x521ea0
// 00521eb5  5f                   pop edi
// 00521eb6  5e                   pop esi
// 00521eb7  5d                   pop ebp
// 00521eb8  32c0                 xor al, al
// 00521eba  5b                   pop ebx
// 00521ebb  81c43c010000         add esp, 0x13c
// 00521ec1  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

// roc 2007-08 00526e00  unit: G3D::Line  size: 1010 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526e00
//
// 00526e00  81ec3c010000         sub esp, 0x13c
// 00526e06  53                   push ebx
// 00526e07  55                   push ebp
// 00526e08  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 00526e0f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00526e15  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 00526e1b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00526e21  89442414             mov dword ptr [esp + 0x14], eax
// 00526e25  b801000000           mov eax, 1
// 00526e2a  d3e0                 shl eax, cl
// 00526e2c  56                   push esi
// 00526e2d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00526e31  89442440             mov dword ptr [esp + 0x40], eax
// 00526e35  83c8ff               or eax, 0xffffffff
// 00526e38  d3e0                 shl eax, cl
// 00526e3a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00526e41  8944243c             mov dword ptr [esp + 0x3c], eax
// 00526e45  741b                 je 0x526e62
// 00526e47  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00526e4b  7515                 jne 0x526e62
// 00526e4d  8bf5                 mov esi, ebp
// 00526e4f  e89cf9ffff           call 0x5267f0
// 00526e54  84c0                 test al, al
// 00526e56  750a                 jne 0x526e62
// 00526e58  5e                   pop esi
// 00526e59  5d                   pop ebp
// 00526e5a  5b                   pop ebx
// 00526e5b  81c43c010000         add esp, 0x13c
// 00526e61  c3                   ret 
// 00526e62  807b0800             cmp byte ptr [ebx + 8], 0
// 00526e66  57                   push edi
// 00526e67  0f8572020000         jne 0x5270df
// 00526e6d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00526e70  896c2438             mov dword ptr [esp + 0x38], ebp
// 00526e74  8b08                 mov ecx, dword ptr [eax]
// 00526e76  894c2428             mov dword ptr [esp + 0x28], ecx
// 00526e7a  8b5004               mov edx, dword ptr [eax + 4]
// 00526e7d  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00526e84  8954242c             mov dword ptr [esp + 0x2c], edx
// 00526e88  8b11                 mov edx, dword ptr [ecx]
// 00526e8a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00526e8d  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00526e90  85c0                 test eax, eax
// 00526e92  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00526e95  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00526e98  894c2448             mov dword ptr [esp + 0x48], ecx
// 00526e9c  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 00526ea2  89442410             mov dword ptr [esp + 0x10], eax
// 00526ea6  89542420             mov dword ptr [esp + 0x20], edx
// 00526eaa  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00526eb2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00526eb6  0f8563010000         jne 0x52701f
// 00526ebc  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00526ec0  0f8ff9010000         jg 0x5270bf
// 00526ec6  83ff08               cmp edi, 8
// 00526ec9  7d2d                 jge 0x526ef8
// 00526ecb  6a00                 push 0
// 00526ecd  57                   push edi
// 00526ece  8d542430             lea edx, [esp + 0x30]
// 00526ed2  56                   push esi
// 00526ed3  52                   push edx
// 00526ed4  e8b7f0ffff           call 0x525f90
// 00526ed9  83c410               add esp, 0x10
// 00526edc  84c0                 test al, al
// 00526ede  0f84e3020000         je 0x5271c7
// 00526ee4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00526ee8  83ff08               cmp edi, 8
// 00526eeb  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526eef  7d07                 jge 0x526ef8
// 00526ef1  b801000000           mov eax, 1
// 00526ef6  eb2c                 jmp 0x526f24
// 00526ef8  8b542448             mov edx, dword ptr [esp + 0x48]
// 00526efc  8d4ff8               lea ecx, [edi - 8]
// 00526eff  8bc6                 mov eax, esi
// 00526f01  d3f8                 sar eax, cl
// 00526f03  25ff000000           and eax, 0xff
// 00526f08  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 00526f0f  85c9                 test ecx, ecx
// 00526f11  740c                 je 0x526f1f
// 00526f13  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 00526f1b  2bf9                 sub edi, ecx
// 00526f1d  eb2c                 jmp 0x526f4b
// 00526f1f  b809000000           mov eax, 9
// 00526f24  50                   push eax
// 00526f25  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00526f29  50                   push eax
// 00526f2a  57                   push edi
// 00526f2b  8d4c2434             lea ecx, [esp + 0x34]
// 00526f2f  56                   push esi
// 00526f30  51                   push ecx
// 00526f31  e88af1ffff           call 0x5260c0
// 00526f36  8be8                 mov ebp, eax
// 00526f38  83c414               add esp, 0x14
// 00526f3b  85ed                 test ebp, ebp
// 00526f3d  0f8c84020000         jl 0x5271c7
// 00526f43  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526f47  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00526f4b  8bcd                 mov ecx, ebp
// 00526f4d  c1f904               sar ecx, 4
// 00526f50  83e50f               and ebp, 0xf
// 00526f53  894c2418             mov dword ptr [esp + 0x18], ecx
// 00526f57  746c                 je 0x526fc5
// 00526f59  83fd01               cmp ebp, 1
// 00526f5c  741d                 je 0x526f7b
// 00526f5e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 00526f65  8b10                 mov edx, dword ptr [eax]
// 00526f67  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00526f6e  8b08                 mov ecx, dword ptr [eax]
// 00526f70  8b5104               mov edx, dword ptr [ecx + 4]
// 00526f73  6aff                 push -1
// 00526f75  50                   push eax
// 00526f76  ffd2                 call edx
// 00526f78  83c408               add esp, 8
// 00526f7b  83ff01               cmp edi, 1
// 00526f7e  7d21                 jge 0x526fa1
// 00526f80  6a01                 push 1
// 00526f82  57                   push edi
// 00526f83  8d442430             lea eax, [esp + 0x30]
// 00526f87  56                   push esi
// 00526f88  50                   push eax
// 00526f89  e802f0ffff           call 0x525f90
// 00526f8e  83c410               add esp, 0x10
// 00526f91  84c0                 test al, al
// 00526f93  0f842e020000         je 0x5271c7
// 00526f99  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526f9d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00526fa1  83ef01               sub edi, 1
// 00526fa4  8bcf                 mov ecx, edi
// 00526fa6  8bd6                 mov edx, esi
// 00526fa8  d3fa                 sar edx, cl
// 00526faa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00526fae  f6c201               test dl, 1
// 00526fb1  7409                 je 0x526fbc
// 00526fb3  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00526fb7  e938010000           jmp 0x5270f4
// 00526fbc  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00526fc0  e92f010000           jmp 0x5270f4
// 00526fc5  83f90f               cmp ecx, 0xf
// 00526fc8  0f8426010000         je 0x5270f4
// 00526fce  bb01000000           mov ebx, 1
// 00526fd3  d3e3                 shl ebx, cl
// 00526fd5  85c9                 test ecx, ecx
// 00526fd7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00526fdb  7437                 je 0x527014
// 00526fdd  3bf9                 cmp edi, ecx
// 00526fdf  7d20                 jge 0x527001
// 00526fe1  51                   push ecx
// 00526fe2  57                   push edi
// 00526fe3  8d542430             lea edx, [esp + 0x30]
// 00526fe7  56                   push esi
// 00526fe8  52                   push edx
// 00526fe9  e8a2efffff           call 0x525f90
// 00526fee  83c410               add esp, 0x10
// 00526ff1  84c0                 test al, al
// 00526ff3  0f84ce010000         je 0x5271c7
// 00526ff9  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526ffd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00527001  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00527005  8bc6                 mov eax, esi
// 00527007  8bcf                 mov ecx, edi
// 00527009  d3f8                 sar eax, cl
// 0052700b  83c3ff               add ebx, -1
// 0052700e  23c3                 and eax, ebx
// 00527010  01442410             add dword ptr [esp + 0x10], eax
// 00527014  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00527018  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0052701f  837c241000           cmp dword ptr [esp + 0x10], 0
// 00527024  0f8695000000         jbe 0x5270bf
// 0052702a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052702e  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00527032  0f8f82000000         jg 0x5270ba
// 00527038  eb06                 jmp 0x527040
// 0052703a  8d9b00000000         lea ebx, [ebx]
// 00527040  8b0c8500337a00       mov ecx, dword ptr [eax*4 + 0x7a3300]
// 00527047  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052704b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00527050  8d1c4a               lea ebx, [edx + ecx*2]
// 00527053  7450                 je 0x5270a5
// 00527055  83ff01               cmp edi, 1
// 00527058  7d21                 jge 0x52707b
// 0052705a  6a01                 push 1
// 0052705c  57                   push edi
// 0052705d  8d442430             lea eax, [esp + 0x30]
// 00527061  56                   push esi
// 00527062  50                   push eax
// 00527063  e828efffff           call 0x525f90
// 00527068  83c410               add esp, 0x10
// 0052706b  84c0                 test al, al
// 0052706d  0f8454010000         je 0x5271c7
// 00527073  8b742430             mov esi, dword ptr [esp + 0x30]
// 00527077  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0052707b  83ef01               sub edi, 1
// 0052707e  8bd6                 mov edx, esi
// 00527080  8bcf                 mov ecx, edi
// 00527082  d3fa                 sar edx, cl
// 00527084  f6c201               test dl, 1
// 00527087  741c                 je 0x5270a5
// 00527089  0fb703               movzx eax, word ptr [ebx]
// 0052708c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00527090  0fbfd0               movsx edx, ax
// 00527093  85d1                 test ecx, edx
// 00527095  750e                 jne 0x5270a5
// 00527097  6685c0               test ax, ax
// 0052709a  7d04                 jge 0x5270a0
// 0052709c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005270a0  03c1                 add eax, ecx
// 005270a2  668903               mov word ptr [ebx], ax
// 005270a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005270a9  83c001               add eax, 1
// 005270ac  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005270b0  89442414             mov dword ptr [esp + 0x14], eax
// 005270b4  7e8a                 jle 0x527040
// 005270b6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005270ba  836c241001           sub dword ptr [esp + 0x10], 1
// 005270bf  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005270c2  8b442428             mov eax, dword ptr [esp + 0x28]
// 005270c6  8902                 mov dword ptr [edx], eax
// 005270c8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005270cb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005270cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 005270d3  895104               mov dword ptr [ecx + 4], edx
// 005270d6  89730c               mov dword ptr [ebx + 0xc], esi
// 005270d9  897b10               mov dword ptr [ebx + 0x10], edi
// 005270dc  894314               mov dword ptr [ebx + 0x14], eax
// 005270df  834328ff             add dword ptr [ebx + 0x28], -1
// 005270e3  5f                   pop edi
// 005270e4  5e                   pop esi
// 005270e5  5d                   pop ebp
// 005270e6  b001                 mov al, 1
// 005270e8  5b                   pop ebx
// 005270e9  81c43c010000         add esp, 0x13c
// 005270ef  c3                   ret 
// 005270f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005270f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 005270f8  8b049500337a00       mov eax, dword ptr [edx*4 + 0x7a3300]
// 005270ff  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00527103  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00527108  8d1c43               lea ebx, [ebx + eax*2]
// 0052710b  7459                 je 0x527166
// 0052710d  83ff01               cmp edi, 1
// 00527110  7d21                 jge 0x527133
// 00527112  6a01                 push 1
// 00527114  57                   push edi
// 00527115  8d4c2430             lea ecx, [esp + 0x30]
// 00527119  56                   push esi
// 0052711a  51                   push ecx
// 0052711b  e870eeffff           call 0x525f90
// 00527120  83c410               add esp, 0x10
// 00527123  84c0                 test al, al
// 00527125  0f849c000000         je 0x5271c7
// 0052712b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052712f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00527133  83ef01               sub edi, 1
// 00527136  8bd6                 mov edx, esi
// 00527138  8bcf                 mov ecx, edi
// 0052713a  d3fa                 sar edx, cl
// 0052713c  f6c201               test dl, 1
// 0052713f  742e                 je 0x52716f
// 00527141  0fb703               movzx eax, word ptr [ebx]
// 00527144  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00527148  0fbfd0               movsx edx, ax
// 0052714b  85d1                 test ecx, edx
// 0052714d  7520                 jne 0x52716f
// 0052714f  6685c0               test ax, ax
// 00527152  7c07                 jl 0x52715b
// 00527154  03c1                 add eax, ecx
// 00527156  668903               mov word ptr [ebx], ax
// 00527159  eb14                 jmp 0x52716f
// 0052715b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0052715f  03c1                 add eax, ecx
// 00527161  668903               mov word ptr [ebx], ax
// 00527164  eb09                 jmp 0x52716f
// 00527166  83e901               sub ecx, 1
// 00527169  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052716d  7815                 js 0x527184
// 0052716f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527173  83c201               add edx, 1
// 00527176  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0052717a  89542414             mov dword ptr [esp + 0x14], edx
// 0052717e  0f8e6cffffff         jle 0x5270f0
// 00527184  85ed                 test ebp, ebp
// 00527186  741e                 je 0x5271a6
// 00527188  8b049500337a00       mov eax, dword ptr [edx*4 + 0x7a3300]
// 0052718f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00527193  66892c41             mov word ptr [ecx + eax*2], bp
// 00527197  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0052719b  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 0052719f  83c101               add ecx, 1
// 005271a2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005271a6  83c201               add edx, 1
// 005271a9  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 005271ad  89542414             mov dword ptr [esp + 0x14], edx
// 005271b1  0f8e0ffdffff         jle 0x526ec6
// 005271b7  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 005271be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005271c2  e9f8feffff           jmp 0x5270bf
// 005271c7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005271cb  85c0                 test eax, eax
// 005271cd  7e16                 jle 0x5271e5
// 005271cf  90                   nop 
// 005271d0  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 005271d4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005271d8  83e801               sub eax, 1
// 005271db  85c0                 test eax, eax
// 005271dd  66c704510000         mov word ptr [ecx + edx*2], 0
// 005271e3  7feb                 jg 0x5271d0
// 005271e5  5f                   pop edi
// 005271e6  5e                   pop esi
// 005271e7  5d                   pop ebp
// 005271e8  32c0                 xor al, al
// 005271ea  5b                   pop ebx
// 005271eb  81c43c010000         add esp, 0x13c
// 005271f1  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

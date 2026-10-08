// from server: 100% by auto
// roc 2008-06 00533010  unit: seg_00530000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533010
//
// 00533010  81ec3c010000         sub esp, 0x13c
// 00533016  53                   push ebx
// 00533017  55                   push ebp
// 00533018  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 0053301f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00533025  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 0053302b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00533031  89442414             mov dword ptr [esp + 0x14], eax
// 00533035  b801000000           mov eax, 1
// 0053303a  d3e0                 shl eax, cl
// 0053303c  56                   push esi
// 0053303d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00533041  89442440             mov dword ptr [esp + 0x40], eax
// 00533045  83c8ff               or eax, 0xffffffff
// 00533048  d3e0                 shl eax, cl
// 0053304a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00533051  8944243c             mov dword ptr [esp + 0x3c], eax
// 00533055  741b                 je 0x533072
// 00533057  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0053305b  7515                 jne 0x533072
// 0053305d  8bf5                 mov esi, ebp
// 0053305f  e8ccf9ffff           call 0x532a30
// 00533064  84c0                 test al, al
// 00533066  750a                 jne 0x533072
// 00533068  5e                   pop esi
// 00533069  5d                   pop ebp
// 0053306a  5b                   pop ebx
// 0053306b  81c43c010000         add esp, 0x13c
// 00533071  c3                   ret 
// 00533072  807b0800             cmp byte ptr [ebx + 8], 0
// 00533076  57                   push edi
// 00533077  0f855d020000         jne 0x5332da
// 0053307d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00533080  896c2438             mov dword ptr [esp + 0x38], ebp
// 00533084  8b08                 mov ecx, dword ptr [eax]
// 00533086  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053308a  8b5004               mov edx, dword ptr [eax + 4]
// 0053308d  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00533094  8954242c             mov dword ptr [esp + 0x2c], edx
// 00533098  8b11                 mov edx, dword ptr [ecx]
// 0053309a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0053309d  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005330a0  8b730c               mov esi, dword ptr [ebx + 0xc]
// 005330a3  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 005330a6  894c2448             mov dword ptr [esp + 0x48], ecx
// 005330aa  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 005330b0  89442410             mov dword ptr [esp + 0x10], eax
// 005330b4  89542420             mov dword ptr [esp + 0x20], edx
// 005330b8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005330c0  894c2414             mov dword ptr [esp + 0x14], ecx
// 005330c4  85c0                 test eax, eax
// 005330c6  0f855f010000         jne 0x53322b
// 005330cc  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 005330d0  0f8fe4010000         jg 0x5332ba
// 005330d6  83ff08               cmp edi, 8
// 005330d9  7d2d                 jge 0x533108
// 005330db  6a00                 push 0
// 005330dd  57                   push edi
// 005330de  8d542430             lea edx, [esp + 0x30]
// 005330e2  56                   push esi
// 005330e3  52                   push edx
// 005330e4  e807f1ffff           call 0x5321f0
// 005330e9  83c410               add esp, 0x10
// 005330ec  84c0                 test al, al
// 005330ee  0f84cb020000         je 0x5333bf
// 005330f4  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005330f8  83ff08               cmp edi, 8
// 005330fb  8b742430             mov esi, dword ptr [esp + 0x30]
// 005330ff  7d07                 jge 0x533108
// 00533101  b801000000           mov eax, 1
// 00533106  eb2c                 jmp 0x533134
// 00533108  8b542448             mov edx, dword ptr [esp + 0x48]
// 0053310c  8d4ff8               lea ecx, [edi - 8]
// 0053310f  8bc6                 mov eax, esi
// 00533111  d3f8                 sar eax, cl
// 00533113  25ff000000           and eax, 0xff
// 00533118  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 0053311f  85c9                 test ecx, ecx
// 00533121  740c                 je 0x53312f
// 00533123  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 0053312b  2bf9                 sub edi, ecx
// 0053312d  eb2c                 jmp 0x53315b
// 0053312f  b809000000           mov eax, 9
// 00533134  50                   push eax
// 00533135  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00533139  50                   push eax
// 0053313a  57                   push edi
// 0053313b  8d4c2434             lea ecx, [esp + 0x34]
// 0053313f  56                   push esi
// 00533140  51                   push ecx
// 00533141  e8caf1ffff           call 0x532310
// 00533146  8be8                 mov ebp, eax
// 00533148  83c414               add esp, 0x14
// 0053314b  85ed                 test ebp, ebp
// 0053314d  0f8c6c020000         jl 0x5333bf
// 00533153  8b742430             mov esi, dword ptr [esp + 0x30]
// 00533157  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0053315b  8bcd                 mov ecx, ebp
// 0053315d  c1f904               sar ecx, 4
// 00533160  83e50f               and ebp, 0xf
// 00533163  894c2418             mov dword ptr [esp + 0x18], ecx
// 00533167  746a                 je 0x5331d3
// 00533169  83fd01               cmp ebp, 1
// 0053316c  741d                 je 0x53318b
// 0053316e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 00533175  8b10                 mov edx, dword ptr [eax]
// 00533177  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0053317e  8b08                 mov ecx, dword ptr [eax]
// 00533180  8b5104               mov edx, dword ptr [ecx + 4]
// 00533183  6aff                 push -1
// 00533185  50                   push eax
// 00533186  ffd2                 call edx
// 00533188  83c408               add esp, 8
// 0053318b  83ff01               cmp edi, 1
// 0053318e  7d21                 jge 0x5331b1
// 00533190  6a01                 push 1
// 00533192  57                   push edi
// 00533193  8d442430             lea eax, [esp + 0x30]
// 00533197  56                   push esi
// 00533198  50                   push eax
// 00533199  e852f0ffff           call 0x5321f0
// 0053319e  83c410               add esp, 0x10
// 005331a1  84c0                 test al, al
// 005331a3  0f8416020000         je 0x5333bf
// 005331a9  8b742430             mov esi, dword ptr [esp + 0x30]
// 005331ad  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005331b1  4f                   dec edi
// 005331b2  8bcf                 mov ecx, edi
// 005331b4  8bd6                 mov edx, esi
// 005331b6  d3fa                 sar edx, cl
// 005331b8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005331bc  f6c201               test dl, 1
// 005331bf  7409                 je 0x5331ca
// 005331c1  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005331c5  e92a010000           jmp 0x5332f4
// 005331ca  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005331ce  e921010000           jmp 0x5332f4
// 005331d3  83f90f               cmp ecx, 0xf
// 005331d6  0f8418010000         je 0x5332f4
// 005331dc  bb01000000           mov ebx, 1
// 005331e1  d3e3                 shl ebx, cl
// 005331e3  895c2410             mov dword ptr [esp + 0x10], ebx
// 005331e7  85c9                 test ecx, ecx
// 005331e9  7435                 je 0x533220
// 005331eb  3bf9                 cmp edi, ecx
// 005331ed  7d20                 jge 0x53320f
// 005331ef  51                   push ecx
// 005331f0  57                   push edi
// 005331f1  8d542430             lea edx, [esp + 0x30]
// 005331f5  56                   push esi
// 005331f6  52                   push edx
// 005331f7  e8f4efffff           call 0x5321f0
// 005331fc  83c410               add esp, 0x10
// 005331ff  84c0                 test al, al
// 00533201  0f84b8010000         je 0x5333bf
// 00533207  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053320b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0053320f  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00533213  8bc6                 mov eax, esi
// 00533215  8bcf                 mov ecx, edi
// 00533217  d3f8                 sar eax, cl
// 00533219  4b                   dec ebx
// 0053321a  23c3                 and eax, ebx
// 0053321c  01442410             add dword ptr [esp + 0x10], eax
// 00533220  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00533224  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0053322b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00533230  0f8684000000         jbe 0x5332ba
// 00533236  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053323a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0053323e  7f76                 jg 0x5332b6
// 00533240  8b0c85b0b18200       mov ecx, dword ptr [eax*4 + 0x82b1b0]
// 00533247  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053324b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00533250  8d1c4a               lea ebx, [edx + ecx*2]
// 00533253  744e                 je 0x5332a3
// 00533255  83ff01               cmp edi, 1
// 00533258  7d21                 jge 0x53327b
// 0053325a  6a01                 push 1
// 0053325c  57                   push edi
// 0053325d  8d442430             lea eax, [esp + 0x30]
// 00533261  56                   push esi
// 00533262  50                   push eax
// 00533263  e888efffff           call 0x5321f0
// 00533268  83c410               add esp, 0x10
// 0053326b  84c0                 test al, al
// 0053326d  0f844c010000         je 0x5333bf
// 00533273  8b742430             mov esi, dword ptr [esp + 0x30]
// 00533277  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0053327b  4f                   dec edi
// 0053327c  8bd6                 mov edx, esi
// 0053327e  8bcf                 mov ecx, edi
// 00533280  d3fa                 sar edx, cl
// 00533282  f6c201               test dl, 1
// 00533285  741c                 je 0x5332a3
// 00533287  0fb703               movzx eax, word ptr [ebx]
// 0053328a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0053328e  0fbfd0               movsx edx, ax
// 00533291  85d1                 test ecx, edx
// 00533293  750e                 jne 0x5332a3
// 00533295  6685c0               test ax, ax
// 00533298  7d04                 jge 0x53329e
// 0053329a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0053329e  03c1                 add eax, ecx
// 005332a0  668903               mov word ptr [ebx], ax
// 005332a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005332a7  40                   inc eax
// 005332a8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005332ac  89442414             mov dword ptr [esp + 0x14], eax
// 005332b0  7e8e                 jle 0x533240
// 005332b2  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005332b6  ff4c2410             dec dword ptr [esp + 0x10]
// 005332ba  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005332bd  8b442428             mov eax, dword ptr [esp + 0x28]
// 005332c1  8902                 mov dword ptr [edx], eax
// 005332c3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005332c6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005332ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 005332ce  895104               mov dword ptr [ecx + 4], edx
// 005332d1  89730c               mov dword ptr [ebx + 0xc], esi
// 005332d4  897b10               mov dword ptr [ebx + 0x10], edi
// 005332d7  894314               mov dword ptr [ebx + 0x14], eax
// 005332da  ff4b28               dec dword ptr [ebx + 0x28]
// 005332dd  5f                   pop edi
// 005332de  5e                   pop esi
// 005332df  5d                   pop ebp
// 005332e0  b001                 mov al, 1
// 005332e2  5b                   pop ebx
// 005332e3  81c43c010000         add esp, 0x13c
// 005332e9  c3                   ret 
// 005332ea  8d9b00000000         lea ebx, [ebx]
// 005332f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005332f4  8b542414             mov edx, dword ptr [esp + 0x14]
// 005332f8  8b0495b0b18200       mov eax, dword ptr [edx*4 + 0x82b1b0]
// 005332ff  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00533303  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00533308  8d1c43               lea ebx, [ebx + eax*2]
// 0053330b  7457                 je 0x533364
// 0053330d  83ff01               cmp edi, 1
// 00533310  7d21                 jge 0x533333
// 00533312  6a01                 push 1
// 00533314  57                   push edi
// 00533315  8d4c2430             lea ecx, [esp + 0x30]
// 00533319  56                   push esi
// 0053331a  51                   push ecx
// 0053331b  e8d0eeffff           call 0x5321f0
// 00533320  83c410               add esp, 0x10
// 00533323  84c0                 test al, al
// 00533325  0f8494000000         je 0x5333bf
// 0053332b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053332f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00533333  4f                   dec edi
// 00533334  8bd6                 mov edx, esi
// 00533336  8bcf                 mov ecx, edi
// 00533338  d3fa                 sar edx, cl
// 0053333a  f6c201               test dl, 1
// 0053333d  742e                 je 0x53336d
// 0053333f  0fb703               movzx eax, word ptr [ebx]
// 00533342  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00533346  0fbfd0               movsx edx, ax
// 00533349  85d1                 test ecx, edx
// 0053334b  7520                 jne 0x53336d
// 0053334d  6685c0               test ax, ax
// 00533350  7c07                 jl 0x533359
// 00533352  03c1                 add eax, ecx
// 00533354  668903               mov word ptr [ebx], ax
// 00533357  eb14                 jmp 0x53336d
// 00533359  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0053335d  03c1                 add eax, ecx
// 0053335f  668903               mov word ptr [ebx], ax
// 00533362  eb09                 jmp 0x53336d
// 00533364  83e901               sub ecx, 1
// 00533367  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053336b  7813                 js 0x533380
// 0053336d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00533371  42                   inc edx
// 00533372  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00533376  89542414             mov dword ptr [esp + 0x14], edx
// 0053337a  0f8e70ffffff         jle 0x5332f0
// 00533380  85ed                 test ebp, ebp
// 00533382  741c                 je 0x5333a0
// 00533384  8b0495b0b18200       mov eax, dword ptr [edx*4 + 0x82b1b0]
// 0053338b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053338f  66892c41             mov word ptr [ecx + eax*2], bp
// 00533393  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00533397  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 0053339b  41                   inc ecx
// 0053339c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005333a0  42                   inc edx
// 005333a1  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 005333a5  89542414             mov dword ptr [esp + 0x14], edx
// 005333a9  0f8e27fdffff         jle 0x5330d6
// 005333af  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 005333b6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005333ba  e9fbfeffff           jmp 0x5332ba
// 005333bf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005333c3  85c0                 test eax, eax
// 005333c5  7e13                 jle 0x5333da
// 005333c7  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 005333cb  8b742420             mov esi, dword ptr [esp + 0x20]
// 005333cf  48                   dec eax
// 005333d0  33c9                 xor ecx, ecx
// 005333d2  66890c56             mov word ptr [esi + edx*2], cx
// 005333d6  85c0                 test eax, eax
// 005333d8  7fed                 jg 0x5333c7
// 005333da  5f                   pop edi
// 005333db  5e                   pop esi
// 005333dc  5d                   pop ebp
// 005333dd  32c0                 xor al, al
// 005333df  5b                   pop ebx
// 005333e0  81c43c010000         add esp, 0x13c
// 005333e6  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

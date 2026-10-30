// from server: 100% by auto
// roc 2011-06 00577130  unit: seg_00570000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577130
//
// 00577130  81ec3c010000         sub esp, 0x13c
// 00577136  53                   push ebx
// 00577137  55                   push ebp
// 00577138  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 0057713f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00577145  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 0057714b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00577151  89442414             mov dword ptr [esp + 0x14], eax
// 00577155  b801000000           mov eax, 1
// 0057715a  d3e0                 shl eax, cl
// 0057715c  56                   push esi
// 0057715d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00577161  89442440             mov dword ptr [esp + 0x40], eax
// 00577165  83c8ff               or eax, 0xffffffff
// 00577168  d3e0                 shl eax, cl
// 0057716a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00577171  8944243c             mov dword ptr [esp + 0x3c], eax
// 00577175  741b                 je 0x577192
// 00577177  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0057717b  7515                 jne 0x577192
// 0057717d  8bf5                 mov esi, ebp
// 0057717f  e8ccf9ffff           call 0x576b50
// 00577184  84c0                 test al, al
// 00577186  750a                 jne 0x577192
// 00577188  5e                   pop esi
// 00577189  5d                   pop ebp
// 0057718a  5b                   pop ebx
// 0057718b  81c43c010000         add esp, 0x13c
// 00577191  c3                   ret 
// 00577192  807b0800             cmp byte ptr [ebx + 8], 0
// 00577196  57                   push edi
// 00577197  0f855d020000         jne 0x5773fa
// 0057719d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005771a0  896c2438             mov dword ptr [esp + 0x38], ebp
// 005771a4  8b08                 mov ecx, dword ptr [eax]
// 005771a6  894c2428             mov dword ptr [esp + 0x28], ecx
// 005771aa  8b5004               mov edx, dword ptr [eax + 4]
// 005771ad  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 005771b4  8954242c             mov dword ptr [esp + 0x2c], edx
// 005771b8  8b11                 mov edx, dword ptr [ecx]
// 005771ba  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 005771bd  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005771c0  8b730c               mov esi, dword ptr [ebx + 0xc]
// 005771c3  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 005771c6  894c2448             mov dword ptr [esp + 0x48], ecx
// 005771ca  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 005771d0  89442410             mov dword ptr [esp + 0x10], eax
// 005771d4  89542420             mov dword ptr [esp + 0x20], edx
// 005771d8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005771e0  894c2414             mov dword ptr [esp + 0x14], ecx
// 005771e4  85c0                 test eax, eax
// 005771e6  0f855f010000         jne 0x57734b
// 005771ec  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 005771f0  0f8fe4010000         jg 0x5773da
// 005771f6  83ff08               cmp edi, 8
// 005771f9  7d2d                 jge 0x577228
// 005771fb  6a00                 push 0
// 005771fd  57                   push edi
// 005771fe  8d542430             lea edx, [esp + 0x30]
// 00577202  56                   push esi
// 00577203  52                   push edx
// 00577204  e807f1ffff           call 0x576310
// 00577209  83c410               add esp, 0x10
// 0057720c  84c0                 test al, al
// 0057720e  0f84cb020000         je 0x5774df
// 00577214  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00577218  83ff08               cmp edi, 8
// 0057721b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057721f  7d07                 jge 0x577228
// 00577221  b801000000           mov eax, 1
// 00577226  eb2c                 jmp 0x577254
// 00577228  8b542448             mov edx, dword ptr [esp + 0x48]
// 0057722c  8d4ff8               lea ecx, [edi - 8]
// 0057722f  8bc6                 mov eax, esi
// 00577231  d3f8                 sar eax, cl
// 00577233  25ff000000           and eax, 0xff
// 00577238  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 0057723f  85c9                 test ecx, ecx
// 00577241  740c                 je 0x57724f
// 00577243  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 0057724b  2bf9                 sub edi, ecx
// 0057724d  eb2c                 jmp 0x57727b
// 0057724f  b809000000           mov eax, 9
// 00577254  50                   push eax
// 00577255  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00577259  50                   push eax
// 0057725a  57                   push edi
// 0057725b  8d4c2434             lea ecx, [esp + 0x34]
// 0057725f  56                   push esi
// 00577260  51                   push ecx
// 00577261  e8caf1ffff           call 0x576430
// 00577266  8be8                 mov ebp, eax
// 00577268  83c414               add esp, 0x14
// 0057726b  85ed                 test ebp, ebp
// 0057726d  0f8c6c020000         jl 0x5774df
// 00577273  8b742430             mov esi, dword ptr [esp + 0x30]
// 00577277  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0057727b  8bcd                 mov ecx, ebp
// 0057727d  c1f904               sar ecx, 4
// 00577280  83e50f               and ebp, 0xf
// 00577283  894c2418             mov dword ptr [esp + 0x18], ecx
// 00577287  746a                 je 0x5772f3
// 00577289  83fd01               cmp ebp, 1
// 0057728c  741d                 je 0x5772ab
// 0057728e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 00577295  8b10                 mov edx, dword ptr [eax]
// 00577297  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0057729e  8b08                 mov ecx, dword ptr [eax]
// 005772a0  8b5104               mov edx, dword ptr [ecx + 4]
// 005772a3  6aff                 push -1
// 005772a5  50                   push eax
// 005772a6  ffd2                 call edx
// 005772a8  83c408               add esp, 8
// 005772ab  83ff01               cmp edi, 1
// 005772ae  7d21                 jge 0x5772d1
// 005772b0  6a01                 push 1
// 005772b2  57                   push edi
// 005772b3  8d442430             lea eax, [esp + 0x30]
// 005772b7  56                   push esi
// 005772b8  50                   push eax
// 005772b9  e852f0ffff           call 0x576310
// 005772be  83c410               add esp, 0x10
// 005772c1  84c0                 test al, al
// 005772c3  0f8416020000         je 0x5774df
// 005772c9  8b742430             mov esi, dword ptr [esp + 0x30]
// 005772cd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005772d1  4f                   dec edi
// 005772d2  8bcf                 mov ecx, edi
// 005772d4  8bd6                 mov edx, esi
// 005772d6  d3fa                 sar edx, cl
// 005772d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005772dc  f6c201               test dl, 1
// 005772df  7409                 je 0x5772ea
// 005772e1  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005772e5  e92a010000           jmp 0x577414
// 005772ea  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005772ee  e921010000           jmp 0x577414
// 005772f3  83f90f               cmp ecx, 0xf
// 005772f6  0f8418010000         je 0x577414
// 005772fc  bb01000000           mov ebx, 1
// 00577301  d3e3                 shl ebx, cl
// 00577303  895c2410             mov dword ptr [esp + 0x10], ebx
// 00577307  85c9                 test ecx, ecx
// 00577309  7435                 je 0x577340
// 0057730b  3bf9                 cmp edi, ecx
// 0057730d  7d20                 jge 0x57732f
// 0057730f  51                   push ecx
// 00577310  57                   push edi
// 00577311  8d542430             lea edx, [esp + 0x30]
// 00577315  56                   push esi
// 00577316  52                   push edx
// 00577317  e8f4efffff           call 0x576310
// 0057731c  83c410               add esp, 0x10
// 0057731f  84c0                 test al, al
// 00577321  0f84b8010000         je 0x5774df
// 00577327  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057732b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0057732f  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00577333  8bc6                 mov eax, esi
// 00577335  8bcf                 mov ecx, edi
// 00577337  d3f8                 sar eax, cl
// 00577339  4b                   dec ebx
// 0057733a  23c3                 and eax, ebx
// 0057733c  01442410             add dword ptr [esp + 0x10], eax
// 00577340  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00577344  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0057734b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00577350  0f8684000000         jbe 0x5773da
// 00577356  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057735a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0057735e  7f76                 jg 0x5773d6
// 00577360  8b0c85f058a800       mov ecx, dword ptr [eax*4 + 0xa858f0]
// 00577367  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057736b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00577370  8d1c4a               lea ebx, [edx + ecx*2]
// 00577373  744e                 je 0x5773c3
// 00577375  83ff01               cmp edi, 1
// 00577378  7d21                 jge 0x57739b
// 0057737a  6a01                 push 1
// 0057737c  57                   push edi
// 0057737d  8d442430             lea eax, [esp + 0x30]
// 00577381  56                   push esi
// 00577382  50                   push eax
// 00577383  e888efffff           call 0x576310
// 00577388  83c410               add esp, 0x10
// 0057738b  84c0                 test al, al
// 0057738d  0f844c010000         je 0x5774df
// 00577393  8b742430             mov esi, dword ptr [esp + 0x30]
// 00577397  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0057739b  4f                   dec edi
// 0057739c  8bd6                 mov edx, esi
// 0057739e  8bcf                 mov ecx, edi
// 005773a0  d3fa                 sar edx, cl
// 005773a2  f6c201               test dl, 1
// 005773a5  741c                 je 0x5773c3
// 005773a7  0fb703               movzx eax, word ptr [ebx]
// 005773aa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005773ae  0fbfd0               movsx edx, ax
// 005773b1  85d1                 test ecx, edx
// 005773b3  750e                 jne 0x5773c3
// 005773b5  6685c0               test ax, ax
// 005773b8  7d04                 jge 0x5773be
// 005773ba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005773be  03c1                 add eax, ecx
// 005773c0  668903               mov word ptr [ebx], ax
// 005773c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005773c7  40                   inc eax
// 005773c8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005773cc  89442414             mov dword ptr [esp + 0x14], eax
// 005773d0  7e8e                 jle 0x577360
// 005773d2  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005773d6  ff4c2410             dec dword ptr [esp + 0x10]
// 005773da  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005773dd  8b442428             mov eax, dword ptr [esp + 0x28]
// 005773e1  8902                 mov dword ptr [edx], eax
// 005773e3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005773e6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005773ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 005773ee  895104               mov dword ptr [ecx + 4], edx
// 005773f1  89730c               mov dword ptr [ebx + 0xc], esi
// 005773f4  897b10               mov dword ptr [ebx + 0x10], edi
// 005773f7  894314               mov dword ptr [ebx + 0x14], eax
// 005773fa  ff4b28               dec dword ptr [ebx + 0x28]
// 005773fd  5f                   pop edi
// 005773fe  5e                   pop esi
// 005773ff  5d                   pop ebp
// 00577400  b001                 mov al, 1
// 00577402  5b                   pop ebx
// 00577403  81c43c010000         add esp, 0x13c
// 00577409  c3                   ret 
// 0057740a  8d9b00000000         lea ebx, [ebx]
// 00577410  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00577414  8b542414             mov edx, dword ptr [esp + 0x14]
// 00577418  8b0495f058a800       mov eax, dword ptr [edx*4 + 0xa858f0]
// 0057741f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00577423  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00577428  8d1c43               lea ebx, [ebx + eax*2]
// 0057742b  7457                 je 0x577484
// 0057742d  83ff01               cmp edi, 1
// 00577430  7d21                 jge 0x577453
// 00577432  6a01                 push 1
// 00577434  57                   push edi
// 00577435  8d4c2430             lea ecx, [esp + 0x30]
// 00577439  56                   push esi
// 0057743a  51                   push ecx
// 0057743b  e8d0eeffff           call 0x576310
// 00577440  83c410               add esp, 0x10
// 00577443  84c0                 test al, al
// 00577445  0f8494000000         je 0x5774df
// 0057744b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057744f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00577453  4f                   dec edi
// 00577454  8bd6                 mov edx, esi
// 00577456  8bcf                 mov ecx, edi
// 00577458  d3fa                 sar edx, cl
// 0057745a  f6c201               test dl, 1
// 0057745d  742e                 je 0x57748d
// 0057745f  0fb703               movzx eax, word ptr [ebx]
// 00577462  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00577466  0fbfd0               movsx edx, ax
// 00577469  85d1                 test ecx, edx
// 0057746b  7520                 jne 0x57748d
// 0057746d  6685c0               test ax, ax
// 00577470  7c07                 jl 0x577479
// 00577472  03c1                 add eax, ecx
// 00577474  668903               mov word ptr [ebx], ax
// 00577477  eb14                 jmp 0x57748d
// 00577479  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057747d  03c1                 add eax, ecx
// 0057747f  668903               mov word ptr [ebx], ax
// 00577482  eb09                 jmp 0x57748d
// 00577484  83e901               sub ecx, 1
// 00577487  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057748b  7813                 js 0x5774a0
// 0057748d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00577491  42                   inc edx
// 00577492  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00577496  89542414             mov dword ptr [esp + 0x14], edx
// 0057749a  0f8e70ffffff         jle 0x577410
// 005774a0  85ed                 test ebp, ebp
// 005774a2  741c                 je 0x5774c0
// 005774a4  8b0495f058a800       mov eax, dword ptr [edx*4 + 0xa858f0]
// 005774ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005774af  66892c41             mov word ptr [ecx + eax*2], bp
// 005774b3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005774b7  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 005774bb  41                   inc ecx
// 005774bc  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005774c0  42                   inc edx
// 005774c1  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 005774c5  89542414             mov dword ptr [esp + 0x14], edx
// 005774c9  0f8e27fdffff         jle 0x5771f6
// 005774cf  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 005774d6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005774da  e9fbfeffff           jmp 0x5773da
// 005774df  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005774e3  85c0                 test eax, eax
// 005774e5  7e13                 jle 0x5774fa
// 005774e7  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 005774eb  8b742420             mov esi, dword ptr [esp + 0x20]
// 005774ef  48                   dec eax
// 005774f0  33c9                 xor ecx, ecx
// 005774f2  66890c56             mov word ptr [esi + edx*2], cx
// 005774f6  85c0                 test eax, eax
// 005774f8  7fed                 jg 0x5774e7
// 005774fa  5f                   pop edi
// 005774fb  5e                   pop esi
// 005774fc  5d                   pop ebp
// 005774fd  32c0                 xor al, al
// 005774ff  5b                   pop ebx
// 00577500  81c43c010000         add esp, 0x13c
// 00577506  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

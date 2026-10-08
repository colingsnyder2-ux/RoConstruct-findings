// roc 2009-12 0061f320  unit: seg_00610000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f320
//
// 0061f320  81ec3c010000         sub esp, 0x13c
// 0061f326  53                   push ebx
// 0061f327  55                   push ebp
// 0061f328  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 0061f32f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 0061f335  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 0061f33b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 0061f341  89442414             mov dword ptr [esp + 0x14], eax
// 0061f345  b801000000           mov eax, 1
// 0061f34a  d3e0                 shl eax, cl
// 0061f34c  56                   push esi
// 0061f34d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0061f351  89442440             mov dword ptr [esp + 0x40], eax
// 0061f355  83c8ff               or eax, 0xffffffff
// 0061f358  d3e0                 shl eax, cl
// 0061f35a  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 0061f361  8944243c             mov dword ptr [esp + 0x3c], eax
// 0061f365  741b                 je 0x61f382
// 0061f367  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0061f36b  7515                 jne 0x61f382
// 0061f36d  8bf5                 mov esi, ebp
// 0061f36f  e8ccf9ffff           call 0x61ed40
// 0061f374  84c0                 test al, al
// 0061f376  750a                 jne 0x61f382
// 0061f378  5e                   pop esi
// 0061f379  5d                   pop ebp
// 0061f37a  5b                   pop ebx
// 0061f37b  81c43c010000         add esp, 0x13c
// 0061f381  c3                   ret 
// 0061f382  807b0800             cmp byte ptr [ebx + 8], 0
// 0061f386  57                   push edi
// 0061f387  0f855d020000         jne 0x61f5ea
// 0061f38d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0061f390  896c2438             mov dword ptr [esp + 0x38], ebp
// 0061f394  8b08                 mov ecx, dword ptr [eax]
// 0061f396  894c2428             mov dword ptr [esp + 0x28], ecx
// 0061f39a  8b5004               mov edx, dword ptr [eax + 4]
// 0061f39d  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 0061f3a4  8954242c             mov dword ptr [esp + 0x2c], edx
// 0061f3a8  8b11                 mov edx, dword ptr [ecx]
// 0061f3aa  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0061f3ad  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0061f3b0  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0061f3b3  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0061f3b6  894c2448             mov dword ptr [esp + 0x48], ecx
// 0061f3ba  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 0061f3c0  89442410             mov dword ptr [esp + 0x10], eax
// 0061f3c4  89542420             mov dword ptr [esp + 0x20], edx
// 0061f3c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0061f3d0  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061f3d4  85c0                 test eax, eax
// 0061f3d6  0f855f010000         jne 0x61f53b
// 0061f3dc  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0061f3e0  0f8fe4010000         jg 0x61f5ca
// 0061f3e6  83ff08               cmp edi, 8
// 0061f3e9  7d2d                 jge 0x61f418
// 0061f3eb  6a00                 push 0
// 0061f3ed  57                   push edi
// 0061f3ee  8d542430             lea edx, [esp + 0x30]
// 0061f3f2  56                   push esi
// 0061f3f3  52                   push edx
// 0061f3f4  e807f1ffff           call 0x61e500
// 0061f3f9  83c410               add esp, 0x10
// 0061f3fc  84c0                 test al, al
// 0061f3fe  0f84cb020000         je 0x61f6cf
// 0061f404  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f408  83ff08               cmp edi, 8
// 0061f40b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f40f  7d07                 jge 0x61f418
// 0061f411  b801000000           mov eax, 1
// 0061f416  eb2c                 jmp 0x61f444
// 0061f418  8b542448             mov edx, dword ptr [esp + 0x48]
// 0061f41c  8d4ff8               lea ecx, [edi - 8]
// 0061f41f  8bc6                 mov eax, esi
// 0061f421  d3f8                 sar eax, cl
// 0061f423  25ff000000           and eax, 0xff
// 0061f428  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 0061f42f  85c9                 test ecx, ecx
// 0061f431  740c                 je 0x61f43f
// 0061f433  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 0061f43b  2bf9                 sub edi, ecx
// 0061f43d  eb2c                 jmp 0x61f46b
// 0061f43f  b809000000           mov eax, 9
// 0061f444  50                   push eax
// 0061f445  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0061f449  50                   push eax
// 0061f44a  57                   push edi
// 0061f44b  8d4c2434             lea ecx, [esp + 0x34]
// 0061f44f  56                   push esi
// 0061f450  51                   push ecx
// 0061f451  e8caf1ffff           call 0x61e620
// 0061f456  8be8                 mov ebp, eax
// 0061f458  83c414               add esp, 0x14
// 0061f45b  85ed                 test ebp, ebp
// 0061f45d  0f8c6c020000         jl 0x61f6cf
// 0061f463  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f467  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f46b  8bcd                 mov ecx, ebp
// 0061f46d  c1f904               sar ecx, 4
// 0061f470  83e50f               and ebp, 0xf
// 0061f473  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061f477  746a                 je 0x61f4e3
// 0061f479  83fd01               cmp ebp, 1
// 0061f47c  741d                 je 0x61f49b
// 0061f47e  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 0061f485  8b10                 mov edx, dword ptr [eax]
// 0061f487  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0061f48e  8b08                 mov ecx, dword ptr [eax]
// 0061f490  8b5104               mov edx, dword ptr [ecx + 4]
// 0061f493  6aff                 push -1
// 0061f495  50                   push eax
// 0061f496  ffd2                 call edx
// 0061f498  83c408               add esp, 8
// 0061f49b  83ff01               cmp edi, 1
// 0061f49e  7d21                 jge 0x61f4c1
// 0061f4a0  6a01                 push 1
// 0061f4a2  57                   push edi
// 0061f4a3  8d442430             lea eax, [esp + 0x30]
// 0061f4a7  56                   push esi
// 0061f4a8  50                   push eax
// 0061f4a9  e852f0ffff           call 0x61e500
// 0061f4ae  83c410               add esp, 0x10
// 0061f4b1  84c0                 test al, al
// 0061f4b3  0f8416020000         je 0x61f6cf
// 0061f4b9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f4bd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f4c1  4f                   dec edi
// 0061f4c2  8bcf                 mov ecx, edi
// 0061f4c4  8bd6                 mov edx, esi
// 0061f4c6  d3fa                 sar edx, cl
// 0061f4c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061f4cc  f6c201               test dl, 1
// 0061f4cf  7409                 je 0x61f4da
// 0061f4d1  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0061f4d5  e92a010000           jmp 0x61f604
// 0061f4da  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0061f4de  e921010000           jmp 0x61f604
// 0061f4e3  83f90f               cmp ecx, 0xf
// 0061f4e6  0f8418010000         je 0x61f604
// 0061f4ec  bb01000000           mov ebx, 1
// 0061f4f1  d3e3                 shl ebx, cl
// 0061f4f3  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061f4f7  85c9                 test ecx, ecx
// 0061f4f9  7435                 je 0x61f530
// 0061f4fb  3bf9                 cmp edi, ecx
// 0061f4fd  7d20                 jge 0x61f51f
// 0061f4ff  51                   push ecx
// 0061f500  57                   push edi
// 0061f501  8d542430             lea edx, [esp + 0x30]
// 0061f505  56                   push esi
// 0061f506  52                   push edx
// 0061f507  e8f4efffff           call 0x61e500
// 0061f50c  83c410               add esp, 0x10
// 0061f50f  84c0                 test al, al
// 0061f511  0f84b8010000         je 0x61f6cf
// 0061f517  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f51b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f51f  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0061f523  8bc6                 mov eax, esi
// 0061f525  8bcf                 mov ecx, edi
// 0061f527  d3f8                 sar eax, cl
// 0061f529  4b                   dec ebx
// 0061f52a  23c3                 and eax, ebx
// 0061f52c  01442410             add dword ptr [esp + 0x10], eax
// 0061f530  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061f534  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0061f53b  837c241000           cmp dword ptr [esp + 0x10], 0
// 0061f540  0f8684000000         jbe 0x61f5ca
// 0061f546  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061f54a  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0061f54e  7f76                 jg 0x61f5c6
// 0061f550  8b0c8598579c00       mov ecx, dword ptr [eax*4 + 0x9c5798]
// 0061f557  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061f55b  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 0061f560  8d1c4a               lea ebx, [edx + ecx*2]
// 0061f563  744e                 je 0x61f5b3
// 0061f565  83ff01               cmp edi, 1
// 0061f568  7d21                 jge 0x61f58b
// 0061f56a  6a01                 push 1
// 0061f56c  57                   push edi
// 0061f56d  8d442430             lea eax, [esp + 0x30]
// 0061f571  56                   push esi
// 0061f572  50                   push eax
// 0061f573  e888efffff           call 0x61e500
// 0061f578  83c410               add esp, 0x10
// 0061f57b  84c0                 test al, al
// 0061f57d  0f844c010000         je 0x61f6cf
// 0061f583  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f587  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f58b  4f                   dec edi
// 0061f58c  8bd6                 mov edx, esi
// 0061f58e  8bcf                 mov ecx, edi
// 0061f590  d3fa                 sar edx, cl
// 0061f592  f6c201               test dl, 1
// 0061f595  741c                 je 0x61f5b3
// 0061f597  0fb703               movzx eax, word ptr [ebx]
// 0061f59a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061f59e  0fbfd0               movsx edx, ax
// 0061f5a1  85d1                 test ecx, edx
// 0061f5a3  750e                 jne 0x61f5b3
// 0061f5a5  6685c0               test ax, ax
// 0061f5a8  7d04                 jge 0x61f5ae
// 0061f5aa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061f5ae  03c1                 add eax, ecx
// 0061f5b0  668903               mov word ptr [ebx], ax
// 0061f5b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061f5b7  40                   inc eax
// 0061f5b8  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0061f5bc  89442414             mov dword ptr [esp + 0x14], eax
// 0061f5c0  7e8e                 jle 0x61f550
// 0061f5c2  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061f5c6  ff4c2410             dec dword ptr [esp + 0x10]
// 0061f5ca  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0061f5cd  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061f5d1  8902                 mov dword ptr [edx], eax
// 0061f5d3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0061f5d6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0061f5da  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061f5de  895104               mov dword ptr [ecx + 4], edx
// 0061f5e1  89730c               mov dword ptr [ebx + 0xc], esi
// 0061f5e4  897b10               mov dword ptr [ebx + 0x10], edi
// 0061f5e7  894314               mov dword ptr [ebx + 0x14], eax
// 0061f5ea  ff4b28               dec dword ptr [ebx + 0x28]
// 0061f5ed  5f                   pop edi
// 0061f5ee  5e                   pop esi
// 0061f5ef  5d                   pop ebp
// 0061f5f0  b001                 mov al, 1
// 0061f5f2  5b                   pop ebx
// 0061f5f3  81c43c010000         add esp, 0x13c
// 0061f5f9  c3                   ret 
// 0061f5fa  8d9b00000000         lea ebx, [ebx]
// 0061f600  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061f604  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061f608  8b049598579c00       mov eax, dword ptr [edx*4 + 0x9c5798]
// 0061f60f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0061f613  66833c4300           cmp word ptr [ebx + eax*2], 0
// 0061f618  8d1c43               lea ebx, [ebx + eax*2]
// 0061f61b  7457                 je 0x61f674
// 0061f61d  83ff01               cmp edi, 1
// 0061f620  7d21                 jge 0x61f643
// 0061f622  6a01                 push 1
// 0061f624  57                   push edi
// 0061f625  8d4c2430             lea ecx, [esp + 0x30]
// 0061f629  56                   push esi
// 0061f62a  51                   push ecx
// 0061f62b  e8d0eeffff           call 0x61e500
// 0061f630  83c410               add esp, 0x10
// 0061f633  84c0                 test al, al
// 0061f635  0f8494000000         je 0x61f6cf
// 0061f63b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f63f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061f643  4f                   dec edi
// 0061f644  8bd6                 mov edx, esi
// 0061f646  8bcf                 mov ecx, edi
// 0061f648  d3fa                 sar edx, cl
// 0061f64a  f6c201               test dl, 1
// 0061f64d  742e                 je 0x61f67d
// 0061f64f  0fb703               movzx eax, word ptr [ebx]
// 0061f652  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061f656  0fbfd0               movsx edx, ax
// 0061f659  85d1                 test ecx, edx
// 0061f65b  7520                 jne 0x61f67d
// 0061f65d  6685c0               test ax, ax
// 0061f660  7c07                 jl 0x61f669
// 0061f662  03c1                 add eax, ecx
// 0061f664  668903               mov word ptr [ebx], ax
// 0061f667  eb14                 jmp 0x61f67d
// 0061f669  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061f66d  03c1                 add eax, ecx
// 0061f66f  668903               mov word ptr [ebx], ax
// 0061f672  eb09                 jmp 0x61f67d
// 0061f674  83e901               sub ecx, 1
// 0061f677  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061f67b  7813                 js 0x61f690
// 0061f67d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061f681  42                   inc edx
// 0061f682  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0061f686  89542414             mov dword ptr [esp + 0x14], edx
// 0061f68a  0f8e70ffffff         jle 0x61f600
// 0061f690  85ed                 test ebp, ebp
// 0061f692  741c                 je 0x61f6b0
// 0061f694  8b049598579c00       mov eax, dword ptr [edx*4 + 0x9c5798]
// 0061f69b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061f69f  66892c41             mov word ptr [ecx + eax*2], bp
// 0061f6a3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0061f6a7  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 0061f6ab  41                   inc ecx
// 0061f6ac  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0061f6b0  42                   inc edx
// 0061f6b1  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0061f6b5  89542414             mov dword ptr [esp + 0x14], edx
// 0061f6b9  0f8e27fdffff         jle 0x61f3e6
// 0061f6bf  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0061f6c6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0061f6ca  e9fbfeffff           jmp 0x61f5ca
// 0061f6cf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0061f6d3  85c0                 test eax, eax
// 0061f6d5  7e13                 jle 0x61f6ea
// 0061f6d7  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 0061f6db  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061f6df  48                   dec eax
// 0061f6e0  33c9                 xor ecx, ecx
// 0061f6e2  66890c56             mov word ptr [esi + edx*2], cx
// 0061f6e6  85c0                 test eax, eax
// 0061f6e8  7fed                 jg 0x61f6d7
// 0061f6ea  5f                   pop edi
// 0061f6eb  5e                   pop esi
// 0061f6ec  5d                   pop ebp
// 0061f6ed  32c0                 xor al, al
// 0061f6ef  5b                   pop ebx
// 0061f6f0  81c43c010000         add esp, 0x13c
// 0061f6f6  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

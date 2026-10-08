// from server: 100% by auto
// roc 2007-08 0051c530  unit: seg_00510000  size: 3028 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051c530
//
// 0051c530  83ec3c               sub esp, 0x3c
// 0051c533  53                   push ebx
// 0051c534  56                   push esi
// 0051c535  8b742448             mov esi, dword ptr [esp + 0x48]
// 0051c539  0fb69e26010000       movzx ebx, byte ptr [esi + 0x126]
// 0051c540  57                   push edi
// 0051c541  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0051c544  f7c700010000         test edi, 0x100
// 0051c54a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0051c54e  897c244c             mov dword ptr [esp + 0x4c], edi
// 0051c552  0f84c8000000         je 0x51c620
// 0051c558  f7c700100000         test edi, 0x1000
// 0051c55e  0f84bc000000         je 0x51c620
// 0051c564  f6c302               test bl, 2
// 0051c567  7575                 jne 0x51c5de
// 0051c569  0fb68627010000       movzx eax, byte ptr [esi + 0x127]
// 0051c570  83c0ff               add eax, -1
// 0051c573  83f80f               cmp eax, 0xf
// 0051c576  0f87a4000000         ja 0x51c620
// 0051c57c  0fb680f4d05100       movzx eax, byte ptr [eax + 0x51d0f4]
// 0051c583  ff2485e0d05100       jmp dword ptr [eax*4 + 0x51d0e0]
// 0051c58a  668b8640010000       mov ax, word ptr [esi + 0x140]
// 0051c591  6669c0ff00           imul ax, ax, 0xff
// 0051c596  66898640010000       mov word ptr [esi + 0x140], ax
// 0051c59d  6689863c010000       mov word ptr [esi + 0x13c], ax
// 0051c5a4  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0051c5ab  eb65                 jmp 0x51c612
// 0051c5ad  668b8640010000       mov ax, word ptr [esi + 0x140]
// 0051c5b4  666bc055             imul ax, ax, 0x55
// 0051c5b8  ebdc                 jmp 0x51c596
// 0051c5ba  668b8640010000       mov ax, word ptr [esi + 0x140]
// 0051c5c1  666bc011             imul ax, ax, 0x11
// 0051c5c5  ebcf                 jmp 0x51c596
// 0051c5c7  0fb78640010000       movzx eax, word ptr [esi + 0x140]
// 0051c5ce  6689863c010000       mov word ptr [esi + 0x13c], ax
// 0051c5d5  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0051c5dc  eb34                 jmp 0x51c612
// 0051c5de  83fb03               cmp ebx, 3
// 0051c5e1  753d                 jne 0x51c620
// 0051c5e3  0fb68638010000       movzx eax, byte ptr [esi + 0x138]
// 0051c5ea  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0051c5f0  8d0c40               lea ecx, [eax + eax*2]
// 0051c5f3  8d0411               lea eax, [ecx + edx]
// 0051c5f6  660fb608             movzx cx, byte ptr [eax]
// 0051c5fa  66898e3a010000       mov word ptr [esi + 0x13a], cx
// 0051c601  660fb65001           movzx dx, byte ptr [eax + 1]
// 0051c606  6689963c010000       mov word ptr [esi + 0x13c], dx
// 0051c60d  660fb64002           movzx ax, byte ptr [eax + 2]
// 0051c612  6689863e010000       mov word ptr [esi + 0x13e], ax
// 0051c619  8da42400000000       lea esp, [esp]
// 0051c620  83fb03               cmp ebx, 3
// 0051c623  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0051c629  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 0051c62f  668b8640010000       mov ax, word ptr [esi + 0x140]
// 0051c636  898e42010000         mov dword ptr [esi + 0x142], ecx
// 0051c63c  899646010000         mov dword ptr [esi + 0x146], edx
// 0051c642  55                   push ebp
// 0051c643  6689864a010000       mov word ptr [esi + 0x14a], ax
// 0051c64a  756c                 jne 0x51c6b8
// 0051c64c  0fb7961a010000       movzx edx, word ptr [esi + 0x11a]
// 0051c653  6685d2               test dx, dx
// 0051c656  7460                 je 0x51c6b8
// 0051c658  d98660010000         fld dword ptr [esi + 0x160]
// 0051c65e  d88e5c010000         fmul dword ptr [esi + 0x15c]
// 0051c664  dc2598317900         fsub qword ptr [0x793198]
// 0051c66a  d9e1                 fabs 
// 0051c66c  dc1dd8067a00         fcomp qword ptr [0x7a06d8]
// 0051c672  dfe0                 fnstsw ax
// 0051c674  f6c405               test ah, 5
// 0051c677  7a3f                 jp 0x51c6b8
// 0051c679  33ed                 xor ebp, ebp
// 0051c67b  33c9                 xor ecx, ecx
// 0051c67d  6685d2               test dx, dx
// 0051c680  762d                 jbe 0x51c6af
// 0051c682  0fb7be1a010000       movzx edi, word ptr [esi + 0x11a]
// 0051c689  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0051c68f  90                   nop 
// 0051c690  8a040a               mov al, byte ptr [edx + ecx]
// 0051c693  84c0                 test al, al
// 0051c695  7409                 je 0x51c6a0
// 0051c697  3cff                 cmp al, 0xff
// 0051c699  7405                 je 0x51c6a0
// 0051c69b  bd01000000           mov ebp, 1
// 0051c6a0  83c101               add ecx, 1
// 0051c6a3  3bcf                 cmp ecx, edi
// 0051c6a5  7ce9                 jl 0x51c690
// 0051c6a7  85ed                 test ebp, ebp
// 0051c6a9  750d                 jne 0x51c6b8
// 0051c6ab  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0051c6af  81e7ffdfffff         and edi, 0xffffdfff
// 0051c6b5  897e70               mov dword ptr [esi + 0x70], edi
// 0051c6b8  8b4670               mov eax, dword ptr [esi + 0x70]
// 0051c6bb  a900206000           test eax, 0x602000
// 0051c6c0  0f8418080000         je 0x51cede
// 0051c6c6  56                   push esi
// 0051c6c7  e874f6ffff           call 0x51bd40
// 0051c6cc  83c404               add esp, 4
// 0051c6cf  f6467080             test byte ptr [esi + 0x70], 0x80
// 0051c6d3  0f849a070000         je 0x51ce73
// 0051c6d9  83fb03               cmp ebx, 3
// 0051c6dc  0f8557040000         jne 0x51cb39
// 0051c6e2  0fb7ae18010000       movzx ebp, word ptr [esi + 0x118]
// 0051c6e9  8a8630010000         mov al, byte ptr [esi + 0x130]
// 0051c6ef  3c02                 cmp al, 2
// 0051c6f1  896c2428             mov dword ptr [esp + 0x28], ebp
// 0051c6f5  754f                 jne 0x51c746
// 0051c6f7  0fb78e3a010000       movzx ecx, word ptr [esi + 0x13a]
// 0051c6fe  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 0051c704  0fb61408             movzx edx, byte ptr [eax + ecx]
// 0051c708  0fb7be3c010000       movzx edi, word ptr [esi + 0x13c]
// 0051c70f  88542410             mov byte ptr [esp + 0x10], dl
// 0051c713  0fb61407             movzx edx, byte ptr [edi + eax]
// 0051c717  88542411             mov byte ptr [esp + 0x11], dl
// 0051c71b  0fb7963e010000       movzx edx, word ptr [esi + 0x13e]
// 0051c722  8a0402               mov al, byte ptr [edx + eax]
// 0051c725  88442412             mov byte ptr [esp + 0x12], al
// 0051c729  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0051c72f  0fb61410             movzx edx, byte ptr [eax + edx]
// 0051c733  8a1c08               mov bl, byte ptr [eax + ecx]
// 0051c736  8a0c38               mov cl, byte ptr [eax + edi]
// 0051c739  884c2415             mov byte ptr [esp + 0x15], cl
// 0051c73d  88542416             mov byte ptr [esp + 0x16], dl
// 0051c741  e966020000           jmp 0x51c9ac
// 0051c746  0fb6c0               movzx eax, al
// 0051c749  83e801               sub eax, 1
// 0051c74c  743a                 je 0x51c788
// 0051c74e  83e801               sub eax, 1
// 0051c751  742d                 je 0x51c780
// 0051c753  83e801               sub eax, 1
// 0051c756  7408                 je 0x51c760
// 0051c758  d9e8                 fld1 
// 0051c75a  dd542420             fst qword ptr [esp + 0x20]
// 0051c75e  eb34                 jmp 0x51c794
// 0051c760  d98634010000         fld dword ptr [esi + 0x134]
// 0051c766  d9e8                 fld1 
// 0051c768  d9c0                 fld st(0)
// 0051c76a  d8f2                 fdiv st(2)
// 0051c76c  dd5c2420             fstp qword ptr [esp + 0x20]
// 0051c770  d98660010000         fld dword ptr [esi + 0x160]
// 0051c776  deca                 fmulp st(2)
// 0051c778  d9c0                 fld st(0)
// 0051c77a  def2                 fdivrp st(2)
// 0051c77c  d9c9                 fxch st(1)
// 0051c77e  eb16                 jmp 0x51c796
// 0051c780  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051c786  ebde                 jmp 0x51c766
// 0051c788  d98660010000         fld dword ptr [esi + 0x160]
// 0051c78e  dd5c2420             fstp qword ptr [esp + 0x20]
// 0051c792  d9e8                 fld1 
// 0051c794  d9c0                 fld st(0)
// 0051c796  dd54242c             fst qword ptr [esp + 0x2c]
// 0051c79a  d9c0                 fld st(0)
// 0051c79c  dee2                 fsubrp st(2)
// 0051c79e  d9c9                 fxch st(1)
// 0051c7a0  d9e1                 fabs 
// 0051c7a2  dc1dd8067a00         fcomp qword ptr [0x7a06d8]
// 0051c7a8  dfe0                 fnstsw ax
// 0051c7aa  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c7b0  f6c405               test ah, 5
// 0051c7b3  7a21                 jp 0x51c7d6
// 0051c7b5  8a863a010000         mov al, byte ptr [esi + 0x13a]
// 0051c7bb  ddd9                 fstp st(1)
// 0051c7bd  8a8e3c010000         mov cl, byte ptr [esi + 0x13c]
// 0051c7c3  8a963e010000         mov dl, byte ptr [esi + 0x13e]
// 0051c7c9  88442410             mov byte ptr [esp + 0x10], al
// 0051c7cd  884c2411             mov byte ptr [esp + 0x11], cl
// 0051c7d1  e9ea000000           jmp 0x51c8c0
// 0051c7d6  0fb7863a010000       movzx eax, word ptr [esi + 0x13a]
// 0051c7dd  89442450             mov dword ptr [esp + 0x50], eax
// 0051c7e1  db442450             fild dword ptr [esp + 0x50]
// 0051c7e5  def1                 fdivrp st(1)
// 0051c7e7  d9c9                 fxch st(1)
// 0051c7e9  e8b0491100           call 0x63119e
// 0051c7ee  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c7f4  0fb7963c010000       movzx edx, word ptr [esi + 0x13c]
// 0051c7fb  dcc9                 fmul st(1), st(0)
// 0051c7fd  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c801  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c806  d9c9                 fxch st(1)
// 0051c808  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c80e  0d000c0000           or eax, 0xc00
// 0051c813  89442414             mov dword ptr [esp + 0x14], eax
// 0051c817  d96c2414             fldcw word ptr [esp + 0x14]
// 0051c81b  db5c2414             fistp dword ptr [esp + 0x14]
// 0051c81f  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0051c823  884c2410             mov byte ptr [esp + 0x10], cl
// 0051c827  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c82b  89542450             mov dword ptr [esp + 0x50], edx
// 0051c82f  db442450             fild dword ptr [esp + 0x50]
// 0051c833  def1                 fdivrp st(1)
// 0051c835  dd44242c             fld qword ptr [esp + 0x2c]
// 0051c839  e860491100           call 0x63119e
// 0051c83e  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c844  0fb78e3e010000       movzx ecx, word ptr [esi + 0x13e]
// 0051c84b  dcc9                 fmul st(1), st(0)
// 0051c84d  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c851  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c856  d9c9                 fxch st(1)
// 0051c858  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c85e  0d000c0000           or eax, 0xc00
// 0051c863  89442414             mov dword ptr [esp + 0x14], eax
// 0051c867  d96c2414             fldcw word ptr [esp + 0x14]
// 0051c86b  db5c2414             fistp dword ptr [esp + 0x14]
// 0051c86f  8a442414             mov al, byte ptr [esp + 0x14]
// 0051c873  88442411             mov byte ptr [esp + 0x11], al
// 0051c877  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c87b  894c2450             mov dword ptr [esp + 0x50], ecx
// 0051c87f  db442450             fild dword ptr [esp + 0x50]
// 0051c883  def1                 fdivrp st(1)
// 0051c885  dd44242c             fld qword ptr [esp + 0x2c]
// 0051c889  e810491100           call 0x63119e
// 0051c88e  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c894  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c898  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c89d  dcc9                 fmul st(1), st(0)
// 0051c89f  0d000c0000           or eax, 0xc00
// 0051c8a4  d9c9                 fxch st(1)
// 0051c8a6  89442414             mov dword ptr [esp + 0x14], eax
// 0051c8aa  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c8b0  d96c2414             fldcw word ptr [esp + 0x14]
// 0051c8b4  db5c2414             fistp dword ptr [esp + 0x14]
// 0051c8b8  8a542414             mov dl, byte ptr [esp + 0x14]
// 0051c8bc  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c8c0  0fb7863a010000       movzx eax, word ptr [esi + 0x13a]
// 0051c8c7  89442450             mov dword ptr [esp + 0x50], eax
// 0051c8cb  88542412             mov byte ptr [esp + 0x12], dl
// 0051c8cf  db442450             fild dword ptr [esp + 0x50]
// 0051c8d3  def1                 fdivrp st(1)
// 0051c8d5  dd442420             fld qword ptr [esp + 0x20]
// 0051c8d9  e8c0481100           call 0x63119e
// 0051c8de  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c8e4  0fb78e3c010000       movzx ecx, word ptr [esi + 0x13c]
// 0051c8eb  dcc9                 fmul st(1), st(0)
// 0051c8ed  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c8f1  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c8f6  d9c9                 fxch st(1)
// 0051c8f8  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c8fe  0d000c0000           or eax, 0xc00
// 0051c903  89442414             mov dword ptr [esp + 0x14], eax
// 0051c907  d96c2414             fldcw word ptr [esp + 0x14]
// 0051c90b  db5c2414             fistp dword ptr [esp + 0x14]
// 0051c90f  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 0051c913  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c917  894c2450             mov dword ptr [esp + 0x50], ecx
// 0051c91b  db442450             fild dword ptr [esp + 0x50]
// 0051c91f  def1                 fdivrp st(1)
// 0051c921  dd442420             fld qword ptr [esp + 0x20]
// 0051c925  e874481100           call 0x63119e
// 0051c92a  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051c930  dcc9                 fmul st(1), st(0)
// 0051c932  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c936  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c93b  d9c9                 fxch st(1)
// 0051c93d  0d000c0000           or eax, 0xc00
// 0051c942  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c948  89442414             mov dword ptr [esp + 0x14], eax
// 0051c94c  0fb7863e010000       movzx eax, word ptr [esi + 0x13e]
// 0051c953  d96c2414             fldcw word ptr [esp + 0x14]
// 0051c957  db5c2414             fistp dword ptr [esp + 0x14]
// 0051c95b  8a542414             mov dl, byte ptr [esp + 0x14]
// 0051c95f  88542415             mov byte ptr [esp + 0x15], dl
// 0051c963  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c967  89442450             mov dword ptr [esp + 0x50], eax
// 0051c96b  db442450             fild dword ptr [esp + 0x50]
// 0051c96f  def1                 fdivrp st(1)
// 0051c971  dd442420             fld qword ptr [esp + 0x20]
// 0051c975  e824481100           call 0x63119e
// 0051c97a  dc0da8d37800         fmul qword ptr [0x78d3a8]
// 0051c980  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051c984  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051c989  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c98f  0d000c0000           or eax, 0xc00
// 0051c994  89442420             mov dword ptr [esp + 0x20], eax
// 0051c998  d96c2420             fldcw word ptr [esp + 0x20]
// 0051c99c  db5c2420             fistp dword ptr [esp + 0x20]
// 0051c9a0  8a4c2420             mov cl, byte ptr [esp + 0x20]
// 0051c9a4  884c2416             mov byte ptr [esp + 0x16], cl
// 0051c9a8  d96c2450             fldcw word ptr [esp + 0x50]
// 0051c9ac  33ff                 xor edi, edi
// 0051c9ae  85ed                 test ebp, ebp
// 0051c9b0  0f8e69060000         jle 0x51d01f
// 0051c9b6  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051c9bc  83c002               add eax, 2
// 0051c9bf  90                   nop 
// 0051c9c0  0fb7961a010000       movzx edx, word ptr [esi + 0x11a]
// 0051c9c7  3bfa                 cmp edi, edx
// 0051c9c9  0f8d27010000         jge 0x51caf6
// 0051c9cf  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051c9d5  8a1439               mov dl, byte ptr [ecx + edi]
// 0051c9d8  03cf                 add ecx, edi
// 0051c9da  80faff               cmp dl, 0xff
// 0051c9dd  0f8413010000         je 0x51caf6
// 0051c9e3  84d2                 test dl, dl
// 0051c9e5  7514                 jne 0x51c9fb
// 0051c9e7  668b542410           mov dx, word ptr [esp + 0x10]
// 0051c9ec  8a4c2412             mov cl, byte ptr [esp + 0x12]
// 0051c9f0  668950fe             mov word ptr [eax - 2], dx
// 0051c9f4  8808                 mov byte ptr [eax], cl
// 0051c9f6  e92b010000           jmp 0x51cb26
// 0051c9fb  660fb609             movzx cx, byte ptr [ecx]
// 0051c9ff  8bae6c010000         mov ebp, dword ptr [esi + 0x16c]
// 0051ca05  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0051ca09  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0051ca0d  660fafd1             imul dx, cx
// 0051ca11  bdff000000           mov ebp, 0xff
// 0051ca16  2be9                 sub ebp, ecx
// 0051ca18  660fb6cb             movzx cx, bl
// 0051ca1c  660fafe9             imul bp, cx
// 0051ca20  6603d5               add dx, bp
// 0051ca23  6681c28000           add dx, 0x80
// 0051ca28  0fb7ca               movzx ecx, dx
// 0051ca2b  0fb7c9               movzx ecx, cx
// 0051ca2e  8bd1                 mov edx, ecx
// 0051ca30  c1ea08               shr edx, 8
// 0051ca33  03d1                 add edx, ecx
// 0051ca35  c1fa08               sar edx, 8
// 0051ca38  0fb6ca               movzx ecx, dl
// 0051ca3b  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0051ca41  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0051ca45  8848fe               mov byte ptr [eax - 2], cl
// 0051ca48  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0051ca4e  660fb60c3a           movzx cx, byte ptr [edx + edi]
// 0051ca53  0fb650ff             movzx edx, byte ptr [eax - 1]
// 0051ca57  8bae6c010000         mov ebp, dword ptr [esi + 0x16c]
// 0051ca5d  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0051ca61  660fafd1             imul dx, cx
// 0051ca65  bdff000000           mov ebp, 0xff
// 0051ca6a  2be9                 sub ebp, ecx
// 0051ca6c  0fb64c2415           movzx ecx, byte ptr [esp + 0x15]
// 0051ca71  660fafe9             imul bp, cx
// 0051ca75  6603d5               add dx, bp
// 0051ca78  6681c28000           add dx, 0x80
// 0051ca7d  0fb7ca               movzx ecx, dx
// 0051ca80  0fb7c9               movzx ecx, cx
// 0051ca83  8bd1                 mov edx, ecx
// 0051ca85  c1ea08               shr edx, 8
// 0051ca88  03d1                 add edx, ecx
// 0051ca8a  c1fa08               sar edx, 8
// 0051ca8d  0fb6ca               movzx ecx, dl
// 0051ca90  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0051ca96  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0051ca9a  8848ff               mov byte ptr [eax - 1], cl
// 0051ca9d  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0051caa3  660fb60c3a           movzx cx, byte ptr [edx + edi]
// 0051caa8  0fb610               movzx edx, byte ptr [eax]
// 0051caab  8bae6c010000         mov ebp, dword ptr [esi + 0x16c]
// 0051cab1  0fb6142a             movzx edx, byte ptr [edx + ebp]
// 0051cab5  660fafd1             imul dx, cx
// 0051cab9  bdff000000           mov ebp, 0xff
// 0051cabe  2be9                 sub ebp, ecx
// 0051cac0  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 0051cac5  660fafe9             imul bp, cx
// 0051cac9  6603d5               add dx, bp
// 0051cacc  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0051cad0  6681c28000           add dx, 0x80
// 0051cad5  0fb7ca               movzx ecx, dx
// 0051cad8  0fb7c9               movzx ecx, cx
// 0051cadb  8bd1                 mov edx, ecx
// 0051cadd  c1ea08               shr edx, 8
// 0051cae0  03d1                 add edx, ecx
// 0051cae2  c1fa08               sar edx, 8
// 0051cae5  0fb6ca               movzx ecx, dl
// 0051cae8  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0051caee  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0051caf2  8808                 mov byte ptr [eax], cl
// 0051caf4  eb30                 jmp 0x51cb26
// 0051caf6  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 0051cafc  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0051cb00  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0051cb04  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0051cb08  8850fe               mov byte ptr [eax - 2], dl
// 0051cb0b  8b9664010000         mov edx, dword ptr [esi + 0x164]
// 0051cb11  8a0c11               mov cl, byte ptr [ecx + edx]
// 0051cb14  0fb610               movzx edx, byte ptr [eax]
// 0051cb17  8848ff               mov byte ptr [eax - 1], cl
// 0051cb1a  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 0051cb20  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0051cb24  8810                 mov byte ptr [eax], dl
// 0051cb26  83c701               add edi, 1
// 0051cb29  83c003               add eax, 3
// 0051cb2c  3bfd                 cmp edi, ebp
// 0051cb2e  0f8c8cfeffff         jl 0x51c9c0
// 0051cb34  e9e6040000           jmp 0x51d01f
// 0051cb39  8a8e27010000         mov cl, byte ptr [esi + 0x127]
// 0051cb3f  b801000000           mov eax, 1
// 0051cb44  d3e0                 shl eax, cl
// 0051cb46  83e801               sub eax, 1
// 0051cb49  85c0                 test eax, eax
// 0051cb4b  89442450             mov dword ptr [esp + 0x50], eax
// 0051cb4f  db442450             fild dword ptr [esp + 0x50]
// 0051cb53  7d06                 jge 0x51cb5b
// 0051cb55  dc0530b17800         fadd qword ptr [0x78b130]
// 0051cb5b  0fb68630010000       movzx eax, byte ptr [esi + 0x130]
// 0051cb62  dd542420             fst qword ptr [esp + 0x20]
// 0051cb66  83e801               sub eax, 1
// 0051cb69  d9e8                 fld1 
// 0051cb6b  d9c0                 fld st(0)
// 0051cb6d  dd54242c             fst qword ptr [esp + 0x2c]
// 0051cb71  d9c9                 fxch st(1)
// 0051cb73  dd542414             fst qword ptr [esp + 0x14]
// 0051cb77  7436                 je 0x51cbaf
// 0051cb79  83e801               sub eax, 1
// 0051cb7c  740f                 je 0x51cb8d
// 0051cb7e  83e801               sub eax, 1
// 0051cb81  7540                 jne 0x51cbc3
// 0051cb83  ddd9                 fstp st(1)
// 0051cb85  d98634010000         fld dword ptr [esi + 0x134]
// 0051cb8b  eb08                 jmp 0x51cb95
// 0051cb8d  ddd9                 fstp st(1)
// 0051cb8f  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051cb95  d9c1                 fld st(1)
// 0051cb97  d8f1                 fdiv st(1)
// 0051cb99  dd54242c             fst qword ptr [esp + 0x2c]
// 0051cb9d  d98660010000         fld dword ptr [esi + 0x160]
// 0051cba3  deca                 fmulp st(2)
// 0051cba5  d9ca                 fxch st(2)
// 0051cba7  def1                 fdivrp st(1)
// 0051cba9  dd5c2414             fstp qword ptr [esp + 0x14]
// 0051cbad  eb16                 jmp 0x51cbc5
// 0051cbaf  ddd9                 fstp st(1)
// 0051cbb1  d98660010000         fld dword ptr [esi + 0x160]
// 0051cbb7  dd54242c             fst qword ptr [esp + 0x2c]
// 0051cbbb  d9c9                 fxch st(1)
// 0051cbbd  dd5c2414             fstp qword ptr [esp + 0x14]
// 0051cbc1  eb02                 jmp 0x51cbc5
// 0051cbc3  ddd8                 fstp st(0)
// 0051cbc5  0fb78e40010000       movzx ecx, word ptr [esi + 0x140]
// 0051cbcc  894c2450             mov dword ptr [esp + 0x50], ecx
// 0051cbd0  db442450             fild dword ptr [esp + 0x50]
// 0051cbd4  def2                 fdivrp st(2)
// 0051cbd6  d9c9                 fxch st(1)
// 0051cbd8  dd542434             fst qword ptr [esp + 0x34]
// 0051cbdc  d9c9                 fxch st(1)
// 0051cbde  e8bb451100           call 0x63119e
// 0051cbe3  dc4c2420             fmul qword ptr [esp + 0x20]
// 0051cbe7  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051cbeb  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cbf0  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cbf6  0d000c0000           or eax, 0xc00
// 0051cbfb  89442428             mov dword ptr [esp + 0x28], eax
// 0051cbff  d96c2428             fldcw word ptr [esp + 0x28]
// 0051cc03  db5c2428             fistp dword ptr [esp + 0x28]
// 0051cc07  668b542428           mov dx, word ptr [esp + 0x28]
// 0051cc0c  6689964a010000       mov word ptr [esi + 0x14a], dx
// 0051cc13  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cc17  dd442434             fld qword ptr [esp + 0x34]
// 0051cc1b  dd442414             fld qword ptr [esp + 0x14]
// 0051cc1f  e87a451100           call 0x63119e
// 0051cc24  dd442420             fld qword ptr [esp + 0x20]
// 0051cc28  0fb7be3c010000       movzx edi, word ptr [esi + 0x13c]
// 0051cc2f  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051cc33  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cc38  dcc9                 fmul st(1), st(0)
// 0051cc3a  d9c9                 fxch st(1)
// 0051cc3c  0fb78e3a010000       movzx ecx, word ptr [esi + 0x13a]
// 0051cc43  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cc49  0d000c0000           or eax, 0xc00
// 0051cc4e  663bcf               cmp cx, di
// 0051cc51  89442428             mov dword ptr [esp + 0x28], eax
// 0051cc55  d96c2428             fldcw word ptr [esp + 0x28]
// 0051cc59  db5c2428             fistp dword ptr [esp + 0x28]
// 0051cc5d  668b442428           mov ax, word ptr [esp + 0x28]
// 0051cc62  66898640010000       mov word ptr [esi + 0x140], ax
// 0051cc69  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cc6d  7546                 jne 0x51ccb5
// 0051cc6f  663b8e3e010000       cmp cx, word ptr [esi + 0x13e]
// 0051cc76  753d                 jne 0x51ccb5
// 0051cc78  663bc8               cmp cx, ax
// 0051cc7b  7538                 jne 0x51ccb5
// 0051cc7d  0fb78e4a010000       movzx ecx, word ptr [esi + 0x14a]
// 0051cc84  ddd8                 fstp st(0)
// 0051cc86  66898e48010000       mov word ptr [esi + 0x148], cx
// 0051cc8d  66898e46010000       mov word ptr [esi + 0x146], cx
// 0051cc94  66898e44010000       mov word ptr [esi + 0x144], cx
// 0051cc9b  6689863e010000       mov word ptr [esi + 0x13e], ax
// 0051cca2  6689863c010000       mov word ptr [esi + 0x13c], ax
// 0051cca9  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0051ccb0  e96a030000           jmp 0x51d01f
// 0051ccb5  0fb7c1               movzx eax, cx
// 0051ccb8  89442450             mov dword ptr [esp + 0x50], eax
// 0051ccbc  db442450             fild dword ptr [esp + 0x50]
// 0051ccc0  def1                 fdivrp st(1)
// 0051ccc2  dd542434             fst qword ptr [esp + 0x34]
// 0051ccc6  dd44242c             fld qword ptr [esp + 0x2c]
// 0051ccca  e8cf441100           call 0x63119e
// 0051cccf  dd442420             fld qword ptr [esp + 0x20]
// 0051ccd3  dcc9                 fmul st(1), st(0)
// 0051ccd5  0fb7d7               movzx edx, di
// 0051ccd8  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051ccdc  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cce1  d9c9                 fxch st(1)
// 0051cce3  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cce9  0d000c0000           or eax, 0xc00
// 0051ccee  89442428             mov dword ptr [esp + 0x28], eax
// 0051ccf2  d96c2428             fldcw word ptr [esp + 0x28]
// 0051ccf6  db5c2428             fistp dword ptr [esp + 0x28]
// 0051ccfa  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 0051ccff  66898e44010000       mov word ptr [esi + 0x144], cx
// 0051cd06  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cd0a  89542450             mov dword ptr [esp + 0x50], edx
// 0051cd0e  db442450             fild dword ptr [esp + 0x50]
// 0051cd12  def1                 fdivrp st(1)
// 0051cd14  dd54243c             fst qword ptr [esp + 0x3c]
// 0051cd18  dd44242c             fld qword ptr [esp + 0x2c]
// 0051cd1c  e87d441100           call 0x63119e
// 0051cd21  dd442420             fld qword ptr [esp + 0x20]
// 0051cd25  0fb78e3e010000       movzx ecx, word ptr [esi + 0x13e]
// 0051cd2c  dcc9                 fmul st(1), st(0)
// 0051cd2e  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051cd32  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cd37  d9c9                 fxch st(1)
// 0051cd39  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cd3f  0d000c0000           or eax, 0xc00
// 0051cd44  89442428             mov dword ptr [esp + 0x28], eax
// 0051cd48  d96c2428             fldcw word ptr [esp + 0x28]
// 0051cd4c  db5c2428             fistp dword ptr [esp + 0x28]
// 0051cd50  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0051cd55  66898646010000       mov word ptr [esi + 0x146], ax
// 0051cd5c  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cd60  894c2450             mov dword ptr [esp + 0x50], ecx
// 0051cd64  db442450             fild dword ptr [esp + 0x50]
// 0051cd68  def1                 fdivrp st(1)
// 0051cd6a  dd542444             fst qword ptr [esp + 0x44]
// 0051cd6e  dd44242c             fld qword ptr [esp + 0x2c]
// 0051cd72  e827441100           call 0x63119e
// 0051cd77  dc4c2420             fmul qword ptr [esp + 0x20]
// 0051cd7b  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051cd7f  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cd84  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cd8a  0d000c0000           or eax, 0xc00
// 0051cd8f  89442428             mov dword ptr [esp + 0x28], eax
// 0051cd93  d96c2428             fldcw word ptr [esp + 0x28]
// 0051cd97  db5c2428             fistp dword ptr [esp + 0x28]
// 0051cd9b  0fb7542428           movzx edx, word ptr [esp + 0x28]
// 0051cda0  66899648010000       mov word ptr [esi + 0x148], dx
// 0051cda7  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cdab  dd442434             fld qword ptr [esp + 0x34]
// 0051cdaf  dd442414             fld qword ptr [esp + 0x14]
// 0051cdb3  e8e6431100           call 0x63119e
// 0051cdb8  dc4c2420             fmul qword ptr [esp + 0x20]
// 0051cdbc  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051cdc0  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051cdc5  dc05485b7900         fadd qword ptr [0x795b48]
// 0051cdcb  0d000c0000           or eax, 0xc00
// 0051cdd0  89442428             mov dword ptr [esp + 0x28], eax
// 0051cdd4  d96c2428             fldcw word ptr [esp + 0x28]
// 0051cdd8  db5c2428             fistp dword ptr [esp + 0x28]
// 0051cddc  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0051cde1  6689863a010000       mov word ptr [esi + 0x13a], ax
// 0051cde8  d96c2450             fldcw word ptr [esp + 0x50]
// 0051cdec  dd44243c             fld qword ptr [esp + 0x3c]
// 0051cdf0  dd442414             fld qword ptr [esp + 0x14]
// 0051cdf4  e8a5431100           call 0x63119e
// 0051cdf9  dc4c2420             fmul qword ptr [esp + 0x20]
// 0051cdfd  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051ce01  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051ce06  dc05485b7900         fadd qword ptr [0x795b48]
// 0051ce0c  0d000c0000           or eax, 0xc00
// 0051ce11  89442428             mov dword ptr [esp + 0x28], eax
// 0051ce15  d96c2428             fldcw word ptr [esp + 0x28]
// 0051ce19  db5c2428             fistp dword ptr [esp + 0x28]
// 0051ce1d  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 0051ce22  66898e3c010000       mov word ptr [esi + 0x13c], cx
// 0051ce29  d96c2450             fldcw word ptr [esp + 0x50]
// 0051ce2d  dd442444             fld qword ptr [esp + 0x44]
// 0051ce31  dd442414             fld qword ptr [esp + 0x14]
// 0051ce35  e864431100           call 0x63119e
// 0051ce3a  dc4c2420             fmul qword ptr [esp + 0x20]
// 0051ce3e  d97c2450             fnstcw word ptr [esp + 0x50]
// 0051ce42  0fb7442450           movzx eax, word ptr [esp + 0x50]
// 0051ce47  dc05485b7900         fadd qword ptr [0x795b48]
// 0051ce4d  0d000c0000           or eax, 0xc00
// 0051ce52  89442428             mov dword ptr [esp + 0x28], eax
// 0051ce56  d96c2428             fldcw word ptr [esp + 0x28]
// 0051ce5a  db5c2428             fistp dword ptr [esp + 0x28]
// 0051ce5e  0fb7542428           movzx edx, word ptr [esp + 0x28]
// 0051ce63  6689963e010000       mov word ptr [esi + 0x13e], dx
// 0051ce6a  d96c2450             fldcw word ptr [esp + 0x50]
// 0051ce6e  e9ac010000           jmp 0x51d01f
// 0051ce73  83fb03               cmp ebx, 3
// 0051ce76  0f85a3010000         jne 0x51d01f
// 0051ce7c  0fb78e18010000       movzx ecx, word ptr [esi + 0x118]
// 0051ce83  85c9                 test ecx, ecx
// 0051ce85  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051ce8b  0f8e8e010000         jle 0x51d01f
// 0051ce91  83c002               add eax, 2
// 0051ce94  eb0a                 jmp 0x51cea0
// 0051ce96  8da42400000000       lea esp, [esp]
// 0051ce9d  8d4900               lea ecx, [ecx]
// 0051cea0  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0051cea4  8bbe64010000         mov edi, dword ptr [esi + 0x164]
// 0051ceaa  0fb6143a             movzx edx, byte ptr [edx + edi]
// 0051ceae  8850fe               mov byte ptr [eax - 2], dl
// 0051ceb1  0fb650ff             movzx edx, byte ptr [eax - 1]
// 0051ceb5  8bbe64010000         mov edi, dword ptr [esi + 0x164]
// 0051cebb  0fb6143a             movzx edx, byte ptr [edx + edi]
// 0051cebf  8850ff               mov byte ptr [eax - 1], dl
// 0051cec2  0fb610               movzx edx, byte ptr [eax]
// 0051cec5  8bbe64010000         mov edi, dword ptr [esi + 0x164]
// 0051cecb  0fb6143a             movzx edx, byte ptr [edx + edi]
// 0051cecf  8810                 mov byte ptr [eax], dl
// 0051ced1  83c003               add eax, 3
// 0051ced4  83e901               sub ecx, 1
// 0051ced7  75c7                 jne 0x51cea0
// 0051ced9  e941010000           jmp 0x51d01f
// 0051cede  84c0                 test al, al
// 0051cee0  0f8939010000         jns 0x51d01f
// 0051cee6  837c241c03           cmp dword ptr [esp + 0x1c], 3
// 0051ceeb  0f852e010000         jne 0x51d01f
// 0051cef1  0fb7ae1a010000       movzx ebp, word ptr [esi + 0x11a]
// 0051cef8  0fb6963c010000       movzx edx, byte ptr [esi + 0x13c]
// 0051ceff  8a8e3a010000         mov cl, byte ptr [esi + 0x13a]
// 0051cf05  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051cf0b  33ff                 xor edi, edi
// 0051cf0d  85ed                 test ebp, ebp
// 0051cf0f  88542451             mov byte ptr [esp + 0x51], dl
// 0051cf13  8a963e010000         mov dl, byte ptr [esi + 0x13e]
// 0051cf19  896c2428             mov dword ptr [esp + 0x28], ebp
// 0051cf1d  884c2450             mov byte ptr [esp + 0x50], cl
// 0051cf21  0f8ef8000000         jle 0x51d01f
// 0051cf27  83c002               add eax, 2
// 0051cf2a  8d9b00000000         lea ebx, [ebx]
// 0051cf30  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051cf36  8a1c39               mov bl, byte ptr [ecx + edi]
// 0051cf39  03cf                 add ecx, edi
// 0051cf3b  84db                 test bl, bl
// 0051cf3d  7510                 jne 0x51cf4f
// 0051cf3f  668b4c2450           mov cx, word ptr [esp + 0x50]
// 0051cf44  668948fe             mov word ptr [eax - 2], cx
// 0051cf48  8810                 mov byte ptr [eax], dl
// 0051cf4a  e9c2000000           jmp 0x51d011
// 0051cf4f  80fbff               cmp bl, 0xff
// 0051cf52  0f84b9000000         je 0x51d011
// 0051cf58  660fb609             movzx cx, byte ptr [ecx]
// 0051cf5c  660fb66c2450         movzx bp, byte ptr [esp + 0x50]
// 0051cf62  bbff000000           mov ebx, 0xff
// 0051cf67  2bd9                 sub ebx, ecx
// 0051cf69  660fafdd             imul bx, bp
// 0051cf6d  660fb668fe           movzx bp, byte ptr [eax - 2]
// 0051cf72  660fafe9             imul bp, cx
// 0051cf76  6603dd               add bx, bp
// 0051cf79  6681c38000           add bx, 0x80
// 0051cf7e  0fb7cb               movzx ecx, bx
// 0051cf81  660fb66c2451         movzx bp, byte ptr [esp + 0x51]
// 0051cf87  0fb7c9               movzx ecx, cx
// 0051cf8a  8bd9                 mov ebx, ecx
// 0051cf8c  c1eb08               shr ebx, 8
// 0051cf8f  03d9                 add ebx, ecx
// 0051cf91  c1fb08               sar ebx, 8
// 0051cf94  8858fe               mov byte ptr [eax - 2], bl
// 0051cf97  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051cf9d  660fb60c39           movzx cx, byte ptr [ecx + edi]
// 0051cfa2  bbff000000           mov ebx, 0xff
// 0051cfa7  2bd9                 sub ebx, ecx
// 0051cfa9  660fafdd             imul bx, bp
// 0051cfad  660fb668ff           movzx bp, byte ptr [eax - 1]
// 0051cfb2  660fafe9             imul bp, cx
// 0051cfb6  6603dd               add bx, bp
// 0051cfb9  6681c38000           add bx, 0x80
// 0051cfbe  0fb7cb               movzx ecx, bx
// 0051cfc1  0fb7c9               movzx ecx, cx
// 0051cfc4  8bd9                 mov ebx, ecx
// 0051cfc6  c1eb08               shr ebx, 8
// 0051cfc9  03d9                 add ebx, ecx
// 0051cfcb  c1fb08               sar ebx, 8
// 0051cfce  8858ff               mov byte ptr [eax - 1], bl
// 0051cfd1  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051cfd7  660fb60c39           movzx cx, byte ptr [ecx + edi]
// 0051cfdc  660fb6ea             movzx bp, dl
// 0051cfe0  bbff000000           mov ebx, 0xff
// 0051cfe5  2bd9                 sub ebx, ecx
// 0051cfe7  660fafdd             imul bx, bp
// 0051cfeb  660fb628             movzx bp, byte ptr [eax]
// 0051cfef  660fafe9             imul bp, cx
// 0051cff3  6603dd               add bx, bp
// 0051cff6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0051cffa  6681c38000           add bx, 0x80
// 0051cfff  0fb7cb               movzx ecx, bx
// 0051d002  0fb7c9               movzx ecx, cx
// 0051d005  8bd9                 mov ebx, ecx
// 0051d007  c1eb08               shr ebx, 8
// 0051d00a  03d9                 add ebx, ecx
// 0051d00c  c1fb08               sar ebx, 8
// 0051d00f  8818                 mov byte ptr [eax], bl
// 0051d011  83c701               add edi, 1
// 0051d014  83c003               add eax, 3
// 0051d017  3bfd                 cmp edi, ebp
// 0051d019  0f8c11ffffff         jl 0x51cf30
// 0051d01f  f6467008             test byte ptr [esi + 0x70], 8
// 0051d023  5d                   pop ebp
// 0051d024  0f84ae000000         je 0x51d0d8
// 0051d02a  837c241803           cmp dword ptr [esp + 0x18], 3
// 0051d02f  0f85a3000000         jne 0x51d0d8
// 0051d035  0fb6867c010000       movzx eax, byte ptr [esi + 0x17c]
// 0051d03c  0fb68e7d010000       movzx ecx, byte ptr [esi + 0x17d]
// 0051d043  0fb6be7e010000       movzx edi, byte ptr [esi + 0x17e]
// 0051d04a  0fb79618010000       movzx edx, word ptr [esi + 0x118]
// 0051d051  bb08000000           mov ebx, 8
// 0051d056  2bd8                 sub ebx, eax
// 0051d058  b808000000           mov eax, 8
// 0051d05d  2bc1                 sub eax, ecx
// 0051d05f  b908000000           mov ecx, 8
// 0051d064  2bcf                 sub ecx, edi
// 0051d066  33ff                 xor edi, edi
// 0051d068  3bdf                 cmp ebx, edi
// 0051d06a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0051d06e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0051d072  7c05                 jl 0x51d079
// 0051d074  83fb08               cmp ebx, 8
// 0051d077  7e02                 jle 0x51d07b
// 0051d079  33db                 xor ebx, ebx
// 0051d07b  3bc7                 cmp eax, edi
// 0051d07d  7c05                 jl 0x51d084
// 0051d07f  83f808               cmp eax, 8
// 0051d082  7e04                 jle 0x51d088
// 0051d084  897c244c             mov dword ptr [esp + 0x4c], edi
// 0051d088  3bcf                 cmp ecx, edi
// 0051d08a  7c05                 jl 0x51d091
// 0051d08c  83f908               cmp ecx, 8
// 0051d08f  7e04                 jle 0x51d095
// 0051d091  897c2418             mov dword ptr [esp + 0x18], edi
// 0051d095  663bd7               cmp dx, di
// 0051d098  763e                 jbe 0x51d0d8
// 0051d09a  33c0                 xor eax, eax
// 0051d09c  0fb7fa               movzx edi, dx
// 0051d09f  90                   nop 
// 0051d0a0  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0051d0a6  03d0                 add edx, eax
// 0051d0a8  8acb                 mov cl, bl
// 0051d0aa  d22a                 shr byte ptr [edx], cl
// 0051d0ac  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0051d0b2  8d540101             lea edx, [ecx + eax + 1]
// 0051d0b6  0fb64c244c           movzx ecx, byte ptr [esp + 0x4c]
// 0051d0bb  d22a                 shr byte ptr [edx], cl
// 0051d0bd  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 0051d0c3  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0051d0c8  d26c0202             shr byte ptr [edx + eax + 2], cl
// 0051d0cc  8d540202             lea edx, [edx + eax + 2]
// 0051d0d0  83c003               add eax, 3
// 0051d0d3  83ef01               sub edi, 1
// 0051d0d6  75c8                 jne 0x51d0a0
// 0051d0d8  5f                   pop edi
// 0051d0d9  5e                   pop esi
// 0051d0da  5b                   pop ebx
// 0051d0db  83c43c               add esp, 0x3c
// 0051d0de  c3                   ret 
// 0051d0df  90                   nop 
// 0051d0e0  8ac5                 mov al, ch
// 0051d0e2  51                   push ecx
// 0051d0e3  00adc55100ba         add byte ptr [ebp - 0x45ffae3b], ch
// 0051d0e9  c55100               lds edx, ptr [ecx]
// 0051d0ec  c7c5510020c6         mov ebp, 0xc6200051
// 0051d0f2  51                   push ecx
// 0051d0f3  0000                 add byte ptr [eax], al
// 0051d0f5  010402               add dword ptr [edx + eax], eax
// 0051d0f8  0404                 add al, 4
// 0051d0fa  0403                 add al, 3
// 0051d0fc  0404                 add al, 4
// 0051d0fe  0404                 add al, 4
// 0051d100  0404                 add al, 4
// 0051d102  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_init_read_transformations)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
